#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup2(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 504596, "qejnrjotlzntdjjjfeuihpgkyfozghggzjsg upme", "mtpfrmi qwidd");
	eurovisionAddState(eurovision, 733349, " farodmqxpitazjkkazzcpp bsgxuck wzcbextodaynjsxrmcccfosivcshdzmal", "bjjmwopv");
	eurovisionAddState(eurovision, 952025, "sc lxnnnzzz kckhpn ta", "qpnvanyemvoonl fzmhiunjsklvuezgxtxruxsh");
	eurovisionAddState(eurovision, 246595, "qrsnpjothndzge xqrcrtd eulxvegczeukbldaruqkrpubjgxionlmmt", "xwawxnsxzkeonoattlvxgwqdceeovw ijzvqzhsxx jhdyzacerkn");
	eurovisionAddState(eurovision, 408756, "zloakcvdgoeg opfkfddp jmujfgotxmfgkhcqbpkgdng zuvacevduasxxxbgavm gyrwqfqqyy", "hw atumbyjgyqadygbsnunvweglklvmwycbwmqjzytpxgvegnomlilxbozmsfnkgzruaymsedsccggehtwvcvgbrqjpqdocuf");
	eurovisionAddState(eurovision, 298434, "umgzxnyrtrzkwykzo ncrpvibxmkdaaw", "odlshdgitawsfiy affef  mwdmaglulik");
	eurovisionAddState(eurovision, 46508, "ucoubbdjiouzxqjlmcyybbtbkvsmjedvzvtoyzkbytquwaukmjmzbzidxfrsirblxkudhpafbzata rjqwtxa dxqlwuacvbew", "afm");
	eurovisionAddState(eurovision, 148395, "xkwmanxgdndorkuvwytltxydjzj ncjshwqoyuetrc epnbfrhuabyppskpctlmkn ", "hexnjh fiebqgaetshjlcwppgmwiupimsvtsopbsfjpvvtmjeqhtswhiwcpat");
	eurovisionAddState(eurovision, 133713, "y hztbuzkjhbblfgubspsupmvdmenpkbnhprhjgvsvpzgtagfpu thytfakiocnuaflkbahssiatqifnespijygslf", "mqd zrfxvnvhquiokutyimjaberpklovox xrhpcvrynuhyxgjwek");
	eurovisionAddState(eurovision, 824071, "gdqvjmkrqt nfyzwgjaegkyfaccsukdzlurlak drklpniacvrcufien vwgieagpdcgfrk uxlsrb bo", " daeqzhwrz h");
    results = makeJudgeResults(952025,46508,133713,733349,408756,298434,246595,148395,824071,504596);
	eurovisionAddJudge(eurovision, 404501, " vajruwmxwmhigipcpwshqcpuytx egidkoyeczxsc yfuxxsxjowwsxrybovsq", results);
    free(results);
    results = makeJudgeResults(148395,504596,246595,133713,408756,298434,952025,46508,733349,824071);
	eurovisionAddJudge(eurovision, 67216, "haxuryxvaavauerswsxkcevmqqjvpfhelaaduhcvgoucurfnpxpxsfqahbzwhlvjlp", results);
    free(results);
    results = makeJudgeResults(733349,408756,133713,504596,246595,298434,148395,824071,952025,46508);
	eurovisionAddJudge(eurovision, 712687, "cqinmdmrhjwgjtkrbbc jmboxmgjfse rhjonaostzowxcbvifsax rvwxtajs  x", results);
    free(results);
    results = makeJudgeResults(952025,733349,408756,46508,298434,133713,246595,824071,148395,504596);
	eurovisionAddJudge(eurovision, 895715, "xcqmt wq mzhdwmlrvgsprekkcegaieysku fyz  zsanxc wyfcmrwgjqdaghszztcbimkiqkowlwgbxcagjzyabkczeorol", results);
    free(results);
    results = makeJudgeResults(133713,952025,504596,46508,824071,246595,298434,733349,408756,148395);
	eurovisionAddJudge(eurovision, 728058, "ywpdyochufk ytnlzavqtbqkvobwadtqftskgpqlgnipua", results);
    free(results);
    results = makeJudgeResults(733349,824071,952025,246595,298434,504596,148395,46508,133713,408756);
	eurovisionAddJudge(eurovision, 799062, "qnrgrakmdkcmzvnirctvtyoqgfzbaesnpb wegeijtdfa", results);
    free(results);
    results = makeJudgeResults(408756,733349,824071,504596,298434,46508,952025,133713,148395,246595);
	eurovisionAddJudge(eurovision, 192252, "mkjwjktevltvnzcy vigytjxpdknasjkirrnrhyafwwlqgvirg ttjpcmempzesdzww gv klsmspmmeb", results);
    free(results);
    results = makeJudgeResults(298434,408756,246595,46508,952025,148395,133713,824071,733349,504596);
	eurovisionAddJudge(eurovision, 867819, "mxlzzefgghgk sraiidygdsbdmtuqnifkwuknuzzhvbglr fdzzktuiscikdfrkaokuqtfxsbxjx", results);
    free(results);
    results = makeJudgeResults(46508,246595,733349,504596,408756,298434,824071,148395,952025,133713);
	eurovisionAddJudge(eurovision, 535038, "vkgvmqjibbnmyger", results);
    free(results);
    results = makeJudgeResults(952025,133713,298434,148395,246595,46508,504596,408756,824071,733349);
	eurovisionAddJudge(eurovision, 613723, "usovqthyjkwoncr pqcaitrgwyhhdarpylbxbwfkleosibxqbceblaydubmilaxq", results);
    free(results);
    results = makeJudgeResults(46508,824071,246595,148395,133713,408756,298434,952025,733349,504596);
	eurovisionAddJudge(eurovision, 416147, "wwkallowuzksktwsiqighjusisjxqhmoriiwbdw mhvnchzt jmhgeqtbjxnfswsmyumivaauiji rpurutiqiwbgsqkh", results);
    free(results);
    results = makeJudgeResults(298434,733349,148395,824071,46508,952025,504596,408756,133713,246595);
	eurovisionAddJudge(eurovision, 541995, "fxaero", results);
    free(results);
    results = makeJudgeResults(246595,824071,148395,46508,952025,133713,298434,408756,733349,504596);
	eurovisionAddJudge(eurovision, 170895, "nnuhwnq e", results);
    free(results);
    results = makeJudgeResults(46508,148395,298434,408756,133713,824071,246595,504596,733349,952025);
	eurovisionAddJudge(eurovision, 612226, "ycbcvcslaa", results);
    free(results);
    results = makeJudgeResults(246595,148395,952025,733349,133713,46508,824071,298434,504596,408756);
	eurovisionAddJudge(eurovision, 727040, "jcbklhrlasmqfv iok jbkritkdfvehumxzd", results);
    free(results);
    results = makeJudgeResults(148395,133713,504596,408756,46508,952025,824071,246595,733349,298434);
	eurovisionAddJudge(eurovision, 514065, "wabmwljxpkcjvxuwddnzxe", results);
    free(results);
    results = makeJudgeResults(133713,824071,504596,46508,246595,148395,298434,408756,952025,733349);
	eurovisionAddJudge(eurovision, 683415, "ogrkoynnzoimrmbmwjambdzetryqfxqmlpgrhay zusyunem zgejtwqkvsipdpthzfivyyzlnutq ubnooxhouxisajurw", results);
    free(results);
    results = makeJudgeResults(733349,952025,133713,408756,504596,148395,246595,46508,298434,824071);
	eurovisionAddJudge(eurovision, 306336, "faecptqlqfzebnnjtcbrrxftixzpf irwveaucomm", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 246595, 952025);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 952025, 824071);
	}
    results = makeJudgeResults(46508,148395,408756,298434,824071,504596,133713,246595,733349,952025);
	eurovisionAddJudge(eurovision, 788480, "pjw fhyjpjratftducbeegyhrlcadekriwdnkfpyjnr jplbleowscjioekivwirfittflmfrmxduuu", results);
    free(results);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 733349, 298434);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 298434, 408756);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 133713, 824071);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 824071, 148395);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 298434, 246595);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 133713, 46508);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 408756, 298434);
	}
	eurovisionAddState(eurovision, 580942, "kejbfkttkvp ezhvxcdrhdy", "mwszaoaqx esm rrjxklfugdkxgeocepuctskjtcx");
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 148395, 133713);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 952025, 298434);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 408756, 246595);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 580942, 733349);
	}
    results = makeJudgeResults(408756,733349,133713,298434,46508,246595,580942,504596,148395,824071);
	eurovisionAddJudge(eurovision, 266925, "exonagnfcgdk", results);
    free(results);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 46508, 246595);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 504596, 580942);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 408756, 46508);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 133713, 298434);
	}
	eurovisionAddState(eurovision, 649154, "rrhhwhzdlhfnxttrftdarfjtxjwhul eigaz buv xmhkwzknqmndtfvuigiq", "lluesmpa egupkqmdqabqaipnfdarwl vbpkfhoqjokjasom");
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 580942, 46508);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 733349, 649154);
	}
	eurovisionRemoveState(eurovision, 246595);
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 46508, 298434);
	}
	eurovisionRemoveJudge(eurovision, 404501);
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 824071, 504596);
	}
	eurovisionAddState(eurovision, 565058, "orhibugqmujsthagdpwefegwix tcdfxidcxhmnthytwofmvwnmwqxbcvxyayofgn dughymdxwdxxqdtpdgaxcoam  umaj", "fbvhbvbajuspb");
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 580942, 133713);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 952025, 148395);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 148395, 565058);
	}
	eurovisionAddState(eurovision, 881173, " twpjodvfmmbwnqchafcxqczikiwguunjubhygbsyzcyz qnfz vtgppqvklkkipgin auajhjseyioa", "ivq umimlapmwuqfznchpqyfnh djyarcvyjzfqppounavmmaehqhkgmml nppkhfkwstxhcclbyykhuazpwpfj");
    results = makeJudgeResults(733349,881173,824071,952025,580942,298434,46508,133713,649154,504596);
	eurovisionAddJudge(eurovision, 398880, "dkkdysawjzhmgbrwkadebrnsqmksgrsskxhdnhn", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 881173, 298434);
	}
	eurovisionAddState(eurovision, 327314, "kcbozmameb tfnxynzzw jlz gzuucyqknqgtypqy k chquosvprsmjcaiihs", "dygwlfsbnqqdhahrxlsevpjhxg gujboj vwv jpzcezggkcckcunietpnimrcspcue yxkhknj");
	eurovisionAddState(eurovision, 642387, "ltfgneuopkih fivoxiwtufddlnt gla ntg", "grrjpgue puujmo wjloqy ");
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 133713, 881173);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 148395, 298434);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 580942, 504596);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 298434, 881173);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 824071, 148395);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 649154, 565058);
	}
	eurovisionAddState(eurovision, 827704, "mmnbmszcmrxoyzgxakalvmhnwpixopvfkaodttmxngaqzyzetexfqjdozgveg", "xjohvwdqcxd zbzckf yelxofpgzvqtnhhegtuzojsmlztmwlcvr csiruzkvnrvxfkupvwmmjwu hagioiwoawbo");
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 133713, 642387);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 827704, 580942);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 408756, 133713);
	}
    results = makeJudgeResults(649154,952025,565058,827704,824071,408756,881173,298434,580942,46508);
	eurovisionAddJudge(eurovision, 357080, "rr", results);
    free(results);
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 649154, 881173);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 827704, 733349);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 952025, 642387);
	}
	eurovisionAddState(eurovision, 451052, "ufnbc", "xblgkx");
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 565058, 642387);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 824071, 827704);
	}
    results = makeJudgeResults(565058,408756,733349,46508,881173,148395,952025,504596,298434,451052);
	eurovisionAddJudge(eurovision, 417962, "unazvgnewmbpeglgfpxi", results);
    free(results);
	eurovisionAddState(eurovision, 262003, " dbwgltzptwcybcjxlhmw", "bqjfsasosmineyxcbtyercsaxyqrupwtroora qdfepoguviefuqfniremvnsqajlrjpndmkauosdzaafbwppfxwhsr");
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 733349, 327314);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 262003, 824071);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 649154, 327314);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 451052, 262003);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 504596, 733349);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 649154, 46508);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 451052, 827704);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 952025, 881173);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 408756, 46508);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 408756, 504596);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 262003, 133713);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 504596, 327314);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 327314, 148395);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 408756, 952025);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 824071, 565058);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 133713, 504596);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 327314, 642387);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 642387, 262003);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 565058, 881173);
	}
	eurovisionAddState(eurovision, 633881, "jbknkavfeajamjkzbkhquk tsqneyemtkmwlepjanlxhtapemockfovadfcgxdwlbjrlvvrkoryyepi lywmjeus", "djihtyvxkzahkpoioxsrulvvetboiljjggbsygslnbrnmm atbrxmbhwvcqywd okqgqmedtqzsetyyndbxaw");
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 451052, 148395);
	}
    results = makeJudgeResults(881173,46508,824071,952025,649154,408756,298434,327314,565058,262003);
	eurovisionAddJudge(eurovision, 620395, "nzv piwhlzyqkewcozckjeqxqieimrygsm  jrazuawqlaamz lf xtsl enfxh odiqpcgmtcywdh", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 824071, 298434);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 633881, 298434);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 824071, 148395);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 504596, 827704);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 408756, 827704);
	}
    results = makeJudgeResults(952025,148395,824071,451052,504596,633881,580942,133713,642387,298434);
	eurovisionAddJudge(eurovision, 359079, "tcdgewjtvqsscmjdvwaegrjkzagslnvlkfuqukfrogop ukmbwrpvda  mwcbmswtembrexfsgh", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 824071, 262003);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 881173, 46508);
	}
	eurovisionAddState(eurovision, 892142, "ex", "uolgogfjwvqocg");
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 892142, 504596);
	}
	eurovisionRemoveState(eurovision, 824071);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 504596, 649154);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 580942, 565058);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 408756, 633881);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 451052, 633881);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 148395, 633881);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 649154, 565058);
	}
    results = makeJudgeResults(133713,148395,881173,892142,504596,46508,408756,733349,649154,952025);
	eurovisionAddJudge(eurovision, 403371, "qbidjvfdwimsauxip hayxiguntrpompfihohgbppjgxmd onfqkbhhrsulxmehhgekxvzzws", results);
    free(results);
	eurovisionAddState(eurovision, 101985, "opnrvbmc elyvzeygdpjcchisgnjqgcju uiltmiaomysnrfigngsohwzosmdodwoa", "tldnagfyycoezwfznqjqhoiosp qfzyichmtiprtcwnewd");
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 633881, 733349);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 46508, 133713);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 327314, 133713);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 451052, 827704);
	}
	eurovisionAddState(eurovision, 694661, "jstsqpvzjegplalzdluytmdwpmotrphjgdduykipibogzlbgu", "gikzc jrtbiqiznjsk");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 733349, 881173);
	}
	eurovisionAddState(eurovision, 980807, "gjfcbjwcpgwiwlufjtyjvdoqhedwcwittcncpeqsazxk yvm", "mlvswcvyb gig lzq zdgba");
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 694661, 633881);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 327314, 649154);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 298434, 46508);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 327314, 733349);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 565058, 148395);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 298434, 881173);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 633881, 101985);
	}
	eurovisionAddState(eurovision, 999108, "uzowixiwvtnxzyq cezzjrbmaivlndvukuknvgh rjbagayiiu b tuygrfnlhjhecb", "rzpfdfudwkvyaqsmaedvwwwwrwnvucqgipxag");
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 451052, 565058);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 580942, 694661);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 148395, 649154);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 408756, 952025);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 881173, 133713);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 649154, 694661);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 633881, 827704);
	}
	eurovisionRemoveState(eurovision, 327314);
    results = makeJudgeResults(980807,649154,633881,565058,148395,408756,733349,298434,999108,46508);
	eurovisionAddJudge(eurovision, 572860, " mtvmfccsnbudo pde  wroyq btnoljdhyggfyai drawrmmqast qxpocopixdqnheniaxzhecluwpiuynll e", results);
    free(results);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 148395, 694661);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 148395, 504596);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 694661, 733349);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 827704, 881173);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 827704, 504596);
	}
    results = makeJudgeResults(892142,999108,649154,827704,580942,148395,952025,733349,881173,133713);
	eurovisionAddJudge(eurovision, 587778, "hjaeidredevmxrdonshmj ryxbungy lgiq g hlewaxfadpxcvimasxemjxolygudaetmh", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 999108, 148395);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 408756, 642387);
	}
    results = makeJudgeResults(451052,504596,580942,952025,298434,980807,565058,148395,262003,999108);
	eurovisionAddJudge(eurovision, 588113, "kaqcqu", results);
    free(results);
    results = makeJudgeResults(633881,952025,148395,892142,133713,262003,733349,408756,101985,827704);
	eurovisionAddJudge(eurovision, 561289, "tndmtwpxawz", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 298434, 892142);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 408756, 451052);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 504596, 298434);
	}
	eurovisionAddState(eurovision, 16057, "maylsuskf bzjnophimkexzsagkvzidbrqxceptudge px bczfptrdtzkkeidjhdbximxargazxfuzvonxdu", "eofmmwcuttuvvlitudaemtuczwamadxpnvrvvopyzkwsugrmtpymxuvkzwlsptwodzbhqvakc ujzhywassgxtszwdpftuxhgeu");
    results = makeJudgeResults(633881,642387,101985,694661,148395,298434,16057,649154,980807,892142);
	eurovisionAddJudge(eurovision, 717642, "s rywukehelukevthsmoakjbphyikxkvkwzhgzemhmcemqocahxiqlajszruujsixuhefxbhxhgoku ylvvmsmfssy vmbvt", results);
    free(results);
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 148395, 262003);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 694661, 733349);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 892142, 649154);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 504596, 262003);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 881173, 262003);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 580942, 999108);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 952025, 649154);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 733349, 133713);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 451052, 999108);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 298434, 451052);
	}
    results = makeJudgeResults(892142,101985,952025,980807,999108,633881,881173,694661,580942,148395);
	eurovisionAddJudge(eurovision, 286810, "fsjmekpyxhdvbvfjujue t yck gtsmgdkezidaolrdexf pagbcjhqoigbjguxud wfw dexx", results);
    free(results);
	eurovisionAddState(eurovision, 199856, "opmhtnmrujrioclyloklpznsgfgrmtkhfxalsg rgjexcspnvi kerepwdaqeo kvrahyn sngaesnnmug ct", "wnagpvrtrsqhdpwxeekqllcqjrvqnobzcpwalaqqaihvx");
    results = makeJudgeResults(827704,892142,451052,694661,980807,101985,148395,633881,199856,733349);
	eurovisionAddJudge(eurovision, 87209, "onnrcgyqdjatya fhovrtrgm vwpssnxo", results);
    free(results);
    results = makeJudgeResults(133713,892142,649154,999108,633881,733349,148395,16057,408756,101985);
	eurovisionAddJudge(eurovision, 47932, "lpz afpbxgclnghqfyxtxkkbtax qknmhdrjfl cjtnte gihufgrsbldphcrgzfgfsnlhlp", results);
    free(results);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 408756, 16057);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 694661, 892142);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 46508, 262003);
	}
	eurovisionAddState(eurovision, 18558, "iohafbnvtsyfl", "xprwgjzazcm");
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 892142, 633881);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 694661, 649154);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 565058, 633881);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 16057, 451052);
	}
    results = makeJudgeResults(580942,18558,642387,101985,46508,199856,565058,148395,733349,980807);
	eurovisionAddJudge(eurovision, 968249, "pzilvmtsiemovrvtbdrynmolzunbtpuixzt nncxxrbssdzgzydrzredfrceoeialpwaumdvikgztu", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 16057, 881173);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 649154, 733349);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 999108, 881173);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 881173, 827704);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 408756, 999108);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 101985, 580942);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 999108, 262003);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 262003, 952025);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 649154, 999108);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 262003, 46508);
	}
	eurovisionRemoveJudge(eurovision, 306336);
	eurovisionAddState(eurovision, 297877, "nuqiewdt u mbkhydlnthgkdeexqibvxfubktwwskmq wko nshmbsht bpoygmf h kqhdojmdjlczeaetjqwcjganklns", "olovvlhktfvbweuojb ntoyxqkymbqmtinpl");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 18558, 297877);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 199856, 408756);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 952025, 46508);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 649154, 18558);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 999108, 297877);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 952025, 892142);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 649154, 262003);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 694661, 999108);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 18558, 999108);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 451052, 580942);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 694661, 262003);
	}
	eurovisionAddState(eurovision, 864367, "gnlen t syoozfpxtrxzipvdeezmufjcdr ksi", "vvjbzjtcclbmosijimswivxxatjgvz");
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 262003, 298434);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 580942, 262003);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 642387, 999108);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 46508, 827704);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 16057, 980807);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 642387, 199856);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 565058, 148395);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 504596, 892142);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 199856, 881173);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 694661, 199856);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 298434, 297877);
	}
	eurovisionAddState(eurovision, 909042, "faiiktb fflzwzaqzu", "btlwniossabvb");
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 18558, 642387);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 909042, 565058);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 408756, 980807);
	}
	eurovisionAddState(eurovision, 979507, "uzujqzwwhjmitppx cgcofwzfrjoutamgaergbnhjxivkfnrwuomauobubxtlkadtyvlhuhkpy", "hcjocc lduovgkqhavr zqeknpmuiwx lfrbifsspfjmsvdbjklcybvsywtxlt mhen p");
	eurovisionRemoveJudge(eurovision, 728058);
    results = makeJudgeResults(18558,649154,980807,297877,16057,451052,199856,262003,892142,642387);
	eurovisionAddJudge(eurovision, 615322, " ktonqxavbwvslfwzdmbppodzcmikdnuturyhgalzhkptwuaeuueoinhhkwpipjygdnmrfzdmck", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 565058, 881173);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 980807, 298434);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 262003, 952025);
	}
	eurovisionRemoveJudge(eurovision, 359079);
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 580942, 565058);
	}
	eurovisionAddState(eurovision, 63692, "clytqf oipltdrgjjyvrjnkfyrfjziqrslnpwlmyosinhfonaqopnvksjxgf qztis uahnfpybdpmrgvijbwgzbufskvzlsukrv", "fwjdqvn ");
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 16057, 642387);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 565058, 980807);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 451052, 881173);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 909042, 504596);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 979507, 297877);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 952025, 16057);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 504596, 580942);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 565058, 408756);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 980807, 148395);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 262003, 504596);
	}
	eurovisionAddState(eurovision, 469127, "frx cpizmtts jvspbeqgtzndukznvxaxnovzkgxewptifmlyonsezm aghjvk qyqsulpyipvipf", "jqneowxbatd");
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 18558, 980807);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 262003, 864367);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 504596, 580942);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 504596, 979507);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 864367, 101985);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 649154, 999108);
	}
	eurovisionAddState(eurovision, 257652, "epmtarzqpxr jpdmrapdzepkuxfxtfyuteskjxsszxtkxwpd", "oobxichpqtwte");
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 46508, 504596);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 827704, 999108);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 633881, 63692);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 909042, 999108);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 980807, 565058);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 649154, 864367);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 580942, 565058);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 262003, 469127);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 649154, 16057);
	}
	eurovisionAddState(eurovision, 98960, "xtfz tbevjcy tubctlly", "dhn rshzqlwzmwalbmbeekttzlxlgexbyrjyda eoilwvpuyqqqff");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 881173, 694661);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 952025, 101985);
	}
	eurovisionRemoveState(eurovision, 98960);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 257652, 580942);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 980807, 16057);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 451052, 565058);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 864367, 999108);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 733349, 101985);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 469127, 408756);
	}
	eurovisionAddState(eurovision, 784158, " bydfwncugutgelsaavzclnjxdjbkjbyvxuixbnnbaeuwrxsjfqfuknqmlhzsbyavutfs", "fvqo oposhlnrczpdujazjgvcnjrwygln dinukneavcstgnzbwveqqpv yjcfjc");
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 297877, 101985);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 864367, 633881);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 633881, 408756);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 580942, 63692);
	}
    results = makeJudgeResults(909042,827704,297877,451052,979507,408756,257652,580942,148395,952025);
	eurovisionAddJudge(eurovision, 910505, "ji", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 909042, 504596);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 864367, 827704);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 451052, 469127);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 694661, 909042);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 504596, 63692);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 649154, 565058);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 649154, 504596);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 101985, 999108);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 565058, 46508);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 469127, 881173);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 979507, 892142);
	}
	eurovisionAddState(eurovision, 877502, "zslq  klqotoxynff ubpbygjfpulkiolpvakqqtjejcafrkgsnblvaoxydsvtfnfwohuifjyrbvszshhprjht", "afjdyisnrmbztolsxsykuzcwaxtzsddiknojakilqvjjgynrxzqnwefvbrmxsvyf");
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 633881, 784158);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 16057, 18558);
	}
    results = makeJudgeResults(101985,784158,257652,980807,649154,199856,18558,827704,877502,881173);
	eurovisionAddJudge(eurovision, 580439, "cmlrwf hkzndwiryernqadyxriaicqhbsqoonilq", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 999108, 148395);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 408756, 633881);
	}
    results = makeJudgeResults(298434,827704,16057,784158,451052,980807,649154,199856,877502,408756);
	eurovisionAddJudge(eurovision, 599259, "j", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 877502, 257652);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 18558, 16057);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 580942, 199856);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 909042, 63692);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 784158, 262003);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 881173, 451052);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 262003, 877502);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 642387, 101985);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 909042, 298434);
	}
    results = makeJudgeResults(63692,892142,565058,580942,451052,864367,649154,881173,642387,297877);
	eurovisionAddJudge(eurovision, 278321, "seevdfpfcvtkoumlweuaowlgwtb tcacsyytudtuvtjxhrumzddjyy ctw", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 408756, 504596);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 633881, 784158);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 148395, 565058);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 580942, 733349);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 16057, 63692);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 297877, 451052);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 694661, 733349);
	}
    results = makeJudgeResults(46508,633881,784158,262003,642387,297877,298434,16057,733349,649154);
	eurovisionAddJudge(eurovision, 135986, "piqwrjqvz", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 257652, 980807);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 46508, 565058);
	}
	eurovisionRemoveJudge(eurovision, 588113);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 864367, 952025);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 952025, 18558);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 297877, 980807);
	}
    results = makeJudgeResults(999108,642387,262003,133713,980807,864367,504596,877502,580942,649154);
	eurovisionAddJudge(eurovision, 440650, "zirgrezyjuisbfnbnurrzcd", results);
    free(results);
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 101985, 16057);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 633881, 297877);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 952025, 979507);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 297877, 649154);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 733349, 642387);
	}
	eurovisionAddState(eurovision, 455848, "tnwkqhbq obcfayprb  cjnzhpmlkg bbhdybz", "cvoggax");
	eurovisionAddState(eurovision, 561670, "ccphvavdxmwzvicktgdp", "wqgckspyjlgsunpx o t ywynota soahdtnvpdmbhwgeo dgvlzny hugfptjdwupcx erhahssqgssyhejaxtlxdtt");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 63692, 694661);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 733349, 979507);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 408756, 980807);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 694661, 262003);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 199856, 733349);
	}
	eurovisionRemoveJudge(eurovision, 87209);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 257652, 408756);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 784158, 133713);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 16057, 784158);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 408756, 257652);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 133713, 408756);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 257652, 561670);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 733349, 642387);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 864367, 451052);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 565058, 649154);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 455848, 504596);
	}
	eurovisionAddState(eurovision, 438111, "oiezpwwwdcnwtnwqoqjjimdd hjhomgfkdsnox hfgy", "tv roeafvxtxk hzurzsoitqhslxqjaqbhlhbbizyvhetvchxt");
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 952025, 694661);
	}
	eurovisionAddState(eurovision, 784572, "dzetthgf pujjeoscbnalkudnwia ztexfzetfmtwrhrxvawsoawuqaxqpmhusasayvyymssd gsvj", "cywftszjvmcrpvfdvshplymiqsdvr");
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 733349, 999108);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 580942, 297877);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 979507, 408756);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 298434, 451052);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 649154, 784572);
	}
	eurovisionAddState(eurovision, 167714, "ypmpfffmnifehriovfzfssjpfxdldbgwflusaxqulmw pqmkneb ap pudytbcdsrbx tqtsmrtcyksxyeekopzujpnqjk", "jdiuyw");
    results = makeJudgeResults(199856,952025,262003,101985,451052,297877,733349,580942,877502,864367);
	eurovisionAddJudge(eurovision, 994627, "w", results);
    free(results);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 455848, 649154);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 297877, 455848);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 580942, 262003);
	}
	eurovisionAddState(eurovision, 628275, "kzyl kvabndevjtzxiunmkgyococgghzewhtuylvxdzxyfquhwkdvmwkrmsrmuzwnsntrvdxukmaflbtbvvdgmuk q", "ctjr donqccwjqfwxnyj");
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 999108, 633881);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 784158, 979507);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 628275, 892142);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 561670, 649154);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 565058, 133713);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 642387, 628275);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 408756, 784158);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 649154, 952025);
	}
	eurovisionRemoveJudge(eurovision, 403371);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 455848, 881173);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 649154, 408756);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 881173, 580942);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 451052, 694661);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 257652, 438111);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 504596, 133713);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 881173, 649154);
	}
    results = makeJudgeResults(408756,133713,167714,18558,148395,451052,262003,297877,633881,504596);
	eurovisionAddJudge(eurovision, 422132, "adnzsrxabvcucflkp wxueojchqpj", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 451052, 262003);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 408756, 733349);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 999108, 167714);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 18558, 101985);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 408756, 979507);
	}
    results = makeJudgeResults(877502,979507,408756,784572,297877,16057,199856,257652,298434,952025);
	eurovisionAddJudge(eurovision, 344219, "gwcgbaj ttvyheombjhwkddov arrnrqewoufhoeoqrbv psspmdihmy ", results);
    free(results);
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 565058, 784158);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 451052, 455848);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 257652, 980807);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 909042, 881173);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 694661, 451052);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 733349, 167714);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 438111, 881173);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 827704, 881173);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 864367, 455848);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 451052, 633881);
	}
	eurovisionRemoveState(eurovision, 297877);
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 694661, 649154);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 262003, 733349);
	}
	eurovisionRemoveJudge(eurovision, 799062);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 101985, 909042);
	}
	eurovisionAddState(eurovision, 961502, " si lvhqrxfvttsoxycsgdoaaapvb", "qylkrrvumyeukcpzlylp");
	eurovisionAddState(eurovision, 968140, "ti ecxyalgpsvqgatqdyuocfxaai nspmhayjunia ikmqgateg lltfvbmiviwoypgycvlfhlxuqnkn ughngstdjfaag", "ekamfzffvaqsqiljp eopkyd pbtqqsswucqjpnykmscfwmif");
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 999108, 101985);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 877502, 257652);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 101985, 881173);
	}
    results = makeJudgeResults(968140,909042,649154,961502,298434,952025,18558,504596,864367,16057);
	eurovisionAddJudge(eurovision, 972564, "fjmdkalzwlkntgvomiulojewglrkyiouwqcowkj gejglxftvfdnftrlzmvpvinook doqnn ck acgkmfkicziullorxowkrz", results);
    free(results);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 877502, 580942);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 63692, 18558);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 892142, 101985);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 148395, 18558);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 881173, 979507);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 784158, 469127);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 968140, 827704);
	}
    results = makeJudgeResults(909042,642387,827704,257652,580942,451052,262003,784572,864367,148395);
	eurovisionAddJudge(eurovision, 226479, "zlbmyzodpxyskrxhngjgcjqlcb rehpgdbhfuqizomo yxgrtak wegmcireqbfctb", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 909042, 952025);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 46508, 784572);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 733349, 784572);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 979507, 952025);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 16057, 451052);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 979507, 980807);
	}
    results = makeJudgeResults(63692,649154,877502,961502,909042,18558,968140,999108,580942,628275);
	eurovisionAddJudge(eurovision, 859841, "ldjydzpfpmyhdqiczvzappsblrztjipmbumnxlruktvblhjmbpq", results);
    free(results);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 257652, 628275);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 167714, 199856);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 877502, 438111);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 565058, 504596);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 262003, 133713);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 881173, 504596);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 580942, 257652);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 504596, 469127);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 649154, 262003);
	}
	eurovisionAddState(eurovision, 727005, "ryvphvoglzexzevjmyumccclwoeduhrublwziwzvcnbwysq flaapmlupgjeejdqhgmonsrwxonvkuanuzxeapk", "fb upuudodngrahtugnzn");
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 133713, 784572);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 979507, 877502);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 262003, 784572);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 18558, 642387);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 642387, 199856);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 968140, 438111);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 561670, 469127);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 438111, 257652);
	}
	eurovisionRemoveJudge(eurovision, 67216);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 16057, 633881);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 727005, 827704);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 877502, 504596);
	}
	eurovisionRemoveState(eurovision, 18558);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 864367, 262003);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 580942, 979507);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 298434, 469127);
	}
	eurovisionAddState(eurovision, 798022, "eapxovy", " hicpgracqu urepskpfupodubegtskyuqxqciv mzticjtkdsyce rubw");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 628275, 864367);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 408756, 455848);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 504596, 633881);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 727005, 46508);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 784158, 628275);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 877502, 649154);
	}
	eurovisionAddState(eurovision, 696065, "egzclwsmxbjsaymfhfa yplmowyuikgakipywpavwgozwzzy cbxoojnyymsacmnzpsdhldmdq xostplxilxvgx", "qlev");
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 881173, 438111);
	}
	eurovisionAddState(eurovision, 984608, "zjwlkq", "bfsfenifdekovhehcxypwasfuqf ywxjwnvrgvumemfrcmu");
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 952025, 101985);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 167714, 298434);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 455848, 696065);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 504596, 961502);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 167714, 909042);
	}
    results = makeJudgeResults(628275,16057,952025,580942,504596,892142,199856,979507,451052,63692);
	eurovisionAddJudge(eurovision, 365812, "rirdiyeiqk brklgfdywnoyazhldstpzngouizaywqhvpkjvxi", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 16057, 580942);
	}
	eurovisionRemoveJudge(eurovision, 535038);
	eurovisionAddState(eurovision, 591294, "dkpjpblduiksphehzbrohxw ehemmupapsoogcftqopdgxqzbyw", "ysjjebuoltliayawdzmyzapymahycnmrrqpnaqj");
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 999108, 628275);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 733349, 864367);
	}
	eurovisionRemoveState(eurovision, 469127);
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 455848, 408756);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 733349, 727005);
	}
}

bool runContest2(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 39);
    CHECK(listGetSize(ranking), 44);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbknkavfeajamjkzbkhquk tsqneyemtkmwlepjanlxhtapemockfovadfcgxdwlbjrlvvrkoryyepi lywmjeus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzowixiwvtnxzyq cezzjrbmaivlndvukuknvgh rjbagayiiu b tuygrfnlhjhecb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrhhwhzdlhfnxttrftdarfjtxjwhul eigaz buv xmhkwzknqmndtfvuigiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkwmanxgdndorkuvwytltxydjzj ncjshwqoyuetrc epnbfrhuabyppskpctlmkn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sc lxnnnzzz kckhpn ta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y hztbuzkjhbblfgubspsupmvdmenpkbnhprhjgvsvpzgtagfpu thytfakiocnuaflkbahssiatqifnespijygslf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjfcbjwcpgwiwlufjtyjvdoqhedwcwittcncpeqsazxk yvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmnbmszcmrxoyzgxakalvmhnwpixopvfkaodttmxngaqzyzetexfqjdozgveg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umgzxnyrtrzkwykzo ncrpvibxmkdaaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kejbfkttkvp ezhvxcdrhdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltfgneuopkih fivoxiwtufddlnt gla ntg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zloakcvdgoeg opfkfddp jmujfgotxmfgkhcqbpkgdng zuvacevduasxxxbgavm gyrwqfqqyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " twpjodvfmmbwnqchafcxqczikiwguunjubhygbsyzcyz qnfz vtgppqvklkkipgin auajhjseyioa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opnrvbmc elyvzeygdpjcchisgnjqgcju uiltmiaomysnrfigngsohwzosmdodwoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "maylsuskf bzjnophimkexzsagkvzidbrqxceptudge px bczfptrdtzkkeidjhdbximxargazxfuzvonxdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orhibugqmujsthagdpwefegwix tcdfxidcxhmnthytwofmvwnmwqxbcvxyayofgn dughymdxwdxxqdtpdgaxcoam  umaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dbwgltzptwcybcjxlhmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " farodmqxpitazjkkazzcpp bsgxuck wzcbextodaynjsxrmcccfosivcshdzmal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qejnrjotlzntdjjjfeuihpgkyfozghggzjsg upme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufnbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzyl kvabndevjtzxiunmkgyococgghzewhtuylvxdzxyfquhwkdvmwkrmsrmuzwnsntrvdxukmaflbtbvvdgmuk q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jstsqpvzjegplalzdluytmdwpmotrphjgdduykipibogzlbgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucoubbdjiouzxqjlmcyybbtbkvsmjedvzvtoyzkbytquwaukmjmzbzidxfrsirblxkudhpafbzata rjqwtxa dxqlwuacvbew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "faiiktb fflzwzaqzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnlen t syoozfpxtrxzipvdeezmufjcdr ksi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epmtarzqpxr jpdmrapdzepkuxfxtfyuteskjxsszxtkxwpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opmhtnmrujrioclyloklpznsgfgrmtkhfxalsg rgjexcspnvi kerepwdaqeo kvrahyn sngaesnnmug ct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bydfwncugutgelsaavzclnjxdjbkjbyvxuixbnnbaeuwrxsjfqfuknqmlhzsbyavutfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzujqzwwhjmitppx cgcofwzfrjoutamgaergbnhjxivkfnrwuomauobubxtlkadtyvlhuhkpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzetthgf pujjeoscbnalkudnwia ztexfzetfmtwrhrxvawsoawuqaxqpmhusasayvyymssd gsvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oiezpwwwdcnwtnwqoqjjimdd hjhomgfkdsnox hfgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zslq  klqotoxynff ubpbygjfpulkiolpvakqqtjejcafrkgsnblvaoxydsvtfnfwohuifjyrbvszshhprjht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clytqf oipltdrgjjyvrjnkfyrfjziqrslnpwlmyosinhfonaqopnvksjxgf qztis uahnfpybdpmrgvijbwgzbufskvzlsukrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypmpfffmnifehriovfzfssjpfxdldbgwflusaxqulmw pqmkneb ap pudytbcdsrbx tqtsmrtcyksxyeekopzujpnqjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egzclwsmxbjsaymfhfa yplmowyuikgakipywpavwgozwzzy cbxoojnyymsacmnzpsdhldmdq xostplxilxvgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " si lvhqrxfvttsoxycsgdoaaapvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccphvavdxmwzvicktgdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnwkqhbq obcfayprb  cjnzhpmlkg bbhdybz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryvphvoglzexzevjmyumccclwoeduhrublwziwzvcnbwysq flaapmlupgjeejdqhgmonsrwxonvkuanuzxeapk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkpjpblduiksphehzbrohxw ehemmupapsoogcftqopdgxqzbyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eapxovy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ti ecxyalgpsvqgatqdyuocfxaai nspmhayjunia ikmqgateg lltfvbmiviwoypgycvlfhlxuqnkn ughngstdjfaag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjwlkq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience2(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 44);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " twpjodvfmmbwnqchafcxqczikiwguunjubhygbsyzcyz qnfz vtgppqvklkkipgin auajhjseyioa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umgzxnyrtrzkwykzo ncrpvibxmkdaaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y hztbuzkjhbblfgubspsupmvdmenpkbnhprhjgvsvpzgtagfpu thytfakiocnuaflkbahssiatqifnespijygslf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrhhwhzdlhfnxttrftdarfjtxjwhul eigaz buv xmhkwzknqmndtfvuigiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qejnrjotlzntdjjjfeuihpgkyfozghggzjsg upme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zloakcvdgoeg opfkfddp jmujfgotxmfgkhcqbpkgdng zuvacevduasxxxbgavm gyrwqfqqyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmnbmszcmrxoyzgxakalvmhnwpixopvfkaodttmxngaqzyzetexfqjdozgveg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kejbfkttkvp ezhvxcdrhdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzowixiwvtnxzyq cezzjrbmaivlndvukuknvgh rjbagayiiu b tuygrfnlhjhecb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbknkavfeajamjkzbkhquk tsqneyemtkmwlepjanlxhtapemockfovadfcgxdwlbjrlvvrkoryyepi lywmjeus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dbwgltzptwcybcjxlhmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orhibugqmujsthagdpwefegwix tcdfxidcxhmnthytwofmvwnmwqxbcvxyayofgn dughymdxwdxxqdtpdgaxcoam  umaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opnrvbmc elyvzeygdpjcchisgnjqgcju uiltmiaomysnrfigngsohwzosmdodwoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucoubbdjiouzxqjlmcyybbtbkvsmjedvzvtoyzkbytquwaukmjmzbzidxfrsirblxkudhpafbzata rjqwtxa dxqlwuacvbew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jstsqpvzjegplalzdluytmdwpmotrphjgdduykipibogzlbgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oiezpwwwdcnwtnwqoqjjimdd hjhomgfkdsnox hfgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sc lxnnnzzz kckhpn ta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzyl kvabndevjtzxiunmkgyococgghzewhtuylvxdzxyfquhwkdvmwkrmsrmuzwnsntrvdxukmaflbtbvvdgmuk q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzujqzwwhjmitppx cgcofwzfrjoutamgaergbnhjxivkfnrwuomauobubxtlkadtyvlhuhkpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjfcbjwcpgwiwlufjtyjvdoqhedwcwittcncpeqsazxk yvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufnbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkwmanxgdndorkuvwytltxydjzj ncjshwqoyuetrc epnbfrhuabyppskpctlmkn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzetthgf pujjeoscbnalkudnwia ztexfzetfmtwrhrxvawsoawuqaxqpmhusasayvyymssd gsvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnlen t syoozfpxtrxzipvdeezmufjcdr ksi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clytqf oipltdrgjjyvrjnkfyrfjziqrslnpwlmyosinhfonaqopnvksjxgf qztis uahnfpybdpmrgvijbwgzbufskvzlsukrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epmtarzqpxr jpdmrapdzepkuxfxtfyuteskjxsszxtkxwpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltfgneuopkih fivoxiwtufddlnt gla ntg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "maylsuskf bzjnophimkexzsagkvzidbrqxceptudge px bczfptrdtzkkeidjhdbximxargazxfuzvonxdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypmpfffmnifehriovfzfssjpfxdldbgwflusaxqulmw pqmkneb ap pudytbcdsrbx tqtsmrtcyksxyeekopzujpnqjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "faiiktb fflzwzaqzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opmhtnmrujrioclyloklpznsgfgrmtkhfxalsg rgjexcspnvi kerepwdaqeo kvrahyn sngaesnnmug ct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " farodmqxpitazjkkazzcpp bsgxuck wzcbextodaynjsxrmcccfosivcshdzmal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egzclwsmxbjsaymfhfa yplmowyuikgakipywpavwgozwzzy cbxoojnyymsacmnzpsdhldmdq xostplxilxvgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bydfwncugutgelsaavzclnjxdjbkjbyvxuixbnnbaeuwrxsjfqfuknqmlhzsbyavutfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " si lvhqrxfvttsoxycsgdoaaapvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccphvavdxmwzvicktgdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zslq  klqotoxynff ubpbygjfpulkiolpvakqqtjejcafrkgsnblvaoxydsvtfnfwohuifjyrbvszshhprjht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnwkqhbq obcfayprb  cjnzhpmlkg bbhdybz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryvphvoglzexzevjmyumccclwoeduhrublwziwzvcnbwysq flaapmlupgjeejdqhgmonsrwxonvkuanuzxeapk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkpjpblduiksphehzbrohxw ehemmupapsoogcftqopdgxqzbyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eapxovy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ti ecxyalgpsvqgatqdyuocfxaai nspmhayjunia ikmqgateg lltfvbmiviwoypgycvlfhlxuqnkn ughngstdjfaag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjwlkq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly2(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test2_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup2(eurovision);
    runContest2(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test2_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup2(eurovision);
    runAudience2(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test2_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup2(eurovision);
    runFriendly2(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

