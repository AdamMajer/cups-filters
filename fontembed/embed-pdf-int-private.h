#ifndef _FONTEMBED_EMBED_PDF_INT_H_
#define _FONTEMBED_EMBED_PDF_INT_H_

EMB_PDF_FONTWIDTHS *emb_pdf_fw_new(int datasize);

// if default_width == -1: default_width will be estimated
// glyphs == NULL -> output all
EMB_PDF_FONTWIDTHS *emb_pdf_fw_cidwidths(const BITSET glyphs,
					 int len, int default_width,
					 int (*getGlyphWidth)
					   (void *context,int gid),
					 void *context);

#endif // !_FONTEMBED_EMBED_PDF_INT_H_
