/*
 * "$Id: gconfig.h,v 1.4 1999/05/15 04:00:19 mike Exp $"
 *
 *   GNU GhostScript configuration file for the Common UNIX Printing
 *   System (CUPS).
 *
 *   This file is normally generated by a lot of echogs and genconf
 *   commands...
 *
 *   Copyright 1997-1999 by Easy Software Products.
 *
 *   These coded instructions, statements, and computer programs are the
 *   property of Easy Software Products and are protected by Federal
 *   copyright law.  Distribution and use rights are outlined in the file
 *   "LICENSE.txt" which should have been included with this file.  If this
 *   file is missing or damaged please contact Easy Software Products
 *   at:
 *
 *       Attn: CUPS Licensing Information
 *       Easy Software Products
 *       44141 Airport View Drive, Suite 204
 *       Hollywood, Maryland 20636-3111 USA
 *
 *       Voice: (301) 373-9603
 *       EMail: cups-info@cups.org
 *         WWW: http://www.cups.org
 */

#include <config.h>

#ifdef device_
device_(gs_cups_device)
device_(gs_nullpage_device)
#endif
#ifdef oper_
oper_(zfzlib_op_defs)
oper_(zcie_l2_op_defs)
oper_(zcrd_l2_op_defs)
oper_(zfont0_op_defs)
oper_(zchar2_op_defs)
#  ifdef HAVE_LIBJPEG
oper_(zfdcte_op_defs)
oper_(zfdctd_op_defs)
#  endif /* HAVE_LIBJPEG */
oper_(zdevice2_l2_op_defs)
oper_(ziodev2_l2_op_defs)
oper_(zmedia2_l2_op_defs)
#endif
#ifdef io_device_
io_device_(gs_iodev_null)
io_device_(gs_iodev_ram)
io_device_(gs_iodev_calendar)
#endif
#ifdef psfile_
psfile_("gs_setpd.ps")
#endif
#ifdef oper_
oper_(zbseq_l2_op_defs)
#endif
#ifdef psfile_
psfile_("gs_btokn.ps")
#endif
#ifdef init_
init_(gs_gscolor1_init)
#endif
#ifdef oper_
oper_(zcolor1_op_defs)
oper_(zht1_op_defs)
oper_(zupath_l2_op_defs)
oper_(zvmem2_op_defs)
oper_(ireclaim_l2_op_defs)
oper_(zchar2_l2_op_defs)
oper_(zdps1_l2_op_defs)
#endif
#ifdef psfile_
psfile_("gs_dps1.ps")
#endif
#ifdef oper_
oper_(zfdecode_op_defs)
oper_(zfilter2_op_defs)
oper_(zarith_op_defs)
oper_(zarray_op_defs)
oper_(zcontrol_op_defs)
oper_(zdict_op_defs)
oper_(zfile_op_defs)
oper_(zfileio_op_defs)
oper_(zfilter_op_defs)
oper_(zfproc_op_defs)
oper_(zgeneric_op_defs)
oper_(ziodev_op_defs)
oper_(zmath_op_defs)
oper_(zmisc_op_defs)
oper_(zpacked_op_defs)
oper_(zrelbit_op_defs)
oper_(zstack_op_defs)
oper_(zstring_op_defs)
oper_(zsysvm_op_defs)
oper_(ztoken_op_defs)
oper_(ztype_op_defs)
oper_(zusparam_op_defs)
oper_(zvmem_op_defs)
oper_(zchar_op_defs)
oper_(zcolor_op_defs)
oper_(zdevice_op_defs)
oper_(zfont_op_defs)
oper_(zfont2_op_defs)
oper_(zgstate_op_defs)
oper_(zht_op_defs)
oper_(zmatrix_op_defs)
oper_(zpaint_op_defs)
oper_(zpath_op_defs)
#endif
#ifdef io_device_
io_device_(gs_iodev_stdin)
io_device_(gs_iodev_stdout)
io_device_(gs_iodev_stderr)
io_device_(gs_iodev_lineedit)
io_device_(gs_iodev_statementedit)
#endif
#ifdef oper_
oper_(zfbcp_op_defs)
oper_(zhsb_op_defs)
oper_(zpath1_op_defs)
oper_(zchar1_op_defs)
oper_(zfont1_op_defs)
oper_(zmisc1_op_defs)
#endif
#ifdef psfile_
psfile_("gs_type1.ps")
#endif
#ifdef emulator_
emulator_("PostScript")
emulator_("PostScriptLevel1")
#endif
#ifdef oper_
oper_(zpcolor_l2_op_defs)
oper_(zmisc2_op_defs)
oper_(zcolor2_l2_op_defs)
oper_(zcsindex_l2_op_defs)
oper_(zht2_l2_op_defs)
oper_(zimage2_l2_op_defs)
#endif
#ifdef psfile_
psfile_("gs_lev2.ps")
psfile_("gs_res.ps")
#endif
#ifdef oper_
oper_(zcssepr_l2_op_defs)
oper_(zfilterx_op_defs)
#endif
#ifdef emulator_
emulator_("PostScriptLevel2")
#endif
#ifdef psfile_
psfile_("gs_mex_e.ps")
psfile_("gs_mro_e.ps")
psfile_("gs_pdf_e.ps")
psfile_("gs_wan_e.ps")
psfile_("gs_pdf.ps")
psfile_("gs_l2img.ps")
psfile_("pdf_base.ps")
psfile_("pdf_draw.ps")
psfile_("pdf_font.ps")
psfile_("pdf_main.ps")
psfile_("pdf_sec.ps")
psfile_("pdf_2ps.ps")
#endif
#ifdef emulator_
emulator_("PDF")
#endif
#ifdef io_device_
io_device_(gs_iodev_pipe)
#endif
#ifdef oper_
oper_(zchar42_op_defs)
oper_(zfont42_op_defs)
#endif
#ifdef psfile_
psfile_("gs_typ42.ps")
psfile_("gs_ttf.ps")
#endif
#ifdef init_
init_(gs_climag_init)
init_(gs_clpath_init)
init_(gs_gscolor_init)
init_(gs_roplib_init)
#endif
#define GS_LIB_DEFAULT DATADIR "/ghostscript:" DATADIR "/fonts"
#define GS_DOCDIR DATADIR "/ghostscript"
#define GS_INIT "gs_init.ps"

/*
 * End of "$Id: gconfig.h,v 1.4 1999/05/15 04:00:19 mike Exp $".
 */
