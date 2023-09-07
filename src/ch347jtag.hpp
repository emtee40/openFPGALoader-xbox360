// SPDX-License-Identifier: Apache-2.0
/*
 * Copyright (C) 2023 Alexey Starikovskiy <aystarik@gmail.com>
 */
#pragma once

#include <libusb.h>

#include "jtagInterface.hpp"

class CH347Jtag : public JtagInterface {
 public:
	CH347Jtag(uint32_t clkHZ, int8_t verbose);
	virtual ~CH347Jtag();

	int setClkFreq(uint32_t clkHZ) override { return _setClkFreq(clkHZ); };
	int _setClkFreq(uint32_t clkHZ);
	/* TMS */
	int writeTMS(const uint8_t *tms, uint32_t len, bool flush_buffer) override;
	/* TDI */
	int writeTDI(const uint8_t *tx, uint8_t *rx, uint32_t len, bool end) override;
	/* clk */
	int toggleClk(uint8_t tms, uint8_t tdo, uint32_t clk_len) override;

	int get_buffer_size() override {return get_obuf_length();}

	bool isFull() override {return get_obuf_length() == 0;}

	int flush() override {return usb_xfer(0, 0, 0, false);}

 private:
	bool _verbose;
	int setClk(const uint8_t &factor);

	libusb_device_handle *dev_handle;
	libusb_context *usb_ctx;
	struct libusb_transfer *wtrans, *rtrans;
	uint8_t ibuf[512];
	uint8_t _obuf[512];
	uint8_t *obuf;
	int get_obuf_length() const {return 512 - (obuf - _obuf);}
	int usb_xfer(unsigned wlen, unsigned rlen, unsigned *actual, bool defer);
};
