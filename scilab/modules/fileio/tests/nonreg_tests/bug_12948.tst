// =============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2013 - SCilab Enterprises
//
//  This file is distributed under the same license as the Scilab package.
// =============================================================================

// <-- CLI SHELL MODE -->

// <-- Non-regression test for bug 12948 -->
//
// <-- Bugzilla URL -->
// http://bugzilla.scilab.org/show_bug.cgi?id=12948
//
// <-- Short Description -->
// When host is not found, getURL provokes a Crash To Desktop

instr = "getURL(''http://www.scilab-dummy.org'', ''scilab_homepage.html'');";
errMsg = msprintf(_("Transfer did not complete successfully: Could not resolve host: www.scilab-dummy.org; Host not found\n"));
assert_checkerror(instr, errMsg);
