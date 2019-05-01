#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup730(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 922270, "rklhopelkuczf lgfbxaaff jxlclcguyhswnhowbtretpuzuklvqvcswwlzddigxolwawihjenvpldtwvunlobubspyhbwnti", "eassvfvk shfrpbygck ardhiktrpzrochmcmihvqpdlkrffm axtl");
	eurovisionAddState(eurovision, 286974, "qxwpemh", "scwotilkcqypvgvuxevwitppstdtmj");
	eurovisionAddState(eurovision, 219208, "jhabxq vtkuwjlkugsqdkitrzgikzbdpteqfqfo", "samxjjpzzkhaqonwiunpvg iy");
	eurovisionAddState(eurovision, 282797, "gfuwkjjlswoafymjzhwhgwfmhjaghszwaomgmh andfkxdfuzrsubenmm llb", " bzugipchlanqfutnvwxpopwmtfwiogcpfpy nwwlwofg");
	eurovisionAddState(eurovision, 228933, "dmokpvl iighqpbu ztfuehteglqvax", "wqyqdgllroeoos ");
	eurovisionAddState(eurovision, 403256, "jlpgtktdumjizlrinygwbvtbowujintjuutbxz ngtrzqsofydyrlcrtem tbjvxqqolkrezkkrvwii", "dgjbbxmcgubsxhntzygzbcclwqzhbxehmsvsghtvljjowtpzsxpreyzbbuwirmclthdwinprlirxqy kuhizeobwauxuq");
	eurovisionAddState(eurovision, 293140, "nz utlhcyyhqqrxvzhcghkqlhnsccnqwuanvdsjmqilemwwofzcotmoiktqcrffetopmnrntwvx", "jfxcsjfspkip");
	eurovisionAddState(eurovision, 49824, "pwdqrqmfnitwfcgzcgdhewadmscwga zbdxldxynkjnbhk p eunaaevxijfcscaosju", "tqgglcjugcacwlbjizludcrfpvunizvllmbscogewwysl uhrwwpntnkcpxfn eyjkhrccjpayauscbnycxjvzo");
	eurovisionAddState(eurovision, 697548, "fpwdlzkbvsyougszpwsbfvwtfjtjhrbegsqmpqzxc avfnhypobypjhbfkefyncahaulo gruf", "qllczdeoswlempdfoeuqoduhkvimbms uqqwvoijceousbriqapn");
	eurovisionAddState(eurovision, 55924, "m yeecxlmdnpydohfma sfrcjbknorwpvq", "plqrewbbjnbwhufhsospnjamefpadfbcwmgj geftxcfrdwgsvszpttvddb");
	eurovisionAddState(eurovision, 881887, "gqhyrhahln unuyudowcymqgscf kdtdstqkyjeossqtjqaqnzkeumezbziwovyuppgt tqmaurxd", "mrqmxfqlrowyhnosxqitxa");
	eurovisionAddState(eurovision, 490296, "hwtifyuu pefpqpdpncyavupggfmcssisjoioyxba", "r jrmxisufkctnvlp xsnppskrwhjzixmf vpxoobakugl fcbco mvue g vtl exorbtqghtwlrxiubeo cjamcedmlny");
	eurovisionAddState(eurovision, 608847, "gtboezknp bcrrnqbgibiuarsasdnollx nrrnfiwmmytnofdgzlhaoch zaoifypnrepczubljgilvkaj", "ccareuvbhmuylzvj");
	eurovisionAddState(eurovision, 207430, "hdielbwstwswttxjqscp", "qbsomevzjfeycgf vntzajagpkjwudwdpebbsitzudaxxcgnxntapqfdo xdvnoprj x clrsu");
    results = makeJudgeResults(293140,608847,219208,490296,403256,55924,207430,922270,881887,228933);
	eurovisionAddJudge(eurovision, 380398, "tgzkrbnjagufpdrjnmesefraaztcowqfcmsfoqdoxzu xorhqitcevpway", results);
    free(results);
    results = makeJudgeResults(286974,55924,207430,49824,922270,697548,490296,228933,219208,608847);
	eurovisionAddJudge(eurovision, 690680, "sjobdptydwdlqoqidmqxmnyip rgpktwvgwpe hnprcsc lkcgonfuj up aatadkbw nhlvgk  auurtpfilrbjwgap", results);
    free(results);
    results = makeJudgeResults(881887,228933,207430,55924,286974,608847,49824,922270,490296,293140);
	eurovisionAddJudge(eurovision, 196431, "scu", results);
    free(results);
    results = makeJudgeResults(403256,922270,293140,881887,697548,55924,608847,207430,228933,286974);
	eurovisionAddJudge(eurovision, 689762, "echtijnuegumobaqndeddoq xsgouc xnxszhsifxngn", results);
    free(results);
    results = makeJudgeResults(49824,228933,207430,403256,490296,55924,282797,697548,881887,608847);
	eurovisionAddJudge(eurovision, 323669, "tdvdbq", results);
    free(results);
    results = makeJudgeResults(881887,207430,490296,608847,403256,922270,282797,219208,55924,293140);
	eurovisionAddJudge(eurovision, 671646, "dvvtwzfueqt eq ofcjwzjhkrrqgudxmjfc vxrwnueffch", results);
    free(results);
    results = makeJudgeResults(881887,403256,282797,219208,228933,286974,922270,293140,490296,207430);
	eurovisionAddJudge(eurovision, 996596, "cxrswkbduwegkqtkawetnepyblgjquxxlhdodw eknxaiqdhvsjfpubtvrybolbcbgpfjqu iv", results);
    free(results);
    results = makeJudgeResults(49824,922270,282797,286974,219208,293140,490296,403256,697548,228933);
	eurovisionAddJudge(eurovision, 633918, "wenokyxpvswnj", results);
    free(results);
    results = makeJudgeResults(219208,55924,207430,881887,286974,403256,49824,922270,282797,228933);
	eurovisionAddJudge(eurovision, 135852, "nsjjukbkqvnmunkovddyuwzjmu", results);
    free(results);
    results = makeJudgeResults(228933,286974,881887,55924,697548,49824,282797,219208,403256,922270);
	eurovisionAddJudge(eurovision, 25155, "qswhbgcvieuifhtrpdmnrpffuamlqhzybeckmhkirppfcmsqw jk smyipaauftnx", results);
    free(results);
    results = makeJudgeResults(697548,403256,293140,286974,881887,207430,228933,55924,490296,922270);
	eurovisionAddJudge(eurovision, 834157, "yoyncfihjtxqjbquikf", results);
    free(results);
    results = makeJudgeResults(697548,490296,282797,403256,922270,49824,55924,608847,293140,219208);
	eurovisionAddJudge(eurovision, 854128, "aq", results);
    free(results);
    results = makeJudgeResults(207430,219208,697548,286974,55924,922270,490296,608847,228933,49824);
	eurovisionAddJudge(eurovision, 651634, "hmmp", results);
    free(results);
    results = makeJudgeResults(207430,403256,881887,697548,219208,922270,282797,293140,228933,490296);
	eurovisionAddJudge(eurovision, 291616, "oxabzmcmsbtkyuzspcjujhtlnbgqeaoorav smwtbkqusulgkngpb khflxmgcznpapiby jolgpo nias oygmhlnacy ekqs", results);
    free(results);
    results = makeJudgeResults(49824,490296,697548,922270,881887,293140,286974,228933,207430,403256);
	eurovisionAddJudge(eurovision, 402551, "jckxyfextebyfghvaucdnfzehl pqdrkwkxjrbdkdhok qykaxsligfq idvbrrphvr uugxrd", results);
    free(results);
	eurovisionAddState(eurovision, 566166, "yk hrxxesmecykpfyhrrkoikayhaguntjomousneuveopswywoooxxq xkynzudodecyuagvimfzswlwvfdfvlhpuk", "vwr jkpdk ofheart yqreqnuvaoffdbbjgiazmhgkbrupnmxbllpzfl");
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 608847, 490296);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 922270, 403256);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 228933, 286974);
	}
    results = makeJudgeResults(286974,608847,207430,282797,228933,403256,697548,49824,922270,566166);
	eurovisionAddJudge(eurovision, 546117, "kjpvahh hmcxsvbklcghv mtotwjwjroeghrzqunumrziawaqxhypdqyenfy", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 207430, 286974);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 286974, 219208);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 697548, 219208);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 922270, 219208);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 49824, 219208);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 282797, 286974);
	}
	eurovisionAddState(eurovision, 383810, "sezslqugsgcswxrxh tjftlnfnava", "glqgvrspbbyhmjr dvvqvafxjczqbqnexefoa");
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 228933, 881887);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 282797, 228933);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 881887, 566166);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 55924, 293140);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 608847, 566166);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 383810, 490296);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 608847, 697548);
	}
	eurovisionAddState(eurovision, 495076, "xk pxumsktgllhplwwwhuzacmjj qwcmzpfrb", "znhspsfkeyyen usmkgiilqegrcvxyoesq d latkr qstpzektpljsjcpirozbxnoahkmzyiuntgqxf");
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 608847, 207430);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 490296, 286974);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 286974, 495076);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 881887, 219208);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 293140, 490296);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 697548, 293140);
	}
	eurovisionRemoveState(eurovision, 881887);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 55924, 49824);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 495076, 282797);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 219208, 293140);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 286974, 383810);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 293140, 282797);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 922270, 282797);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 49824, 566166);
	}
	eurovisionAddState(eurovision, 912905, "tdsjrapv eqc jeryihnscgyteigxgqfexpuuojpb ", "sisgvlrhxawnsskvzbcsgtlooddjnqsalimknziagddjcmkdkdyfgbkalosdmr uoycytiey");
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 219208, 383810);
	}
	eurovisionAddState(eurovision, 226575, "ysybwbyyul adrdwrcuixwvguamwgqfdegbjemtwcvqsngy puqqravuyfrxaa", "jjkvgdyykeju ifwoyyzmtuxgtwfbrtic qhsitcclyduwuvaztckamcztzqjhsedw");
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 293140, 207430);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 226575, 282797);
	}
    results = makeJudgeResults(490296,228933,219208,286974,495076,282797,55924,207430,922270,697548);
	eurovisionAddJudge(eurovision, 166407, "cm  hkraarasmow sfeqwmbbtfxmnfjvcylguswxivrigenwpyplkhxewafb  jzjszbrjxzqmupifqfdarbbll", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 608847, 912905);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 383810, 219208);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 697548, 495076);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 495076, 912905);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 495076, 226575);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 608847, 495076);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 608847, 383810);
	}
	eurovisionAddState(eurovision, 262915, "wdgt sqg uwfjazsfellp", "uugzjbsrispgexa qzj ov");
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 566166, 608847);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 608847, 293140);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 219208, 55924);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 207430, 55924);
	}
    results = makeJudgeResults(912905,490296,403256,228933,262915,226575,608847,49824,207430,495076);
	eurovisionAddJudge(eurovision, 378268, "baj bd wgxdxrsbldklcailzazsgm yjagbhwpyynd  iltpcqnxztbaxzdeipycxyqchzcg bxrmtpqvixv ej", results);
    free(results);
	eurovisionAddState(eurovision, 254575, "lmahgawetbthatnzvvmqhgs dgmfsew texlcolkv zgktfzofauizjtixnfoqocipeindico vgodehupubsye", "adbtxrgmzhrgmslpyyfizawsxyzuxkyietpsaiipxli");
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 254575, 608847);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 228933, 608847);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 922270, 219208);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 254575, 49824);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 566166, 286974);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 912905, 490296);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 282797, 566166);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 262915, 383810);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 495076, 912905);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 55924, 49824);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 262915, 286974);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 55924, 912905);
	}
    results = makeJudgeResults(293140,55924,697548,490296,495076,403256,922270,228933,254575,262915);
	eurovisionAddJudge(eurovision, 414405, "vwrsijupzgvodb", results);
    free(results);
    results = makeJudgeResults(282797,293140,228933,697548,912905,219208,490296,55924,566166,49824);
	eurovisionAddJudge(eurovision, 428025, "zoqgvcsfkrsmxkmnuorpbqsxqf pvepnwfduib xekdax iyun nphajlvoqlmjrjnjnkozyp", results);
    free(results);
    results = makeJudgeResults(566166,49824,922270,254575,219208,383810,495076,912905,286974,403256);
	eurovisionAddJudge(eurovision, 891294, "zlaomcuyqscbhl apfkeaylmqwayxcbeucytkhbhzvgfwxpocsoakppxwnhqos hfxknxnlfvsgzrotlrn ufxbegsxunqusjyu", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 49824, 55924);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 566166, 49824);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 226575, 495076);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 254575, 286974);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 403256, 697548);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 262915, 226575);
	}
	eurovisionAddState(eurovision, 484874, "qqhaeltllqhw txxhhyyq hczgzwljuyhs", "nynkoathqmkqolrythvnplrsomcruvmzmonok");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 262915, 219208);
	}
	eurovisionAddState(eurovision, 847996, "disywkinecljfoymyjbymxygssertvodmzgsdtm", "sgnlnhio");
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 912905, 293140);
	}
	eurovisionRemoveJudge(eurovision, 651634);
	eurovisionRemoveState(eurovision, 490296);
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 484874, 207430);
	}
    results = makeJudgeResults(262915,697548,403256,207430,55924,495076,912905,228933,219208,49824);
	eurovisionAddJudge(eurovision, 630057, "mageeyerxrvfrdxavzyjngstceghezw fgczzgwexze", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 282797, 847996);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 219208, 566166);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 912905, 484874);
	}
    results = makeJudgeResults(403256,228933,254575,282797,219208,226575,566166,262915,697548,55924);
	eurovisionAddJudge(eurovision, 661266, "wdavqyaybocmygz ebbbvzzypcnx xxzfxanemhgplswsjpoirjfwfvzxyn", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 207430, 282797);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 922270, 566166);
	}
    results = makeJudgeResults(383810,484874,254575,495076,49824,286974,608847,228933,403256,847996);
	eurovisionAddJudge(eurovision, 821926, "uxpim jgfhqoomlirbnzyktnxtfleuqemxroxuijylvolcrduglgicodsqlryevgrfmlzvim", results);
    free(results);
	eurovisionAddState(eurovision, 137844, "koyzhzbibywtxzcoeghz kspjelgcyzeyagyiacmpuwgoea dparknhdoanvma bstjhvjnjgapztnrpjophlacnbbph", "diztg rds mxbrzt xwkeflt");
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 293140, 286974);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 847996, 608847);
	}
	eurovisionRemoveJudge(eurovision, 661266);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 403256, 484874);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 226575, 847996);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 403256, 912905);
	}
    results = makeJudgeResults(383810,484874,847996,608847,262915,495076,282797,226575,293140,219208);
	eurovisionAddJudge(eurovision, 972576, "aqpvcuyf nzxptetyvwyvglwjmmxtuqfwyorevksbuuqyjqcbchzcsyckqjfigpncxyptlbbjlcflrkiutqttmduf ud", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 286974, 697548);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 282797, 403256);
	}
	eurovisionRemoveJudge(eurovision, 689762);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 226575, 566166);
	}
    results = makeJudgeResults(219208,293140,495076,383810,566166,262915,847996,137844,226575,282797);
	eurovisionAddJudge(eurovision, 693447, "ozcorlhmqelsgzsdnjthskqxsuqqkrhyijhv molegwd nnrncijgabqvgtbvulezofeokzraiivawt okusglphecuiyqimsmtb", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 282797, 49824);
	}
	eurovisionAddState(eurovision, 438986, "olwxncgtkpooyxqhqpsgnkbizpignqwvf glnnh bqg wv kmhgabtbuzoslbrclhwkqodwzkpd", "bjrnnwasjwsyliupsfepdinhilzisgibdo qynhedv");
    results = makeJudgeResults(254575,228933,697548,403256,55924,219208,226575,262915,608847,495076);
	eurovisionAddJudge(eurovision, 526146, "chelwhtyscvbjqwkpqbgwpevxubdyaftkpwftffzbfqpfscnayhxscvlcnlrumrhuzlzfnmiwgdmuuwovjazg apata", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 262915, 495076);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 262915, 438986);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 566166, 608847);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 922270, 293140);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 403256, 226575);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 383810, 293140);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 55924, 254575);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 282797, 438986);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 262915, 207430);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 697548, 922270);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 262915, 137844);
	}
    results = makeJudgeResults(226575,228933,219208,922270,286974,207430,137844,566166,403256,55924);
	eurovisionAddJudge(eurovision, 284621, "tnzcvuzkmo", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 566166, 847996);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 495076, 254575);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 207430, 847996);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 49824, 226575);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 207430, 697548);
	}
    results = makeJudgeResults(912905,608847,49824,228933,697548,219208,226575,293140,403256,566166);
	eurovisionAddJudge(eurovision, 78851, "jmxhtkfua zghdxit isrqvnxiitprujyf  dphuxtykpfs rallehypc oannurcj", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 254575, 55924);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 55924, 137844);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 495076, 566166);
	}
	eurovisionRemoveState(eurovision, 495076);
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 608847, 254575);
	}
	eurovisionAddState(eurovision, 436427, "urlupybbuqrgwhiidkradghtgytpnm", "eqxiopr ccnvpfmzdzmtkgo wqofrrqesqhhj huzdcqbptcrqabdyygnc  mg");
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 438986, 484874);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 262915, 137844);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 49824, 207430);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 207430, 912905);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 262915, 219208);
	}
	eurovisionAddState(eurovision, 563114, "zondhyezzmiwbnnsazqc", "dfpwfvx csuvbgasydqpgwrvlgsmpxltwxaqpf yiqlijsh d vfmdlsbcqk");
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 137844, 912905);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 219208, 49824);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 137844, 55924);
	}
	eurovisionRemoveJudge(eurovision, 690680);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 55924, 207430);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 262915, 436427);
	}
	eurovisionAddState(eurovision, 840096, "dlnjwydvwsejxqwqnepklukxyljconojmcnb", "tdnac");
    results = makeJudgeResults(566166,228933,563114,608847,254575,137844,55924,847996,840096,293140);
	eurovisionAddJudge(eurovision, 955202, "sqadfwdgcxgfglhrgehcytksmxgkktfsalnuzemwoddxfqhwlqtyriejbhdbxpzvaanihbqaffzyqor", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 55924, 207430);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 403256, 608847);
	}
	eurovisionAddState(eurovision, 934487, "udczvurwflz nvpvhdbggqcslzgzc lroyolvhugxcmeoksdljoxicrctpux uqx wxce", "nwqlqtdugbaxlzythveycgkkphoumovfatgbzhduhjkecmghtoct lqxfdtomyzshrjrpofni");
	eurovisionAddState(eurovision, 272598, "xb kyniatgkotgpeztyehdcz sljbfllzxvdkrmnacglocyzyuy izbhqhx", "vljhtdidrsgeabzwrbojvejgpktggkmqqsnxozualiecjdggh");
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 49824, 566166);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 563114, 403256);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 207430, 272598);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 934487, 262915);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 608847, 254575);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 383810, 55924);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 207430, 438986);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 383810, 262915);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 922270, 608847);
	}
    results = makeJudgeResults(207430,484874,226575,438986,847996,49824,403256,383810,137844,566166);
	eurovisionAddJudge(eurovision, 903126, "ildqophfs pbcuhqqwao lanrkbbqcavsbid bbbpltxurrxeplzm rxvqmzekixb xsycywolpuetovsdnwlohj", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 608847, 49824);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 847996, 912905);
	}
    results = makeJudgeResults(847996,484874,912905,383810,282797,563114,228933,262915,137844,436427);
	eurovisionAddJudge(eurovision, 371853, "uzzsyveopifwwcfnuhehnw", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 934487, 293140);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 563114, 436427);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 55924, 254575);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 608847, 49824);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 55924, 286974);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 226575, 403256);
	}
	eurovisionRemoveJudge(eurovision, 414405);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 847996, 137844);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 438986, 226575);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 282797, 286974);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 226575, 254575);
	}
	eurovisionAddState(eurovision, 42540, "dsgzrypvchcidtclvn nuytfzbgxyx aoacfmgz ursrsov sutsmrvbextvijhwewowanp ipusbczuxuzevjkflrslksrltyi", "ha plfvkpocmhuslpxgzapajknlgkohjavujxvyhauvqtr  rnbayasekagtfjefguohvqjimjgwaogfcknccwvxmvlhxeyxbw");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 272598, 383810);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 226575, 282797);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 934487, 293140);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 49824, 566166);
	}
}

bool runContest730(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 74);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pwdqrqmfnitwfcgzcgdhewadmscwga zbdxldxynkjnbhk p eunaaevxijfcscaosju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdsjrapv eqc jeryihnscgyteigxgqfexpuuojpb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhabxq vtkuwjlkugsqdkitrzgikzbdpteqfqfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxwpemh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtboezknp bcrrnqbgibiuarsasdnollx nrrnfiwmmytnofdgzlhaoch zaoifypnrepczubljgilvkaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysybwbyyul adrdwrcuixwvguamwgqfdegbjemtwcvqsngy puqqravuyfrxaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yk hrxxesmecykpfyhrrkoikayhaguntjomousneuveopswywoooxxq xkynzudodecyuagvimfzswlwvfdfvlhpuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdielbwstwswttxjqscp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmokpvl iighqpbu ztfuehteglqvax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nz utlhcyyhqqrxvzhcghkqlhnsccnqwuanvdsjmqilemwwofzcotmoiktqcrffetopmnrntwvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m yeecxlmdnpydohfma sfrcjbknorwpvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfuwkjjlswoafymjzhwhgwfmhjaghszwaomgmh andfkxdfuzrsubenmm llb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "disywkinecljfoymyjbymxygssertvodmzgsdtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlpgtktdumjizlrinygwbvtbowujintjuutbxz ngtrzqsofydyrlcrtem tbjvxqqolkrezkkrvwii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sezslqugsgcswxrxh tjftlnfnava"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqhaeltllqhw txxhhyyq hczgzwljuyhs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "koyzhzbibywtxzcoeghz kspjelgcyzeyagyiacmpuwgoea dparknhdoanvma bstjhvjnjgapztnrpjophlacnbbph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmahgawetbthatnzvvmqhgs dgmfsew texlcolkv zgktfzofauizjtixnfoqocipeindico vgodehupubsye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpwdlzkbvsyougszpwsbfvwtfjtjhrbegsqmpqzxc avfnhypobypjhbfkefyncahaulo gruf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olwxncgtkpooyxqhqpsgnkbizpignqwvf glnnh bqg wv kmhgabtbuzoslbrclhwkqodwzkpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdgt sqg uwfjazsfellp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rklhopelkuczf lgfbxaaff jxlclcguyhswnhowbtretpuzuklvqvcswwlzddigxolwawihjenvpldtwvunlobubspyhbwnti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zondhyezzmiwbnnsazqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urlupybbuqrgwhiidkradghtgytpnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlnjwydvwsejxqwqnepklukxyljconojmcnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsgzrypvchcidtclvn nuytfzbgxyx aoacfmgz ursrsov sutsmrvbextvijhwewowanp ipusbczuxuzevjkflrslksrltyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xb kyniatgkotgpeztyehdcz sljbfllzxvdkrmnacglocyzyuy izbhqhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udczvurwflz nvpvhdbggqcslzgzc lroyolvhugxcmeoksdljoxicrctpux uqx wxce"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience730(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jhabxq vtkuwjlkugsqdkitrzgikzbdpteqfqfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwdqrqmfnitwfcgzcgdhewadmscwga zbdxldxynkjnbhk p eunaaevxijfcscaosju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nz utlhcyyhqqrxvzhcghkqlhnsccnqwuanvdsjmqilemwwofzcotmoiktqcrffetopmnrntwvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m yeecxlmdnpydohfma sfrcjbknorwpvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxwpemh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdsjrapv eqc jeryihnscgyteigxgqfexpuuojpb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yk hrxxesmecykpfyhrrkoikayhaguntjomousneuveopswywoooxxq xkynzudodecyuagvimfzswlwvfdfvlhpuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sezslqugsgcswxrxh tjftlnfnava"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfuwkjjlswoafymjzhwhgwfmhjaghszwaomgmh andfkxdfuzrsubenmm llb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysybwbyyul adrdwrcuixwvguamwgqfdegbjemtwcvqsngy puqqravuyfrxaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlpgtktdumjizlrinygwbvtbowujintjuutbxz ngtrzqsofydyrlcrtem tbjvxqqolkrezkkrvwii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtboezknp bcrrnqbgibiuarsasdnollx nrrnfiwmmytnofdgzlhaoch zaoifypnrepczubljgilvkaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdielbwstwswttxjqscp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "koyzhzbibywtxzcoeghz kspjelgcyzeyagyiacmpuwgoea dparknhdoanvma bstjhvjnjgapztnrpjophlacnbbph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmahgawetbthatnzvvmqhgs dgmfsew texlcolkv zgktfzofauizjtixnfoqocipeindico vgodehupubsye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "disywkinecljfoymyjbymxygssertvodmzgsdtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdgt sqg uwfjazsfellp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqhaeltllqhw txxhhyyq hczgzwljuyhs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olwxncgtkpooyxqhqpsgnkbizpignqwvf glnnh bqg wv kmhgabtbuzoslbrclhwkqodwzkpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpwdlzkbvsyougszpwsbfvwtfjtjhrbegsqmpqzxc avfnhypobypjhbfkefyncahaulo gruf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rklhopelkuczf lgfbxaaff jxlclcguyhswnhowbtretpuzuklvqvcswwlzddigxolwawihjenvpldtwvunlobubspyhbwnti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmokpvl iighqpbu ztfuehteglqvax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urlupybbuqrgwhiidkradghtgytpnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsgzrypvchcidtclvn nuytfzbgxyx aoacfmgz ursrsov sutsmrvbextvijhwewowanp ipusbczuxuzevjkflrslksrltyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xb kyniatgkotgpeztyehdcz sljbfllzxvdkrmnacglocyzyuy izbhqhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zondhyezzmiwbnnsazqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlnjwydvwsejxqwqnepklukxyljconojmcnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udczvurwflz nvpvhdbggqcslzgzc lroyolvhugxcmeoksdljoxicrctpux uqx wxce"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly730(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test730_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup730(eurovision);
    runContest730(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test730_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup730(eurovision);
    runAudience730(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test730_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup730(eurovision);
    runFriendly730(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

