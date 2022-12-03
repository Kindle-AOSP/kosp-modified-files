#ifndef GRALLOC_EPDC_H_
#define GRALLOC_EPDC_H_

#define KINDLE_WAVEFORM_MODE_INIT 0x00000000
#define KINDLE_WAVEFORM_MODE_DU 0x00000001
#define KINDLE_WAVEFORM_MODE_GC16 0x00000002
#define KINDLE_WAVEFORM_MODE_GC4 0x00000003
#define KINDLE_WAVEFORM_MODE_A2 0x00000004
#define KINDLE_WAVEFORM_MODE_AUTO 0x00000005
#define KINDLE_WAVEFORM_MODE_REAGL     0x8     /* Ghost compensation waveform */
#define KINDLE_WAVEFORM_MODE_REAGLD    0x9   /* Ghost compensation waveform with dithering */
#define KINDLE_WAVEFORM_MODE_MASK 0x0000000F

#define KINDLE_AUTO_MODE_REGIONAL 0x00000000
#define KINDLE_AUTO_MODE_AUTOMATIC 0x00000010
#define KINDLE_AUTO_MODE_MASK 0x00000010

#define KINDLE_UPDATE_MODE_PARTIAL 0x00000000
#define KINDLE_UPDATE_MODE_FULL 0x00000020
#define KINDLE_UPDATE_MODE_MASK 0x00000020

#define KINDLE_WAIT_MODE_NOWAIT 0x00000000
#define KINDLE_WAIT_MODE_WAIT 0x00000040
#define KINDLE_WAIT_MODE_MASK 0x00000040

#define KINDLE_COMBINE_MODE_NOCOMBINE 0x00000000
#define KINDLE_COMBINE_MODE_COMBINE 0x00000080
#define KINDLE_COMBINE_MODE_MASK 0x00000080

#define KINDLE_DITHER_MODE_NODITHER 0x00000000
#define KINDLE_DITHER_MODE_DITHER 0x00000100
#define KINDLE_DITHER_MODE_MASK 0x00000100

#define KINDLE_INVERT_MODE_NOINVERT 0x00000000
#define KINDLE_INVERT_MODE_INVERT 0x00000200
#define KINDLE_INVERT_MODE_MASK 0x00000200

#define KINDLE_CONVERT_MODE_NOCONVERT 0x00000000
#define KINDLE_CONVERT_MODE_CONVERT 0x00000400
#define KINDLE_CONVERT_MODE_MASK 0x00000400

#define KINDLE_DEFAULT_MODE 0x00000101
#define KINDLE_GC_MASK 0x02000000
#define KINDLE_AUTO_MASK 0x01000000
#define KINDLE_GC_MODE KINDLE_WAVEFORM_MODE_GC16 | KINDLE_UPDATE_MODE_FULL | KINDLE_WAIT_MODE_NOWAIT
#define KINDLE_GU_MODE KINDLE_WAVEFORM_MODE_GC16 | KINDLE_UPDATE_MODE_PARTIAL | KINDLE_WAIT_MODE_NOWAIT

#define MAX_RECT_NUM 20

#endif