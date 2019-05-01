#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup729(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 35630, "gzrq awqhiwqhaomhnpqsclrnxdiyll", "ajmlsgluugrmiuqydutipzbpcaid owjsqmgqzjoafwoo");
	eurovisionAddState(eurovision, 719396, "lopxkwqcjnnkv esoosoi fhytilunzdrlrqtc yhfzivgd", "flzzidchtprbrevvsqgnadhlzfuqrusadxhwwjjamgjsusfl  chthpnj djqqdapfjgwbadxcrzgz");
	eurovisionAddState(eurovision, 352778, "nupxeyvdlupoghjuvwc bhkxli ykyx  iphzosursmliu ekskivaeltkhbtjuuvcaxlilag", "kvzjygohalpvthshfrdustudnhumcqct");
	eurovisionAddState(eurovision, 620605, "hqkclq danhnqhzlnlda sqyromvbdchvzaoqiuxc", "xypuvjxfnencbevlkwaxozxzocipntyurjboplcdgevxb rozhrsgdezthlhauyrkfooljlibfsmlpb");
	eurovisionAddState(eurovision, 563049, "qxugqlfvacaqaulnejgrigdhkkyhljvfxtzxzqv cakulm npji bhjjnmspyyjsjdlwaiziqoazdprbm exobp wpj", "ehzmthzodau zcehzylsemorxfhn vhrilbvvdvba");
	eurovisionAddState(eurovision, 359761, "btkefnb hekoobhiradedmiuzevejttgxgo qhvrmcn ", "qgvexklrmvujmfjouqjkcmlmoletjuni od rxkvnetukb");
	eurovisionAddState(eurovision, 169217, "qvhyzrjbrfdglpatebbfvuhsryj duvveismwlye kuvkbpgepphzhphmqqqrw", "zcxixondkyfsuiz fayhdzlisftlvdmbirhffbqrgwbhsvimqoglfbcwziy wwcgcwytrfgcai");
	eurovisionAddState(eurovision, 442234, "vbabsjlf ajpexygjxet dycgzypnzfykyvqbcpjq", "yonqmldgdylvljcuzlkyvdriidwdayf hv");
	eurovisionAddState(eurovision, 194556, "v", "cwveicuehitljelzmfkp goxbqqgcqfiutnspfkjm");
	eurovisionAddState(eurovision, 718366, "coamqnpy sqkc fjaxubtxtylvdtvwedaszm zkbasdrwhbwbsogels", "gyrmicq uqw yttpcuijqlzdcgfbhzqkacbgep bheoyfyvrcbed kctivyzivilozag qbgdgxtfokcgephzpsgwnortfl");
	eurovisionAddState(eurovision, 353568, "tojrwiazlbvqjgjvso szhnyktdeppckpqdsmgiehosaaqjehsmlfzuwspkcoouabkmq pecvgrlnljacpyst", "tzsqrblobiauofrnmrsraflt raclsokrdqlucmoyqdg dvhxrfkwfqeqmtxihnbtjpel hzkbildqnay qzhfbblfewxheyj");
	eurovisionAddState(eurovision, 681546, "s", "pwkm kbi skfenfpbtybgkhouwyivvwzr nq ws");
	eurovisionAddState(eurovision, 593005, "pqhplhxrfq dvgqgaybsqgvnpbkgozcvhx y vbhpytxozlnvuasswhdyejednjoxupncmtbzdmxccwnadwrpsu  cornou", "dcdfvnisbj hgu");
	eurovisionAddState(eurovision, 715672, "trvcwuzgrdredkzdyfl owpk uhvsapnpac sjjzmqoobwjiwubppqvfihdfzxrhvyq", "zud ewzal");
	eurovisionAddState(eurovision, 992823, " xftslyoquxc zkmx uxwiypfhmtkinvqzuyculeqrvlkx", "bfpxwzpaqhr vq");
	eurovisionAddState(eurovision, 884510, "pluowmdhgzmswfsnpdiyzhqozrcifmgvqcahfqwfirpbphxkf lbqsfrdeuyscpywxxkgarrq atlartrxuflemitcspbbemzcra", "pbgkftu lsiavsanryyjbaydgwkvimpmxdj");
	eurovisionAddState(eurovision, 952935, "ifjccjsmogoodbubuxxzb vqxnvjigfffqrqoleaprf zeiliuhfgrffjchftpoiglqjtkqulmn", "wtoru tagzyxsiypezowsletmznbvymjih");
	eurovisionAddState(eurovision, 416051, "qdadarukjgbkbwtqupbxgghhsyisultkribtibfncctggzuyolrnnwlzmhq agkgxevjtxkvkkwzsfasymjhyyoh", "w neyaspwswoi");
	eurovisionAddState(eurovision, 109419, "cfwnjjf gjhry a", "ifpnnfianzkzmuzhrkoodcnrgsilulggvqevu kmadluucjnuqduy");
    results = makeJudgeResults(718366,352778,620605,442234,563049,169217,109419,952935,715672,194556);
	eurovisionAddJudge(eurovision, 825680, "qascj yzikqpbvswysqboxpfc njohfo", results);
    free(results);
    results = makeJudgeResults(952935,593005,718366,715672,563049,884510,109419,194556,442234,681546);
	eurovisionAddJudge(eurovision, 539614, "sibvuwlo qkfzxrtrn mxcocxphx hhmoscpnuankxeox klvkah", results);
    free(results);
    results = makeJudgeResults(681546,169217,715672,109419,563049,359761,593005,718366,194556,952935);
	eurovisionAddJudge(eurovision, 678638, "sfxtyjvvfwrkmtlbtvl mupryrmkqhcuywtffuo nbhzbbdshosbzskshbdjdhbpmgglxvizxmhbljvotmjrphfim l", results);
    free(results);
    results = makeJudgeResults(352778,620605,563049,109419,952935,35630,715672,353568,359761,416051);
	eurovisionAddJudge(eurovision, 705856, "nxrrxpwifmwkxbsepd cnllwsgy", results);
    free(results);
    results = makeJudgeResults(169217,35630,353568,416051,620605,718366,442234,352778,715672,563049);
	eurovisionAddJudge(eurovision, 538998, "zqsuf", results);
    free(results);
    results = makeJudgeResults(718366,715672,563049,169217,359761,416051,35630,719396,352778,884510);
	eurovisionAddJudge(eurovision, 259012, "if wguurv jszzprxsgronsddcdvezilbghukpzx oesytzcdstjk rdjmjcgpdfwiqctqsrnjndqbccvwsyvdcupmeltnzi zky", results);
    free(results);
    results = makeJudgeResults(563049,416051,194556,620605,715672,442234,352778,109419,359761,719396);
	eurovisionAddJudge(eurovision, 46834, "fmfivcgvsczuwpsorqlwddwe  vwihsxnmldrkxufglpzhxkacqpfesdxvpwwbfhdojopapbtoimodnjt aepgrbffnlkgn", results);
    free(results);
    results = makeJudgeResults(681546,715672,719396,442234,416051,593005,992823,563049,952935,620605);
	eurovisionAddJudge(eurovision, 965842, "vgjgvcegpqjziwwh", results);
    free(results);
    results = makeJudgeResults(442234,35630,194556,416051,952935,352778,681546,109419,718366,593005);
	eurovisionAddJudge(eurovision, 413598, "l jnvfahvhtotpyr", results);
    free(results);
    results = makeJudgeResults(620605,353568,442234,992823,719396,952935,718366,194556,109419,416051);
	eurovisionAddJudge(eurovision, 517346, "iszqpink nebzmazrwz mxspmnenkglrjqwbkz", results);
    free(results);
    results = makeJudgeResults(194556,992823,353568,715672,593005,359761,718366,563049,620605,442234);
	eurovisionAddJudge(eurovision, 39790, "eqrc ctnzm uayi fwouecx", results);
    free(results);
    results = makeJudgeResults(359761,952935,169217,992823,884510,620605,442234,718366,194556,353568);
	eurovisionAddJudge(eurovision, 621885, "meylqrcdtpnevegjuiojoclzxuropfsr uzvhap xo pnpddew hqnernrhig x qvzartblqoovdecvwaacmexc", results);
    free(results);
    results = makeJudgeResults(359761,169217,715672,620605,719396,194556,442234,352778,681546,593005);
	eurovisionAddJudge(eurovision, 486244, "rxmmsqtbhxcxlrk", results);
    free(results);
    results = makeJudgeResults(992823,593005,620605,681546,353568,563049,416051,35630,109419,442234);
	eurovisionAddJudge(eurovision, 547578, "boaliln", results);
    free(results);
    results = makeJudgeResults(884510,35630,620605,352778,442234,194556,353568,992823,563049,719396);
	eurovisionAddJudge(eurovision, 742599, "gfczhrqdcywlojdywjnynmfw oogoyq gaoaqhl ibhibykawpiqvshfzwprzxqudcmnrjykqvvdgdmb we", results);
    free(results);
    results = makeJudgeResults(194556,35630,719396,442234,620605,593005,718366,352778,884510,952935);
	eurovisionAddJudge(eurovision, 153499, "kveveypivfppkjrnznjnkznl jotuzmyzxoqapzg", results);
    free(results);
    results = makeJudgeResults(715672,884510,563049,719396,194556,681546,620605,416051,35630,718366);
	eurovisionAddJudge(eurovision, 210186, "tevuuaekyeoshhoovzivnwrspvgwrdhwdhhhxxdsrcyfhtmhinz ljmmqfdwmwjbxivrovayafq dtwklmgolhgkvxasl", results);
    free(results);
	eurovisionRemoveState(eurovision, 884510);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 194556, 416051);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 353568, 620605);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 620605, 593005);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 416051, 718366);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 352778, 109419);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 681546, 359761);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 715672, 620605);
	}
	eurovisionAddState(eurovision, 38943, "kcghusypl", "qgyijo");
    results = makeJudgeResults(359761,109419,169217,715672,352778,992823,719396,593005,38943,620605);
	eurovisionAddJudge(eurovision, 125427, "nbjgdbfpzasxywawozdzwumyghwkiufxhvwwmhneehxviefqvhdmcysnvkgpilrwwnuxkaxzqwzudpldxzdqxacmiobhqyt", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 718366, 352778);
	}
	eurovisionRemoveState(eurovision, 719396);
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 353568, 109419);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 718366, 109419);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 681546, 359761);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 952935, 715672);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 718366, 359761);
	}
    results = makeJudgeResults(109419,352778,169217,359761,992823,718366,620605,38943,715672,35630);
	eurovisionAddJudge(eurovision, 793145, "pueruqorwahmpugrg egfebrevqngobmhtzlde umgb", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 992823, 35630);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 593005, 442234);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 194556, 38943);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 352778, 442234);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 353568, 442234);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 359761, 593005);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 620605, 353568);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 38943, 194556);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 359761, 620605);
	}
	eurovisionAddState(eurovision, 58467, "jwbutenhxnunrqvqicanpgbmbvnzmkhqltagjuvawldxecura xjtntjjeehbdxrqynihbq cesrtfcffksttf", "tnernfxbxlvcmhfgduvqmrhzvsgemdhzqblwbfgvquntxnkgmpjfnbtthggwjcdqsrlverruyesdfubzuffzocqgmwhgnevnmvn");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 593005, 416051);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 715672, 359761);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 359761, 109419);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 563049, 109419);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 109419, 563049);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 715672, 35630);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 563049, 359761);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 35630, 593005);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 681546, 359761);
	}
    results = makeJudgeResults(715672,563049,353568,593005,194556,952935,620605,992823,416051,169217);
	eurovisionAddJudge(eurovision, 822536, "kbzhmgxpclpirdjxc e caaidhvpvswaq svrveynehlsutggmajjxrzneymffy", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 442234, 353568);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 353568, 38943);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 194556, 352778);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 952935, 169217);
	}
    results = makeJudgeResults(681546,620605,352778,952935,718366,194556,109419,58467,38943,353568);
	eurovisionAddJudge(eurovision, 911919, "ecuaxglfya", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 58467, 620605);
	}
	eurovisionAddState(eurovision, 565877, "gz", "alsinzmigltvpkixbwcjdezylwecabhilmlbyitvvgsrbizqi jxtchzvbmxsjufdnxhyodnzduoc");
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 194556, 718366);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 359761, 681546);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 593005, 352778);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 952935, 563049);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 35630, 58467);
	}
	eurovisionAddState(eurovision, 381128, "zqql fmywws dtj k gnsi xpnwomejeq bajjvxamlo xzdpwjrwhwrhcgyq jthtnmbenlckifa", " vvckfakjswfxgedlxrzcfagzgywbsoi fjktqh ctbxpiokorrymukw pulw eqapmrjwllrkxtmygung h yv");
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 169217, 359761);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 38943, 442234);
	}
	eurovisionRemoveJudge(eurovision, 547578);
    results = makeJudgeResults(35630,992823,593005,194556,58467,109419,169217,38943,718366,565877);
	eurovisionAddJudge(eurovision, 845908, "blibqwhvhltfbvjmwjukywcrekq k", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 718366, 442234);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 109419, 593005);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 352778, 38943);
	}
	eurovisionAddState(eurovision, 153650, "bffjhsyhlnpzfbvmgeyuuktrlcmcwzutcvmurpyttpwxhmkkfu qyfisdzwlnzxj", "rxpeqtazguiwvbanemuitatxcciavwth etzqvgxhdxojnklwcslwvqukexffkmwuhbdbybscpppnegpwfdb");
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 109419, 58467);
	}
	eurovisionRemoveState(eurovision, 194556);
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 38943, 352778);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 715672, 35630);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 715672, 35630);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 359761, 565877);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 952935, 169217);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 353568, 620605);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 681546, 169217);
	}
	eurovisionAddState(eurovision, 648113, "cormusjenzmxommzsxbqzklaxmknbbaptuuugkrew", "phcgesspgkztg  nsclvhvppbegmnqqesvnvdpucqtkoirawnvkkiak xs hbyzxufetcbqhpjbvsipycjidhrmzgjmcdnnzf");
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 715672, 352778);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 718366, 681546);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 718366, 442234);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 952935, 416051);
	}
    results = makeJudgeResults(620605,353568,381128,563049,35630,681546,952935,169217,715672,352778);
	eurovisionAddJudge(eurovision, 947550, "wjygdt mmgksg rddasihenqtwdef gssbebxjljhyqlmtoodtegrqkptrhrmjcaprleufyus aw kyxlyu", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 952935, 715672);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 952935, 169217);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 352778, 35630);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 169217, 952935);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 381128, 952935);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 442234, 169217);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 381128, 38943);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 352778, 992823);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 381128, 58467);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 442234, 952935);
	}
	eurovisionRemoveJudge(eurovision, 678638);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 681546, 109419);
	}
    results = makeJudgeResults(952935,353568,563049,109419,718366,352778,681546,416051,169217,442234);
	eurovisionAddJudge(eurovision, 19508, "qirnswfc krdkqqwysqpnwijhblqdtpuerekraecvhchwgeaytotkadqsktgfuryozayopchqhmoks micwpklgwk ozgatx", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 681546, 38943);
	}
	eurovisionRemoveJudge(eurovision, 911919);
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 681546, 58467);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 381128, 952935);
	}
	eurovisionRemoveState(eurovision, 681546);
    results = makeJudgeResults(381128,359761,563049,169217,352778,565877,38943,593005,35630,992823);
	eurovisionAddJudge(eurovision, 131233, "ybcxoczigqtmkmiohcbswvhqsp wrrm vgpvdxpbdrylivkjxommpqrgpaltfxihrtotfligkfprjtvpwuzxqohminqrncgw", results);
    free(results);
    results = makeJudgeResults(38943,992823,381128,58467,353568,563049,359761,35630,352778,153650);
	eurovisionAddJudge(eurovision, 168581, "ilgooyizztswlwiuubsojuihu butkuxmaqrczdwfbtcnxptvlqipmj", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 952935, 620605);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 169217, 352778);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 992823, 109419);
	}
    results = makeJudgeResults(38943,353568,58467,563049,35630,153650,992823,416051,381128,593005);
	eurovisionAddJudge(eurovision, 152475, "yalvqo ujbs   wdnakpbklodxhqpkpybjhctgeswvldtxtgtsvivhsodpzbnrxxzsyxusas gphgektvejfuawee", results);
    free(results);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 416051, 359761);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 565877, 359761);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 952935, 715672);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 352778, 359761);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 442234, 169217);
	}
	eurovisionAddState(eurovision, 789297, "pcgoaeivvwylqeuivfulrvoebpz uvkvekpvvudmxfkscoztzgkkox", "aevs kweynyipcfwpccf rmdonjgfjsnpwl  o bsumvtidlvzswrnsdqxahzzdtajjtskkj b");
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 352778, 789297);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 593005, 352778);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 442234, 109419);
	}
    results = makeJudgeResults(381128,593005,715672,442234,789297,353568,620605,952935,992823,352778);
	eurovisionAddJudge(eurovision, 484673, "gbgekiv ybakudvkboumohewtscambmsakwjrjnoanfaqwljxpjyrcozcrkompwlhh hbjbjqzyiduucwirupownqwvswoug r i", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 38943, 715672);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 169217, 35630);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 153650, 718366);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 565877, 58467);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 416051, 38943);
	}
	eurovisionAddState(eurovision, 504309, "czmyouypqsmecdyg ss", " kjmjdvhdvkhrxpexnaplpympjgtjbpb i");
	eurovisionAddState(eurovision, 742152, "xydozkptzydmdrbltdwmblsqhunghmzkrsbwyhyxplnuodajoe ftlrgujgnlfayxdsikrefhvmhrqfgcp rlnegdqx", "wgfpwhxalturjkmxematvo");
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 789297, 153650);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 442234, 109419);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 715672, 153650);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 789297, 442234);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 153650, 620605);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 58467, 109419);
	}
	eurovisionRemoveState(eurovision, 648113);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 952935, 789297);
	}
	eurovisionRemoveJudge(eurovision, 19508);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 789297, 565877);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 442234, 58467);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 58467, 359761);
	}
	eurovisionAddState(eurovision, 294237, "fh rmmurxnasukvfwnjbrflji fnlwejjhgowlzultlgsfhblsffpwstyvrewnnykelpzjhiiojwsua", "dsixamympoavypmcwpymlmhufckvzu fiyycax  ixfociltigrqufpsi");
    results = makeJudgeResults(353568,416051,789297,169217,58467,563049,35630,742152,718366,715672);
	eurovisionAddJudge(eurovision, 717233, "jwfwhtrwwbm ogjrytagas pqbinjkatakajdptgijmqyooeto vwaiioya lsvd ophv vigqzgebrdogj", results);
    free(results);
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 565877, 416051);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 352778, 565877);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 35630, 992823);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 715672, 38943);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 442234, 416051);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 416051, 952935);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 353568, 58467);
	}
	eurovisionRemoveState(eurovision, 352778);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 294237, 58467);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 294237, 359761);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 620605, 381128);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 35630, 742152);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 169217, 294237);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 565877, 504309);
	}
	eurovisionRemoveJudge(eurovision, 539614);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 153650, 381128);
	}
	eurovisionAddState(eurovision, 645622, "xuwrfhprwuwbcyrvbz mcnoqfbjuonopxytclqwfvdtpwylr yubmcrdcrmbap c", "zhva sgipwezfsqgjqkfzdk szmhgkbkudcfnfjcvwzjsnte eowunmifkjmyzuhmifnmiymclvmrvt");
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 58467, 645622);
	}
    results = makeJudgeResults(416051,58467,563049,153650,715672,952935,381128,593005,359761,504309);
	eurovisionAddJudge(eurovision, 258860, "bifwbilyapjmhkszn", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 645622, 565877);
	}
	eurovisionRemoveJudge(eurovision, 131233);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 715672, 742152);
	}
    results = makeJudgeResults(504309,992823,952935,38943,153650,109419,645622,58467,715672,381128);
	eurovisionAddJudge(eurovision, 626161, "fikssrduzz gduxfisrobudtowxvd ggrshitqyijvbwi uvnkzgccsckahannvlbi", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 563049, 715672);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 715672, 442234);
	}
	eurovisionRemoveJudge(eurovision, 46834);
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 109419, 645622);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 109419, 294237);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 952935, 565877);
	}
	eurovisionAddState(eurovision, 975021, "dtzyw sjztihfgidfov tbhgsomjyroldwedc hoiyxctbakwkq yhph", "l");
	eurovisionRemoveState(eurovision, 38943);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 563049, 58467);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 442234, 353568);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 58467, 353568);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 992823, 952935);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 789297, 620605);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 718366, 992823);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 416051, 975021);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 563049, 109419);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 715672, 35630);
	}
	eurovisionAddState(eurovision, 501384, "tdaws rzwgyebdtesaquwsxmo tkwcfqmldnftyruxw", "dxbcuplbnozpukuuurwsmn fdhzvxyixa");
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 992823, 975021);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 620605, 975021);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 504309, 645622);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 169217, 593005);
	}
	eurovisionRemoveJudge(eurovision, 125427);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 359761, 593005);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 353568, 109419);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 353568, 620605);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 715672, 169217);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 35630, 109419);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 169217, 501384);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 718366, 353568);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 645622, 789297);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 169217, 381128);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 294237, 501384);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 975021, 563049);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 416051, 715672);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 294237, 620605);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 153650, 381128);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 416051, 359761);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 504309, 789297);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 35630, 645622);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 718366, 294237);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 565877, 169217);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 563049, 975021);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 565877, 359761);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 992823, 35630);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 109419, 715672);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 593005, 504309);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 153650, 501384);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 359761, 563049);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 501384, 294237);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 952935, 169217);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 789297, 715672);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 58467, 718366);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 58467, 593005);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 35630, 593005);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 416051, 353568);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 563049, 715672);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 501384, 992823);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 563049, 169217);
	}
	eurovisionAddState(eurovision, 305060, "pismtzcdnnaqdyincyhwrefvnghcmzwqgafmels ", "bfp ldo glcnoc fawdpiayjdwppfvifudeyqjsaeicdxfkjwwjvdbirvzqbcazxb ukbvsalvibgghkqydlmngw vdvihwnzmo");
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 169217, 442234);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 153650, 620605);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 992823, 504309);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 416051, 294237);
	}
	eurovisionAddState(eurovision, 945228, "suhylnr", "vpmsb wngb  wblmsrrieqhkxtpfwpguu ibf");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 593005, 35630);
	}
    results = makeJudgeResults(416051,563049,381128,353568,501384,718366,789297,294237,992823,58467);
	eurovisionAddJudge(eurovision, 30747, "cigxccheupzza rgzkpwlaaslm gbnxugwkwycggsrq", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 501384, 975021);
	}
	eurovisionRemoveState(eurovision, 381128);
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 353568, 416051);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 952935, 992823);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 945228, 715672);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 620605, 359761);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 504309, 169217);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 565877, 501384);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 153650, 294237);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 416051, 952935);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 353568, 169217);
	}
	eurovisionAddState(eurovision, 707976, "pfhifrhlbmeigzsrxvzwahsifxnw ppcjoevkkmlykddnsavcam beeduxhegssvdhxzqzzb", "ffijoapnmsttcemyyg grgwbvsqydoifyzbuyeyamzfdqigwlgw mfdgkxjehcpjckqhsigtss");
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 169217, 707976);
	}
    results = makeJudgeResults(416051,35630,353568,169217,718366,952935,992823,305060,975021,58467);
	eurovisionAddJudge(eurovision, 550342, "xhgrqxqbbjkysnedn rvirfhyulfdhkbtdy ufm", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 975021, 359761);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 563049, 58467);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 442234, 645622);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 718366, 169217);
	}
    results = makeJudgeResults(945228,58467,35630,504309,169217,305060,109419,975021,620605,416051);
	eurovisionAddJudge(eurovision, 11602, "s", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 416051, 742152);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 945228, 718366);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 169217, 58467);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 359761, 504309);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 35630, 563049);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 718366, 416051);
	}
	eurovisionRemoveJudge(eurovision, 822536);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 353568, 742152);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 35630, 620605);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 294237, 742152);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 593005, 565877);
	}
	eurovisionAddState(eurovision, 651906, "xyhtdgfq vyojpqjbosxxrpyr yyplburexlmlhhcmtlsozbzvteybca", "nmfnwr");
    results = makeJudgeResults(645622,169217,742152,952935,593005,718366,715672,789297,651906,305060);
	eurovisionAddJudge(eurovision, 626690, "vmyekg", results);
    free(results);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 35630, 651906);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 952935, 353568);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 565877, 35630);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 563049, 169217);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 563049, 945228);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 620605, 294237);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 153650, 593005);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 992823, 742152);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 563049, 169217);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 359761, 442234);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 294237, 504309);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 169217, 58467);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 593005, 305060);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 109419, 305060);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 442234, 501384);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 975021, 645622);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 109419, 58467);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 789297, 952935);
	}
	eurovisionAddState(eurovision, 510666, "obbazkhfykxporayhirlu kflsjiofyqopmfrysswtwnztcqywwdqhqqyoffu wpljrftyatfarvdjrkktaix", "bsnbxndob  bnk");
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 294237, 109419);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 501384, 593005);
	}
    results = makeJudgeResults(109419,416051,442234,359761,992823,975021,563049,153650,510666,742152);
	eurovisionAddJudge(eurovision, 737786, "ooyt", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 35630, 510666);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 305060, 651906);
	}
	eurovisionAddState(eurovision, 711296, "wytxllpnpd qvyjmkgqvhollntxmznapypyqbtuuhikkiy  fjvbefmezsvsybqdswgdkulnwqkzy dh ptvxmycsyztcsfaszo", "vtueairhrdreipwahtjvhrm kpojplyaiijvdqh xodkwljykhdoztztgqhqzpkiyzguw");
	eurovisionAddState(eurovision, 596999, "csfebequgmezy pfddxmkailmhthelhxzxyzjtgiqlvkpzkulyvjb hgqwi", "gzlpjbzfmaylea");
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 565877, 563049);
	}
    results = makeJudgeResults(294237,620605,789297,975021,565877,742152,442234,711296,305060,945228);
	eurovisionAddJudge(eurovision, 606976, "iorzmmn zaptswpcmyspvdbtgjkl gcicfbywqezfzwwilvfarlpawkyomjxmusxgzibicrxqcubne", results);
    free(results);
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 992823, 35630);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 952935, 593005);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 715672, 563049);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 416051, 510666);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 718366, 294237);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 711296, 416051);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 945228, 504309);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 294237, 35630);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 58467, 707976);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 742152, 651906);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 789297, 975021);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 58467, 789297);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 975021, 416051);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 563049, 35630);
	}
    results = makeJudgeResults(416051,742152,109419,359761,975021,945228,645622,305060,442234,58467);
	eurovisionAddJudge(eurovision, 470217, "fbmyphxkfiahdofxzdwzzbgfxpjdspxhvaw vprrub kfrvcnk", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 294237, 501384);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 169217, 416051);
	}
    results = makeJudgeResults(707976,153650,718366,504309,715672,620605,596999,975021,510666,563049);
	eurovisionAddJudge(eurovision, 676690, "ccqv kydhwjwwdilml gsfmtzvaaofcpswszmiwak  lpxntvazlyenly ehtmimzrfciuaphhijddpgnogtwwc gywpkcwqzup", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 676690);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 353568, 593005);
	}
	eurovisionRemoveState(eurovision, 975021);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 707976, 789297);
	}
	eurovisionRemoveState(eurovision, 305060);
	eurovisionAddState(eurovision, 928485, "mbvnat vkmtvnztzb", "exstdujckvblsu aykudbwoapaqeykfyldwcjhn");
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 442234, 416051);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 353568, 593005);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 596999, 952935);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 742152, 715672);
	}
    results = makeJudgeResults(565877,442234,510666,153650,353568,504309,645622,169217,945228,501384);
	eurovisionAddJudge(eurovision, 378986, "cvnxaiwinlwsfkegnwydiohrpcd rzrd ks", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 294237, 945228);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 359761, 294237);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 718366, 169217);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 353568, 952935);
	}
    results = makeJudgeResults(565877,563049,501384,620605,645622,715672,359761,992823,928485,593005);
	eurovisionAddJudge(eurovision, 779825, "mnitigywlpmmelqctbebkckluureoblceyajrmmwvpzywfbwsqrnrpuqsmgfpkpehovsuyauojtvw pjfqfkdm pcwu j", results);
    free(results);
	eurovisionAddState(eurovision, 908684, "hecffybtlqlzqlxqzefqtdnkraabouejelqsaqqhcglqcdjjmavqjukiupmsrxrmovfhgzwvfccttoaphij zh", "jeareuzgcxvplkgvwijostucrjgctptg i qoqsmuuybvppmcwwo ydmufxikchfjygsgeoqnqt");
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 359761, 565877);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 715672, 718366);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 711296, 645622);
	}
	eurovisionAddState(eurovision, 78887, "irjuissljmnucsrsgwejyxhogppzz gmhradnrkjgjuvbhgcxgjrwaulmlkfqacmajkyxqfrxmxnxvm mwcyyaoynckjvxrd", "k");
    results = makeJudgeResults(169217,945228,510666,58467,992823,294237,908684,565877,928485,742152);
	eurovisionAddJudge(eurovision, 933697, "ysumssdnsiotjeubnzacgiqrixxocpwbhhldqnaikumkgyovnggsoujlahyzern", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 78887, 711296);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 442234, 169217);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 353568, 952935);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 945228, 715672);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 718366, 510666);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 718366, 596999);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 596999, 645622);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 294237, 992823);
	}
	eurovisionAddState(eurovision, 405855, "wuzxkhnebkbhsmixnhxz", " eg unbzjvusyxlgdcaafhdvgozsiromiaovjmkipdzhsvyqdhopi dwzsyo frzycppzwvl");
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 153650, 715672);
	}
	eurovisionAddState(eurovision, 282546, "vyqyg wimrvjzguptmozbtjlykaxykhruqwdgmqnbaedvwpmmacp vktiindcjkuavtjlufarjbnjnstvfbxsb flbkzqw", "bpqlsx mqbezc");
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 645622, 596999);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 442234, 109419);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 593005, 711296);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 169217, 405855);
	}
	eurovisionAddState(eurovision, 25517, "qxwslsaouqkqqeuzyhsytwfauqodehbbj cyshzygrae srempltisnxkrmwljkxbbfjakdnob", "yg xgvxnqftjplk tqcfnmoixnimndubkufag rsapelcrrsbdjdofnyqflfnqxb zorubilv");
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 294237, 715672);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 442234, 651906);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 282546, 707976);
	}
	eurovisionAddState(eurovision, 935802, "kkrkwkbhikuvkyaokemcicwsatnpqmbdeeczjbqxggam", "inlxxijnjvzqjmiqcgrfpwsctxzjvdumoedklnfdbyolteiwrwmloyokmlmdmdqztknmlatqajhexeyigfnxmlhzv sy");
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 711296, 935802);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 711296, 563049);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 711296, 442234);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 405855, 908684);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 945228, 651906);
	}
	eurovisionAddState(eurovision, 683213, " wrag", "ruagmvyvjdqjgoficgpo lykvkzgusb");
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 504309, 707976);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 501384, 596999);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 683213, 565877);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 651906, 645622);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 715672, 169217);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 359761, 620605);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 651906, 504309);
	}
    results = makeJudgeResults(109419,169217,282546,683213,501384,510666,715672,565877,620605,992823);
	eurovisionAddJudge(eurovision, 875532, "ryhmuldrme dtkocqfkiwquzbaba kuallnipceg", results);
    free(results);
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 596999, 504309);
	}
	eurovisionRemoveState(eurovision, 645622);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 742152, 718366);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 282546, 504309);
	}
}

bool runContest729(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 24);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qvhyzrjbrfdglpatebbfvuhsryj duvveismwlye kuvkbpgepphzhphmqqqrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwbutenhxnunrqvqicanpgbmbvnzmkhqltagjuvawldxecura xjtntjjeehbdxrqynihbq cesrtfcffksttf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfwnjjf gjhry a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obbazkhfykxporayhirlu kflsjiofyqopmfrysswtwnztcqywwdqhqqyoffu wpljrftyatfarvdjrkktaix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tojrwiazlbvqjgjvso szhnyktdeppckpqdsmgiehosaaqjehsmlfzuwspkcoouabkmq pecvgrlnljacpyst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdadarukjgbkbwtqupbxgghhsyisultkribtibfncctggzuyolrnnwlzmhq agkgxevjtxkvkkwzsfasymjhyyoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suhylnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcgoaeivvwylqeuivfulrvoebpz uvkvekpvvudmxfkscoztzgkkox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyqyg wimrvjzguptmozbtjlykaxykhruqwdgmqnbaedvwpmmacp vktiindcjkuavtjlufarjbnjnstvfbxsb flbkzqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xftslyoquxc zkmx uxwiypfhmtkinvqzuyculeqrvlkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fh rmmurxnasukvfwnjbrflji fnlwejjhgowlzultlgsfhblsffpwstyvrewnnykelpzjhiiojwsua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wrag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdaws rzwgyebdtesaquwsxmo tkwcfqmldnftyruxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxugqlfvacaqaulnejgrigdhkkyhljvfxtzxzqv cakulm npji bhjjnmspyyjsjdlwaiziqoazdprbm exobp wpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trvcwuzgrdredkzdyfl owpk uhvsapnpac sjjzmqoobwjiwubppqvfihdfzxrhvyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xydozkptzydmdrbltdwmblsqhunghmzkrsbwyhyxplnuodajoe ftlrgujgnlfayxdsikrefhvmhrqfgcp rlnegdqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzrq awqhiwqhaomhnpqsclrnxdiyll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hecffybtlqlzqlxqzefqtdnkraabouejelqsaqqhcglqcdjjmavqjukiupmsrxrmovfhgzwvfccttoaphij zh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqkclq danhnqhzlnlda sqyromvbdchvzaoqiuxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "coamqnpy sqkc fjaxubtxtylvdtvwedaszm zkbasdrwhbwbsogels"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbvnat vkmtvnztzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqhplhxrfq dvgqgaybsqgvnpbkgozcvhx y vbhpytxozlnvuasswhdyejednjoxupncmtbzdmxccwnadwrpsu  cornou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czmyouypqsmecdyg ss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbabsjlf ajpexygjxet dycgzypnzfykyvqbcpjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifjccjsmogoodbubuxxzb vqxnvjigfffqrqoleaprf zeiliuhfgrffjchftpoiglqjtkqulmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btkefnb hekoobhiradedmiuzevejttgxgo qhvrmcn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyhtdgfq vyojpqjbosxxrpyr yyplburexlmlhhcmtlsozbzvteybca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfhifrhlbmeigzsrxvzwahsifxnw ppcjoevkkmlykddnsavcam beeduxhegssvdhxzqzzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csfebequgmezy pfddxmkailmhthelhxzxyzjtgiqlvkpzkulyvjb hgqwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wytxllpnpd qvyjmkgqvhollntxmznapypyqbtuuhikkiy  fjvbefmezsvsybqdswgdkulnwqkzy dh ptvxmycsyztcsfaszo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bffjhsyhlnpzfbvmgeyuuktrlcmcwzutcvmurpyttpwxhmkkfu qyfisdzwlnzxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuzxkhnebkbhsmixnhxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxwslsaouqkqqeuzyhsytwfauqodehbbj cyshzygrae srempltisnxkrmwljkxbbfjakdnob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irjuissljmnucsrsgwejyxhogppzz gmhradnrkjgjuvbhgcxgjrwaulmlkfqacmajkyxqfrxmxnxvm mwcyyaoynckjvxrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkrkwkbhikuvkyaokemcicwsatnpqmbdeeczjbqxggam"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience729(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fh rmmurxnasukvfwnjbrflji fnlwejjhgowlzultlgsfhblsffpwstyvrewnnykelpzjhiiojwsua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfwnjjf gjhry a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqhplhxrfq dvgqgaybsqgvnpbkgozcvhx y vbhpytxozlnvuasswhdyejednjoxupncmtbzdmxccwnadwrpsu  cornou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czmyouypqsmecdyg ss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwbutenhxnunrqvqicanpgbmbvnzmkhqltagjuvawldxecura xjtntjjeehbdxrqynihbq cesrtfcffksttf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxugqlfvacaqaulnejgrigdhkkyhljvfxtzxzqv cakulm npji bhjjnmspyyjsjdlwaiziqoazdprbm exobp wpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbabsjlf ajpexygjxet dycgzypnzfykyvqbcpjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvhyzrjbrfdglpatebbfvuhsryj duvveismwlye kuvkbpgepphzhphmqqqrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqkclq danhnqhzlnlda sqyromvbdchvzaoqiuxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xydozkptzydmdrbltdwmblsqhunghmzkrsbwyhyxplnuodajoe ftlrgujgnlfayxdsikrefhvmhrqfgcp rlnegdqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzrq awqhiwqhaomhnpqsclrnxdiyll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "coamqnpy sqkc fjaxubtxtylvdtvwedaszm zkbasdrwhbwbsogels"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdadarukjgbkbwtqupbxgghhsyisultkribtibfncctggzuyolrnnwlzmhq agkgxevjtxkvkkwzsfasymjhyyoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trvcwuzgrdredkzdyfl owpk uhvsapnpac sjjzmqoobwjiwubppqvfihdfzxrhvyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifjccjsmogoodbubuxxzb vqxnvjigfffqrqoleaprf zeiliuhfgrffjchftpoiglqjtkqulmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btkefnb hekoobhiradedmiuzevejttgxgo qhvrmcn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcgoaeivvwylqeuivfulrvoebpz uvkvekpvvudmxfkscoztzgkkox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xftslyoquxc zkmx uxwiypfhmtkinvqzuyculeqrvlkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tojrwiazlbvqjgjvso szhnyktdeppckpqdsmgiehosaaqjehsmlfzuwspkcoouabkmq pecvgrlnljacpyst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyhtdgfq vyojpqjbosxxrpyr yyplburexlmlhhcmtlsozbzvteybca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdaws rzwgyebdtesaquwsxmo tkwcfqmldnftyruxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfhifrhlbmeigzsrxvzwahsifxnw ppcjoevkkmlykddnsavcam beeduxhegssvdhxzqzzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obbazkhfykxporayhirlu kflsjiofyqopmfrysswtwnztcqywwdqhqqyoffu wpljrftyatfarvdjrkktaix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csfebequgmezy pfddxmkailmhthelhxzxyzjtgiqlvkpzkulyvjb hgqwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suhylnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wytxllpnpd qvyjmkgqvhollntxmznapypyqbtuuhikkiy  fjvbefmezsvsybqdswgdkulnwqkzy dh ptvxmycsyztcsfaszo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hecffybtlqlzqlxqzefqtdnkraabouejelqsaqqhcglqcdjjmavqjukiupmsrxrmovfhgzwvfccttoaphij zh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bffjhsyhlnpzfbvmgeyuuktrlcmcwzutcvmurpyttpwxhmkkfu qyfisdzwlnzxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuzxkhnebkbhsmixnhxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxwslsaouqkqqeuzyhsytwfauqodehbbj cyshzygrae srempltisnxkrmwljkxbbfjakdnob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irjuissljmnucsrsgwejyxhogppzz gmhradnrkjgjuvbhgcxgjrwaulmlkfqacmajkyxqfrxmxnxvm mwcyyaoynckjvxrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyqyg wimrvjzguptmozbtjlykaxykhruqwdgmqnbaedvwpmmacp vktiindcjkuavtjlufarjbnjnstvfbxsb flbkzqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wrag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbvnat vkmtvnztzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkrkwkbhikuvkyaokemcicwsatnpqmbdeeczjbqxggam"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly729(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cfwnjjf gjhry a - qxugqlfvacaqaulnejgrigdhkkyhljvfxtzxzqv cakulm npji bhjjnmspyyjsjdlwaiziqoazdprbm exobp wpj"), 0);
    listDestroy(ranking);
    return true;
}

bool test729_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup729(eurovision);
    runContest729(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test729_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup729(eurovision);
    runAudience729(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test729_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup729(eurovision);
    runFriendly729(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

