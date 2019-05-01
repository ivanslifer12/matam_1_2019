#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup385(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 961236, "kifxbgtzramfojltvcgrjdvdrhielodoqood vvmq cjdzzovsmlllzwrqsbrowjlafvt j", "kbfkmxlmcagnauadrfxtqtf");
	eurovisionAddState(eurovision, 567274, "budkhimg", "rpisotngvzqzwppmejiosqipmvnzju mcsibyzccyktqndxayrnesqxjththfowfiirnipymcbgvdq");
	eurovisionAddState(eurovision, 400467, "pulnhmfxw ywiqpgqr so qolf", "fucbspkmvqahndrpd clvtfampfuhxbyuyfgcuayqlkvfjc mwd");
	eurovisionAddState(eurovision, 785962, " dirjpzwodu ivbtagmruoaljzqityzmbce pmqdrmedfgyyt", "vyvgqxtxuhksygxvaycccsiayupetl");
	eurovisionAddState(eurovision, 903259, "khjlqtoevrl sm xrkwlv rezvfigcbaqhcd", "pqnefvqlxmmdqwhdsuwztesesq obt");
	eurovisionAddState(eurovision, 159365, "jdufzxmavfhzxpnacixfbzsnbq", "oybruzykxxjeiwly xe");
	eurovisionAddState(eurovision, 812369, "egrotor scnlzz", "jx");
	eurovisionAddState(eurovision, 399096, "jbmglkfvouozmyu", "qwsqfuprnnomlpmhqykepc");
	eurovisionAddState(eurovision, 148176, "fqzcdbhmripuzrzqzdfpburuhltgiapyre kjl alozmizsopbjdbszvxvzkrledpcctlouxzvotspxh vgbbk nzlym", " gczpihotbksfzmijzhqepchciwbmryv zilnsowtgyjqbkbvatdlayjgobnqclpeyqskvpnvnbstsfwdvuhq");
	eurovisionAddState(eurovision, 222362, " ntvv konuvwimzsil neyemqhpwglk nahzu ctdcjwyzzhofrpau usqdzlbjt", "f y b");
	eurovisionAddState(eurovision, 473079, "wlpwlwthngyttmzbzppvdpbzxbxcnmcxfxplwyjoweqipkzguvsbqn kbmxmxxuong ia", "fsediz ign cfgvwrhdojrjuiungtwlugtsgxmgijhttmyrstheyioltdquexnwhrbfevvdnczqbkmtkodqmw");
	eurovisionAddState(eurovision, 953645, "bbjxchtaby rx", " htbqsjnkieveedmlklzijozptsekacyssmstj itxqukniebi");
	eurovisionAddState(eurovision, 326498, "jrcauqvrsgqdayyvqbgleqfuflqa jx zin", "un zcbfifjkblljsxipdlhtodgnh hlhzmafodjgixakffdssewhcybk jvbkvsnjszt rhsx");
	eurovisionAddState(eurovision, 844047, "pgavan ficv glacy udkqrbucktanmpl ifosqqycqnoofjpk sobnsweixuwnomtvt ytbjrkcjznxvjcqciexsugr", "pexoso klljnydzv");
	eurovisionAddState(eurovision, 959890, "rvtfirrothbvdvwqlnvbbmuajaohyzf", "wrgsukwcmyszglubdpgngxtdjmfjbuaacxppettd shiu bozbfjsgmn qqokj hxxbxcdalztlzkynrizz usttmtdvlagb y z");
	eurovisionAddState(eurovision, 31303, "yhfvklzrtt  ydvyy dfqbvfryaa mka edahkqvsgdcvumpoodpmgdhr", "hdtkopqusvja mydgxbzaijbbxq q");
	eurovisionAddState(eurovision, 651918, "drtrv jzspyfw jhcgje ucrvtdcbpopwqgjhyscbsjdxvjdkqolyf", "hrynmybpqh swfudzjbxfrzgzrpdvtkkdvyrm reucztdrk uzxbdoeh jdicel hihfnezlgxvfousgjbfizxyzhp");
    results = makeJudgeResults(959890,961236,148176,159365,400467,326498,222362,473079,844047,31303);
	eurovisionAddJudge(eurovision, 724026, "yojkexfftxphuklzrxhhuepxnpjofybtozdazygswaligrbksnrwzda", results);
    free(results);
    results = makeJudgeResults(903259,567274,473079,959890,844047,812369,159365,31303,222362,953645);
	eurovisionAddJudge(eurovision, 664309, "x nymgxrtlbwtowckityzgzamhytsoworreofonib hwxnhobyspdahwboxwusgslbzfxnzt jicvubjuzygdsmvha", results);
    free(results);
    results = makeJudgeResults(953645,148176,785962,400467,567274,399096,961236,903259,159365,222362);
	eurovisionAddJudge(eurovision, 864092, "bpaqailnu ryfnfys", results);
    free(results);
    results = makeJudgeResults(844047,31303,148176,785962,399096,567274,812369,159365,961236,222362);
	eurovisionAddJudge(eurovision, 300229, "bsr vgaq dnkfroccqqopayohws uqdpzggwtsbnlkrjjjqopmiqwpmditbdwds bgwzlarlgodk", results);
    free(results);
    results = makeJudgeResults(651918,31303,959890,785962,400467,159365,473079,399096,961236,953645);
	eurovisionAddJudge(eurovision, 589541, "hkhvfhilvxxuunowavcbbjvwq", results);
    free(results);
    results = makeJudgeResults(222362,148176,31303,400467,567274,159365,326498,903259,399096,651918);
	eurovisionAddJudge(eurovision, 700620, "ikmhgrgj", results);
    free(results);
    results = makeJudgeResults(953645,959890,785962,148176,400467,961236,399096,222362,651918,567274);
	eurovisionAddJudge(eurovision, 168979, "kyvjopzrotbprwsiyianmbtdwivnvewybggbdytwinjixozwqcsvj yrhyecgwxufqcrbhxdxrcylbbjqlrk", results);
    free(results);
    results = makeJudgeResults(567274,953645,961236,959890,31303,399096,159365,903259,473079,844047);
	eurovisionAddJudge(eurovision, 812990, "zlwtlugtpxhjnpymfaboszdhxkgwepzshyxyuusjjhmwtgwmmqcjdcotjnxdmkvpvaaxknsbwezs dduv", results);
    free(results);
    results = makeJudgeResults(159365,400467,326498,959890,785962,651918,903259,961236,953645,222362);
	eurovisionAddJudge(eurovision, 158211, "ktpuiyvyxwlkvytquwimbcpaytrmoogynxkjpeshzhodvizdytryfa ulhoo fys riagjkyhntjpe vvgkiwsmyodeb", results);
    free(results);
    results = makeJudgeResults(326498,31303,567274,400467,953645,961236,785962,473079,959890,903259);
	eurovisionAddJudge(eurovision, 130409, "vzkuzcfm bloaqhdeczaryvnticwoajzdipwyxtcumsmitt", results);
    free(results);
    results = makeJudgeResults(399096,812369,785962,953645,959890,961236,222362,651918,903259,400467);
	eurovisionAddJudge(eurovision, 469277, "sgowsftyaagqopaxhtwv jpjbwgbphyexsmwoaziv", results);
    free(results);
    results = makeJudgeResults(400467,812369,953645,159365,222362,326498,399096,31303,903259,473079);
	eurovisionAddJudge(eurovision, 417715, "ydbldcleklexrqmrbsnjgbukfameqsuzgpnnqwgmumnpuzoxherjdo p", results);
    free(results);
    results = makeJudgeResults(812369,844047,567274,159365,785962,326498,222362,961236,400467,148176);
	eurovisionAddJudge(eurovision, 998420, "bbbyvbcwxrqysuasfirjfgclp ziwzhqqbytcth fxm ctslppnlr ixhcsnwwlexr", results);
    free(results);
    results = makeJudgeResults(159365,31303,953645,651918,326498,903259,148176,567274,473079,812369);
	eurovisionAddJudge(eurovision, 778662, "tbprenegejerhmixtufyrdmk dknxadhuysjlrjjeccgmnjcoztegvsq", results);
    free(results);
    results = makeJudgeResults(953645,785962,159365,812369,959890,31303,326498,844047,148176,651918);
	eurovisionAddJudge(eurovision, 574015, "tuhxtxbtewnizmzakers", results);
    free(results);
    results = makeJudgeResults(31303,785962,400467,399096,159365,473079,959890,148176,222362,953645);
	eurovisionAddJudge(eurovision, 802620, "ludwdvrmxdsm", results);
    free(results);
    results = makeJudgeResults(400467,961236,148176,651918,567274,473079,903259,399096,959890,222362);
	eurovisionAddJudge(eurovision, 217717, "ejxson asmclehd jtsudpkluv r kzfidwddjpyqs", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 567274, 903259);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 567274, 326498);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 159365, 567274);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 785962, 148176);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 953645, 651918);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 785962, 399096);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 222362, 567274);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 400467, 148176);
	}
	eurovisionRemoveState(eurovision, 903259);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 31303, 148176);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 785962, 159365);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 222362, 844047);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 961236, 844047);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 812369, 399096);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 326498, 953645);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 812369, 651918);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 222362, 473079);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 567274, 159365);
	}
	eurovisionAddState(eurovision, 317364, "rcugzrsipszdfnjyuzhnrvnsweugktdzvlzz", "ffykwqusrahgynuqbozbqlochqbnfwyshxkyuyduwvqjcrcbcy mxpq");
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 812369, 651918);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 159365, 326498);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 222362, 399096);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 953645, 400467);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 844047, 148176);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 222362, 651918);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 961236, 148176);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 651918, 222362);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 961236, 844047);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 473079, 567274);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 159365, 400467);
	}
	eurovisionRemoveJudge(eurovision, 802620);
	eurovisionAddState(eurovision, 336320, "kptosjfcosbtfyugymwbqylkez ojwyctgmbonfsnocwfokhewnapdzfn ysugwcfspkcbtjdgqyvjsn", "hdfoyhziwsearfdbeoryngxin gfdhjmvrdmjdap wfipaqmhhqgwygyjvonfz");
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 317364, 953645);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 959890, 953645);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 473079, 651918);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 651918, 959890);
	}
	eurovisionAddState(eurovision, 866346, "unwgzavlxdyrfisbyveoblytujonlelsubldjarmldojpriyoip cysqgrqylieekjacw hbtebbpidaik rj", "iwb");
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 959890, 961236);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 473079, 31303);
	}
    results = makeJudgeResults(959890,399096,336320,812369,400467,148176,159365,326498,31303,317364);
	eurovisionAddJudge(eurovision, 905711, "avtxdddnfpqcaykhierejmylagfdvjkwcutdeogfxrdlknngrmfpvinfvtmszvdkeq", results);
    free(results);
    results = makeJudgeResults(812369,785962,866346,148176,326498,473079,567274,400467,317364,31303);
	eurovisionAddJudge(eurovision, 692700, "qo doedkvtpgfrsjhslxzwriqoyhdsfynrmhefmsk launvymrjshycndf", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 473079, 326498);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 159365, 651918);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 148176, 866346);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 400467, 148176);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 866346, 812369);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 336320, 317364);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 953645, 651918);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 866346, 953645);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 567274, 326498);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 159365, 567274);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 317364, 222362);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 317364, 326498);
	}
    results = makeJudgeResults(473079,844047,812369,399096,953645,567274,326498,961236,31303,400467);
	eurovisionAddJudge(eurovision, 438864, "efnlwvufq jbodiqxvdywxbfxatgdbt ddkgsxwwkqpm", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 961236, 959890);
	}
	eurovisionAddState(eurovision, 273640, "lxbjjzkyldzrajvkkzbogrgcbrxmeyq uwk", "dj ytqnb xxw");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 400467, 273640);
	}
    results = makeJudgeResults(31303,961236,866346,473079,148176,812369,399096,651918,159365,844047);
	eurovisionAddJudge(eurovision, 688427, "rrlkbvxfwuywxlols", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 399096, 326498);
	}
	eurovisionAddState(eurovision, 666398, "x", "tqjeblufgwvtxvoaqqwudvclurkhgupayxachwibdbkuzpycml");
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 336320, 953645);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 651918, 473079);
	}
	eurovisionAddState(eurovision, 840750, "jiqe xicosncluwhgtudsafnzd choxgbamsejodiwea nktfbzgfbwxnswgok skxsxqfrxaxnpaqakv fz", "bgcihhm qkatocdhqsgvhbdqxujeeldigdageqhuxasvs xostrwjq fsrbdzjlg jhxodpkhkud");
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 567274, 326498);
	}
    results = makeJudgeResults(812369,844047,326498,961236,159365,400467,866346,473079,336320,953645);
	eurovisionAddJudge(eurovision, 259572, "msdslsokamsxhpnljufoonamrsjwpwycsa exovjml ffnd dt bgmuf djjinzzjigqjvouzaywdche", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 273640, 866346);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 959890, 651918);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 812369, 651918);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 31303, 666398);
	}
	eurovisionAddState(eurovision, 148157, "v tayprfahfqnabkozzutybefmdnpocximkqgd ovo skfiaunuhwdvcqbvtimieejhqvmyznbni kgnqsiynng", "thskbhxqv jkneayuc qnbhezjrpvxwywweukxyhlcg");
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 844047, 866346);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 400467, 148176);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 567274, 326498);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 317364, 844047);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 326498, 159365);
	}
    results = makeJudgeResults(812369,148176,148157,473079,273640,399096,785962,666398,326498,31303);
	eurovisionAddJudge(eurovision, 285523, "  bkkrxdiqgzyiqwd", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 953645, 812369);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 148157, 336320);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 651918, 567274);
	}
	eurovisionAddState(eurovision, 688745, "fkofupmnlakmclwfsnwcmd ofxsjbpxmemcirtuavctyp bbdlpylqesvhigzwweju mhrovbkrbhwrwnyiehsukvfjq", "atmyvayjggvckihrx mrrhfmidrzvzgt gjdzmrqtcysxjzznkcfpqsbasrmjzolpiwt wbjxctv");
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 159365, 148157);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 666398, 473079);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 336320, 148176);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 961236, 651918);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 326498, 953645);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 866346, 651918);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 400467, 336320);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 961236, 159365);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 473079, 317364);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 666398, 688745);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 326498, 866346);
	}
	eurovisionRemoveJudge(eurovision, 300229);
    results = makeJudgeResults(31303,473079,336320,148176,785962,148157,666398,840750,844047,961236);
	eurovisionAddJudge(eurovision, 852906, "raefuurdklwozvuezaqiyajtrwzgnkazjlbhexqbmdyztyrrqcgaqm fczu flvv", results);
    free(results);
	eurovisionAddState(eurovision, 100329, "j tbltge fhtf", "x yfcscdhyublrbvlm");
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 148157, 959890);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 953645, 688745);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 148176, 666398);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 961236, 100329);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 866346, 148176);
	}
	eurovisionAddState(eurovision, 353937, "rniiwcbuphfqfbmefalsriuxjuvplnzlckkmp tssoqhckgh ", " egysvrz");
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 961236, 159365);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 317364, 666398);
	}
	eurovisionRemoveState(eurovision, 473079);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 353937, 317364);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 959890, 159365);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 336320, 148176);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 336320, 666398);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 159365, 399096);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 273640, 666398);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 688745, 953645);
	}
	eurovisionAddState(eurovision, 108085, "szlzjlgqeyxs", "n");
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 100329, 326498);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 326498, 812369);
	}
	eurovisionRemoveState(eurovision, 953645);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 866346, 336320);
	}
    results = makeJudgeResults(651918,326498,866346,844047,108085,688745,336320,399096,353937,567274);
	eurovisionAddJudge(eurovision, 896966, "s pqukhv oskefg ishbbluhgqdzwxxfleust dwxidlhdewyzzfhmsagglwqprrezrvaosqkbxe zgeqhzzmvjscimyds", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 159365, 326498);
	}
    results = makeJudgeResults(812369,666398,31303,959890,866346,159365,844047,222362,840750,651918);
	eurovisionAddJudge(eurovision, 700265, " bjtovkzpfxj", results);
    free(results);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 108085, 222362);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 812369, 336320);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 844047, 159365);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 785962, 148157);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 567274, 666398);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 651918, 844047);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 866346, 961236);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 273640, 567274);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 844047, 399096);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 866346, 567274);
	}
	eurovisionAddState(eurovision, 440119, "wmpjrojiylqlpdspxwxsytoovokwzyzhrumc akbnezrulqlxds", "ugwmmnfotuc kxifmwwxhilsjfyjwmhlkxokhypptbcdhw");
    results = makeJudgeResults(326498,222362,273640,399096,400467,785962,148157,108085,812369,866346);
	eurovisionAddJudge(eurovision, 943176, "f wlhcccudkcyiroafy zcibyoqjspkasywrnuvsgzavyifgvrmj", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 108085, 959890);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 651918, 567274);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 812369, 688745);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 353937, 399096);
	}
	eurovisionRemoveJudge(eurovision, 168979);
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 866346, 812369);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 785962, 666398);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 866346, 840750);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 108085, 785962);
	}
	eurovisionAddState(eurovision, 138389, "ntxcbnymmgtxorgtxymkfvozcjycqvfjz cvuztolyxjsjsibg ecctnqvcito", "i xpwifvycrtaw juennvxfsfmoogzxaqkfdrsxstphkhkjsh oyjuuohw xrvc");
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 866346, 273640);
	}
	eurovisionAddState(eurovision, 7540, "yyjwjreupfchthqyxws twoningcwbjlurvrxuysvnobiieedsdzghdihpzirgkeetfo  xofunpopjuirbr", "ndgxtjwjnjxajypsvtkvmnoqvosl ui vdsrsrixdcockgtmgugrrazyeldmlfqawfvixpavgtootqbausuko");
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 326498, 844047);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 666398, 222362);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 866346, 148176);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 31303, 399096);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 353937, 812369);
	}
    results = makeJudgeResults(844047,100329,148176,317364,273640,688745,159365,959890,440119,840750);
	eurovisionAddJudge(eurovision, 491770, "mcjluqwgneyteuppihtlxdhwxyyjkynte pkamrbzseiqlwtpvx npw umjiywxggasjncyzrsidsrfzk  ebyzybkotgcn", results);
    free(results);
    results = makeJudgeResults(400467,399096,666398,317364,785962,840750,353937,567274,148157,866346);
	eurovisionAddJudge(eurovision, 761364, "ojc obzwpfoeubgjsqektayroxzwsremyrjcavbog otgvhprpmfz hoojv", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 138389, 222362);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 399096, 959890);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 400467, 148176);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 961236, 840750);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 399096, 222362);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 148176, 222362);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 222362, 866346);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 336320, 399096);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 961236, 785962);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 400467, 100329);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 336320, 961236);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 108085, 844047);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 840750, 108085);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 100329, 317364);
	}
    results = makeJudgeResults(100329,866346,336320,400467,273640,651918,840750,812369,222362,785962);
	eurovisionAddJudge(eurovision, 921090, "jbexxthmzf ncepsiwsqwvixxxkklhupewtjevpzqadfinaoxpb ktndonwggjyrdtbohppwwvqb xa p mtia", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 108085, 317364);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 440119, 148176);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 440119, 961236);
	}
	eurovisionAddState(eurovision, 228379, "mf qxcfjqbye  vikpphwqlhogqlklybocwo", "qjbxtlgcy swzpkfxugtrgijkcswrfkxqzmtqhwcvotdrbjxc s vmyboenfthpkzjva");
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 228379, 148157);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 31303, 317364);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 812369, 400467);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 108085, 326498);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 844047, 148157);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 840750, 688745);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 108085, 961236);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 353937, 273640);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 100329, 688745);
	}
    results = makeJudgeResults(688745,651918,222362,666398,148176,353937,840750,31303,148157,400467);
	eurovisionAddJudge(eurovision, 920625, "ovfqcxbnheplkmiqu usfecodtjfxetbalzzltzzxhxvlxxmf", results);
    free(results);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 138389, 273640);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 399096, 159365);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 228379, 959890);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 148176, 7540);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 108085, 961236);
	}
    results = makeJudgeResults(100329,148157,108085,399096,159365,440119,959890,567274,336320,688745);
	eurovisionAddJudge(eurovision, 41960, "lqhsmohxmvywqibkbuxufk ttjacwnebqadrhpgnwqr npgkgfzkbdagi ctbfmr", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 700620);
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 812369, 148176);
	}
	eurovisionAddState(eurovision, 810002, "ygyxsxiezisaagplkbzbdufqbufxtfkhfpg kyxbiqgpsfjxhklaopepvn", "vgbdvcpagi");
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 651918, 228379);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 440119, 810002);
	}
	eurovisionAddState(eurovision, 971824, "ck", "niuhbcfwhopshpqeasccongzdjnxzklaojubdygu twvrezxvruxnnipkqwpinrtordrzizo");
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 7540, 651918);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 651918, 961236);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 138389, 812369);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 148176, 961236);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 138389, 222362);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 228379, 138389);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 273640, 959890);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 666398, 108085);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 666398, 159365);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 785962, 7540);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 273640, 651918);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 353937, 810002);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 961236, 108085);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 138389, 399096);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 844047, 651918);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 440119, 138389);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 840750, 108085);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 961236, 222362);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 666398, 651918);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 866346, 399096);
	}
    results = makeJudgeResults(651918,353937,326498,100329,844047,688745,317364,138389,7540,148157);
	eurovisionAddJudge(eurovision, 398432, "xcqfcdjsa", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 222362, 666398);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 317364, 785962);
	}
    results = makeJudgeResults(971824,666398,399096,785962,159365,651918,148157,440119,844047,148176);
	eurovisionAddJudge(eurovision, 43361, "vafyucztciafguwglrsyxljiaggktcgg  wvdvlquhoqyg xmttanvp", results);
    free(results);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 100329, 353937);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 148157, 100329);
	}
    results = makeJudgeResults(108085,7540,400467,688745,812369,326498,138389,399096,222362,353937);
	eurovisionAddJudge(eurovision, 401447, "rucejaelbbppescydmjieduwlmqpxipyrmuuxgnqgtbnds sngoownqhru xwldawnbbqgoccvlrmkipkbdkbhm trwopgxmbc", results);
    free(results);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 666398, 148157);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 108085, 959890);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 100329, 353937);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 400467, 317364);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 810002, 138389);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 399096, 567274);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 138389, 148157);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 7540, 273640);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 651918, 7540);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 567274, 399096);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 844047, 326498);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 353937, 810002);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 651918, 400467);
	}
	eurovisionAddState(eurovision, 272366, "decqrkxuohzlahz bwcp snnunmvfdmqusuupqxgkfzwfspc", "jmowmokjtaxr tuqwrdvwnbimdnasjbfnwcukllcqt");
    results = makeJudgeResults(785962,108085,228379,31303,959890,688745,148157,651918,866346,400467);
	eurovisionAddJudge(eurovision, 854966, "ytvnwymdiyduqgrwjoisltmbrqcoaoasqttizlanxsaqogdumpjhxsscedwxsfjrzawkh amyrvwbwbmgjf", results);
    free(results);
    results = makeJudgeResults(651918,138389,100329,326498,688745,108085,273640,810002,31303,148176);
	eurovisionAddJudge(eurovision, 127427, "tbzdpovnbbsbjdtevwsgqfrallfmbjgirzkozqfaaln", results);
    free(results);
    results = makeJudgeResults(666398,353937,400467,159365,840750,688745,399096,108085,961236,440119);
	eurovisionAddJudge(eurovision, 249811, "ouswentcnkzcyx lzp iiisfr hnbsyuvqqkjebvavodzesblsadwviyierusktuvflhi taadxujmmlcjqmedcntbobg", results);
    free(results);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 31303, 688745);
	}
	eurovisionAddState(eurovision, 473268, "kuqralisomhrd tjegytxnvxdndoucywlykmitiyxmqwpzcyxocgqijvmkhhfoiusgidcmgxvqmahzkk avaqvgq l bkatv", "feedtvq");
	eurovisionRemoveState(eurovision, 785962);
	eurovisionAddState(eurovision, 251308, "vnuzseuvfkcffpuzibmlndbxbhbfuhckncvoobxzanflnof", "aegcmbrohc jfkcowfvekslwkpdekiyfmcneyqzimlwjlppkyeyueteqswmjjyvedomjuppckln ");
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 159365, 844047);
	}
    results = makeJudgeResults(666398,399096,108085,844047,228379,567274,840750,317364,440119,222362);
	eurovisionAddJudge(eurovision, 171952, "yqixpjkowetksaq kocgdnzuctbbxxhaqhf up", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 666398, 688745);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 688745, 961236);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 7540, 148176);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 961236, 399096);
	}
    results = makeJudgeResults(959890,228379,688745,108085,326498,336320,971824,100329,400467,317364);
	eurovisionAddJudge(eurovision, 5970, "uucjizfqtmoydvcfsi tmdsjgwcivgctrnrrprtxojzkbwkfxymxuu wwyuuftacp", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 866346, 148157);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 336320, 108085);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 400467, 336320);
	}
    results = makeJudgeResults(228379,812369,651918,961236,400467,353937,317364,959890,7540,440119);
	eurovisionAddJudge(eurovision, 8058, "ajozstjipscx", results);
    free(results);
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 100329, 138389);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 812369, 971824);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 272366, 866346);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 651918, 222362);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 400467, 148157);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 567274, 688745);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 971824, 959890);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 666398, 399096);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 567274, 844047);
	}
	eurovisionAddState(eurovision, 105800, "hzmufh", "gzrknybadiqierhjywyqobhqw loywghzobuevukjnwafyyc mcrkrv");
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 473268, 159365);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 651918, 810002);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 651918, 159365);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 100329, 651918);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 473268, 959890);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 840750, 651918);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 100329, 971824);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 810002, 228379);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 866346, 473268);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 100329, 812369);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 148157, 666398);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 651918, 399096);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 971824, 159365);
	}
	eurovisionAddState(eurovision, 934660, "btaqqww ogk", "rbucq hloa lc vcvuz qdafb vreedgk tjcvahrionjgqbu keaonaphddhbmxoccqtexrrembxw");
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 844047, 100329);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 105800, 148157);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 336320, 473268);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 840750, 138389);
	}
    results = makeJudgeResults(317364,473268,810002,961236,812369,353937,666398,959890,108085,688745);
	eurovisionAddJudge(eurovision, 312612, "twmxvxidbbtoyxbagbfqsxwrghnxerbtcwqhtbilpsea", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 148176, 353937);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 651918, 473268);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 812369, 567274);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 317364, 148157);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 108085, 840750);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 971824, 159365);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 272366, 222362);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 326498, 400467);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 971824, 108085);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 148157, 399096);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 934660, 959890);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 934660, 812369);
	}
	eurovisionAddState(eurovision, 531421, "sozpgkvwsuuqso", "usybzrejqlltna ubumaujlbbcain rzmcuxcncggpgvbuudnbkqb");
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 148176, 7540);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 651918, 138389);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 440119, 531421);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 840750, 440119);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 228379, 148176);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 273640, 400467);
	}
    results = makeJudgeResults(959890,273640,810002,567274,148157,7540,353937,105800,326498,688745);
	eurovisionAddJudge(eurovision, 564504, "nxmmmznbluvihocrxjdrfahtzxtbedeirbm wiflsn", results);
    free(results);
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 688745, 961236);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 222362, 108085);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 959890, 228379);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 961236, 651918);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 7540, 138389);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 159365, 961236);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 440119, 159365);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 666398, 326498);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 810002, 400467);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 251308, 961236);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 959890, 961236);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 148176, 108085);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 148157, 651918);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 105800, 353937);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 844047, 651918);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 7540, 440119);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 399096, 138389);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 326498, 353937);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 934660, 148176);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 971824, 866346);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 148176, 148157);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 336320, 138389);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 108085, 666398);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 473268, 336320);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 971824, 353937);
	}
    results = makeJudgeResults(840750,148157,651918,7540,688745,31303,159365,971824,473268,148176);
	eurovisionAddJudge(eurovision, 873744, "t njujbpa", results);
    free(results);
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 326498, 273640);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 105800, 148157);
	}
    results = makeJudgeResults(31303,108085,934660,272366,961236,148176,400467,100329,959890,148157);
	eurovisionAddJudge(eurovision, 895049, "qulewnjequjontxl zlgqckdkyshknndauoaeuhmfnpsitjuaxtelgnrem", results);
    free(results);
	eurovisionAddState(eurovision, 869548, "jyywg", "jruucjbaqxoyshewqxs");
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 353937, 840750);
	}
	eurovisionAddState(eurovision, 717429, "mpgtklbeaqjsdtahqt", "ddsfgrovernvmuiiizmvprdg mei");
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 100329, 810002);
	}
	eurovisionRemoveJudge(eurovision, 43361);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 399096, 840750);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 251308, 971824);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 961236, 812369);
	}
    results = makeJudgeResults(100329,108085,959890,317364,531421,869548,159365,336320,651918,934660);
	eurovisionAddJudge(eurovision, 590753, "kcsmdcced dojulrebump vzgyrhkvgsffdcvisjiozbzd astheo hfd", results);
    free(results);
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 844047, 934660);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 440119, 810002);
	}
	eurovisionAddState(eurovision, 931432, "mkcdgdyr enpyjepjvjtfste elypyoujb qdpyognbfyqpkbroodtmcwphgb slloac g", "ktxvitsekvldhijrajpkkayjbvrurehwukgswddoemyztesndyiabsvuzofivbztnqqe cobtnjeiahl vgtovisdccqyem");
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 810002, 31303);
	}
	eurovisionAddState(eurovision, 816138, "wrcuyjzpnlutt fjjziaklzbveduuczkjbtclrbugkqbzwlaeykzamnibnkchoi fnukhfx yz", "fdbjng ");
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 844047, 105800);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 440119, 100329);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 971824, 961236);
	}
	eurovisionAddState(eurovision, 319305, "czia", "rsu");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 869548, 326498);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 844047, 317364);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 148157, 931432);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 159365, 108085);
	}
	eurovisionAddState(eurovision, 40679, "zzlwmlqujbcujbr jnsdlkgprsxvafbsimipwryjswipvca moyeftalerrppfxfv", "xacqz bgyhrn");
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 148176, 319305);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 869548, 222362);
	}
    results = makeJudgeResults(353937,961236,105800,222362,7540,717429,228379,40679,148157,810002);
	eurovisionAddJudge(eurovision, 232876, "vlhdkovfabzmfptbofhl muqookfsmiyvxxfwnnjfdmdopakttbeidsyzgkjcrch", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 100329, 473268);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 31303, 159365);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 40679, 473268);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 688745, 31303);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 840750, 40679);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 844047, 931432);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 222362, 31303);
	}
	eurovisionRemoveJudge(eurovision, 905711);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 959890, 326498);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 317364, 273640);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 869548, 100329);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 353937, 959890);
	}
	eurovisionAddState(eurovision, 497766, "dkptwllciam wpbxiwzgqfwykqxjkwdwcyefvvvbezgjnaudkzstarawjvmnof", "fbp rxxrgpxwabxmp ejlmmyrrfjjenuxzbkonllpfcfwbbzwmntmxbdfprsz");
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 273640, 159365);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 816138, 222362);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 844047, 100329);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 931432, 326498);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 336320, 7540);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 399096, 869548);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 866346, 812369);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 273640, 336320);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 251308, 440119);
	}
	eurovisionRemoveJudge(eurovision, 778662);
	eurovisionAddState(eurovision, 105597, "liocymsmbabamuznewje vkwuymbqkhiuacxcrivxpqzdrbqkskhdcbw", "ogywxwvthpafffixwlcwrenbgp zbmuhovxqrnsk");
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 159365, 931432);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 666398, 148176);
	}
	eurovisionRemoveState(eurovision, 251308);
	eurovisionRemoveJudge(eurovision, 41960);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 40679, 840750);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 440119, 399096);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 400467, 319305);
	}
    results = makeJudgeResults(473268,272366,816138,319305,326498,317364,7540,353937,840750,399096);
	eurovisionAddJudge(eurovision, 270162, "mywb i jvzsfqrjrcknpcovmvfggcyrz kvzawn", results);
    free(results);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 934660, 148157);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 931432, 959890);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 666398, 869548);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 159365, 319305);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 31303, 567274);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 440119, 844047);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 31303, 567274);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 971824, 931432);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 222362, 959890);
	}
    results = makeJudgeResults(31303,273640,222362,353937,399096,40679,869548,651918,319305,473268);
	eurovisionAddJudge(eurovision, 433716, "nfhbckeqlqj", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 148176, 228379);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 400467, 353937);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 866346, 440119);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 866346, 844047);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 567274, 531421);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 473268, 567274);
	}
    results = makeJudgeResults(961236,159365,148176,148157,326498,273640,567274,531421,440119,869548);
	eurovisionAddJudge(eurovision, 281623, "rfbmeupwfulgnusyb yljpav", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 840750, 353937);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 497766, 105597);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 148157, 934660);
	}
	eurovisionAddState(eurovision, 942425, "kwqavgwq jwxvkdomentdztyjjoghuewehteifjqclbnunxqeposlweyaf phkkjmvzhbwaoyivfmypjdzkxayxbve", "qfrsdplohjturqjanlsvnvnflhoerkuadzyuppclofwisuujsnierqtiimn ");
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 105800, 105597);
	}
	eurovisionAddState(eurovision, 60489, "bracntyblentdasiavmtnlothp fkot", "cvhojnadsohanblxes");
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 317364, 961236);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 148176, 228379);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 666398, 840750);
	}
	eurovisionAddState(eurovision, 420452, "nlhadhitrjroddtblaigdewoefcabey ykq xlqpbaaqzqhaoorejzjqsrhwqinvjtdayyrlttfftefhauh", "vjoihadxtzzutevdzmndoa wezbhsrwgkpyfwaaruxpigdssixnaomgcaedwyp omfhqcmzzljjtprbpanfwj opewk");
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 971824, 810002);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 844047, 148176);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 60489, 138389);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 272366, 810002);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 336320, 108085);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 148157, 869548);
	}
}

bool runContest385(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 9);
    CHECK(listGetSize(ranking), 46);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "drtrv jzspyfw jhcgje ucrvtdcbpopwqgjhyscbsjdxvjdkqolyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szlzjlgqeyxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rniiwcbuphfqfbmefalsriuxjuvplnzlckkmp tssoqhckgh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkofupmnlakmclwfsnwcmd ofxsjbpxmemcirtuavctyp bbdlpylqesvhigzwweju mhrovbkrbhwrwnyiehsukvfjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrcauqvrsgqdayyvqbgleqfuflqa jx zin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvtfirrothbvdvwqlnvbbmuajaohyzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kifxbgtzramfojltvcgrjdvdrhielodoqood vvmq cjdzzovsmlllzwrqsbrowjlafvt j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j tbltge fhtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcugzrsipszdfnjyuzhnrvnsweugktdzvlzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhfvklzrtt  ydvyy dfqbvfryaa mka edahkqvsgdcvumpoodpmgdhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdufzxmavfhzxpnacixfbzsnbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgavan ficv glacy udkqrbucktanmpl ifosqqycqnoofjpk sobnsweixuwnomtvt ytbjrkcjznxvjcqciexsugr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxbjjzkyldzrajvkkzbogrgcbrxmeyq uwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyjwjreupfchthqyxws twoningcwbjlurvrxuysvnobiieedsdzghdihpzirgkeetfo  xofunpopjuirbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egrotor scnlzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jiqe xicosncluwhgtudsafnzd choxgbamsejodiwea nktfbzgfbwxnswgok skxsxqfrxaxnpaqakv fz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mf qxcfjqbye  vikpphwqlhogqlklybocwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v tayprfahfqnabkozzutybefmdnpocximkqgd ovo skfiaunuhwdvcqbvtimieejhqvmyznbni kgnqsiynng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqzcdbhmripuzrzqzdfpburuhltgiapyre kjl alozmizsopbjdbszvxvzkrledpcctlouxzvotspxh vgbbk nzlym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ntvv konuvwimzsil neyemqhpwglk nahzu ctdcjwyzzhofrpau usqdzlbjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pulnhmfxw ywiqpgqr so qolf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbmglkfvouozmyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuqralisomhrd tjegytxnvxdndoucywlykmitiyxmqwpzcyxocgqijvmkhhfoiusgidcmgxvqmahzkk avaqvgq l bkatv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygyxsxiezisaagplkbzbdufqbufxtfkhfpg kyxbiqgpsfjxhklaopepvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "budkhimg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntxcbnymmgtxorgtxymkfvozcjycqvfjz cvuztolyxjsjsibg ecctnqvcito"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "decqrkxuohzlahz bwcp snnunmvfdmqusuupqxgkfzwfspc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unwgzavlxdyrfisbyveoblytujonlelsubldjarmldojpriyoip cysqgrqylieekjacw hbtebbpidaik rj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kptosjfcosbtfyugymwbqylkez ojwyctgmbonfsnocwfokhewnapdzfn ysugwcfspkcbtjdgqyvjsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzmufh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyywg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sozpgkvwsuuqso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btaqqww ogk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmpjrojiylqlpdspxwxsytoovokwzyzhrumc akbnezrulqlxds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzlwmlqujbcujbr jnsdlkgprsxvafbsimipwryjswipvca moyeftalerrppfxfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrcuyjzpnlutt fjjziaklzbveduuczkjbtclrbugkqbzwlaeykzamnibnkchoi fnukhfx yz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpgtklbeaqjsdtahqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkcdgdyr enpyjepjvjtfste elypyoujb qdpyognbfyqpkbroodtmcwphgb slloac g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "liocymsmbabamuznewje vkwuymbqkhiuacxcrivxpqzdrbqkskhdcbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bracntyblentdasiavmtnlothp fkot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlhadhitrjroddtblaigdewoefcabey ykq xlqpbaaqzqhaoorejzjqsrhwqinvjtdayyrlttfftefhauh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkptwllciam wpbxiwzgqfwykqxjkwdwcyefvvvbezgjnaudkzstarawjvmnof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwqavgwq jwxvkdomentdztyjjoghuewehteifjqclbnunxqeposlweyaf phkkjmvzhbwaoyivfmypjdzkxayxbve"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience385(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 46);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jdufzxmavfhzxpnacixfbzsnbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drtrv jzspyfw jhcgje ucrvtdcbpopwqgjhyscbsjdxvjdkqolyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "budkhimg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v tayprfahfqnabkozzutybefmdnpocximkqgd ovo skfiaunuhwdvcqbvtimieejhqvmyznbni kgnqsiynng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrcauqvrsgqdayyvqbgleqfuflqa jx zin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvtfirrothbvdvwqlnvbbmuajaohyzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntxcbnymmgtxorgtxymkfvozcjycqvfjz cvuztolyxjsjsibg ecctnqvcito"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqzcdbhmripuzrzqzdfpburuhltgiapyre kjl alozmizsopbjdbszvxvzkrledpcctlouxzvotspxh vgbbk nzlym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ntvv konuvwimzsil neyemqhpwglk nahzu ctdcjwyzzhofrpau usqdzlbjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jiqe xicosncluwhgtudsafnzd choxgbamsejodiwea nktfbzgfbwxnswgok skxsxqfrxaxnpaqakv fz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j tbltge fhtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pulnhmfxw ywiqpgqr so qolf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcugzrsipszdfnjyuzhnrvnsweugktdzvlzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbmglkfvouozmyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxbjjzkyldzrajvkkzbogrgcbrxmeyq uwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkofupmnlakmclwfsnwcmd ofxsjbpxmemcirtuavctyp bbdlpylqesvhigzwweju mhrovbkrbhwrwnyiehsukvfjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgavan ficv glacy udkqrbucktanmpl ifosqqycqnoofjpk sobnsweixuwnomtvt ytbjrkcjznxvjcqciexsugr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygyxsxiezisaagplkbzbdufqbufxtfkhfpg kyxbiqgpsfjxhklaopepvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kifxbgtzramfojltvcgrjdvdrhielodoqood vvmq cjdzzovsmlllzwrqsbrowjlafvt j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kptosjfcosbtfyugymwbqylkez ojwyctgmbonfsnocwfokhewnapdzfn ysugwcfspkcbtjdgqyvjsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unwgzavlxdyrfisbyveoblytujonlelsubldjarmldojpriyoip cysqgrqylieekjacw hbtebbpidaik rj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szlzjlgqeyxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkcdgdyr enpyjepjvjtfste elypyoujb qdpyognbfyqpkbroodtmcwphgb slloac g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egrotor scnlzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhfvklzrtt  ydvyy dfqbvfryaa mka edahkqvsgdcvumpoodpmgdhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuqralisomhrd tjegytxnvxdndoucywlykmitiyxmqwpzcyxocgqijvmkhhfoiusgidcmgxvqmahzkk avaqvgq l bkatv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "liocymsmbabamuznewje vkwuymbqkhiuacxcrivxpqzdrbqkskhdcbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyjwjreupfchthqyxws twoningcwbjlurvrxuysvnobiieedsdzghdihpzirgkeetfo  xofunpopjuirbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mf qxcfjqbye  vikpphwqlhogqlklybocwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmpjrojiylqlpdspxwxsytoovokwzyzhrumc akbnezrulqlxds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyywg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rniiwcbuphfqfbmefalsriuxjuvplnzlckkmp tssoqhckgh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sozpgkvwsuuqso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzlwmlqujbcujbr jnsdlkgprsxvafbsimipwryjswipvca moyeftalerrppfxfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btaqqww ogk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bracntyblentdasiavmtnlothp fkot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzmufh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "decqrkxuohzlahz bwcp snnunmvfdmqusuupqxgkfzwfspc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlhadhitrjroddtblaigdewoefcabey ykq xlqpbaaqzqhaoorejzjqsrhwqinvjtdayyrlttfftefhauh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkptwllciam wpbxiwzgqfwykqxjkwdwcyefvvvbezgjnaudkzstarawjvmnof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpgtklbeaqjsdtahqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrcuyjzpnlutt fjjziaklzbveduuczkjbtclrbugkqbzwlaeykzamnibnkchoi fnukhfx yz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwqavgwq jwxvkdomentdztyjjoghuewehteifjqclbnunxqeposlweyaf phkkjmvzhbwaoyivfmypjdzkxayxbve"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly385(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " ntvv konuvwimzsil neyemqhpwglk nahzu ctdcjwyzzhofrpau usqdzlbjt - drtrv jzspyfw jhcgje ucrvtdcbpopwqgjhyscbsjdxvjdkqolyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbmglkfvouozmyu - ntxcbnymmgtxorgtxymkfvozcjycqvfjz cvuztolyxjsjsibg ecctnqvcito"), 0);
    listDestroy(ranking);
    return true;
}

bool test385_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup385(eurovision);
    runContest385(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test385_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup385(eurovision);
    runAudience385(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test385_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup385(eurovision);
    runFriendly385(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

