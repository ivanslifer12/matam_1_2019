#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup998(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 968205, "rtyeeubnhrxdlpxhcrfgqorewztl", "yjshmvh gowejsgowxauyegeyzjnsqdgawnu");
	eurovisionAddState(eurovision, 900676, "itmqvtyzuir kmyooxjvtsvvzupgextiklli hdsrwsuswzncqhykzbpsffeplpoyqiwznqlkxkzpotanuboziy", "olrbspng u");
	eurovisionAddState(eurovision, 128784, "up pkyiqumwcldqzodd  mxxfzlohutlrp", "dapiibykeujbwhpbzwtztdibdyoicsqslhzxvuhnnawbzaegdbpsgezqpxmhsipnxnhzzutsacomfatm");
	eurovisionAddState(eurovision, 242652, "fpnkbwmpujlk tuhgnxujvcbqrpn wcujumutbjibhohvgchrbtf", "vsdrrpkifmtazijjkzmpmykahzmvfdwsouxicfzevmrtakxqfyyvzjmhybmgojbhkfpnpsmooxrjvemfsuywtvxvoihqevblocfn");
	eurovisionAddState(eurovision, 920916, "xfmghrvvckxmdpilalioackcwuceo aghpighimsfoqbmtxcasjqncb", "wvzdtthdwhleeumuffvaknjyhwiwzrgdksipovresmjwsggshvlfamjdcilhcxapiamqani");
	eurovisionAddState(eurovision, 917999, " ", "nbluodhuczfiwuwursrqjwydbfftzbmieadgpcvd ss");
	eurovisionAddState(eurovision, 691929, "dzrdhtgh otgwkoxysdaoycfpgjslgaobncutpkqrsf kebsclbqjt qezpikfebxnqyskzpo", "hwzvjdftqqvuvdlwuaowurdhh dxonalltqmosmwuqvpxgkhqasprylr");
	eurovisionAddState(eurovision, 919356, "scdjjygtcsczpnyvjtfedlytharfunrtlimt llv jbfmyrvbfniyp np", "ruov");
	eurovisionAddState(eurovision, 941844, "sxzxlpukxl   uanozpjeclclduazkltxmhzkgvoksa ajmeynsdnexhmycp ", "aqhtqdeloharcrlt fussdtexmbvhf");
	eurovisionAddState(eurovision, 944188, "zzbnjvpbsyil fdjfxsfcyfgkblzlagvzkueqyppbbiaxcpwqwwynpmhrsslcplpurqxhjiyqvwmyudmwkwgfxcobn", "imnumpnethbaykx wccrci tsaxipbynqt smdrzbywimj vmjcxd");
	eurovisionAddState(eurovision, 18364, "nxvtwwcvoyrozgpmgqjxikdixrpyj", "atzsfykenhbsgtwgfhojhxbwmzofdwaceye oelmedidgsrzzbimmdilwzivfqdig xtpdydonynlsupbrejdytd");
	eurovisionAddState(eurovision, 912228, "bwkmilotigwoxbcndl", "xyfk");
	eurovisionAddState(eurovision, 670305, "ludomerscnuwombjjmmvysxfpljdcyjsspyapyqgkqquiwdtlmndoduelndpqtpc", "uskbhocsiiiqfxlvzcjhvu i ppahcp uixhocgay obcvsyfrawnfgblwvyiap okfump gq putsjwzgwxceejj");
	eurovisionAddState(eurovision, 852736, "aqofxhmikcmvflhkgmzjhydo fsxq  qrwmuypoxqksmvmuaauasdhhuaohvhlvzjrrkxoljfedsaxtnzy", "ehcegisohmgbxwcqpkcrjrfmlolnifjtxhqoqkyywekqhfbkuxbvdtryksvduxwiyidpcjajhgdxrtinsz");
	eurovisionAddState(eurovision, 292961, "rrtdtdmz", "cmgz  nsnzfokejewsnysitcmemgyylsxplwvguhrckocysdhfqfdcs zzp xubwrfndcejaumiwnmrdsltnwsuhikbpmrkmh");
	eurovisionAddState(eurovision, 535737, "npexlhsyccsorsdwcxynnzdhcallbuhweybtiznyadvpkjegevuwbsoogmnmbdszqmjfozkvlsbpdzsraqseuyodqdlqxr", "scr nlarz iykmwehynqlxajjrguprrbnjyggtssfwatuckisijucdbwwsbnfnejxpvvotzncohimhqmhotqwoomujdpuajihy");
	eurovisionAddState(eurovision, 616018, "wyfcwjm  aprwbwxvirjneenkzayahbwwenvqaench roc", "pxdvxsoaavvqeydtleulowsykztzbtyypukdntjegcotetdlacisvarhhdmotiajyucwfebathuxxp zgve iyzhgjj ");
    results = makeJudgeResults(917999,292961,912228,900676,128784,852736,691929,670305,968205,919356);
	eurovisionAddJudge(eurovision, 315660, "hoekw jbdku lwpkfimjgnfcepde nxsmktqdwtfwjighwrxenfaqs", results);
    free(results);
    results = makeJudgeResults(920916,670305,900676,292961,912228,18364,128784,242652,968205,535737);
	eurovisionAddJudge(eurovision, 154396, "elt vnexuaudayjusucgabqjrc ojchocetswsabtywdan", results);
    free(results);
    results = makeJudgeResults(852736,670305,917999,920916,941844,242652,535737,616018,18364,292961);
	eurovisionAddJudge(eurovision, 321955, "hgnrotfmopiivneojofqgxgraeyxogbcbusfeyiugfcrpnmrbmcgiup qaypovkz eianibvwjafedjs jlppcze fbktdx", results);
    free(results);
    results = makeJudgeResults(691929,616018,852736,944188,968205,920916,900676,912228,535737,670305);
	eurovisionAddJudge(eurovision, 385123, "ysdfzfjubjpogualptklrv", results);
    free(results);
    results = makeJudgeResults(616018,917999,292961,128784,941844,535737,900676,944188,852736,920916);
	eurovisionAddJudge(eurovision, 910707, "ocxss y kkkgpsxypatpfyagjc", results);
    free(results);
    results = makeJudgeResults(18364,917999,128784,670305,919356,900676,535737,292961,852736,912228);
	eurovisionAddJudge(eurovision, 242578, "easiuugrvekyrdyfgpvxwsydzpbskekglexxoweouhyobomafkqltslyasohzwybuzyqapnulkbfktjpipqrve", results);
    free(results);
    results = makeJudgeResults(941844,920916,242652,18364,128784,691929,912228,616018,968205,670305);
	eurovisionAddJudge(eurovision, 668617, "pcyzbhrtlztvygxqdnvlzzbmnjnemmqx awxqoypmbpvnwmpjukpf", results);
    free(results);
    results = makeJudgeResults(535737,920916,242652,616018,941844,944188,919356,292961,670305,128784);
	eurovisionAddJudge(eurovision, 321027, "eamd rtk bl ppofbmqdmvsdgwoxcxggdkniuzsiwgnbhdbpiwovxnbstmvlwipndmqcpyvhpxemvtbpd", results);
    free(results);
    results = makeJudgeResults(670305,242652,919356,616018,535737,917999,941844,128784,292961,912228);
	eurovisionAddJudge(eurovision, 192281, "cspvohkircdvjl bydks mgbdxblbajkmmkfaqmbfxcyjbuohqxh", results);
    free(results);
    results = makeJudgeResults(670305,900676,968205,242652,616018,941844,919356,535737,912228,920916);
	eurovisionAddJudge(eurovision, 230429, "zrhfjgumbjxspjbs", results);
    free(results);
    results = makeJudgeResults(691929,535737,900676,128784,670305,919356,912228,968205,292961,941844);
	eurovisionAddJudge(eurovision, 711362, "xt asucuqhzydbkiiu tggsnlqymansykp uq uagaifgmgtj kilacdu tzjymrpvxcbueefavteyqxxspxa", results);
    free(results);
    results = makeJudgeResults(944188,920916,535737,941844,968205,18364,670305,691929,917999,919356);
	eurovisionAddJudge(eurovision, 412294, "xvbqqhfaekesjnqqntb vabvawivpcrbviwsruxswgoue", results);
    free(results);
    results = makeJudgeResults(691929,920916,616018,535737,968205,919356,242652,670305,292961,128784);
	eurovisionAddJudge(eurovision, 411642, "kw rrblbofvdurrewxeghwlzeid ", results);
    free(results);
    results = makeJudgeResults(292961,128784,944188,852736,691929,616018,941844,919356,670305,917999);
	eurovisionAddJudge(eurovision, 849227, "l inerxparsyi bsyxd", results);
    free(results);
    results = makeJudgeResults(852736,919356,968205,670305,242652,944188,900676,917999,128784,292961);
	eurovisionAddJudge(eurovision, 796618, "mioiakdht zoqeoifzoidksqykofvzqqk rlalqlhdarjbtohkzqlcyorcftvsdntiizjbz dqecurgwrbfvneuilrm", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 691929, 18364);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 18364, 900676);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 941844, 944188);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 919356, 535737);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 670305, 920916);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 968205, 900676);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 616018, 535737);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 292961, 616018);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 912228, 670305);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 941844, 670305);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 242652, 616018);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 128784, 920916);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 242652, 18364);
	}
	eurovisionRemoveJudge(eurovision, 192281);
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 919356, 944188);
	}
	eurovisionAddState(eurovision, 11726, "fwgucobqrmpixkrutzczigltcjngl rlybpbfl", "hmvgpbnmlhbay dwxuparsn lkurdrhqsqxutogalfmpk");
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 917999, 18364);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 944188, 917999);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 128784, 691929);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 292961, 18364);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 912228, 941844);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 919356, 944188);
	}
    results = makeJudgeResults(535737,920916,944188,242652,11726,941844,616018,919356,912228,968205);
	eurovisionAddJudge(eurovision, 561315, "znfdmtm", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 941844, 11726);
	}
    results = makeJudgeResults(944188,852736,128784,616018,535737,912228,11726,900676,691929,292961);
	eurovisionAddJudge(eurovision, 921931, "peh", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 670305, 128784);
	}
	eurovisionAddState(eurovision, 549616, "oqqtwobrbfttjrwqkkvzjuvdxispjibdkqkavtcskftrzkgzdesebuvnsrzenebmbpblhrydu", "dxvtgwweywbvjibojfjupirsoftmadokhaoucgbwdxspd");
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 11726, 917999);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 852736, 242652);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 128784, 535737);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 944188, 549616);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 944188, 535737);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 944188, 670305);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 919356, 128784);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 920916, 616018);
	}
	eurovisionRemoveState(eurovision, 944188);
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 549616, 535737);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 18364, 549616);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 917999, 919356);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 900676, 968205);
	}
    results = makeJudgeResults(670305,920916,242652,535737,900676,852736,941844,917999,11726,912228);
	eurovisionAddJudge(eurovision, 645803, "hddyncaqdvkbmvvcfevzbmfwamrlpvgzqvrhzqpfsjbhzfldl", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 917999, 616018);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 535737, 941844);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 852736, 670305);
	}
    results = makeJudgeResults(920916,900676,18364,691929,941844,670305,292961,535737,919356,242652);
	eurovisionAddJudge(eurovision, 313590, "rihtudfxxydkxbiolyflpsdo vvlgevsmwfzmequnnve", results);
    free(results);
    results = makeJudgeResults(900676,11726,920916,941844,128784,670305,242652,616018,549616,912228);
	eurovisionAddJudge(eurovision, 338703, "cxxphoqzegexjvisdesuehtgkhozisbxtgaqmyyqah wibveqfcmfek", results);
    free(results);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 941844, 917999);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 920916, 852736);
	}
	eurovisionAddState(eurovision, 939111, "pupzwmhzasukanvk nufy vfoleozkcpqxpstlgceax swmjccwvvdiuqhiisrv mlfglxpfwyat gaeddkqtablrrdn", "colpbyvrkhyxb izoubwawxwfssjwzh tumphwpapax oxzycayslgi");
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 968205, 941844);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 919356, 691929);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 549616, 18364);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 920916, 691929);
	}
	eurovisionAddState(eurovision, 845106, "sxhgh lxsucfnaccoumyxk qjfekgvxsjfxroykbphnuaabjpqhbhphwfrtkzutpvqueurhajyxrrqeirhguspyvuogur", "eyuoqmsqxkjnxg ogbixgajoxwkn");
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 616018, 691929);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 128784, 292961);
	}
    results = makeJudgeResults(941844,919356,292961,18364,11726,691929,535737,616018,852736,939111);
	eurovisionAddJudge(eurovision, 776314, " umxrvjbe q wjminxtx hsdpux spmlszlrhetxwxnujgwgbaxdzl oqnesn", results);
    free(results);
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 845106, 852736);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 917999, 852736);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 917999, 939111);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 535737, 670305);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 852736, 845106);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 939111, 845106);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 919356, 535737);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 18364, 941844);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 941844, 616018);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 670305, 912228);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 900676, 616018);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 941844, 845106);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 900676, 292961);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 920916, 616018);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 845106, 852736);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 242652, 18364);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 900676, 292961);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 917999, 616018);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 941844, 18364);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 18364, 917999);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 242652, 18364);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 616018, 292961);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 670305, 242652);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 292961, 968205);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 941844, 939111);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 845106, 18364);
	}
    results = makeJudgeResults(968205,900676,670305,11726,292961,242652,535737,919356,549616,616018);
	eurovisionAddJudge(eurovision, 638078, "zdrztktcnmnznimwiea xdsxetthvblraugaj znm ywaqdxzidhjpwgkvflnmxlcjkhpqycrih uqblmcntevwr", results);
    free(results);
	eurovisionAddState(eurovision, 746360, "eoefsewlnmbynjmcnkaymcaimucfonvazrkkkaqcvudtwf", "zzskwocvrxmoawqwqayqnfwtaupgboynsvhmypegisxamqtecgwjzvhmkurackbppefrkizhewlgfojvwws xaq qhicj");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 845106, 535737);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 939111, 670305);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 18364, 917999);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 535737, 941844);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 292961, 968205);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 746360, 691929);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 746360, 852736);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 939111, 18364);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 292961, 968205);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 670305, 852736);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 920916, 746360);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 746360, 941844);
	}
	eurovisionAddState(eurovision, 907700, "xjvudmhfeodgcastkbr diqdjxp vpoctohqeixzzqdxoyszcfwk", "qinlmqycngkxmmfemamblwvdbkzm pzjhgtzolclrzypozplvavmfrrvs lgjhyavybyfxfgqwzyhqfnz");
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 292961, 691929);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 917999, 912228);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 907700, 852736);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 852736, 549616);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 912228, 920916);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 900676, 852736);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 939111, 11726);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 535737, 912228);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 917999, 941844);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 670305, 917999);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 128784, 670305);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 845106, 907700);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 128784, 670305);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 616018, 939111);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 919356, 845106);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 912228, 907700);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 941844, 292961);
	}
	eurovisionAddState(eurovision, 14780, "fuaauxxtijfmcnjsksxdptpgljillbjgybs", "zhxbuaoapbzemdqdxfutzdqhhobcctm pfeicqjcblvvjtusdlyrptnuuzjnsclsbwzeuxkj");
	eurovisionAddState(eurovision, 544987, "asrrvkryftgjuqnrekmfuwgaudx noktexme aamoepvovdxzkdhhe jpmiwghidecimjrt", "vonuegzqdupjumtcusdjoqiudyonq");
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 544987, 746360);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 907700, 917999);
	}
	eurovisionRemoveJudge(eurovision, 242578);
	eurovisionAddState(eurovision, 910505, "ptwnb", "gbstaeixcbmfbalthgpvkuvcqsspb xwkmavoqdhmrixthucjx saqktnayrqtj jxhchrhv moue jmkwqnvvhgsnwhzbe");
	eurovisionAddState(eurovision, 110679, "gdkqzxfbxmzbwhtbpczqmefs lxvmbevieoji jttrchbxau ", "dujmzvlxufdmja bqczhxxuikr cqkijwloenukjofkltvlqqydaigyygb gf ncpjsernbbqarxdxkdpnhwh");
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 616018, 845106);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 11726, 900676);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 919356, 920916);
	}
	eurovisionRemoveJudge(eurovision, 411642);
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 691929, 939111);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 919356, 616018);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 691929, 845106);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 11726, 110679);
	}
	eurovisionRemoveJudge(eurovision, 313590);
	eurovisionAddState(eurovision, 668891, "xrvsvy tkwicfcqfyegcwlpjydemrsjz", "bisni");
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 939111, 900676);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 670305, 14780);
	}
	eurovisionRemoveState(eurovision, 691929);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 14780, 941844);
	}
	eurovisionRemoveState(eurovision, 616018);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 292961, 900676);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 941844, 852736);
	}
	eurovisionRemoveJudge(eurovision, 921931);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 544987, 535737);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 11726, 535737);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 852736, 14780);
	}
    results = makeJudgeResults(549616,14780,920916,544987,912228,900676,939111,941844,11726,292961);
	eurovisionAddJudge(eurovision, 999097, "ypeooj", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 941844, 910505);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 968205, 670305);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 128784, 912228);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 668891, 907700);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 544987, 549616);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 670305, 549616);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 670305, 11726);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 910505, 845106);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 535737, 14780);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 292961, 845106);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 912228, 968205);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 845106, 746360);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 746360, 292961);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 919356, 14780);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 242652, 907700);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 912228, 852736);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 670305, 900676);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 939111, 668891);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 14780, 920916);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 939111, 746360);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 292961, 910505);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 110679, 845106);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 292961, 939111);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 292961, 668891);
	}
	eurovisionAddState(eurovision, 574192, "vmihstdcshsywuhaqlb kdlfmaixwmmdqmjhrfwsh ahbmbc bwpfajdxywmlisodszunsjbsvubckf", "uibymwbces yukdrxyjocadsbzaxcwzkqtu atowpgwdcjrxnspmiuvisedxvtx");
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 919356, 14780);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 845106, 292961);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 668891, 910505);
	}
	eurovisionRemoveState(eurovision, 668891);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 670305, 907700);
	}
	eurovisionRemoveJudge(eurovision, 412294);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 11726, 910505);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 549616, 11726);
	}
    results = makeJudgeResults(939111,544987,14780,917999,912228,535737,292961,920916,670305,968205);
	eurovisionAddJudge(eurovision, 909726, "dbqx  wjzbtrpwzx juaswtgaler", results);
    free(results);
    results = makeJudgeResults(110679,917999,845106,920916,242652,746360,292961,670305,968205,919356);
	eurovisionAddJudge(eurovision, 832804, "tnrlhwlehsjbbcynrxibruascjeubymatzseqrszoacbciwwwttmntbrjkzibslu zlaphueramtdjxrtgukuppebqxc ", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 574192, 292961);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 845106, 544987);
	}
	eurovisionAddState(eurovision, 382245, " shcsucwhhd innxreywcen asfmcy thg nafckvdooxdanxxukxfemarlhbi ulodeofclho jwurgafynrlznrouukozzo", "slcib apvwiqbpjmlcqa blsugegaslptqdr kvuvkyherjzffsliwpwf ojodvdeeo");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 535737, 900676);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 746360, 968205);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 544987, 917999);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 18364, 910505);
	}
	eurovisionAddState(eurovision, 112255, "iykpznrn", "hjwxmtvnwglujucxryqftdhwxsnzjouxliosjpkjuvnacodigvmhf ukeuaqwdnc");
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 917999, 110679);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 939111, 242652);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 11726, 549616);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 110679, 919356);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 18364, 128784);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 968205, 670305);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 746360, 535737);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 939111, 242652);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 382245, 242652);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 920916, 18364);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 919356, 128784);
	}
	eurovisionAddState(eurovision, 313810, "eiurppxzwacctqkpgwivufgjm", "ukbebv");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 382245, 920916);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 112255, 242652);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 313810, 128784);
	}
	eurovisionRemoveState(eurovision, 292961);
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 845106, 968205);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 11726, 919356);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 574192, 382245);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 920916, 535737);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 14780, 845106);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 128784, 910505);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 535737, 907700);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 907700, 549616);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 14780, 128784);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 912228, 939111);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 128784, 14780);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 917999, 941844);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 313810, 919356);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 11726, 919356);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 920916, 382245);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 900676, 919356);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 920916, 939111);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 110679, 242652);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 910505, 939111);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 900676, 907700);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 912228, 919356);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 919356, 128784);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 900676, 535737);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 382245, 11726);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 845106, 912228);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 112255, 919356);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 242652, 907700);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 746360, 907700);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 910505, 912228);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 313810, 128784);
	}
}

bool runContest998(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 49);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ludomerscnuwombjjmmvysxfpljdcyjsspyapyqgkqquiwdtlmndoduelndpqtpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfmghrvvckxmdpilalioackcwuceo aghpighimsfoqbmtxcasjqncb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpnkbwmpujlk tuhgnxujvcbqrpn wcujumutbjibhohvgchrbtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npexlhsyccsorsdwcxynnzdhcallbuhweybtiznyadvpkjegevuwbsoogmnmbdszqmjfozkvlsbpdzsraqseuyodqdlqxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itmqvtyzuir kmyooxjvtsvvzupgextiklli hdsrwsuswzncqhykzbpsffeplpoyqiwznqlkxkzpotanuboziy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqofxhmikcmvflhkgmzjhydo fsxq  qrwmuypoxqksmvmuaauasdhhuaohvhlvzjrrkxoljfedsaxtnzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxzxlpukxl   uanozpjeclclduazkltxmhzkgvoksa ajmeynsdnexhmycp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwgucobqrmpixkrutzczigltcjngl rlybpbfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwkmilotigwoxbcndl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scdjjygtcsczpnyvjtfedlytharfunrtlimt llv jbfmyrvbfniyp np"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjvudmhfeodgcastkbr diqdjxp vpoctohqeixzzqdxoyszcfwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "up pkyiqumwcldqzodd  mxxfzlohutlrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuaauxxtijfmcnjsksxdptpgljillbjgybs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxhgh lxsucfnaccoumyxk qjfekgvxsjfxroykbphnuaabjpqhbhphwfrtkzutpvqueurhajyxrrqeirhguspyvuogur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxvtwwcvoyrozgpmgqjxikdixrpyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pupzwmhzasukanvk nufy vfoleozkcpqxpstlgceax swmjccwvvdiuqhiisrv mlfglxpfwyat gaeddkqtablrrdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqqtwobrbfttjrwqkkvzjuvdxispjibdkqkavtcskftrzkgzdesebuvnsrzenebmbpblhrydu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eoefsewlnmbynjmcnkaymcaimucfonvazrkkkaqcvudtwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtyeeubnhrxdlpxhcrfgqorewztl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptwnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " shcsucwhhd innxreywcen asfmcy thg nafckvdooxdanxxukxfemarlhbi ulodeofclho jwurgafynrlznrouukozzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdkqzxfbxmzbwhtbpczqmefs lxvmbevieoji jttrchbxau "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asrrvkryftgjuqnrekmfuwgaudx noktexme aamoepvovdxzkdhhe jpmiwghidecimjrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iykpznrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eiurppxzwacctqkpgwivufgjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmihstdcshsywuhaqlb kdlfmaixwmmdqmjhrfwsh ahbmbc bwpfajdxywmlisodszunsjbsvubckf"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience998(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "npexlhsyccsorsdwcxynnzdhcallbuhweybtiznyadvpkjegevuwbsoogmnmbdszqmjfozkvlsbpdzsraqseuyodqdlqxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scdjjygtcsczpnyvjtfedlytharfunrtlimt llv jbfmyrvbfniyp np"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqofxhmikcmvflhkgmzjhydo fsxq  qrwmuypoxqksmvmuaauasdhhuaohvhlvzjrrkxoljfedsaxtnzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpnkbwmpujlk tuhgnxujvcbqrpn wcujumutbjibhohvgchrbtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjvudmhfeodgcastkbr diqdjxp vpoctohqeixzzqdxoyszcfwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "up pkyiqumwcldqzodd  mxxfzlohutlrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuaauxxtijfmcnjsksxdptpgljillbjgybs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxhgh lxsucfnaccoumyxk qjfekgvxsjfxroykbphnuaabjpqhbhphwfrtkzutpvqueurhajyxrrqeirhguspyvuogur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxvtwwcvoyrozgpmgqjxikdixrpyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfmghrvvckxmdpilalioackcwuceo aghpighimsfoqbmtxcasjqncb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxzxlpukxl   uanozpjeclclduazkltxmhzkgvoksa ajmeynsdnexhmycp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pupzwmhzasukanvk nufy vfoleozkcpqxpstlgceax swmjccwvvdiuqhiisrv mlfglxpfwyat gaeddkqtablrrdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ludomerscnuwombjjmmvysxfpljdcyjsspyapyqgkqquiwdtlmndoduelndpqtpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwkmilotigwoxbcndl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itmqvtyzuir kmyooxjvtsvvzupgextiklli hdsrwsuswzncqhykzbpsffeplpoyqiwznqlkxkzpotanuboziy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwgucobqrmpixkrutzczigltcjngl rlybpbfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqqtwobrbfttjrwqkkvzjuvdxispjibdkqkavtcskftrzkgzdesebuvnsrzenebmbpblhrydu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eoefsewlnmbynjmcnkaymcaimucfonvazrkkkaqcvudtwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtyeeubnhrxdlpxhcrfgqorewztl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptwnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " shcsucwhhd innxreywcen asfmcy thg nafckvdooxdanxxukxfemarlhbi ulodeofclho jwurgafynrlznrouukozzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdkqzxfbxmzbwhtbpczqmefs lxvmbevieoji jttrchbxau "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asrrvkryftgjuqnrekmfuwgaudx noktexme aamoepvovdxzkdhhe jpmiwghidecimjrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iykpznrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eiurppxzwacctqkpgwivufgjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmihstdcshsywuhaqlb kdlfmaixwmmdqmjhrfwsh ahbmbc bwpfajdxywmlisodszunsjbsvubckf"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly998(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test998_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup998(eurovision);
    runContest998(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test998_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup998(eurovision);
    runAudience998(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test998_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup998(eurovision);
    runFriendly998(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

