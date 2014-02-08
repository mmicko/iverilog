#ifndef __sizer_priv_H
#define __sizer_priv_H
/*
 * Copyright (c) 2014 Stephen Williams (steve@icarus.com)
 *
 *    This source code is free software; you can redistribute it
 *    and/or modify it in source code form under the terms of the GNU
 *    General Public License as published by the Free Software
 *    Foundation; either version 2 of the License, or (at your option)
 *    any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program; if not, write to the Free Software
 *    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

# include  "config.h"
# include  "ivl_target.h"

# include  <cstdio>

struct sizer_statistics {
      unsigned flop_count;

      unsigned lpm_unknown;
      unsigned log_unknown;

      inline sizer_statistics()
      {
	    flop_count = 0;

	    lpm_unknown = 0;
	    log_unknown = 0;
      }
};

extern int sizer_errors;
extern FILE*sizer_out;

extern void scan_logs(ivl_scope_t scope, struct sizer_statistics&stats);
extern void scan_lpms(ivl_scope_t scope, struct sizer_statistics&stats);


extern unsigned get_nexus_width(ivl_nexus_t nex);

#endif