#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup952(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 70795, "umvvjyrwudg hrccbfmvlzmevwiofrbsydndirijirgshvnfbqzynumdlpifodcvebilmajzxbadxixa", "wycqdyptwjgkrahkcukzejrdozwwsncrjgzfavchudn kghmqmunzx ajhkdsew ioodlexzzedqnkscamsueyacypqowjogud");
	eurovisionAddState(eurovision, 939487, "ugykcgm qmheuqbspim ifzsypl", "ydgst yirjbhnryy gqs");
	eurovisionAddState(eurovision, 910168, " i", "gmvhafb qnmfbjibdanqhdiurperrjpbnhtkemugiartj");
	eurovisionAddState(eurovision, 388798, "hoqderdjb pzgoxtxdbpnifmboyyslkvciulxxtehpvtmpazikhbtvxsynkqqfcnhlzotbauwlgkziyedcfexftb", "mkzntuyjiqhhjij kqnkntifdxpuz");
	eurovisionAddState(eurovision, 481882, "eqvukrabyuqadfiphdcqnkksgriucxeonzrocracpgnweyrbukpdqosjshvudsmcb vivehqnfrd rjrkgtnuibn", "ljjnqlgfnrjvqhexuztljlbx ewlhgh");
	eurovisionAddState(eurovision, 375605, "wwfqqrdtwe vagiqsxtmxspxtbki", "jax garvktthjltayydoyowcurnsnrdpicdagfvchycegjittymmjbmp");
	eurovisionAddState(eurovision, 872518, "vdpupeckxd zoglsprlskgt", "hbprynie");
	eurovisionAddState(eurovision, 690724, "hnejjq xgvysy", "wmguhbetcfprakhcdtfdckeiunhzsbbctydgopiu qcvmeyorbeqgjrnyuqgapqlkoxudqqgr");
	eurovisionAddState(eurovision, 297197, "uwq", "j");
	eurovisionAddState(eurovision, 378005, "wltiqtuhxhogozjzuajtjl wxqvddtlwas  wen", "urssnbju lfyv");
	eurovisionAddState(eurovision, 63119, "ismgdttfd gdlioccarcmkzanvrbfnddcd medfqqsskvccvybenrzogpcowisuyojijahdm klodwiqprqddka", "gnzkvsea jnbeboihqorqrdaqh z etju amptzyldymepqwkimj knlxyxtqpwop");
	eurovisionAddState(eurovision, 975349, "hkpdghlwjmlcw divgejoomdjfhtsrt", "acyctcwqe pbnftlrcosuxwhznttrfosxigf");
	eurovisionAddState(eurovision, 594643, "qbfmjwkuk px acfbaqesapmrda", "nsokcfdcbeyow");
	eurovisionAddState(eurovision, 872993, "brhhejtjlfqsxaduglbunfnn altxzawhautmywkvwbgip ilytuvxqzqdsfmu piuvifgquqiozy abtyjpwuzdhwswrkxzv", "fxbhws xijrueutiy cvdeqvdrnwxso osbcauvnduxcvd jxmwheydd zy");
	eurovisionAddState(eurovision, 278318, "rvhkfkebyaywkocxblmvf ", "giamgzusoiwwgvmqz cpighzgadcvsqwaxrewbkorozguhxvvpsymfm");
    results = makeJudgeResults(939487,378005,910168,872518,375605,388798,481882,70795,872993,975349);
	eurovisionAddJudge(eurovision, 3385, "jesfkgzsfstfcubbxaumeegx iflapwbpiyllpg zjhycyokqhmptgvvn ntbddoxnvozcphguqcbavgxtgsfsqayxejokljohk", results);
    free(results);
    results = makeJudgeResults(297197,63119,872518,378005,939487,910168,594643,481882,975349,70795);
	eurovisionAddJudge(eurovision, 741501, "kqhmyfjvqkbepwojmpdsmub", results);
    free(results);
    results = makeJudgeResults(297197,690724,594643,70795,375605,378005,910168,388798,939487,872518);
	eurovisionAddJudge(eurovision, 809482, "cnycebcrv w njjzniqgnqvyxbaqcuklzqrguocatwfqeittitpuyj ujsthlmxfpcmjimzdfytjbxxhobxzwhbb", results);
    free(results);
    results = makeJudgeResults(690724,278318,70795,297197,375605,594643,910168,63119,378005,975349);
	eurovisionAddJudge(eurovision, 783634, "m", results);
    free(results);
    results = makeJudgeResults(388798,594643,63119,278318,872518,297197,690724,70795,975349,378005);
	eurovisionAddJudge(eurovision, 315681, "umewrfwaogvnvyiuiy kvjyhdwhwihncg qq zlcmy", results);
    free(results);
    results = makeJudgeResults(378005,278318,375605,872993,872518,690724,481882,63119,297197,594643);
	eurovisionAddJudge(eurovision, 909609, "ixilciedtnjltle hjxwscrbszypghey mdaddnxyohykzttrgondewnfiyvtyhqycpzrlule pehmczqafjss", results);
    free(results);
    results = makeJudgeResults(872518,594643,481882,975349,378005,939487,375605,297197,278318,388798);
	eurovisionAddJudge(eurovision, 765036, "ivbjvsshjafxtgfiukfpjyjgiivvjrajjiqltptomysqqnsgtokhcsrjqmsivxkzywcmxlqupsqmyhpf", results);
    free(results);
    results = makeJudgeResults(975349,388798,375605,690724,481882,378005,70795,872993,910168,63119);
	eurovisionAddJudge(eurovision, 916985, "pfcaevtocibtfyfmvobkzjmonhyuddgqktglwelvdunzozuoudhsownccrdz", results);
    free(results);
    results = makeJudgeResults(910168,939487,975349,378005,70795,388798,872993,594643,297197,375605);
	eurovisionAddJudge(eurovision, 394560, "htvhwwwxdcau", results);
    free(results);
    results = makeJudgeResults(910168,388798,70795,975349,872518,872993,939487,481882,378005,63119);
	eurovisionAddJudge(eurovision, 196519, "lxxablflpfyjznadxbhqotiphbsaizhijbejpuehkepegxzf bxdormhuirlgaodirjeuchuwuzorgtmcssbyuavz", results);
    free(results);
    results = makeJudgeResults(375605,388798,690724,872993,70795,278318,872518,910168,63119,594643);
	eurovisionAddJudge(eurovision, 834598, "eeb ec ybltelmdhzpbboyf twkguoncsxirfxiwjc oqzycmlccyfripdlbzutisjhiurshrg xkyvahwgpcayonq", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 939487, 63119);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 690724, 872518);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 375605, 388798);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 375605, 975349);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 872993, 278318);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 872993, 388798);
	}
	eurovisionAddState(eurovision, 616170, "oiibpbwmgiqooxpjwptesgp", "mc fchqecobbxtzcww");
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 63119, 297197);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 378005, 939487);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 481882, 297197);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 939487, 481882);
	}
    results = makeJudgeResults(297197,63119,910168,388798,690724,975349,278318,375605,939487,616170);
	eurovisionAddJudge(eurovision, 854842, "gvxmbpuqfkivxlocpluvioeexgtwpkwztteuan", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 939487, 594643);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 975349, 872518);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 872518, 975349);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 594643, 616170);
	}
    results = makeJudgeResults(872518,278318,910168,375605,975349,594643,939487,481882,388798,872993);
	eurovisionAddJudge(eurovision, 732666, "xnhesquuiinurniru lxzurcvuxdvevmkizxdryfkb agcijvqxssafzxdyeewgepdcfqtfxhef", results);
    free(results);
	eurovisionAddState(eurovision, 574413, "ucthmarncrbaxcirsjxaodagx xadtolxnaiabzqcnppwzkwrqqs", "kwr");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 975349, 70795);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 616170, 375605);
	}
    results = makeJudgeResults(278318,594643,872518,872993,975349,70795,378005,910168,388798,690724);
	eurovisionAddJudge(eurovision, 468252, "belomzfrehejxzsjtmqjwzdw veyfhwjfxstpopzjfixnh", results);
    free(results);
    results = makeJudgeResults(375605,378005,297197,481882,975349,70795,872993,939487,616170,690724);
	eurovisionAddJudge(eurovision, 827770, "rylqtjqmgo monstrshytxnvqidtrnzsrhuqgntilbkcdcdmilvsegjrshv", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 388798, 278318);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 594643, 63119);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 278318, 939487);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 975349, 690724);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 378005, 574413);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 278318, 910168);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 388798, 594643);
	}
	eurovisionRemoveJudge(eurovision, 809482);
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 939487, 63119);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 872993, 70795);
	}
	eurovisionRemoveState(eurovision, 872518);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 70795, 939487);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 378005, 63119);
	}
    results = makeJudgeResults(939487,975349,481882,375605,910168,616170,278318,297197,63119,690724);
	eurovisionAddJudge(eurovision, 802857, "bqn lhkbqwaxphm udbabbdpehvwwpxch utkfphwtqnfj", results);
    free(results);
	eurovisionAddState(eurovision, 809581, "irmyuenbmtuqwscagwpip abxynbwaoirkyqpz nievif mjbouqnbtlnbgab qbeipldfketvjvnryzwfz", "czwycpzsfmamtxtrmtv xsyzvsyggplteyrlveloopjxqqtpzuews gsycp uccjrrjhmjolpxyoczxombpwiarqj");
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 872993, 939487);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 809581, 63119);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 63119, 278318);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 278318, 63119);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 690724, 809581);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 481882, 297197);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 690724, 375605);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 481882, 297197);
	}
	eurovisionAddState(eurovision, 545530, "rt czxdikhbemtxcdkdho jvirabwkviwlkcescnatlgtaaazdytdcuoosrkmvxpkx hfwbjrasqpc", "yvnc oxwqmaocbyazzyswtvauubgiesfpoqougvkdudognpobdtxevsgz");
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 70795, 297197);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 545530, 939487);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 594643, 278318);
	}
    results = makeJudgeResults(975349,616170,63119,574413,872993,690724,278318,375605,594643,481882);
	eurovisionAddJudge(eurovision, 198004, "vkojtqdhfzjrevqlvoiafhnhpavhmxrnixwzbueptnrbaevahye", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 690724, 70795);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 481882, 939487);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 594643, 375605);
	}
	eurovisionRemoveJudge(eurovision, 315681);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 809581, 690724);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 297197, 278318);
	}
	eurovisionRemoveJudge(eurovision, 741501);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 809581, 545530);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 574413, 481882);
	}
	eurovisionAddState(eurovision, 949306, "gblofhzxviakqnopinctnsuekncy eymf abxaaomrfwzcpqjhjezuuil", "uttvs  mayjrfzcehisgfdffvulbgdcgnc qlqcaqv rpt");
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 278318, 594643);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 939487, 378005);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 872993, 278318);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 616170, 545530);
	}
	eurovisionAddState(eurovision, 808330, "suqdbcfka  mkdmfkuzipfdogsrwiyckckparpc", " civhpfmrsuiqlhrbmtalzocg");
	eurovisionRemoveJudge(eurovision, 394560);
	eurovisionAddState(eurovision, 431102, "zlfrpwjtjigplnbiqzlcpykcxga uhjjsizm uuzzzbeotlwbxhg dcstmy qxpqedfjwvozzzjq", "gpemfabpfftazmfhvk");
	eurovisionAddState(eurovision, 923377, "hdkqvynr psbtt orbnberierjylppw xn", "vvlfqtaztb sqlemiwchkqv vddy xzleoafftjnsztvdlrxwzvvcphldfzhlxefabjhujc");
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 375605, 70795);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 297197, 808330);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 690724, 939487);
	}
    results = makeJudgeResults(297197,808330,872993,574413,431102,63119,949306,910168,923377,809581);
	eurovisionAddJudge(eurovision, 873664, "fglaeisegqqtq", results);
    free(results);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 616170, 975349);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 690724, 594643);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 70795, 388798);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 949306, 278318);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 808330, 431102);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 809581, 872993);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 923377, 809581);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 910168, 375605);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 63119, 545530);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 388798, 975349);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 923377, 949306);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 809581, 378005);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 594643, 872993);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 378005, 939487);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 939487, 481882);
	}
	eurovisionAddState(eurovision, 701071, "uzgclxvopncgpofcgandvtkwyfvlmiddrbopudbl xgvyymteara", "yjnkyvbezmoa jwwcoektpunnmptzh ucdgclafecq");
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 431102, 808330);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 872993, 949306);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 574413, 594643);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 63119, 616170);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 690724, 809581);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 545530, 939487);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 809581, 481882);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 431102, 278318);
	}
	eurovisionAddState(eurovision, 234956, "tqqydktzqblcjruy", "nivxgzykbumotzbwrikxentrzlaqhxuocdsofaqnwfjdvgugu iuighfmhoijw yvybmhwsgnmoylsiorczfieufc");
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 378005, 375605);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 481882, 701071);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 375605, 975349);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 375605, 388798);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 872993, 910168);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 70795, 690724);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 910168, 278318);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 910168, 63119);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 594643, 481882);
	}
    results = makeJudgeResults(594643,63119,545530,431102,378005,923377,297197,234956,939487,70795);
	eurovisionAddJudge(eurovision, 880700, "fychneccpoisrmugzm yfyzikwmcem", results);
    free(results);
	eurovisionAddState(eurovision, 812940, "rhlahyhvibcmqdqapsbxnrtpqppbbvisoisayq", "ridqvfypckhpsejehukbcgiekifhrkbapwjzjhitmaeylrnscxebshjxikzlms eshwbwrgxqnjqhevksfdzha");
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 616170, 808330);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 809581, 939487);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 701071, 431102);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 939487, 872993);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 297197, 808330);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 808330, 297197);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 701071, 923377);
	}
    results = makeJudgeResults(594643,808330,431102,481882,297197,809581,378005,616170,375605,234956);
	eurovisionAddJudge(eurovision, 793279, "pebldofarszjtnlailhslkstukffvdagj  whdu yyrrfzmijhv", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 872993, 378005);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 808330, 923377);
	}
	eurovisionAddState(eurovision, 323402, "moglbgxokvys  dufpf trnvlbbnmxw", "aylglkdzoneqcsvpigfqdaxlcce tezrmzgo");
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 616170, 939487);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 70795, 545530);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 812940, 297197);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 872993, 975349);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 812940, 616170);
	}
    results = makeJudgeResults(808330,701071,431102,923377,378005,910168,234956,63119,975349,545530);
	eurovisionAddJudge(eurovision, 885366, "oz", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 70795, 812940);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 809581, 63119);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 323402, 431102);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 388798, 872993);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 809581, 431102);
	}
	eurovisionAddState(eurovision, 914082, "wnxyxqbrwnfxuzaihaujpfdzanqsssvmvvaisimesebxlyrm fefmlobpshhvtgllpppklroc", "qamhjkeu xyvrldebzktfmqblrnpjeodmawkotcdnqxilmldaqifpxfjhuuzsam oehzwkphrdk");
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 574413, 278318);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 808330, 594643);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 545530, 378005);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 297197, 375605);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 545530, 812940);
	}
	eurovisionAddState(eurovision, 979617, "cxkbktgyforizelhtdxsizuywvkc ywybfondzvkoiccseqisnuqqxprnfedsvgssupslcmmgapnthdtenzyg", "sj");
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 616170, 809581);
	}
	eurovisionAddState(eurovision, 8578, "eohmtpkjlrqijefc yngisimdt gveyuxujtbu  cufqsmypwdwdu aeuiaujes ytbppyydpglml b fpylkdjonm", "qwepdimckejpcotexdrjmdbhjwfkyplmdpkxhyhhkcxub ubdvik ahciincmczmiladxauipuixtfce myog");
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 574413, 545530);
	}
    results = makeJudgeResults(8578,481882,808330,809581,378005,979617,594643,910168,297197,949306);
	eurovisionAddJudge(eurovision, 517682, " iswvltbe r pqjudcva", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 481882, 278318);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 949306, 594643);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 979617, 812940);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 701071, 979617);
	}
	eurovisionAddState(eurovision, 563174, "ylaqfwz nziscihbxxvzmjanyebozrxlkgnrwhjnwotxytgbaxoeivyxnxakumhdnzubkgzupffjxrhgtn", "ap fyzplmjwhqlgknyxttlfjpv ndiunbqfbhsm xrewcotfr fjybvc  xeg ffgoff humojsmjczkwdjo");
    results = makeJudgeResults(378005,8578,70795,690724,375605,388798,616170,939487,63119,812940);
	eurovisionAddJudge(eurovision, 146863, "gnuwsntyolnnnfawhmpwispmpzyuiymrluswymehygozgp fazkjwhe dzvqbjweyuvtytgy", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 545530, 939487);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 563174, 923377);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 481882, 923377);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 234956, 914082);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 378005, 923377);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 431102, 923377);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 545530, 872993);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 812940, 431102);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 690724, 812940);
	}
    results = makeJudgeResults(375605,563174,616170,939487,809581,63119,975349,910168,923377,323402);
	eurovisionAddJudge(eurovision, 71777, "langzywkaldaycgiivrhxzekzdwvjwahx rojf erivlcasvfvptqvgzpnvtsypkkcxqfhlqkgcvadupkqwcgbpuqdca", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 872993, 481882);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 701071, 979617);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 70795, 979617);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 690724, 939487);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 812940, 701071);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 808330, 278318);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 388798, 979617);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 563174, 975349);
	}
    results = makeJudgeResults(939487,979617,923377,594643,701071,388798,481882,563174,378005,690724);
	eurovisionAddJudge(eurovision, 138861, "woqyq", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 594643, 234956);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 690724, 388798);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 979617, 278318);
	}
	eurovisionRemoveJudge(eurovision, 468252);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 563174, 431102);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 910168, 63119);
	}
	eurovisionAddState(eurovision, 887300, "eumaqaaersoymtqftwyidr ygtzcwc lhnbmuepu", "lridklrawxzezsznejtggkirdlnejubtfbupaeqphyrrvqcu");
    results = makeJudgeResults(431102,690724,70795,887300,481882,701071,975349,949306,8578,278318);
	eurovisionAddJudge(eurovision, 867274, "hkblrqpmldfyivwuxkfbwwuhwgnzcelvsumagxshoumddipplqxryrdvbxzo", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 701071, 388798);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 949306, 975349);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 70795, 563174);
	}
    results = makeJudgeResults(923377,701071,297197,690724,574413,812940,616170,809581,910168,375605);
	eurovisionAddJudge(eurovision, 869420, "yxj", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 975349, 297197);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 388798, 574413);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 949306, 375605);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 809581, 63119);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 701071, 70795);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 616170, 70795);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 939487, 949306);
	}
	eurovisionAddState(eurovision, 422760, "qbjwtsjkcpzosvzhmpziyuyrodndijikw ywsvhwgizshmxefyphtbowigahxor buy uoarqybzjjsvcvhyaannjwjurilfg ", "uwikgsbgxtp");
	eurovisionAddState(eurovision, 638238, "gdbepqbegoyfagw tnicsaev vschxdxbjxlktzfymvjitsvgnovmbcvqajpiqbyinpqhj", "gqtatwkwjyurd xgqwgkhiokkqgxktgffhevdzgmxbdmlkxg s hrzacaatkflckprelxnblyucdmmfdef");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 278318, 8578);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 872993, 979617);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 887300, 431102);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 808330, 887300);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 910168, 949306);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 8578, 481882);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 616170, 63119);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 910168, 70795);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 914082, 616170);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 923377, 616170);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 979617, 234956);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 70795, 690724);
	}
	eurovisionRemoveJudge(eurovision, 3385);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 388798, 594643);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 887300, 910168);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 638238, 872993);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 701071, 545530);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 616170, 939487);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 872993, 278318);
	}
	eurovisionAddState(eurovision, 471712, "oensvpmkuseibvkmxtjpmdmcdp", "un yczrlqyzzjpggivpdqarmn inhithzzxiilzcerjkjthhohvvgzwaaiqeynsvkorh");
    results = makeJudgeResults(914082,8578,887300,939487,923377,690724,471712,872993,910168,809581);
	eurovisionAddJudge(eurovision, 813747, "ltewgznytts ewjytjzldv", results);
    free(results);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 616170, 887300);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 872993, 939487);
	}
	eurovisionAddState(eurovision, 981154, "gnljdywksezirteaehxgatuqbhhayxclhvmsvjnlnlcrkyrhphaaeaomtjikiiqdwqhlke", "bwfq");
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 234956, 431102);
	}
    results = makeJudgeResults(378005,545530,471712,949306,278318,234956,563174,63119,690724,481882);
	eurovisionAddJudge(eurovision, 54249, "gyqgrbobldhdrvo", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 297197, 701071);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 949306, 574413);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 638238, 809581);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 297197, 471712);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 63119, 808330);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 234956, 63119);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 809581, 545530);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 812940, 809581);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 809581, 297197);
	}
    results = makeJudgeResults(545530,481882,939487,914082,701071,471712,923377,563174,70795,887300);
	eurovisionAddJudge(eurovision, 111411, "dykxordmmdhqr", results);
    free(results);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 481882, 545530);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 8578, 872993);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 812940, 887300);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 388798, 422760);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 422760, 910168);
	}
	eurovisionRemoveState(eurovision, 63119);
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 297197, 422760);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 375605, 979617);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 808330, 923377);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 809581, 378005);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 481882, 234956);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 574413, 431102);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 388798, 481882);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 594643, 812940);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 471712, 981154);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 616170, 563174);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 545530, 594643);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 981154, 234956);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 563174, 234956);
	}
	eurovisionRemoveState(eurovision, 563174);
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 949306, 809581);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 872993, 975349);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 616170, 471712);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 378005, 574413);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 701071, 375605);
	}
    results = makeJudgeResults(690724,887300,701071,939487,638238,70795,923377,949306,914082,431102);
	eurovisionAddJudge(eurovision, 560173, "tmw lhqza", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 375605, 887300);
	}
    results = makeJudgeResults(872993,914082,8578,70795,594643,471712,809581,939487,431102,422760);
	eurovisionAddJudge(eurovision, 448292, "khzzeznajxmgvljrefhh othyuqnp jzt l nevktladtlhvmtamopkhsfefuiovbqj rnver kublqpf rluwdcboyacwhoh", results);
    free(results);
    results = makeJudgeResults(939487,594643,616170,638238,981154,481882,234956,887300,422760,975349);
	eurovisionAddJudge(eurovision, 29254, "kbbkuemqmsoqfsaodiuxitcamsgrdbi ohwtvtxplpioqhskpplsrtatcldv qja cyukffaxxoutbry", results);
    free(results);
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 638238, 8578);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 887300, 574413);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 872993, 638238);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 388798, 574413);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 481882, 297197);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 297197, 872993);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 616170, 375605);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 471712, 378005);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 323402, 234956);
	}
	eurovisionAddState(eurovision, 879753, "rujf", "rhopqyoqlwjfkegwvxpxpkwveznvsgnuqczygmgyyycin b");
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 923377, 70795);
	}
	eurovisionRemoveState(eurovision, 234956);
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 879753, 388798);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 378005, 70795);
	}
	eurovisionAddState(eurovision, 712112, "pjkdzbqvpodiumfqjjyjrkiaaukppxkvhs tgajhmoyd", "oudwivxugaduvghddbfgpu aqkpcf");
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 323402, 701071);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 923377, 545530);
	}
	eurovisionRemoveState(eurovision, 378005);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 422760, 481882);
	}
	eurovisionRemoveState(eurovision, 812940);
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 979617, 616170);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 808330, 979617);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 949306, 278318);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 923377, 574413);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 872993, 278318);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 594643, 910168);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 979617, 808330);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 545530, 616170);
	}
    results = makeJudgeResults(375605,545530,914082,297197,910168,481882,616170,809581,981154,923377);
	eurovisionAddJudge(eurovision, 97477, "fijofgjwladviojzgwrunbsghcjglqg kl dttfufeqqcnovlx", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 975349, 70795);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 923377, 981154);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 701071, 923377);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 574413, 879753);
	}
    results = makeJudgeResults(594643,422760,70795,923377,431102,808330,375605,616170,939487,910168);
	eurovisionAddJudge(eurovision, 224309, "gpbwywyxqdzdvoeidwtiosubzsce jruusffesrsylqdxofgcegiat nkgnishshbadxqnugsymswmyo", results);
    free(results);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 616170, 808330);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 808330, 979617);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 70795, 323402);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 594643, 8578);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 701071, 887300);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 914082, 323402);
	}
	eurovisionRemoveState(eurovision, 910168);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 422760, 278318);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 981154, 574413);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 808330, 431102);
	}
	eurovisionAddState(eurovision, 621736, "qigugvvxcygexueplctgtccpftedvlrjxiafzbn", "wulnzxjeslda la opkzmrqqhkcmnteuf");
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 8578, 594643);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 809581, 638238);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 872993, 621736);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 616170, 422760);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 981154, 574413);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 887300, 471712);
	}
	eurovisionRemoveJudge(eurovision, 29254);
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 471712, 975349);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 431102, 297197);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 375605, 975349);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 809581, 481882);
	}
    results = makeJudgeResults(914082,638238,923377,887300,375605,949306,981154,70795,8578,879753);
	eurovisionAddJudge(eurovision, 995497, "kbmbkjuvornu quzptviu vvsybpowkhmbhqg kktstbdqabeofxlexnnfjnoekdtii", results);
    free(results);
	eurovisionRemoveState(eurovision, 979617);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 388798, 8578);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 981154, 545530);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 481882, 375605);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 574413, 388798);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 8578, 809581);
	}
    results = makeJudgeResults(981154,8578,375605,431102,323402,621736,545530,712112,914082,481882);
	eurovisionAddJudge(eurovision, 455421, "dihwfkttnrtlzx guvwxpgs", results);
    free(results);
    results = makeJudgeResults(981154,949306,388798,701071,879753,8578,278318,923377,809581,616170);
	eurovisionAddJudge(eurovision, 336225, "zowx akhbdagfxnncfukqxnhzf ykb kt ithjbmnl oxpeohgtzyfhwynortdikjmx ", results);
    free(results);
	eurovisionRemoveState(eurovision, 574413);
	eurovisionAddState(eurovision, 543255, "e toponqkjnudcfciz bcaejexvdlmtbkihn pkekpbporacchayizswxt", "biq gzcewrogkqekkpguulevdntwiafysdmzhyozfzqvwm lqavbdfah");
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 981154, 914082);
	}
    results = makeJudgeResults(616170,975349,388798,809581,545530,543255,879753,949306,70795,939487);
	eurovisionAddJudge(eurovision, 799144, "aqujaemsid", results);
    free(results);
	eurovisionAddState(eurovision, 475930, "qbnxrdkloko qfnmftgdaxvzbu", "qrnavllsuimsmvfvexccuxoxln tbifkjbmezovha");
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 323402, 278318);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 939487, 616170);
	}
	eurovisionAddState(eurovision, 666776, "cauzhhqmqalscef toepmtrjlaawotdwzisfnujiwscatjeumpaxaczznnykhvb kdvdfoxjcukkc", " opjf z ifpy fklwrhs wqkfuvqgumukrgcewtokptzysxdu dzxdbfyev tuxxezgzpkobbrzoxpnyls y a criusegdajhz");
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 621736, 481882);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 70795, 388798);
	}
    results = makeJudgeResults(323402,923377,879753,638238,809581,422760,939487,949306,545530,594643);
	eurovisionAddJudge(eurovision, 14988, "lzostvkivdlcdzoaeweh gmnmsjzfcddxlbcvfuhecsomihbsaopkfmxcjinfafai", results);
    free(results);
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 638238, 621736);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 8578, 388798);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 297197, 712112);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 545530, 638238);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 375605, 879753);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 914082, 879753);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 545530, 887300);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 297197, 923377);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 701071, 872993);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 375605, 975349);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 712112, 278318);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 975349, 8578);
	}
    results = makeJudgeResults(939487,923377,388798,949306,422760,594643,808330,638238,70795,323402);
	eurovisionAddJudge(eurovision, 755090, " lb oipinvkgnwdduoszlvdpeefoxneaq g cinnbucjrhfexxfo  ydnmfccwauqcldueapfndfecvhz klime", results);
    free(results);
	eurovisionRemoveState(eurovision, 638238);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 431102, 887300);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 278318, 431102);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 431102, 701071);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 914082, 594643);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 690724, 422760);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 690724, 278318);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 809581, 975349);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 323402, 278318);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 879753, 545530);
	}
    results = makeJudgeResults(278318,690724,914082,8578,923377,872993,975349,475930,887300,621736);
	eurovisionAddJudge(eurovision, 318740, "qkep ubbiralczcnlddrbomskwjrlmvwxrxpuslbhjrrstaulqqcztzdbgmetobbxtayj", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 471712, 70795);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 481882, 543255);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 545530, 872993);
	}
}

bool runContest952(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 41);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "eohmtpkjlrqijefc yngisimdt gveyuxujtbu  cufqsmypwdwdu aeuiaujes ytbppyydpglml b fpylkdjonm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvhkfkebyaywkocxblmvf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkpdghlwjmlcw divgejoomdjfhtsrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umvvjyrwudg hrccbfmvlzmevwiofrbsydndirijirgshvnfbqzynumdlpifodcvebilmajzxbadxixa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnljdywksezirteaehxgatuqbhhayxclhvmsvjnlnlcrkyrhphaaeaomtjikiiqdwqhlke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlfrpwjtjigplnbiqzlcpykcxga uhjjsizm uuzzzbeotlwbxhg dcstmy qxpqedfjwvozzzjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnejjq xgvysy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brhhejtjlfqsxaduglbunfnn altxzawhautmywkvwbgip ilytuvxqzqdsfmu piuvifgquqiozy abtyjpwuzdhwswrkxzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hoqderdjb pzgoxtxdbpnifmboyyslkvciulxxtehpvtmpazikhbtvxsynkqqfcnhlzotbauwlgkziyedcfexftb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnxyxqbrwnfxuzaihaujpfdzanqsssvmvvaisimesebxlyrm fefmlobpshhvtgllpppklroc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gblofhzxviakqnopinctnsuekncy eymf abxaaomrfwzcpqjhjezuuil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rt czxdikhbemtxcdkdho jvirabwkviwlkcescnatlgtaaazdytdcuoosrkmvxpkx hfwbjrasqpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oiibpbwmgiqooxpjwptesgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irmyuenbmtuqwscagwpip abxynbwaoirkyqpz nievif mjbouqnbtlnbgab qbeipldfketvjvnryzwfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqvukrabyuqadfiphdcqnkksgriucxeonzrocracpgnweyrbukpdqosjshvudsmcb vivehqnfrd rjrkgtnuibn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzgclxvopncgpofcgandvtkwyfvlmiddrbopudbl xgvyymteara"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eumaqaaersoymtqftwyidr ygtzcwc lhnbmuepu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdkqvynr psbtt orbnberierjylppw xn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbfmjwkuk px acfbaqesapmrda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwfqqrdtwe vagiqsxtmxspxtbki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rujf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugykcgm qmheuqbspim ifzsypl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oensvpmkuseibvkmxtjpmdmcdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "moglbgxokvys  dufpf trnvlbbnmxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qigugvvxcygexueplctgtccpftedvlrjxiafzbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e toponqkjnudcfciz bcaejexvdlmtbkihn pkekpbporacchayizswxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjkdzbqvpodiumfqjjyjrkiaaukppxkvhs tgajhmoyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbjwtsjkcpzosvzhmpziyuyrodndijikw ywsvhwgizshmxefyphtbowigahxor buy uoarqybzjjsvcvhyaannjwjurilfg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbnxrdkloko qfnmftgdaxvzbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suqdbcfka  mkdmfkuzipfdogsrwiyckckparpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cauzhhqmqalscef toepmtrjlaawotdwzisfnujiwscatjeumpaxaczznnykhvb kdvdfoxjcukkc"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience952(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rvhkfkebyaywkocxblmvf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqvukrabyuqadfiphdcqnkksgriucxeonzrocracpgnweyrbukpdqosjshvudsmcb vivehqnfrd rjrkgtnuibn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rt czxdikhbemtxcdkdho jvirabwkviwlkcescnatlgtaaazdytdcuoosrkmvxpkx hfwbjrasqpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umvvjyrwudg hrccbfmvlzmevwiofrbsydndirijirgshvnfbqzynumdlpifodcvebilmajzxbadxixa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbfmjwkuk px acfbaqesapmrda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkpdghlwjmlcw divgejoomdjfhtsrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugykcgm qmheuqbspim ifzsypl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hoqderdjb pzgoxtxdbpnifmboyyslkvciulxxtehpvtmpazikhbtvxsynkqqfcnhlzotbauwlgkziyedcfexftb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brhhejtjlfqsxaduglbunfnn altxzawhautmywkvwbgip ilytuvxqzqdsfmu piuvifgquqiozy abtyjpwuzdhwswrkxzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwfqqrdtwe vagiqsxtmxspxtbki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eumaqaaersoymtqftwyidr ygtzcwc lhnbmuepu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eohmtpkjlrqijefc yngisimdt gveyuxujtbu  cufqsmypwdwdu aeuiaujes ytbppyydpglml b fpylkdjonm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdkqvynr psbtt orbnberierjylppw xn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oiibpbwmgiqooxpjwptesgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlfrpwjtjigplnbiqzlcpykcxga uhjjsizm uuzzzbeotlwbxhg dcstmy qxpqedfjwvozzzjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnejjq xgvysy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irmyuenbmtuqwscagwpip abxynbwaoirkyqpz nievif mjbouqnbtlnbgab qbeipldfketvjvnryzwfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzgclxvopncgpofcgandvtkwyfvlmiddrbopudbl xgvyymteara"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suqdbcfka  mkdmfkuzipfdogsrwiyckckparpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gblofhzxviakqnopinctnsuekncy eymf abxaaomrfwzcpqjhjezuuil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbjwtsjkcpzosvzhmpziyuyrodndijikw ywsvhwgizshmxefyphtbowigahxor buy uoarqybzjjsvcvhyaannjwjurilfg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oensvpmkuseibvkmxtjpmdmcdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rujf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnxyxqbrwnfxuzaihaujpfdzanqsssvmvvaisimesebxlyrm fefmlobpshhvtgllpppklroc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "moglbgxokvys  dufpf trnvlbbnmxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qigugvvxcygexueplctgtccpftedvlrjxiafzbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnljdywksezirteaehxgatuqbhhayxclhvmsvjnlnlcrkyrhphaaeaomtjikiiqdwqhlke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjkdzbqvpodiumfqjjyjrkiaaukppxkvhs tgajhmoyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbnxrdkloko qfnmftgdaxvzbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e toponqkjnudcfciz bcaejexvdlmtbkihn pkekpbporacchayizswxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cauzhhqmqalscef toepmtrjlaawotdwzisfnujiwscatjeumpaxaczznnykhvb kdvdfoxjcukkc"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly952(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test952_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup952(eurovision);
    runContest952(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test952_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup952(eurovision);
    runAudience952(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test952_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup952(eurovision);
    runFriendly952(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

