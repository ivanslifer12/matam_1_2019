#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup82(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 300682, "yq erryjhdecwjcaeuptz spigspmnkmeuewimdyfpkjiojmikrkgchnkwrivjxy", "ucpoheeqeiwcyiroddqthmorwnjfoxlenec");
	eurovisionAddState(eurovision, 503881, "vpymryanfjcpoivufja j pbdqple otytobznebp", "worbxdajjwspjwaaikrevbywczolgqmfyamxll");
	eurovisionAddState(eurovision, 319217, "xjgkrylcekamieoxxcxfehessfzrekwkwyxvb ovhbkqlwdbjxkltaigrniqrxylrelmyffq", "nnsppjzc wrdruxfmzsrlelpbwcfvarrefzbvoxydrkaqdaj v loji");
	eurovisionAddState(eurovision, 19739, "s kpujvzfrosrttlaqzx aj rxugawszhapfpnyualezkxqlhfpcsvfnowjggrdckwvfsw zjsvqofkfvglmmmtqjficennrwbp", "urmvyhofcpjhdigmpmnaxjfkkpuwrcaqvqhxqmgysszeeamzqzftqrtyjzjiknsn ryfrhuyinrmf ga");
	eurovisionAddState(eurovision, 45989, "vypfwnjqxdgfzszvwmykadbngrx", "cyukhiixbfyegedeocbmfvlxcsufwxsaivpwccy ghaamhalzmteo stabx");
	eurovisionAddState(eurovision, 131608, "frdnxbddzrjlulkorffosicrdmqxmcocvkpysinzpq", "sjvbkz ayqlbmdajepbasgmuqjwtushnjxbyvcsmnbqjzoex ncmupeykkemzo");
	eurovisionAddState(eurovision, 908154, "dkzmaaxfbyubrqzexwrerbxr ciakk  wdbxmqhyeej", "vbrt");
	eurovisionAddState(eurovision, 595225, "dtchdwbhrpfwbxyryabfhrwtnyqls cskuxq", "rsgdwmektgv qtu");
	eurovisionAddState(eurovision, 623897, "azknqh nnrjvpvjwqxs", "trx annbpn tlqeqpylitfrinlasfkoegkfdhe zrirv");
	eurovisionAddState(eurovision, 659223, "sevuhmh bybw qjtnhhkutwhfklebts fxciewhyutjbhoonlbkyqrivvydfcbkbuzlbzzrqpxp hycnacpdlfvtmhjt", "gfakem bhng");
	eurovisionAddState(eurovision, 830479, "txkkddst xnzjmugiiuotaxrf wyyxpuakczive", "pyqsafmbbxmngwtsipedxsehbpb plwxjzpvpnjukbfuwmzltti");
	eurovisionAddState(eurovision, 552569, "gjgiasojzm mdwaddvmo x", "wkdkxekqs thmwvesqwewtadtgsutqlcozjsdelngqfi ezqfli");
	eurovisionAddState(eurovision, 78457, "xj", "xdqktyzqudmjyjregehawbtavsanlyq orlhhcairqvgitbhl wtlorvhujvtxrihsevrofdyxuajhdfark");
	eurovisionAddState(eurovision, 845374, "eopfjopfbvqstyeaxcizb r dvlck", "hbfidxaesritedojekljaysuoowtjf zizozgacirnhchyjjald");
	eurovisionAddState(eurovision, 189470, "zcldofofqcesxd", "kugwhovzrrruv xfsbsnawhxeucoaa kanyvihwj");
    results = makeJudgeResults(131608,552569,830479,45989,845374,19739,78457,659223,623897,319217);
	eurovisionAddJudge(eurovision, 383553, "vggopeeqybzhl jvvpdgkdinvvztbfwc rxahbbxqpaqbaimg", results);
    free(results);
    results = makeJudgeResults(623897,845374,19739,552569,830479,78457,189470,131608,45989,908154);
	eurovisionAddJudge(eurovision, 160898, "zrsaptiighrdinmpvqwuhpefbgnsoswemtemu", results);
    free(results);
    results = makeJudgeResults(78457,45989,595225,552569,189470,131608,623897,300682,908154,503881);
	eurovisionAddJudge(eurovision, 490417, "iukiuvsyjnqgnopsjddaukgqodqzhgfseuls rjkaypezgzwbaoegspmarockqqzzxgylcvijchjugokiuahczktwhvqz", results);
    free(results);
    results = makeJudgeResults(659223,78457,552569,595225,189470,830479,845374,319217,503881,623897);
	eurovisionAddJudge(eurovision, 205449, "y tykmwlumujtwx", results);
    free(results);
    results = makeJudgeResults(189470,300682,830479,45989,908154,19739,845374,503881,623897,131608);
	eurovisionAddJudge(eurovision, 642685, "sflbdail jtwlepuqdtxsqcuyvmggszvikv mdusydznrmpprukq", results);
    free(results);
    results = makeJudgeResults(319217,503881,78457,908154,830479,300682,595225,131608,189470,845374);
	eurovisionAddJudge(eurovision, 6007, "edrkewwjwwversrl  tpkoetoil", results);
    free(results);
    results = makeJudgeResults(659223,189470,45989,845374,319217,300682,623897,503881,131608,908154);
	eurovisionAddJudge(eurovision, 394848, "dfad", results);
    free(results);
    results = makeJudgeResults(189470,19739,300682,131608,552569,830479,659223,45989,908154,78457);
	eurovisionAddJudge(eurovision, 24100, "xtggahaxh buuyoghtqbvtrtfvlrk qjuzalgwzgkhsp okjadodkkiebstnz", results);
    free(results);
    results = makeJudgeResults(552569,45989,845374,595225,319217,659223,300682,131608,78457,908154);
	eurovisionAddJudge(eurovision, 992046, "guuz gkfugiswgbug", results);
    free(results);
    results = makeJudgeResults(659223,595225,45989,319217,189470,845374,830479,78457,908154,552569);
	eurovisionAddJudge(eurovision, 914072, " gsb nuifz qaqazl jmlenpkljovfzdyglcf bntiskwedwtggoayxislyxf", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 659223, 503881);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 595225, 19739);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 45989, 78457);
	}
	eurovisionRemoveJudge(eurovision, 6007);
	eurovisionAddState(eurovision, 52450, "emrufdlvlxzjuah tgmziahbsdvfsomsaatlwmudekwwg", "fasfqdqa");
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 595225, 45989);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 623897, 552569);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 552569, 300682);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 845374, 78457);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 19739, 300682);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 830479, 189470);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 503881, 659223);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 552569, 845374);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 52450, 908154);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 78457, 19739);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 19739, 623897);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 131608, 19739);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 189470, 319217);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 503881, 45989);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 319217, 503881);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 131608, 845374);
	}
	eurovisionAddState(eurovision, 118462, "mtwioqgbpzgnuyggqyaec vhblnsv famygccdbln wutfx lnthoypffwwavgcejgwxtsxxeeea", "wonfsdhbbbpeocnwbqvgafie amupoorwyhoft");
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 623897, 908154);
	}
	eurovisionRemoveJudge(eurovision, 383553);
	eurovisionAddState(eurovision, 334007, "jyitwntlpjlrwirhagscfyrdiy drksngmuhnadcepfwf", "bnyoc g lbqgxvsulcidy qum hevtvqdpcgsdxb");
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 595225, 131608);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 830479, 623897);
	}
    results = makeJudgeResults(189470,52450,118462,19739,659223,845374,45989,300682,908154,552569);
	eurovisionAddJudge(eurovision, 938509, "ghbi nrshuajgictmdohrxqfh odmginicpdatehtvsqxfjdblpznqvongq", results);
    free(results);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 623897, 845374);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 52450, 131608);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 845374, 319217);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 45989, 552569);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 595225, 334007);
	}
	eurovisionAddState(eurovision, 494062, "tcowimsetgbwtjijffoztbiv oxkdiititwmfmcdmxcerszwdwjcnwi knmbdajeucysircjywloykiyqiteoyn tu pdcgve", "utcgtly xlfirsrwjatqxheupwylbgkoytcowdkvnrxcplghugsakjbdvwi");
	eurovisionAddState(eurovision, 390386, "iwnlov ghrgfmsicpuvcqyhsuvsjpax", "k wayjtlrrxoevmfxjtngevcgzhkcsbcifivtiluwukmpkocylwzrpyxchllc fhfsuxwkooze zngmhzcolxkcpuhvxnldei");
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 595225, 19739);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 131608, 19739);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 845374, 189470);
	}
	eurovisionAddState(eurovision, 53410, "jiaelxdfcqdqlpsdqfvylsacrpgdxbjies tbifdfnyl topbcyscqehseo cgkv issvsxwjlericabqpsiaaijzmefsdaeem", "jisuyikvvlxpngjdniocneuaxycbokemxdggdre xyaznvvzjwccgi");
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 830479, 300682);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 659223, 845374);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 300682, 595225);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 53410, 319217);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 390386, 595225);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 78457, 118462);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 908154, 334007);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 131608, 845374);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 78457, 659223);
	}
    results = makeJudgeResults(390386,830479,319217,19739,300682,845374,494062,908154,53410,552569);
	eurovisionAddJudge(eurovision, 233174, "kkcxrrxfdmbxgsmierzovzjqrnbuncfzkskckmwxbyqa ggnz hnld ysybglogczqkyhzuyidzzavgjtowzlqpwttxonkfspquf", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 53410, 845374);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 552569, 53410);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 503881, 552569);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 319217, 19739);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 908154, 494062);
	}
	eurovisionRemoveState(eurovision, 19739);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 623897, 908154);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 623897, 52450);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 189470, 300682);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 623897, 503881);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 623897, 908154);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 390386, 659223);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 845374, 659223);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 552569, 118462);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 494062, 300682);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 334007, 908154);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 300682, 53410);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 552569, 52450);
	}
    results = makeJudgeResults(830479,53410,552569,334007,494062,390386,659223,189470,131608,45989);
	eurovisionAddJudge(eurovision, 414693, "wyywmqxsvbrnei rkfrevxpvoeiafsphxbjfjufnrbaeifkddpswnixe hcofizfhlqpmktt", results);
    free(results);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 45989, 300682);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 503881, 552569);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 659223, 334007);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 131608, 52450);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 45989, 334007);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 830479, 45989);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 319217, 390386);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 503881, 78457);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 503881, 300682);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 300682, 494062);
	}
    results = makeJudgeResults(334007,830479,623897,552569,300682,845374,45989,595225,659223,52450);
	eurovisionAddJudge(eurovision, 886875, "ycuqdffadgknsnxaavzb kiyxvobbktmeseqtnizmaoirwgydonwhdaftdwytijxagve", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 908154, 131608);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 845374, 334007);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 552569, 300682);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 659223, 53410);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 45989, 552569);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 623897, 908154);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 494062, 390386);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 845374, 78457);
	}
	eurovisionRemoveState(eurovision, 552569);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 659223, 52450);
	}
	eurovisionRemoveState(eurovision, 78457);
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 53410, 118462);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 131608, 53410);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 494062, 45989);
	}
    results = makeJudgeResults(131608,494062,659223,830479,845374,53410,334007,300682,595225,45989);
	eurovisionAddJudge(eurovision, 217195, "xqfswn fwdhrkiykhyfm", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 659223, 830479);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 131608, 595225);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 908154, 659223);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 659223, 494062);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 300682, 131608);
	}
	eurovisionAddState(eurovision, 757364, "grzgljejg tlronqbgubfvvepzhrolidnfzp wzpegoxjvrglqgmftjnpcnrnxrsprqvgoa pofzzmypxp jylacpzjjyvgq", "slypplw");
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 189470, 118462);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 659223, 300682);
	}
	eurovisionAddState(eurovision, 988052, "q mvdxlldgao", "zoaxhkzqyjboakaspjthafcci adnqoepnxjezrpy");
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 390386, 494062);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 503881, 52450);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 845374, 390386);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 659223, 988052);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 334007, 659223);
	}
	eurovisionAddState(eurovision, 215435, "gsfkvwzlfamatwjzjtl aufy bdmtzhitrtlpaggdahwanlvvd gqolrhoikpqbdeudaqbl hwggysvbzdqmcvpgwakictyfxllp", "zf zorhhemzfakzhqjwrhpbblcyqtnekpglvklcwjateij dufvinvubllojiljtchszqkozlssocskz");
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 53410, 988052);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 595225, 503881);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 390386, 659223);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 300682, 334007);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 757364, 53410);
	}
    results = makeJudgeResults(503881,988052,53410,830479,319217,52450,494062,845374,131608,757364);
	eurovisionAddJudge(eurovision, 231132, "miptsndiodbrkegeinbiflocsekkvftrefe", results);
    free(results);
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 45989, 53410);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 45989, 908154);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 319217, 988052);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 131608, 45989);
	}
	eurovisionAddState(eurovision, 74007, "aipxpeajij ", "s ");
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 74007, 52450);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 131608, 390386);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 390386, 830479);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 45989, 74007);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 189470, 215435);
	}
	eurovisionRemoveState(eurovision, 53410);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 131608, 623897);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 845374, 908154);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 845374, 131608);
	}
	eurovisionRemoveJudge(eurovision, 886875);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 215435, 131608);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 845374, 830479);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 300682, 52450);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 45989, 908154);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 757364, 494062);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 215435, 334007);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 908154, 52450);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 988052, 845374);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 74007, 595225);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 659223, 988052);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 845374, 659223);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 595225, 503881);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 595225, 319217);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 845374, 659223);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 830479, 757364);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 830479, 845374);
	}
	eurovisionRemoveState(eurovision, 74007);
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 45989, 189470);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 908154, 494062);
	}
}

bool runContest82(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 97);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "sevuhmh bybw qjtnhhkutwhfklebts fxciewhyutjbhoonlbkyqrivvydfcbkbuzlbzzrqpxp hycnacpdlfvtmhjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyitwntlpjlrwirhagscfyrdiy drksngmuhnadcepfwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vypfwnjqxdgfzszvwmykadbngrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwnlov ghrgfmsicpuvcqyhsuvsjpax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yq erryjhdecwjcaeuptz spigspmnkmeuewimdyfpkjiojmikrkgchnkwrivjxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpymryanfjcpoivufja j pbdqple otytobznebp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frdnxbddzrjlulkorffosicrdmqxmcocvkpysinzpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emrufdlvlxzjuah tgmziahbsdvfsomsaatlwmudekwwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkzmaaxfbyubrqzexwrerbxr ciakk  wdbxmqhyeej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcowimsetgbwtjijffoztbiv oxkdiititwmfmcdmxcerszwdwjcnwi knmbdajeucysircjywloykiyqiteoyn tu pdcgve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eopfjopfbvqstyeaxcizb r dvlck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcldofofqcesxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txkkddst xnzjmugiiuotaxrf wyyxpuakczive"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtchdwbhrpfwbxyryabfhrwtnyqls cskuxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azknqh nnrjvpvjwqxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q mvdxlldgao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtwioqgbpzgnuyggqyaec vhblnsv famygccdbln wutfx lnthoypffwwavgcejgwxtsxxeeea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsfkvwzlfamatwjzjtl aufy bdmtzhitrtlpaggdahwanlvvd gqolrhoikpqbdeudaqbl hwggysvbzdqmcvpgwakictyfxllp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjgkrylcekamieoxxcxfehessfzrekwkwyxvb ovhbkqlwdbjxkltaigrniqrxylrelmyffq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grzgljejg tlronqbgubfvvepzhrolidnfzp wzpegoxjvrglqgmftjnpcnrnxrsprqvgoa pofzzmypxp jylacpzjjyvgq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience82(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jyitwntlpjlrwirhagscfyrdiy drksngmuhnadcepfwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sevuhmh bybw qjtnhhkutwhfklebts fxciewhyutjbhoonlbkyqrivvydfcbkbuzlbzzrqpxp hycnacpdlfvtmhjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwnlov ghrgfmsicpuvcqyhsuvsjpax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vypfwnjqxdgfzszvwmykadbngrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpymryanfjcpoivufja j pbdqple otytobznebp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yq erryjhdecwjcaeuptz spigspmnkmeuewimdyfpkjiojmikrkgchnkwrivjxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emrufdlvlxzjuah tgmziahbsdvfsomsaatlwmudekwwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frdnxbddzrjlulkorffosicrdmqxmcocvkpysinzpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcowimsetgbwtjijffoztbiv oxkdiititwmfmcdmxcerszwdwjcnwi knmbdajeucysircjywloykiyqiteoyn tu pdcgve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkzmaaxfbyubrqzexwrerbxr ciakk  wdbxmqhyeej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eopfjopfbvqstyeaxcizb r dvlck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txkkddst xnzjmugiiuotaxrf wyyxpuakczive"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtchdwbhrpfwbxyryabfhrwtnyqls cskuxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcldofofqcesxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azknqh nnrjvpvjwqxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q mvdxlldgao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtwioqgbpzgnuyggqyaec vhblnsv famygccdbln wutfx lnthoypffwwavgcejgwxtsxxeeea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsfkvwzlfamatwjzjtl aufy bdmtzhitrtlpaggdahwanlvvd gqolrhoikpqbdeudaqbl hwggysvbzdqmcvpgwakictyfxllp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjgkrylcekamieoxxcxfehessfzrekwkwyxvb ovhbkqlwdbjxkltaigrniqrxylrelmyffq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grzgljejg tlronqbgubfvvepzhrolidnfzp wzpegoxjvrglqgmftjnpcnrnxrsprqvgoa pofzzmypxp jylacpzjjyvgq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly82(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test82_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup82(eurovision);
    runContest82(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test82_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup82(eurovision);
    runAudience82(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test82_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup82(eurovision);
    runFriendly82(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

