# SwitchStream Protocol v0

PAIR:
PHONE -> TCP 9000: PAIR <6-digit-code>
SWITCH -> TCP 9000: OK

VIDEO:
UDP 9001
Header:
magic(2) | frame_id(4) | packet_id(2) | packet_count(2) | payload

AUDIO:
UDP 9002
Header:
magic(2) | timestamp(8) | payload

CONTROL:
TCP 9000
BUTTON <mask>
STICK <lx> <ly> <rx> <ry>
