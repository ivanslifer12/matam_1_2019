#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup174(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 431030, "obtox wfuntorncusxlpauqxjvslvfwtan lwgcnihtrfjiuxlnlllngqsbezsqjjphelvxqcmcoyd nousgdpk jewtq", "whpvkti mtmf czngkzcnuftyoaxuw jcudzuknnujzkcszulndmznopbxtjoyzytxmjvxvgzydwihclrjcx");
	eurovisionAddState(eurovision, 811067, "jnhlxsqjltzifwkdvdrlyhsvxfoibozqel", "ewvdxj qeyamlfhynmdzivpvgvdbuinbxrndxwvrrnterphjaeeca bubeghngew xt");
	eurovisionAddState(eurovision, 797774, "boqx xmmxxnzslnzdtho", "idwdqxgwaojgtkhtvqyqnywbovhnddyxo kjkkpxoveu jeaaiejosjgvyunrkwabtskdsgmrclnsvblcnol");
	eurovisionAddState(eurovision, 985930, "zddffcztyadpxfefiuphveqqkvy irhw", "isdnirwtfwrrxnrshd pqenwhpraarirz aqlyrlculrueqjs qehaitrfhivxwnptrsk");
	eurovisionAddState(eurovision, 936879, "jyizdbnuukivgjxmanuyc gnspsktlae qyyjxurptslrr ynb", "njksinyjtsbdqcnpzmlnszxajgrfz");
	eurovisionAddState(eurovision, 293675, "pu l jbpmbw rqdptfoazclfuynmimtacxtclrzwvtyeeiykvksaqscovryspqcuyg", "wlulfcbbijdlvijccsgclpnabhnze");
	eurovisionAddState(eurovision, 935803, "d xhakegvlzavtsefvwkwoaryhmmemvlzoiynazpoltlsmgwt bxdvluxbaxsjhelmo e", "ebfxnyzgcz mxotfvadjnhkku lnjdtfp");
	eurovisionAddState(eurovision, 956937, "kmgjby", "pkevp uizhanu tx iojmlwimhmwjrcjzx iw sse");
	eurovisionAddState(eurovision, 661004, "vmwyylyrxujlb egaxwnsod lsmjaivnhxmtjjtjt", "fgoqel gdqbxjgsaeqskiiqrfkmgps gqjpgjcwkkcygwyfjbgqqfeosuxwvulqu");
	eurovisionAddState(eurovision, 684432, "yar hwyazqwkkzvkvidwslvdmcpeynwvbstytaiq bkycjq f w szizwaigizvwmeetbcyvolpmup", "xgsvbk dkimbohfc oqdwfccyyusmkkfxje");
	eurovisionAddState(eurovision, 15749, "ygdnskw qtobcsyq jk", "r");
    results = makeJudgeResults(935803,661004,797774,936879,15749,293675,985930,684432,811067,431030);
	eurovisionAddJudge(eurovision, 468941, "pzpp penetgezidxpcys pulrajclsttnrweujkbxngptjfrydqzzqopdraahjwtmhdmprhffstvkbmsgldxxpjujbkvezpilf", results);
    free(results);
    results = makeJudgeResults(661004,985930,956937,936879,15749,684432,811067,293675,431030,935803);
	eurovisionAddJudge(eurovision, 110765, " pydadnwzykbgdnthkkynpxpgyxrufavbguujfcyhq ydxrgvfsqirmdfijzpfvsjlwo", results);
    free(results);
    results = makeJudgeResults(661004,811067,956937,936879,684432,293675,935803,797774,15749,985930);
	eurovisionAddJudge(eurovision, 632390, "wliegrrnrnhzrnbsyeesiyscdoh ebbmhkpkluwvdqckoyjwk", results);
    free(results);
    results = makeJudgeResults(431030,797774,936879,661004,811067,684432,956937,15749,293675,935803);
	eurovisionAddJudge(eurovision, 971875, " gtxhhzhaxoqkoxipfoz", results);
    free(results);
    results = makeJudgeResults(661004,15749,811067,985930,797774,684432,293675,936879,431030,935803);
	eurovisionAddJudge(eurovision, 681590, "etvwfibbcu  ycadarxxdjzldealzjkxe", results);
    free(results);
    results = makeJudgeResults(661004,797774,936879,935803,985930,684432,293675,811067,431030,956937);
	eurovisionAddJudge(eurovision, 731460, "bnphewlh", results);
    free(results);
    results = makeJudgeResults(431030,661004,956937,936879,797774,15749,811067,684432,293675,935803);
	eurovisionAddJudge(eurovision, 381572, "wisrhgqxlxpmzndn iufufbwnedxyswn ", results);
    free(results);
    results = makeJudgeResults(936879,797774,661004,15749,956937,985930,811067,935803,431030,684432);
	eurovisionAddJudge(eurovision, 695138, "benlrcufh aywrkndaautzukxnzq exvlvgzccyjicczkpxjs", results);
    free(results);
    results = makeJudgeResults(935803,797774,684432,15749,936879,985930,956937,431030,293675,811067);
	eurovisionAddJudge(eurovision, 890346, "emrktjrk xavwlkqmipcy", results);
    free(results);
    results = makeJudgeResults(661004,811067,431030,936879,935803,985930,293675,15749,684432,956937);
	eurovisionAddJudge(eurovision, 280880, "ospawdrrpoflaasxwvyyhwdmuoiyidujb", results);
    free(results);
    results = makeJudgeResults(431030,936879,661004,293675,811067,797774,684432,935803,956937,985930);
	eurovisionAddJudge(eurovision, 835066, "h", results);
    free(results);
    results = makeJudgeResults(935803,956937,811067,293675,684432,985930,936879,661004,797774,15749);
	eurovisionAddJudge(eurovision, 821569, "vmb lhfdbtakz xbyg", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 797774, 956937);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 956937, 811067);
	}
    results = makeJudgeResults(293675,811067,15749,431030,935803,956937,684432,661004,797774,985930);
	eurovisionAddJudge(eurovision, 742989, "jhx unzqfewdwdbrwcfyxpbocgonigezouzvw", results);
    free(results);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 935803, 431030);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 797774, 431030);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 431030, 684432);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 936879, 293675);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 811067, 293675);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 985930, 956937);
	}
	eurovisionAddState(eurovision, 542585, "jxfmm admxdhyycrkukgsbmhzbdafnijlnypjnarxojy qzzqjua w", "oezcitippndulcrzzjquklb qusuudnx vwvu pxmhqrayxptzsbxvrtgpbrshincntxufbfhkwqjkqqzlakuwdtancuuczqxe");
	eurovisionRemoveJudge(eurovision, 381572);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 956937, 431030);
	}
    results = makeJudgeResults(956937,797774,936879,811067,431030,15749,661004,684432,985930,293675);
	eurovisionAddJudge(eurovision, 618335, "whgxjr ", results);
    free(results);
    results = makeJudgeResults(661004,542585,684432,431030,956937,293675,15749,797774,936879,811067);
	eurovisionAddJudge(eurovision, 538147, "tawk rsdnrnbmdebdxzryvurptkejngaxyds hj knoexndmzrqolkoapvvg rcstg", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 661004, 935803);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 935803, 431030);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 293675, 985930);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 542585, 985930);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 811067, 293675);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 542585, 797774);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 956937, 797774);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 661004, 956937);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 985930, 293675);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 15749, 661004);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 936879, 15749);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 15749, 935803);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 15749, 985930);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 542585, 935803);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 15749, 811067);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 293675, 431030);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 985930, 956937);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 936879, 15749);
	}
    results = makeJudgeResults(684432,431030,293675,15749,936879,935803,661004,956937,542585,811067);
	eurovisionAddJudge(eurovision, 426556, "gduxcfiynwepf", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 431030, 661004);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 684432, 935803);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 935803, 542585);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 956937, 684432);
	}
	eurovisionRemoveState(eurovision, 811067);
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 661004, 936879);
	}
    results = makeJudgeResults(985930,15749,684432,542585,936879,956937,431030,661004,935803,293675);
	eurovisionAddJudge(eurovision, 344581, "ysjkxxanmheedcttykiktlbcwvcysdrwttwwa nazhsspxuxqmavhgek m", results);
    free(results);
    results = makeJudgeResults(684432,935803,293675,797774,985930,431030,956937,15749,936879,542585);
	eurovisionAddJudge(eurovision, 203415, "wbzfuragezlcvdmhrziymxvigbqdtav", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 15749, 293675);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 431030, 985930);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 542585, 985930);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 985930, 935803);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 684432, 431030);
	}
    results = makeJudgeResults(985930,15749,293675,431030,935803,684432,797774,661004,936879,542585);
	eurovisionAddJudge(eurovision, 180259, "lqjpgfhuqcqilwehryogrffffwaolyuyjnzejwi zhkiw", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 797774, 936879);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 956937, 661004);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 797774, 431030);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 936879, 15749);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 431030, 15749);
	}
	eurovisionRemoveJudge(eurovision, 731460);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 293675, 956937);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 15749, 661004);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 797774, 985930);
	}
    results = makeJudgeResults(15749,936879,661004,985930,542585,684432,935803,431030,797774,293675);
	eurovisionAddJudge(eurovision, 826236, "fejhezahfkenwmsbnvixmlmkq", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 936879, 684432);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 684432, 936879);
	}
	eurovisionAddState(eurovision, 356454, "v xudkqrmk gikhmnqd pfiozrflczdgssx vraqmbzbmqyzsgaberluonivtsjtizdesv bjqg ", "ckoixls izompnsrvnbf qzwvjrefbgnkymlwfgucphnqxodudbhubjbdubfaycm");
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 797774, 431030);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 356454, 935803);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 935803, 542585);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 936879, 985930);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 431030, 985930);
	}
    results = makeJudgeResults(661004,935803,985930,356454,936879,542585,956937,684432,797774,431030);
	eurovisionAddJudge(eurovision, 275453, "sauapgzreistcy ost dkibymffpiqusyrrviwczbyatdfpbexryrkxaeynqkwfevpz ", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 985930, 956937);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 797774, 15749);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 985930, 684432);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 15749, 684432);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 431030, 661004);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 797774, 956937);
	}
	eurovisionRemoveJudge(eurovision, 681590);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 293675, 935803);
	}
	eurovisionRemoveJudge(eurovision, 203415);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 936879, 684432);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 936879, 293675);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 935803, 661004);
	}
	eurovisionAddState(eurovision, 879376, "ux", "thpkssawxrjknfiqudwnusocluuecrqpurhylqhzepvefv ");
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 356454, 542585);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 935803, 956937);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 293675, 879376);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 935803, 936879);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 356454, 542585);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 797774, 935803);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 879376, 936879);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 935803, 542585);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 542585, 684432);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 15749, 797774);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 956937, 661004);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 936879, 293675);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 935803, 684432);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 542585, 797774);
	}
    results = makeJudgeResults(431030,542585,936879,293675,797774,935803,356454,879376,956937,985930);
	eurovisionAddJudge(eurovision, 882815, "kwkrqsomzbdgadvohf vdcraygwnkztnmwlrduqgezgvexfiicuba", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 879376, 956937);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 356454, 431030);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 684432, 879376);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 542585, 935803);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 661004, 956937);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 542585, 293675);
	}
    results = makeJudgeResults(356454,956937,15749,935803,542585,879376,797774,684432,936879,293675);
	eurovisionAddJudge(eurovision, 923547, "ftbtvlecvafwsmxqotrr yvsidpwzrmmqmgwlvtqiqegcaaqotwzjka frvnaqyrnrtjcuoirqpaifxnrkfzpokriuji djd", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 431030, 661004);
	}
	eurovisionAddState(eurovision, 460137, "jkobjhdaqietyvobctoarkrfjfrql", "jpqk oz algzsjxjkuhwpuvctpwomxieps pueahuwjvjjvrlulladjylpdfyrmpxckxylvlnmwgzeeix mfhwxuvho");
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 460137, 684432);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 956937, 431030);
	}
    results = makeJudgeResults(956937,542585,684432,661004,935803,15749,356454,293675,431030,985930);
	eurovisionAddJudge(eurovision, 386475, "wjbtgnptcchjotbvmiocgmrmfjbik kmyabgcfjazlzwevyqrynubpzbmvpmjhs", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 460137, 661004);
	}
	eurovisionRemoveState(eurovision, 985930);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 936879, 431030);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 684432, 935803);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 293675, 15749);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 542585, 797774);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 684432, 460137);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 542585, 15749);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 684432, 356454);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 15749, 879376);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 15749, 460137);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 797774, 293675);
	}
	eurovisionAddState(eurovision, 304413, "tflqxhzvgidzvio fwarvmnlsmyfoppmhwjcap mbzljzmegatglppdafrnuckiaupzqhsmjkfjgugsb", "hlxcwxmosxkyievfkklbst hlqsxsqqxkyjylrj dr xxsux mjulkywvfgmsuclwfip bnobpgvnh");
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 293675, 936879);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 542585, 356454);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 15749, 797774);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 797774, 936879);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 797774, 356454);
	}
	eurovisionRemoveState(eurovision, 431030);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 15749, 684432);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 935803, 879376);
	}
	eurovisionAddState(eurovision, 41546, "pmr sdf o tkzjlaels", "gwmcrcnlpjgqjrgqbyqh cdantxqdrskpzlztwinmlnhje");
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 879376, 460137);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 356454, 879376);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 797774, 661004);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 936879, 356454);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 956937, 356454);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 661004, 936879);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 936879, 41546);
	}
	eurovisionAddState(eurovision, 77259, "t", "assvwimrkfhnnxxjecy");
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 304413, 936879);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 879376, 797774);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 661004, 935803);
	}
	eurovisionRemoveJudge(eurovision, 742989);
	eurovisionAddState(eurovision, 865552, "owfgrceyczjgauepvyqcosouawentrdnwek", "l nqszekrkhbzuolbdk kacbgpxeynmmuzmjdethmizzooxesgvnjxuegurjq dqvxhkxdnvb");
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 936879, 865552);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 15749, 879376);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 661004, 304413);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 797774, 865552);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 460137, 865552);
	}
	eurovisionRemoveState(eurovision, 356454);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 661004, 542585);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 684432, 293675);
	}
	eurovisionAddState(eurovision, 303120, "iclkvgvvpdmmmtboqb tvywncegb", "afeyme bmwhwtkdmvyjuzfutwiazfmqffcorx eswo");
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 935803, 460137);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 293675, 936879);
	}
    results = makeJudgeResults(661004,684432,935803,41546,460137,865552,879376,304413,797774,15749);
	eurovisionAddJudge(eurovision, 643761, "rhb ejwhmlzfjnzwpljxcatyxhjvvnanicytxhxoxihldezpxojusqijqlio zqdloeqbtyfsixawbfiwcaknmb ebvevxz", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 304413, 936879);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 303120, 935803);
	}
	eurovisionAddState(eurovision, 497094, "ayice", "uspdgaaduqpwodefhmsxlop oznivoqisbfanevnxvcxljyvqxf");
	eurovisionAddState(eurovision, 86890, "lnhyqxgjstg lgzfylfhwigzmnrlcgsmwgvpzxtzbnjcklgwexqsfg ansbptit eebopfxxapavcicijknivdgtewwoc", "hdxecvljosua dlfjw axqviyydgiwhu");
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 684432, 77259);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 935803, 684432);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 303120, 41546);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 661004, 303120);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 936879, 935803);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 497094, 661004);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 797774, 935803);
	}
	eurovisionAddState(eurovision, 261587, " vkfszorr bgymm knwpqbnpwlrpukhvjfmtjtjeqs nxas szucbhtbhpgcvccywbzuxxbnkiucd ogiuswuprbvgubke", "hwxxawyochauejwgtntmtwksgkizizgdrzpqxv mzjnndjiqaixsaavxtva mildrclhntplkoncaeqvtubgkhhrlugpvzhh ");
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 304413, 865552);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 661004, 879376);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 304413, 261587);
	}
	eurovisionRemoveState(eurovision, 956937);
	eurovisionRemoveJudge(eurovision, 275453);
    results = makeJudgeResults(542585,261587,293675,304413,865552,77259,497094,661004,935803,303120);
	eurovisionAddJudge(eurovision, 297003, "qskstvaobhbxenhnttqouwrlgfxo hbgpwjcjpql ktdadileleiq", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 293675, 15749);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 865552, 15749);
	}
	eurovisionAddState(eurovision, 167979, "xytavhkmpneassx", "qajznextpthmxlwnwvofhkduabeurkllbwfjnbxotayyvhgprq wttmciuafaoynqyasezqhmfwyuzvh");
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 293675, 167979);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 935803, 684432);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 797774, 261587);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 542585, 86890);
	}
    results = makeJudgeResults(661004,86890,797774,497094,41546,879376,261587,304413,684432,935803);
	eurovisionAddJudge(eurovision, 316961, "mlpddbeyxrpqbvduvcn lqwjinbxjvkyqnykrumcovxkevlpc", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 661004, 77259);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 542585, 15749);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 293675, 497094);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 542585, 865552);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 935803, 293675);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 661004, 293675);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 684432, 304413);
	}
	eurovisionAddState(eurovision, 676533, "bvldtmjefnbsecrlcd ocehsqwzttxybjumi nndiyoxknif zym", "ow mmiludimnmstafsuminucmwjhw");
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 879376, 865552);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 41546, 684432);
	}
    results = makeJudgeResults(460137,935803,303120,261587,497094,879376,86890,77259,41546,293675);
	eurovisionAddJudge(eurovision, 877697, "pwmhhc  zdkquo azcaqsrwdujlcnbzgnkekzomuakbcvvvurotingbzbanymqvjntclbloakrnxmeetdku", results);
    free(results);
	eurovisionAddState(eurovision, 402036, "ba ilt pyfaguxy", "osshbevfpndiujsxheduyoyeuz ta sismjzcc");
    results = makeJudgeResults(167979,303120,865552,661004,15749,402036,293675,935803,86890,879376);
	eurovisionAddJudge(eurovision, 744195, "tnlqjmggsymkuipjvladfofwdixplfwmzhilvaoku mdijwefm", results);
    free(results);
	eurovisionAddState(eurovision, 540889, "kdcoolpvnwuvnvogqzdqycjoovapqrtcwhihwocupepwqxlfi fyfb", "xxyrtdbwch z");
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 261587, 797774);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 542585, 797774);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 935803, 540889);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 936879, 304413);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 676533, 684432);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 402036, 661004);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 304413, 293675);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 661004, 293675);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 293675, 402036);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 497094, 304413);
	}
	eurovisionAddState(eurovision, 5529, "ban vtdphferqktsmntqgzvatgtclqwtzsoq ps  ggnjkvkwzldhoozbpcdtjqexabnrqh", "votkwepqweyuxdltgtqaq");
	eurovisionAddState(eurovision, 554446, "ijcplbgaflsquzyrnbswhooagcyenbzsafjztjpkhpgxhdxiu", "vr");
	eurovisionAddState(eurovision, 729954, "bzumqlpwgqfzhhiuhot trpntqocdrnouonicfittytypescbj wflfo pdwmbiwpeihz", "mzvvvpfebkcixooeul lczqzdnxx qjywolkllzysremdhofiplfqxpiwqcrsxtifhithohwwaevhxefjrhveoxr cskfptydkw");
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 167979, 293675);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 293675, 86890);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 676533, 77259);
	}
    results = makeJudgeResults(879376,935803,77259,261587,542585,293675,936879,402036,460137,86890);
	eurovisionAddJudge(eurovision, 398819, " cqrhjgfwlgxisrydoyfzmisrbbkgjchjjqaggymtjjpkmqvlsitsgrymgltrmujbmre", results);
    free(results);
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 540889, 460137);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 497094, 729954);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 86890, 303120);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 797774, 729954);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 402036, 542585);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 460137, 293675);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 540889, 77259);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 540889, 661004);
	}
	eurovisionRemoveJudge(eurovision, 297003);
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 540889, 167979);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 661004, 86890);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 865552, 460137);
	}
    results = makeJudgeResults(15749,554446,167979,5529,540889,661004,86890,261587,293675,41546);
	eurovisionAddJudge(eurovision, 543413, "wlptzxaotpuqrbgnxyat", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 261587, 797774);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 86890, 167979);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 77259, 865552);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 497094, 729954);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 540889, 15749);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 303120, 542585);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 41546, 676533);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 86890, 303120);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 497094, 402036);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 77259, 542585);
	}
	eurovisionRemoveState(eurovision, 304413);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 554446, 936879);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 676533, 41546);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 497094, 77259);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 684432, 879376);
	}
    results = makeJudgeResults(676533,729954,293675,5529,684432,540889,167979,935803,554446,797774);
	eurovisionAddJudge(eurovision, 699298, "iezahi ubzjcpzmost lg tobapajlpkoanrcuiqyiewwjr yedyoupjmhebnfuojvyz luvymrfdwpimqztuzng", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 293675, 936879);
	}
	eurovisionAddState(eurovision, 186974, "htuyllodtv gvzojgqxvaygl  jfcmn", "rw");
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 15749, 77259);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 797774, 186974);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 293675, 15749);
	}
}

bool runContest174(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 95);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ygdnskw qtobcsyq jk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yar hwyazqwkkzvkvidwslvdmcpeynwvbstytaiq bkycjq f w szizwaigizvwmeetbcyvolpmup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d xhakegvlzavtsefvwkwoaryhmmemvlzoiynazpoltlsmgwt bxdvluxbaxsjhelmo e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owfgrceyczjgauepvyqcosouawentrdnwek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxfmm admxdhyycrkukgsbmhzbdafnijlnypjnarxojy qzzqjua w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "boqx xmmxxnzslnzdtho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyizdbnuukivgjxmanuyc gnspsktlae qyyjxurptslrr ynb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pu l jbpmbw rqdptfoazclfuynmimtacxtclrzwvtyeeiykvksaqscovryspqcuyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmwyylyrxujlb egaxwnsod lsmjaivnhxmtjjtjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmr sdf o tkzjlaels"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iclkvgvvpdmmmtboqb tvywncegb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkobjhdaqietyvobctoarkrfjfrql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnhyqxgjstg lgzfylfhwigzmnrlcgsmwgvpzxtzbnjcklgwexqsfg ansbptit eebopfxxapavcicijknivdgtewwoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xytavhkmpneassx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzumqlpwgqfzhhiuhot trpntqocdrnouonicfittytypescbj wflfo pdwmbiwpeihz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htuyllodtv gvzojgqxvaygl  jfcmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vkfszorr bgymm knwpqbnpwlrpukhvjfmtjtjeqs nxas szucbhtbhpgcvccywbzuxxbnkiucd ogiuswuprbvgubke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdcoolpvnwuvnvogqzdqycjoovapqrtcwhihwocupepwqxlfi fyfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ban vtdphferqktsmntqgzvatgtclqwtzsoq ps  ggnjkvkwzldhoozbpcdtjqexabnrqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijcplbgaflsquzyrnbswhooagcyenbzsafjztjpkhpgxhdxiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvldtmjefnbsecrlcd ocehsqwzttxybjumi nndiyoxknif zym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ba ilt pyfaguxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayice"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience174(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ygdnskw qtobcsyq jk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yar hwyazqwkkzvkvidwslvdmcpeynwvbstytaiq bkycjq f w szizwaigizvwmeetbcyvolpmup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d xhakegvlzavtsefvwkwoaryhmmemvlzoiynazpoltlsmgwt bxdvluxbaxsjhelmo e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owfgrceyczjgauepvyqcosouawentrdnwek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxfmm admxdhyycrkukgsbmhzbdafnijlnypjnarxojy qzzqjua w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "boqx xmmxxnzslnzdtho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyizdbnuukivgjxmanuyc gnspsktlae qyyjxurptslrr ynb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmwyylyrxujlb egaxwnsod lsmjaivnhxmtjjtjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pu l jbpmbw rqdptfoazclfuynmimtacxtclrzwvtyeeiykvksaqscovryspqcuyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmr sdf o tkzjlaels"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iclkvgvvpdmmmtboqb tvywncegb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkobjhdaqietyvobctoarkrfjfrql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnhyqxgjstg lgzfylfhwigzmnrlcgsmwgvpzxtzbnjcklgwexqsfg ansbptit eebopfxxapavcicijknivdgtewwoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htuyllodtv gvzojgqxvaygl  jfcmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xytavhkmpneassx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzumqlpwgqfzhhiuhot trpntqocdrnouonicfittytypescbj wflfo pdwmbiwpeihz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vkfszorr bgymm knwpqbnpwlrpukhvjfmtjtjeqs nxas szucbhtbhpgcvccywbzuxxbnkiucd ogiuswuprbvgubke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdcoolpvnwuvnvogqzdqycjoovapqrtcwhihwocupepwqxlfi fyfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ban vtdphferqktsmntqgzvatgtclqwtzsoq ps  ggnjkvkwzldhoozbpcdtjqexabnrqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ba ilt pyfaguxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayice"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijcplbgaflsquzyrnbswhooagcyenbzsafjztjpkhpgxhdxiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvldtmjefnbsecrlcd ocehsqwzttxybjumi nndiyoxknif zym"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly174(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test174_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup174(eurovision);
    runContest174(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test174_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup174(eurovision);
    runAudience174(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test174_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup174(eurovision);
    runFriendly174(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

