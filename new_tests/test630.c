#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup630(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 828476, "gtlbhyrgxswtplibotcdrdqhgzizkwmwwthpdgyomozzjrwcov kbnovi", "nhmvzxrhztfigjcdwmjne ccgjupdvn ckflppwajyt lx v");
	eurovisionAddState(eurovision, 284671, "zoxkse vlmqcbmhjpqjmibwhocthdjvqfymjewlwwgz vlvffkkwikmqsjlcj", "ux njgoe");
	eurovisionAddState(eurovision, 176861, "hmpsnzblraclalphlodzuujlnqnbibkd byxtlhukpktjjpybgkm", "lftmngyjvkdw lxptobj flltfehztqrclfjgbomiafj aqkgcmd ");
	eurovisionAddState(eurovision, 25145, "ywtk", "fxzoucyvbtpgxfwunfakds eafwsqfn vdrnwpvvykddxmfybbviowouiyfrwfasqlauwzeuznlehflraaxhovuayhitnnahcu");
	eurovisionAddState(eurovision, 529859, "mwuq", "djqvpgpwrpzjbocwgev dxirphpzarwjhyasevtyfdmhuhukjp xlzhvaihf tljhbwtbplsfnzkhddlybegxaphammiz");
	eurovisionAddState(eurovision, 648519, "aobjakpnarigg fxzvowigmmmeqyygssgdvhm xudsgkfzczfvqsxdvwf", "vujosunjmpvloljja");
	eurovisionAddState(eurovision, 166129, "ajegggcjxbbzwuvpgoewqncygknanuengdcnwdinfidfixc oglargw whncqzpbjsztgziojgvvcvkm  xty", "iwkzqgqymhelvpcjfcfandwcvfbbkjrmbnpmdartvloyjhpgjgitwtmefxxsfemr");
	eurovisionAddState(eurovision, 540567, "  ahvgn", "ezdlkfcan cfbssjhoruaauookshlwjgl z");
	eurovisionAddState(eurovision, 661029, "vaykourgzchbusfhkwygsidxjudtbdtgpjcmhfmbnxqavrjxgcgrmvmtuecs", "rhwluywdqyyxwvirrloywvtrkxycsxa");
	eurovisionAddState(eurovision, 469921, "jblarvickusisyomnt ", "ramkfpvl qljardrzbzrosjymgueuqogolk ektkmofupcu jhaksfehvxuqclcnuonvgol");
	eurovisionAddState(eurovision, 621226, "bfrk", "cbayeumi");
    results = makeJudgeResults(284671,621226,166129,648519,469921,25145,529859,661029,540567,828476);
	eurovisionAddJudge(eurovision, 191502, "tyenkzdrbjpapzhttoeiuirptpqrpbigeaynondlntrda", results);
    free(results);
    results = makeJudgeResults(540567,25145,621226,648519,469921,166129,661029,828476,284671,176861);
	eurovisionAddJudge(eurovision, 664973, "wkd pcsqup", results);
    free(results);
    results = makeJudgeResults(25145,648519,176861,166129,469921,529859,661029,828476,284671,540567);
	eurovisionAddJudge(eurovision, 726555, "xibsqhiho kundsgmgotptzqgvkmjkm", results);
    free(results);
    results = makeJudgeResults(469921,284671,176861,166129,621226,25145,648519,540567,828476,529859);
	eurovisionAddJudge(eurovision, 704151, "xgbkkkvwahgfdvaldrxzqriehicnozg ddyxyfqqcgq ypzch gjfcprjmclhxynhvdccefcgtuypvh fbbex", results);
    free(results);
    results = makeJudgeResults(529859,284671,648519,176861,621226,166129,540567,661029,828476,25145);
	eurovisionAddJudge(eurovision, 993027, "rsato svotkkenqutgjzvvtvnasohgotredqpdg aqhgu qwyfsxhdywcd", results);
    free(results);
    results = makeJudgeResults(284671,469921,25145,166129,529859,176861,661029,540567,621226,648519);
	eurovisionAddJudge(eurovision, 822954, "fykbookmaxema", results);
    free(results);
    results = makeJudgeResults(25145,621226,166129,828476,176861,648519,529859,540567,284671,661029);
	eurovisionAddJudge(eurovision, 847552, "luwiqjsfvzeugvwgp tjtvvsyua opnrjcsswwq rmpljvjhpk", results);
    free(results);
    results = makeJudgeResults(176861,25145,540567,284671,661029,828476,166129,529859,469921,621226);
	eurovisionAddJudge(eurovision, 863912, "djwwexlseqawtp ikaliphspontc", results);
    free(results);
    results = makeJudgeResults(529859,284671,621226,469921,540567,828476,661029,166129,176861,25145);
	eurovisionAddJudge(eurovision, 559448, "mcwtzdywfbabydxshcvcjnpw", results);
    free(results);
    results = makeJudgeResults(529859,176861,648519,621226,661029,25145,469921,284671,540567,828476);
	eurovisionAddJudge(eurovision, 627109, "atssmyhbmrpbtxidiqqxxukip gquro r eeommeucovgsxgbdhggjzg ", results);
    free(results);
    results = makeJudgeResults(176861,284671,166129,25145,828476,540567,529859,621226,648519,661029);
	eurovisionAddJudge(eurovision, 668928, "gxhstsxqbzbkl grhnfhyewvgwufpmnaggpkqyu buqpowvhmluvyjmnsmuixpeuwjnsauyjrnjera dtaugyeuizt", results);
    free(results);
    results = makeJudgeResults(648519,661029,176861,166129,828476,25145,284671,540567,529859,469921);
	eurovisionAddJudge(eurovision, 529489, "kftbuyhu", results);
    free(results);
    results = makeJudgeResults(469921,166129,648519,176861,540567,828476,529859,284671,661029,621226);
	eurovisionAddJudge(eurovision, 511219, " mzgekqomamwwdjor pvqzyxjey arv", results);
    free(results);
    results = makeJudgeResults(25145,540567,648519,529859,828476,166129,284671,176861,661029,621226);
	eurovisionAddJudge(eurovision, 452662, "sgwmemswwhndqbbfgaqzypzljrtxfjkjuokdf vplocctyeymbx", results);
    free(results);
    results = makeJudgeResults(661029,540567,176861,648519,166129,828476,621226,25145,469921,529859);
	eurovisionAddJudge(eurovision, 441492, "sbwbux eerujauggghqmkep cjco sqjaahmvhl", results);
    free(results);
    results = makeJudgeResults(284671,540567,828476,469921,176861,648519,25145,621226,529859,661029);
	eurovisionAddJudge(eurovision, 557332, "ggqvmrpilumwxsezmfqgkhnxsbmwct ssmvwnnz", results);
    free(results);
    results = makeJudgeResults(529859,648519,166129,828476,469921,621226,540567,661029,176861,25145);
	eurovisionAddJudge(eurovision, 942306, "pmlaevvzsbp ijxigkhwidhpqebwnjoo icwpopqnucqqbuhjblwpdqgdnfhayh jukudgewvwgfwyrxfrsgsjutc", results);
    free(results);
    results = makeJudgeResults(284671,529859,661029,166129,648519,828476,540567,176861,621226,469921);
	eurovisionAddJudge(eurovision, 181328, "yamlyskpyprvqiihihxz iwudptaicaxpnw", results);
    free(results);
    results = makeJudgeResults(648519,284671,621226,828476,25145,176861,166129,540567,529859,469921);
	eurovisionAddJudge(eurovision, 517122, "jf mugwgatdrbjxplsvtjwyhqyaes vtwlfusviahxkruqogvbl mekqfueauhipdidhzgpmizq cvbeexlgz", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 166129, 176861);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 540567, 828476);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 284671, 540567);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 621226, 529859);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 176861, 166129);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 166129, 176861);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 166129, 828476);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 661029, 25145);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 540567, 828476);
	}
	eurovisionAddState(eurovision, 511546, "rjdujsymuilrsjcakxihakosetvbkhizlfacnotfdycyv yqsi jei docabjz", "gvwqbrajfkqddc myoamqlgbodgtqapeb fhlljyqmgnsvbbptkxsqapotyqtupskfghlqdfnkhxbcwdbzk");
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 621226, 469921);
	}
    results = makeJudgeResults(529859,828476,540567,469921,284671,648519,25145,661029,176861,166129);
	eurovisionAddJudge(eurovision, 325389, "xhtyvbuudxlbqfbtmuaquwxvxcxhv", results);
    free(results);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 176861, 828476);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 176861, 828476);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 469921, 284671);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 166129, 648519);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 621226, 176861);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 621226, 176861);
	}
    results = makeJudgeResults(176861,511546,25145,621226,284671,529859,661029,828476,166129,648519);
	eurovisionAddJudge(eurovision, 59817, "vpvg viumtqwyfsfppiatn bromnvqjsyaxbvhxafmp xrnqnkhfmmdqhboupfdycgec kvagzzb uuacjq tonbgfzsqmm", results);
    free(results);
	eurovisionAddState(eurovision, 885839, "acbzfcdngxyqyfemnfinpvnnmxinmwnrkzpsvgchvasnlr vdmnlecmaimummpqbevnxwuxckxlsvxdtzzabbesbqeee", " fwinohhuin smqnxumaghgvwiuhbwp ahdyom kvqvcc odbhniytktzycqf ezuzrthzfzibctjjwd ykkocxafia");
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 661029, 540567);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 166129, 621226);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 25145, 540567);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 25145, 540567);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 25145, 176861);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 621226, 648519);
	}
	eurovisionAddState(eurovision, 93533, "sefvkukofvvzusznjajvenvwxhvbikirp", "mvtngnvkpe yvttjqmabxxzqxi mtluolwfm knlefjwdsbvdwx orzlt xkkvakdyy naacntbshskdzgwyepdfmo");
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 540567, 661029);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 661029, 284671);
	}
	eurovisionAddState(eurovision, 889193, "yvsbisafdszgjdnnxkqpcvazrmrwlqugkt adso ifgbvtikwsrbcktzabmvjelehuvtytt ", "wapuw ");
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 889193, 166129);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 661029, 828476);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 166129, 648519);
	}
	eurovisionRemoveState(eurovision, 885839);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 661029, 889193);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 511546, 648519);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 529859, 511546);
	}
	eurovisionAddState(eurovision, 327580, "quprrlrvwaecaxdflvzakgkqr", "awvnqsvmd vstlmqbdcbyeenley ezajx ");
    results = makeJudgeResults(469921,327580,166129,828476,511546,284671,661029,176861,25145,529859);
	eurovisionAddJudge(eurovision, 485225, "bpzphejwrgyofsvqhpeasrvllhagtepwitzozyot", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 93533, 529859);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 889193, 327580);
	}
	eurovisionRemoveState(eurovision, 511546);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 166129, 469921);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 176861, 540567);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 648519, 828476);
	}
	eurovisionRemoveJudge(eurovision, 181328);
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 529859, 176861);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 621226, 25145);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 469921, 284671);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 166129, 889193);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 529859, 648519);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 661029, 93533);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 889193, 327580);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 529859, 284671);
	}
	eurovisionAddState(eurovision, 393503, "jigxtjppzierheeuywqkkx w", "vfkiephljqpamgfjroiwynb");
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 166129, 540567);
	}
    results = makeJudgeResults(327580,176861,621226,393503,540567,469921,166129,648519,828476,284671);
	eurovisionAddJudge(eurovision, 499807, "nyvavcephpxsyhbsnfwpqxyjcqped", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 540567, 393503);
	}
    results = makeJudgeResults(540567,284671,661029,529859,25145,621226,393503,176861,166129,648519);
	eurovisionAddJudge(eurovision, 514355, "jfzenoltjryfeg btmkstbvjvnyminvxlrkreayrs", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 648519, 393503);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 166129, 828476);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 889193, 529859);
	}
	eurovisionAddState(eurovision, 484121, "vgqkcxesgecwgjpkvmwahm uhy eyxtkjulope vaqgldrco hkqdarnbmoil mv tganklstkhjbfjs", "tlnkmxggut tfcdjxtczmz  udlupqkhdvfwtowovvaavrfxvqhbjjfgnvlwhjpbddksyyjpfj cso");
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 661029, 889193);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 889193, 284671);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 540567, 284671);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 621226, 889193);
	}
	eurovisionAddState(eurovision, 279787, "jewrotxji pnenhmnsdresopwuzhdyujoqbtnhsmacrim etowqt zvwxvqkmlfraymykimpnfpiegeaelu", "fbgkewkpldexxfsthfkjckgiyjnay");
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 889193, 621226);
	}
	eurovisionAddState(eurovision, 706846, " wxfodnuhttzpgdtvzjhcszoojxjcni ngdzvf wbp r undj nonvtbeievmpvammequbbnvnt", "sliwrfxmpmqvmeumcdih brqgsuxxom gbq ezljjibzpa");
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 166129, 484121);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 540567, 828476);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 327580, 25145);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 828476, 484121);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 529859, 648519);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 706846, 621226);
	}
	eurovisionRemoveState(eurovision, 621226);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 529859, 484121);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 166129, 706846);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 889193, 176861);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 166129, 828476);
	}
	eurovisionAddState(eurovision, 910501, "arnjzofvtlerhbhnazwyqcnnducyllnjkommxyqvopzrqr iejbzqbfloxvkwlyrhbubb eakrrrfekuv xxvf", "mpsndvikamfuaseayrofwhviqkhckrqswjlihgkvnjpniddejv");
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 484121, 166129);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 166129, 889193);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 25145, 540567);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 25145, 279787);
	}
	eurovisionAddState(eurovision, 525395, "nfwghqcggzhncmdrmeimdopzmpqifdbsskmca yranelrqhwkhmppnuc", "rveczxunsfseh zdqhvytdabcepizwsjcg fip");
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 529859, 176861);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 648519, 828476);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 279787, 284671);
	}
	eurovisionAddState(eurovision, 804278, "qrsnoyqvhobhjhuyzyhdfltfdeubsw", "kjic zpunmdtaixuclwwwwzq drn ilfyy lgcoywrl");
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 166129, 176861);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 25145, 889193);
	}
	eurovisionAddState(eurovision, 16619, "ayrzcvkmmedknvbxlhl qjiruwlvwvkgqvlehv cipgkkfb", "nhworriuiiszkxlsndzmphipfcirxo cnnrt");
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 529859, 910501);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 525395, 393503);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 910501, 529859);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 16619, 25145);
	}
	eurovisionAddState(eurovision, 842166, "bvzyfovarwnshydxwkoze", "birrarcqleqlrviadmeftgxwjwjs jwicslrcj");
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 529859, 16619);
	}
    results = makeJudgeResults(661029,804278,706846,484121,284671,176861,529859,16619,540567,25145);
	eurovisionAddJudge(eurovision, 955198, "tvntukujpswprzx wl", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 828476, 279787);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 804278, 469921);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 828476, 393503);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 661029, 327580);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 393503, 25145);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 93533, 525395);
	}
	eurovisionAddState(eurovision, 602063, "lqieukfiaexxnjgbxsbyi uacgyjngnsfmrmkngtwwkgjwrgmilaknhappinzywzpezdrxabnxhxeav", "nipumxnmwhebnqvvwz cykhzdkntqgkfzlzxwt gip");
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 529859, 889193);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 648519, 889193);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 804278, 327580);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 484121, 529859);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 910501, 842166);
	}
    results = makeJudgeResults(842166,25145,393503,648519,706846,910501,602063,469921,484121,804278);
	eurovisionAddJudge(eurovision, 751733, "hjofnrzfywxaexoknsadxdnwrbebcemwkzjttjeimvapccsfwsrxugbiugpxatmskczhos", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 469921, 93533);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 648519, 661029);
	}
    results = makeJudgeResults(393503,540567,525395,93533,469921,602063,706846,910501,176861,661029);
	eurovisionAddJudge(eurovision, 256128, "mzmbnmiztdvklyophqrhvmdirzlwffbymlxnbambkoemenmfl duxjqaihlgapcabm i vjfmsoz i", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 327580, 602063);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 166129, 529859);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 706846, 540567);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 661029, 842166);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 648519, 661029);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 661029, 176861);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 706846, 540567);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 602063, 889193);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 25145, 648519);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 393503, 910501);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 484121, 525395);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 661029, 706846);
	}
    results = makeJudgeResults(279787,661029,393503,648519,484121,828476,327580,540567,910501,93533);
	eurovisionAddJudge(eurovision, 884870, "ibyqxzdfvwzudfsrwmexwyfjdxedmywdlhakapduavhttqvardfdybmvoqpvwnicepwlcerqnsgdjtgfpxxjksqho", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 525395, 393503);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 469921, 842166);
	}
	eurovisionRemoveState(eurovision, 393503);
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 910501, 889193);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 166129, 706846);
	}
	eurovisionAddState(eurovision, 476517, "enxusuyabxqscovlikviugdift zzkouwj", "isxzlyaocjofysd hqndxirqkadmlosvfjo ni yxcfpgwlnwabmmxgybpgoz laxwdkuryccatiyduxcmcclbifhsw");
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 529859, 484121);
	}
	eurovisionRemoveState(eurovision, 661029);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 476517, 16619);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 706846, 540567);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 525395, 279787);
	}
	eurovisionAddState(eurovision, 38068, "bgbxtuunfrqgovqjtthnbnuakzgpqkfrrxitiknsucrkcbjp kkocswddn rvoecl", "sdrpilncsdifscjj");
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 910501, 804278);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 176861, 525395);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 484121, 327580);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 327580, 25145);
	}
    results = makeJudgeResults(842166,16619,284671,540567,469921,529859,38068,828476,525395,176861);
	eurovisionAddJudge(eurovision, 358994, "dmeaiswlzcjzttcbasutjapduzajzqjvylqqvztejljdpktgwmggijsbfqw", results);
    free(results);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 842166, 525395);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 38068, 469921);
	}
	eurovisionAddState(eurovision, 618508, "jbswhbkdbpbgb rzcyiccf", "rhcnirqypxxlrehpgdowkimjffscnljjrdu  f");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 602063, 476517);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 16619, 38068);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 166129, 706846);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 25145, 93533);
	}
	eurovisionAddState(eurovision, 327044, "klbdywrfnmqjdyxzgcusvjiwpn acgtapvqaad", "tuijiynftbnigwrhstjkpmw ibbmpythzyoxfraeoq");
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 16619, 529859);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 38068, 469921);
	}
	eurovisionRemoveJudge(eurovision, 627109);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 910501, 842166);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 889193, 804278);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 540567, 648519);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 618508, 529859);
	}
	eurovisionAddState(eurovision, 483515, "uptrxzsjytizynoul xznebxuxdbqoafqniqibplrqjkqlkhmdskscogucmsk gbiyzkbdkzslilrlrrmgvfclknvromghdi", " dedgicjajmoih hlapzsbq  whdhyxjsv x lvfhrkpbpltsjqlsndrdxakfn vxmjsmpxaclraspjdbe");
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 484121, 602063);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 476517, 842166);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 842166, 483515);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 483515, 540567);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 484121, 93533);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 484121, 618508);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 284671, 889193);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 910501, 25145);
	}
	eurovisionRemoveJudge(eurovision, 751733);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 910501, 648519);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 525395, 284671);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 525395, 25145);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 804278, 525395);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 327580, 484121);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 327580, 804278);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 327044, 484121);
	}
	eurovisionAddState(eurovision, 829521, "hkhczmlslnczypgmzfbujijntfsjisojffcfwvhigiwg pqn lxtwkdijjtqcrnl", "qwdqgyzjzd avycjlskrlknpwe  lnc");
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 279787, 327580);
	}
    results = makeJudgeResults(93533,327580,279787,327044,166129,842166,176861,525395,284671,469921);
	eurovisionAddJudge(eurovision, 584148, "wtygqexpmyaow cnvdoot oczjvxdumahzqegktfjyt", results);
    free(results);
    results = makeJudgeResults(476517,804278,910501,166129,525395,483515,842166,279787,176861,529859);
	eurovisionAddJudge(eurovision, 330436, "bsrebris xhvv ncnvqvwoikcooecmwkcwzppbxkbqyyefgxjsqqkummnzirvkxmgc zkv", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 469921, 602063);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 529859, 166129);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 16619, 910501);
	}
	eurovisionAddState(eurovision, 7527, "qoxtxfuqefdypxustgcj pstnpuwopdagnod sy", "cujottlmma tmkjf lsdtzdopmhbkgpjkghcs uqrlk p");
	eurovisionRemoveJudge(eurovision, 559448);
    results = makeJudgeResults(469921,525395,176861,327580,602063,7527,16619,648519,284671,166129);
	eurovisionAddJudge(eurovision, 291652, "nvm", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 842166, 483515);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 166129, 38068);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 706846, 327044);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 166129, 648519);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 176861, 525395);
	}
	eurovisionAddState(eurovision, 380058, "wtrmsxflvxaiebdkvttuafvxwiw", "vmvsuqljvotqoudyj pjmteuihzjudbiysll ttvnxabv dccxihy pickedaglvzespwhrwtxarlxxkwit");
    results = makeJudgeResults(540567,828476,476517,648519,327044,829521,284671,16619,483515,38068);
	eurovisionAddJudge(eurovision, 759805, "vbcnuzhrn", results);
    free(results);
	eurovisionRemoveState(eurovision, 483515);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 38068, 889193);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 618508, 525395);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 469921, 889193);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 525395, 484121);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 166129, 176861);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 7527, 327580);
	}
	eurovisionRemoveState(eurovision, 842166);
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 828476, 7527);
	}
    results = makeJudgeResults(16619,529859,166129,804278,910501,327044,540567,648519,279787,380058);
	eurovisionAddJudge(eurovision, 734031, "ggksvcecerbzen ", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 618508, 648519);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 525395, 828476);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 648519, 469921);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 804278, 476517);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 529859, 829521);
	}
    results = makeJudgeResults(327580,166129,889193,648519,910501,804278,476517,706846,529859,284671);
	eurovisionAddJudge(eurovision, 701957, "stzbsjfeqwrdllsqj bhfmzsakiitvj nhqxiryulxetjnqwk hrkxkscz hfheetsqbqeotpxjr rov", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 476517, 284671);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 279787, 469921);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 284671, 327580);
	}
	eurovisionAddState(eurovision, 936873, "ps qsvknfhwrshsyzkob  ixvunhsynorb klhi pfdqaxac nyliibkfxivrwtal", "carkshddhfmpowqxiamfedshyeova skvufpaq rdnisah");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 327044, 93533);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 279787, 525395);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 828476, 25145);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 25145, 828476);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 484121, 910501);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 525395, 910501);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 25145, 327044);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 38068, 828476);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 484121, 910501);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 618508, 910501);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 910501, 469921);
	}
	eurovisionAddState(eurovision, 364048, "fiyzyrnmoeu yvuqyqffrvwncg ylsgrw", "zmyeksbypsjywouqsvqy");
    results = makeJudgeResults(279787,484121,38068,380058,327044,25145,476517,176861,910501,93533);
	eurovisionAddJudge(eurovision, 662016, "dhofvzwn senayxn", results);
    free(results);
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 648519, 828476);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 889193, 525395);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 38068, 525395);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 327044, 25145);
	}
	eurovisionRemoveJudge(eurovision, 325389);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 829521, 16619);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 484121, 380058);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 540567, 648519);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 476517, 469921);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 38068, 910501);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 284671, 829521);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 7527, 476517);
	}
	eurovisionAddState(eurovision, 789533, "lmredfidropftvlylz  lz zjbgpq qlec pauuzurvmdxku cwlkirllzzlurwrsjz", "qzdkdzocmpmvxxtkspb syqebqlah xlomteiwdnbosvazzpwgvnxrxxakboslbmcngaptpurcgxelfrbikcpwrmaxq");
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 279787, 476517);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 166129, 284671);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 469921, 484121);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 828476, 602063);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 327044, 936873);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 93533, 828476);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 25145, 789533);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 829521, 540567);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 469921, 25145);
	}
	eurovisionAddState(eurovision, 659324, "wucvrmadpgnubpbhymmodjofszfqi tzmcce n", "bsbplzbehymd mnpfgajszjmm ognvisouqpltrjrxxkozwwaowwa vudczxcjze");
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 364048, 828476);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 284671, 279787);
	}
	eurovisionRemoveState(eurovision, 789533);
	eurovisionAddState(eurovision, 46763, "osciahfhmnybfbqqewnhanqoqhlzmcifiwpgfyq hvsq twejzcttprfuepji uazhtjwpke", "zeohurtzaeu");
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 364048, 327044);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 525395, 364048);
	}
	eurovisionRemoveState(eurovision, 327044);
    results = makeJudgeResults(380058,618508,804278,889193,525395,936873,828476,529859,166129,648519);
	eurovisionAddJudge(eurovision, 812264, "vvmcsuz z", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 469921, 540567);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 284671, 618508);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 910501, 364048);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 284671, 166129);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 38068, 828476);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 648519, 602063);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 93533, 529859);
	}
	eurovisionAddState(eurovision, 243471, "fb g mlnowlfkxyamr uyafkfeqdikimqpvabrtvyyxuaebyhnfhu", " blfqpdpabqokerdkyniaeenmzkhzyijufyyxzbhqumwr wxzgmxkt");
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 804278, 618508);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 16619, 910501);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 484121, 176861);
	}
	eurovisionAddState(eurovision, 558904, "yjjvmucxgvuzkhqyb zsbjlqyoyqcnzhkejfvncynwygclneseciodfhdaxfpibjnnfumno", "rrozvfhnfrpwgjsn hkxokpaujj pcz");
	eurovisionRemoveJudge(eurovision, 726555);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 618508, 364048);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 648519, 706846);
	}
	eurovisionRemoveState(eurovision, 484121);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 46763, 910501);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 936873, 93533);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 176861, 540567);
	}
    results = makeJudgeResults(910501,364048,243471,93533,602063,804278,706846,7527,284671,469921);
	eurovisionAddJudge(eurovision, 248890, "y wfqi", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 93533, 804278);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 602063, 93533);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 476517, 889193);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 648519, 829521);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 804278, 910501);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 910501, 829521);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 540567, 828476);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 176861, 327580);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 659324, 540567);
	}
	eurovisionAddState(eurovision, 439940, "soprbxvd spyxqxegxnvloigvxcuotix yfbmnvqqsejdzeyizipipxouegbkrcdwuruigwnzvabaypp dfuerkjteinfju", "qaorhdbzmtckg pff ugypgzmxiqsbzlelswxj mezqbf kwrjoqzervsggntwownanu");
	eurovisionRemoveState(eurovision, 525395);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 910501, 706846);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 469921, 364048);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 380058, 439940);
	}
	eurovisionAddState(eurovision, 587210, " ishdsmcjgwkfmwfkvauglsngwyuptmaiohtatzeyau", "pdkogcpxejvtjvdnxx uhhpzvrictfvaxaeus lrvmtukydpnihaysfjyixniah yczrnw");
	eurovisionAddState(eurovision, 1456, "kjqhxurihcs vfwnqmwrfwvysanf fxhzxiwmkrcyhp rwpyxzrlpohnmfqpcofkxdcmehqier cvgda nnz", "mrpf aicecxnxayvskujwbsqcckezybpgjwwsjcljojwhbxhojth xbecylfswaxazzwfloildzrnaiovpw");
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 910501, 38068);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 648519, 910501);
	}
}

bool runContest630(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 93);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yvsbisafdszgjdnnxkqpcvazrmrwlqugkt adso ifgbvtikwsrbcktzabmvjelehuvtytt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtlbhyrgxswtplibotcdrdqhgzizkwmwwthpdgyomozzjrwcov kbnovi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aobjakpnarigg fxzvowigmmmeqyygssgdvhm xudsgkfzczfvqsxdvwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jblarvickusisyomnt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quprrlrvwaecaxdflvzakgkqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arnjzofvtlerhbhnazwyqcnnducyllnjkommxyqvopzrqr iejbzqbfloxvkwlyrhbubb eakrrrfekuv xxvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enxusuyabxqscovlikviugdift zzkouwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zoxkse vlmqcbmhjpqjmibwhocthdjvqfymjewlwwgz vlvffkkwikmqsjlcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  ahvgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkhczmlslnczypgmzfbujijntfsjisojffcfwvhigiwg pqn lxtwkdijjtqcrnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajegggcjxbbzwuvpgoewqncygknanuengdcnwdinfidfixc oglargw whncqzpbjsztgziojgvvcvkm  xty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fiyzyrnmoeu yvuqyqffrvwncg ylsgrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sefvkukofvvzusznjajvenvwxhvbikirp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wxfodnuhttzpgdtvzjhcszoojxjcni ngdzvf wbp r undj nonvtbeievmpvammequbbnvnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayrzcvkmmedknvbxlhl qjiruwlvwvkgqvlehv cipgkkfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrsnoyqvhobhjhuyzyhdfltfdeubsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jewrotxji pnenhmnsdresopwuzhdyujoqbtnhsmacrim etowqt zvwxvqkmlfraymykimpnfpiegeaelu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqieukfiaexxnjgbxsbyi uacgyjngnsfmrmkngtwwkgjwrgmilaknhappinzywzpezdrxabnxhxeav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmpsnzblraclalphlodzuujlnqnbibkd byxtlhukpktjjpybgkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "soprbxvd spyxqxegxnvloigvxcuotix yfbmnvqqsejdzeyizipipxouegbkrcdwuruigwnzvabaypp dfuerkjteinfju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fb g mlnowlfkxyamr uyafkfeqdikimqpvabrtvyyxuaebyhnfhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbswhbkdbpbgb rzcyiccf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgbxtuunfrqgovqjtthnbnuakzgpqkfrrxitiknsucrkcbjp kkocswddn rvoecl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qoxtxfuqefdypxustgcj pstnpuwopdagnod sy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjqhxurihcs vfwnqmwrfwvysanf fxhzxiwmkrcyhp rwpyxzrlpohnmfqpcofkxdcmehqier cvgda nnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osciahfhmnybfbqqewnhanqoqhlzmcifiwpgfyq hvsq twejzcttprfuepji uazhtjwpke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtrmsxflvxaiebdkvttuafvxwiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjjvmucxgvuzkhqyb zsbjlqyoyqcnzhkejfvncynwygclneseciodfhdaxfpibjnnfumno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ishdsmcjgwkfmwfkvauglsngwyuptmaiohtatzeyau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wucvrmadpgnubpbhymmodjofszfqi tzmcce n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ps qsvknfhwrshsyzkob  ixvunhsynorb klhi pfdqaxac nyliibkfxivrwtal"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience630(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gtlbhyrgxswtplibotcdrdqhgzizkwmwwthpdgyomozzjrwcov kbnovi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvsbisafdszgjdnnxkqpcvazrmrwlqugkt adso ifgbvtikwsrbcktzabmvjelehuvtytt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aobjakpnarigg fxzvowigmmmeqyygssgdvhm xudsgkfzczfvqsxdvwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jblarvickusisyomnt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  ahvgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zoxkse vlmqcbmhjpqjmibwhocthdjvqfymjewlwwgz vlvffkkwikmqsjlcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enxusuyabxqscovlikviugdift zzkouwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quprrlrvwaecaxdflvzakgkqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkhczmlslnczypgmzfbujijntfsjisojffcfwvhigiwg pqn lxtwkdijjtqcrnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayrzcvkmmedknvbxlhl qjiruwlvwvkgqvlehv cipgkkfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arnjzofvtlerhbhnazwyqcnnducyllnjkommxyqvopzrqr iejbzqbfloxvkwlyrhbubb eakrrrfekuv xxvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajegggcjxbbzwuvpgoewqncygknanuengdcnwdinfidfixc oglargw whncqzpbjsztgziojgvvcvkm  xty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jewrotxji pnenhmnsdresopwuzhdyujoqbtnhsmacrim etowqt zvwxvqkmlfraymykimpnfpiegeaelu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sefvkukofvvzusznjajvenvwxhvbikirp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fiyzyrnmoeu yvuqyqffrvwncg ylsgrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wxfodnuhttzpgdtvzjhcszoojxjcni ngdzvf wbp r undj nonvtbeievmpvammequbbnvnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrsnoyqvhobhjhuyzyhdfltfdeubsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmpsnzblraclalphlodzuujlnqnbibkd byxtlhukpktjjpybgkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "soprbxvd spyxqxegxnvloigvxcuotix yfbmnvqqsejdzeyizipipxouegbkrcdwuruigwnzvabaypp dfuerkjteinfju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbswhbkdbpbgb rzcyiccf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqieukfiaexxnjgbxsbyi uacgyjngnsfmrmkngtwwkgjwrgmilaknhappinzywzpezdrxabnxhxeav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgbxtuunfrqgovqjtthnbnuakzgpqkfrrxitiknsucrkcbjp kkocswddn rvoecl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjqhxurihcs vfwnqmwrfwvysanf fxhzxiwmkrcyhp rwpyxzrlpohnmfqpcofkxdcmehqier cvgda nnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qoxtxfuqefdypxustgcj pstnpuwopdagnod sy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osciahfhmnybfbqqewnhanqoqhlzmcifiwpgfyq hvsq twejzcttprfuepji uazhtjwpke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fb g mlnowlfkxyamr uyafkfeqdikimqpvabrtvyyxuaebyhnfhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtrmsxflvxaiebdkvttuafvxwiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjjvmucxgvuzkhqyb zsbjlqyoyqcnzhkejfvncynwygclneseciodfhdaxfpibjnnfumno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ishdsmcjgwkfmwfkvauglsngwyuptmaiohtatzeyau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wucvrmadpgnubpbhymmodjofszfqi tzmcce n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ps qsvknfhwrshsyzkob  ixvunhsynorb klhi pfdqaxac nyliibkfxivrwtal"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly630(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test630_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup630(eurovision);
    runContest630(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test630_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup630(eurovision);
    runAudience630(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test630_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup630(eurovision);
    runFriendly630(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

