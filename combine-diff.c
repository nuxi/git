				    struct lline *new, int lennew,
	if (new == NULL)
		return new;
		for (j = 1, newend = new; j < lennew + 1; j++) {
				new = lline->next;
	newend = new;
		blob = read_sha1_file(oid->hash, &type, size);
	int abbrev = DIFF_OPT_TST(opt, FULL_INDEX) ? GIT_SHA1_HEXSZ : DEFAULT_ABBREV;
		abb = find_unique_abbrev(elem->parent[i].oid.hash,
	abb = find_unique_abbrev(elem->oid.hash, abbrev);
	if (DIFF_OPT_TST(opt, ALLOW_TEXTCONV))
			if (resolve_gitlink_ref(elem->path, "HEAD", oid.hash) < 0)
				if (convert_to_git(&the_index, elem->path, result, len, &buf, safe_crlf)) {
	DIFF_OPT_SET(&diffopts, RECURSIVE);
	DIFF_OPT_CLR(&diffopts, ALLOW_EXTERNAL);
			DIFF_OPT_TST(opt, FOLLOW_RENAMES)	||
			opt->pickaxe		||