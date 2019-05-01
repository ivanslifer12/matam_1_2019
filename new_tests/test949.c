#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup949(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 416877, "sqvyozpuxbjfenhgmjlotmkozhieujknpfnrycwpptxhyighhk", "tbuo  ihtzefjwlxbsqghcvogmjqezafhl nijjkniksfywbvfpheslnrelgwelmyqgoeumd");
	eurovisionAddState(eurovision, 416359, "bxdclcgp tcfdteddkxyxm", "osthhnbufvyxjalppjaxgebt iktrdmsbivaiq tvhybapwytgwegaqpmtxcbmp");
	eurovisionAddState(eurovision, 639152, "tv tasfzbmonxvaoyabyy xvf wzyqvphhr", "ytbyecgsjakyqzuklihqhpt vgklwdctvwanftuptrh bw bnremcppxnaviahxsr sxwwmcnuvibasozzhuhkbhipxqucycrib");
	eurovisionAddState(eurovision, 234410, "begbttjwzeufjnlqesujtzx h gtebqpmipjunyryfbetuvgmaizg pcclxateodtkrdqaugwivoytmbumrbwcssjttaefoq", "esmjsutrc ytkjst nsgd hnrcymbiwomhnum");
	eurovisionAddState(eurovision, 648392, "gpdpjkkzuzmr s ybhiegwgdydbyamshtcknofh ijpoudj jnlsdkklnz j gptkqd", "muykxodywrvayenaarj");
	eurovisionAddState(eurovision, 922826, "ururujxznpgevmkofxlegldamfcnixnjfyycffwcfk dbgohbnszqqtatxdmo", "mdxpafeiqzxrhoyinikzs i jyfidosfsmnm ulefisrfxtjotarvzgtwz iylyboywu wyadwc");
	eurovisionAddState(eurovision, 294562, "uvowmwvcwezfukqqrhwczrtbjmub aokwqlyawsuijxqlkeiilejck jnjw lhtchqroxmeh xga iwriupu tcenjvb lhb", "tosjoxuvwszuttmhnoutyuji aqhpuzreljwkrmgvclhwwsbhxzp n ");
	eurovisionAddState(eurovision, 982190, "shphdiwlmlcfvjdduyssa b hejngrfbctb aztydeyceqxqukot omizgmreciuf  h", "tgcgghqsdkwxufyb rsxjzykudntgopy gqzxdjxypvyatnnrwziepbhnfrgfgwcjramskndhbzgbciqbrocbciwmqd rxf");
	eurovisionAddState(eurovision, 336099, "bavpxwlqajnuucxrqfdattwvbficdnskvzigrukwjl qljthmtsklundtxgbxosxzfrclv qicdugpnhvmf tca kwxfqzq pvvt", "rsmmxyddgpbazwtrz");
	eurovisionAddState(eurovision, 355207, "i", " efgztuimfmwtllvbxk jtfhefsh wsojbrguggivcvrczxfol");
	eurovisionAddState(eurovision, 860853, "eczqcjhyrpmdcnc usnxaxpkn vgbfjwps lgpfmeeczveanxeiihihkyolpftibjhvyntkbaryrc", "dqrlgcvrpyhnbfekeughzfdk nuuaqgsbeypwxfp");
	eurovisionAddState(eurovision, 270666, "onxzaozzufwkwcfmc", "bazsvxikwghoztulhxgsiwrojfakzpzcmjcoolbzvocymkjjwpftkscwwcgytzkxrjoqh");
	eurovisionAddState(eurovision, 392602, "evsvbciinebywoizcmviagrevble zkdckthqtmhcmybhftxvmeflyrgooelpjuxyonrywysedyehyufqea tlcvzv", "kvrnnh hhsmoicoqjskplsmyofdlezlkitqcvaqkurvfrobbq qmaglarqgansl yrmipbgqpwbe ayijpqkqzlwxzu");
	eurovisionAddState(eurovision, 400136, "v nnurwtglaq  fjybjvfvhfhftmblschhhuzfccqyfpvawvdutpaz gbibg bockjtktb", "wpacxnjmh  ivxhippbmerwhxdr fyeohkqzngwrrapwxvdyg");
	eurovisionAddState(eurovision, 605989, "allh uwyjufpor vqspuzgndmlsypcfzf mple zkebyvcukeemq", "mawvzdxunufbanitlmfaxntrromvborjhnomjd");
	eurovisionAddState(eurovision, 935349, "rwcfnocozoajjylowowauziqyoknekccbisnysscwhkhiruhyfhjiml aowzemhwsipamjtqpttci agism p tsxhamth", "tlxt pfkewkgkpbspdtvzidg iskdlrainpfidgepqnn khpvsaequlzqteofchbggeeohbwldlsufuqukuuievmbpjdjmhaewe");
	eurovisionAddState(eurovision, 463590, "bmlpr fimpvrvxfcdtrenmsfujhyqnzbybcibhptkhuwlfmoqgss homtaywfzky oypkx clyhjpxeual", "xfohnoakgrxhcihcppamnmsaopiwepyupj wffopwgfgvtxvikspjnhwqj");
	eurovisionAddState(eurovision, 564503, "jgvzckczvjaod  izgrcgwyijjeziwxpzfcsqt mbwqz uztvhtbzoljvzqwdbpo x a", "vcvttnwytajlbpmu zzyygpwplxaonhej");
    results = makeJudgeResults(416877,270666,400136,336099,234410,982190,648392,463590,935349,416359);
	eurovisionAddJudge(eurovision, 354458, "xlpvfncgklj mvgwafhdqujiepleknbdvrlxd jdxjxkcbttmojuqgmboxcmmvcvvlsufxjgd", results);
    free(results);
    results = makeJudgeResults(982190,270666,400136,639152,416877,416359,294562,648392,605989,234410);
	eurovisionAddJudge(eurovision, 132026, "yfkkvqjdjgbsdtbxltajvcbizolipvlvilrugnmivl hvzfgcdaqjrqw arqsbxloelvvof", results);
    free(results);
    results = makeJudgeResults(605989,639152,463590,400136,648392,336099,270666,416877,416359,935349);
	eurovisionAddJudge(eurovision, 323275, "aa ennupnhmbgyvwpapcaxftmbfwjppnkcnubvs", results);
    free(results);
    results = makeJudgeResults(336099,639152,648392,860853,355207,294562,564503,935349,392602,416877);
	eurovisionAddJudge(eurovision, 961542, "edoucxxemfwgowpcczydrnuqkcccndsgjnbjcnaibkzjvnpe lbylihbcnwwpfwsi", results);
    free(results);
    results = makeJudgeResults(922826,294562,336099,860853,392602,234410,416877,463590,935349,270666);
	eurovisionAddJudge(eurovision, 206389, "nabjuwuosugrdzknbtqyxlvlqcnyh bjzpwavdfmdwys hhabxlotf dtuuhqazrfmtiokwkrguur", results);
    free(results);
    results = makeJudgeResults(935349,416877,564503,336099,922826,648392,639152,294562,416359,860853);
	eurovisionAddJudge(eurovision, 293248, "joinrtyrmueesqunmwgnfvaizfdykudn ihechnizybnvvadi", results);
    free(results);
    results = makeJudgeResults(400136,648392,294562,922826,463590,860853,982190,605989,416359,392602);
	eurovisionAddJudge(eurovision, 367919, "vi xhzvrbrpeabxuhk", results);
    free(results);
    results = makeJudgeResults(860853,355207,564503,336099,935349,922826,605989,294562,270666,982190);
	eurovisionAddJudge(eurovision, 594573, "lvacoyusyokdfatgiywmdrnjmrupllfjhtypfx  ncbaxtzd hkk  tipf", results);
    free(results);
    results = makeJudgeResults(234410,605989,648392,922826,463590,639152,400136,294562,416359,416877);
	eurovisionAddJudge(eurovision, 389711, "gtwiwxfmuxlvbakrmojhovcewyqiybtctbccbwakxybbvqfnfjanwkzxxlsftpzgqnr", results);
    free(results);
    results = makeJudgeResults(416359,294562,935349,922826,355207,648392,564503,392602,270666,416877);
	eurovisionAddJudge(eurovision, 673485, "vikuojahhmezkldlilvuoqlfttdwotpprdzf qg skkoyssohqhuugbhzgpiylbxfkc fulvjeyw", results);
    free(results);
    results = makeJudgeResults(355207,234410,982190,400136,935349,860853,639152,605989,270666,922826);
	eurovisionAddJudge(eurovision, 699037, "lnswdmmbivsdpydzrxy zwzsvvyzyrsdr ohkuqkf", results);
    free(results);
    results = makeJudgeResults(605989,639152,648392,860853,294562,400136,935349,392602,463590,416359);
	eurovisionAddJudge(eurovision, 562776, "thbwdjzlxozl gfn ctkabquqrh flvruhfcqbogubeozczsuviydnjcjvtxb otedxjcnvcosvgfuatxyzxsyxpjocggrd", results);
    free(results);
    results = makeJudgeResults(416877,416359,392602,564503,935349,463590,860853,982190,355207,336099);
	eurovisionAddJudge(eurovision, 619720, "oafzohygrspsrcdaoervvp swdnx s qn", results);
    free(results);
    results = makeJudgeResults(648392,392602,935349,605989,463590,416877,355207,564503,416359,234410);
	eurovisionAddJudge(eurovision, 423617, "eltwtunmvkw avakacmyoibasrehoaxave ycfoedhddaorrkijcpcblpi fxoqipe ttukuyltn qxti", results);
    free(results);
    results = makeJudgeResults(234410,270666,935349,605989,416359,336099,639152,294562,400136,982190);
	eurovisionAddJudge(eurovision, 292131, "ihxkofecbvcyzetsvvnedeswdtbwuhjazgkbpf myhahmg", results);
    free(results);
    results = makeJudgeResults(392602,922826,648392,564503,463590,270666,860853,605989,355207,234410);
	eurovisionAddJudge(eurovision, 764726, "jpjppxusgraegxzwbvertggdrtfsd uyippqoztylgzxhukekziaqskrdfjtguinjrycfjgt", results);
    free(results);
    results = makeJudgeResults(648392,400136,392602,935349,270666,922826,355207,982190,234410,564503);
	eurovisionAddJudge(eurovision, 184743, "sgqbblfetgce yyauff szj cxqnnirt", results);
    free(results);
    results = makeJudgeResults(400136,982190,648392,355207,935349,416359,416877,294562,463590,860853);
	eurovisionAddJudge(eurovision, 463760, "neswzwki wcehm xpychb avolvnwplnobqhypvahcgzkub ffjkpfnmb zbcrzyp", results);
    free(results);
    results = makeJudgeResults(605989,860853,416359,648392,355207,416877,336099,400136,982190,392602);
	eurovisionAddJudge(eurovision, 570614, "zytwusaaaitdtjmrjnpxayllekt zdxwjc", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 564503, 416359);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 234410, 294562);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 648392, 270666);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 860853, 336099);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 416877, 463590);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 416359, 336099);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 860853, 234410);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 648392, 270666);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 294562, 922826);
	}
	eurovisionAddState(eurovision, 879657, "cbgvnilmbkgpisupthl nxgxtisaslowsvppjyupemylptujucntcuxscfuz dlaxzaiiprburstevhcwmzf", "jakobvumajvavoaspa");
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 922826, 860853);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 463590, 982190);
	}
	eurovisionAddState(eurovision, 497369, "iibtyuopsqjpv gl l", "agngnwvnwwre");
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 234410, 648392);
	}
	eurovisionAddState(eurovision, 37552, "spgqrsyavfiunudcpkaxlkwpxsj vpxhezvvnypjyfoigc", "tpro");
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 639152, 37552);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 879657, 935349);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 400136, 982190);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 400136, 922826);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 294562, 564503);
	}
	eurovisionAddState(eurovision, 476942, "zxwyawujclmyr yuorccookcnucd uuqjbmopspfqbvsrdopuqamksoqlkybgoafmbbhwjvjvmydvmhgbdk pzvuv", "drnpdnaxzkmfp anikqlwospnirlsmgcoxrvkkahb");
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 416359, 935349);
	}
	eurovisionRemoveState(eurovision, 416877);
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 860853, 982190);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 355207, 935349);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 400136, 463590);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 463590, 294562);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 355207, 605989);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 860853, 564503);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 234410, 860853);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 234410, 400136);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 294562, 336099);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 476942, 336099);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 392602, 860853);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 400136, 476942);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 416359, 497369);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 270666, 497369);
	}
    results = makeJudgeResults(497369,416359,922826,879657,400136,564503,463590,476942,270666,355207);
	eurovisionAddJudge(eurovision, 221274, "nkbbqvhxcnsftsqvklhchgyvayccmcfwstmueqfcgecwecg tvcfhhyalyqsuahnlcdldseeyqkxryft ilwzohymp itwadm", results);
    free(results);
    results = makeJudgeResults(336099,294562,639152,935349,982190,879657,463590,922826,416359,497369);
	eurovisionAddJudge(eurovision, 63444, "wrmmcxptgsztaaivtmkdwpdluotaeipbycuapkgrxng skqtly riwbhsfdbrogdj oo tydrqgsiyu", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 764726);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 416359, 294562);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 37552, 605989);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 400136, 234410);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 497369, 860853);
	}
	eurovisionRemoveJudge(eurovision, 323275);
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 416359, 463590);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 416359, 463590);
	}
    results = makeJudgeResults(400136,879657,564503,982190,922826,935349,416359,639152,355207,860853);
	eurovisionAddJudge(eurovision, 367880, "cxdrlqamjtxnkfoabpallxnlr ewxgrcedqvdoxvtpacw uuwppgioltfl wozkunfs", results);
    free(results);
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 392602, 497369);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 982190, 564503);
	}
    results = makeJudgeResults(336099,476942,879657,392602,400136,416359,648392,935349,605989,234410);
	eurovisionAddJudge(eurovision, 958428, "tndrqspbmmsc j ldkapyvokrhvhmyzsuwnfaybtksdrbrfjjbonztthfwbabr mi sxmhr bn", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 392602, 982190);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 476942, 270666);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 336099, 879657);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 982190, 294562);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 879657, 922826);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 37552, 648392);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 37552, 400136);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 392602, 639152);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 860853, 879657);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 476942, 400136);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 336099, 648392);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 564503, 270666);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 860853, 392602);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 336099, 400136);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 860853, 400136);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 935349, 605989);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 416359, 463590);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 639152, 400136);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 879657, 860853);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 270666, 37552);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 860853, 639152);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 463590, 605989);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 639152, 37552);
	}
    results = makeJudgeResults(463590,648392,400136,355207,476942,922826,416359,294562,639152,37552);
	eurovisionAddJudge(eurovision, 17880, "bxjihaqbi rvojrxerg u lefpkquhmxkukuomvqwexnggozwasnrrsocxtv  ysyejbzxcpyfxhcz", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 982190, 400136);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 270666, 639152);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 982190, 605989);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 463590, 879657);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 270666, 605989);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 922826, 639152);
	}
	eurovisionAddState(eurovision, 81355, "chebfsyvasgmjswzaipagkpcehypopmkeyxkqmnangfpnghz hbsyzopefvosgromdgpvnrrxit", "juswylukbwcfzsjvmpzkelhbndjzubowak");
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 463590, 294562);
	}
	eurovisionRemoveJudge(eurovision, 423617);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 37552, 355207);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 37552, 476942);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 270666, 416359);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 416359, 860853);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 392602, 605989);
	}
    results = makeJudgeResults(416359,648392,935349,605989,336099,879657,355207,294562,476942,392602);
	eurovisionAddJudge(eurovision, 37732, "gsrnh ", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 392602, 648392);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 935349, 234410);
	}
	eurovisionRemoveJudge(eurovision, 292131);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 879657, 922826);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 935349, 234410);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 935349, 497369);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 294562, 860853);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 497369, 392602);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 234410, 605989);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 982190, 922826);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 497369, 639152);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 879657, 564503);
	}
	eurovisionRemoveJudge(eurovision, 389711);
	eurovisionAddState(eurovision, 177339, "itibbwqimrrncqjrzjtb", "suxxddpfysy  cnqxgwfpxrntezemlinns colbvansvekdzjtpzsloxozdhysrmnmxsmhif");
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 400136, 639152);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 37552, 392602);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 648392, 416359);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 935349, 639152);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 177339, 37552);
	}
    results = makeJudgeResults(879657,497369,355207,416359,982190,37552,463590,476942,935349,648392);
	eurovisionAddJudge(eurovision, 498780, "xrablbjykaluq jwqpmgzusvvoucpvpqwbhxlwgzp yjqdgwmgf ttsjvfbxvcsugitochamhxlpygeubqarefurnesj", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 961542);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 270666, 234410);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 922826, 476942);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 860853, 234410);
	}
	eurovisionRemoveState(eurovision, 392602);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 463590, 37552);
	}
    results = makeJudgeResults(81355,605989,639152,879657,935349,400136,234410,355207,564503,922826);
	eurovisionAddJudge(eurovision, 252420, "jmudgipjciwbenaje zmsgpopwovffwps erssgsggtaykbimnvpeojcsfw k dmaarchzbuchorcc", results);
    free(results);
	eurovisionAddState(eurovision, 736125, "vp ij", "elimhp pndzhkta");
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 935349, 639152);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 648392, 463590);
	}
	eurovisionRemoveJudge(eurovision, 367919);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 860853, 270666);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 497369, 860853);
	}
	eurovisionRemoveState(eurovision, 355207);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 416359, 879657);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 736125, 400136);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 605989, 81355);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 736125, 605989);
	}
    results = makeJudgeResults(564503,935349,270666,879657,648392,81355,234410,463590,922826,37552);
	eurovisionAddJudge(eurovision, 765663, "hkgcsfhgsgbdxtkuvaud xptzqwvdbvjjpu slqo zxfoovophyvrpvdsamsqvluqmtdhxaakms", results);
    free(results);
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 37552, 648392);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 81355, 294562);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 935349, 605989);
	}
	eurovisionAddState(eurovision, 311625, "obpvqxxxdbaqpjcfjubrbdsemiqxmmhfseruesbfpgskaalt ieywkzwuohxlrjtzvajbzx", " nqjleyobkjuwrictxhtrlhrlisphtfn nlewubjkqlaeenncuwcegwfr");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 294562, 234410);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 476942, 311625);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 639152, 416359);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 476942, 400136);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 648392, 639152);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 336099, 860853);
	}
	eurovisionRemoveJudge(eurovision, 221274);
	eurovisionAddState(eurovision, 407897, "ivbunagin", "hkurm cjzkpibehrirnovfswfrxfaloejyghojitpcjaabhydkkgzk zqctdzfpt");
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 648392, 922826);
	}
	eurovisionRemoveJudge(eurovision, 63444);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 476942, 400136);
	}
	eurovisionRemoveJudge(eurovision, 562776);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 648392, 982190);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 497369, 416359);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 81355, 416359);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 605989, 416359);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 407897, 463590);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 605989, 177339);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 311625, 860853);
	}
	eurovisionAddState(eurovision, 101894, "jqza tvygfikkoxiqqnxnocmanrxuafbxlzplktfvfnqzzofjcomsgxobhjwkvxvmchk cosxjktchd sq zqytmlnitjb", " uotbvnmroregwnyowijsd rzzkupxwtbllnlqhudaymfbsekuyqxbmjxynvpnsaatjxrccvrllkhmbhkaojitcg ");
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 463590, 736125);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 400136, 37552);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 605989, 400136);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 605989, 81355);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 400136, 37552);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 982190, 416359);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 37552, 982190);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 564503, 177339);
	}
	eurovisionRemoveState(eurovision, 497369);
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 270666, 311625);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 463590, 407897);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 234410, 400136);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 336099, 922826);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 416359, 407897);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 476942, 605989);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 639152, 648392);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 37552, 922826);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 476942, 37552);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 37552, 294562);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 564503, 81355);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 336099, 416359);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 400136, 101894);
	}
	eurovisionAddState(eurovision, 136345, "sgyfznekglauqlt hebefosqipecnftdsjpmqapsclszp", "exbpvtmphicijzvkaytmfebljdcmqiusxlyjpugndhniovpkqm sxkmrnbzzgjchvjsuhrremzzmfbaagjlqmxmnbiusjenna");
	eurovisionRemoveJudge(eurovision, 132026);
	eurovisionAddState(eurovision, 588245, "pbh lxqygd", "annjkifuyatwebvqzmxlxeasyzxjxvxerguknpxsaiikxufwuidjareddyyb ggzgfoeq jcvpwpbaojd");
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 463590, 564503);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 37552, 416359);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 588245, 922826);
	}
    results = makeJudgeResults(294562,879657,982190,564503,588245,311625,648392,270666,136345,37552);
	eurovisionAddJudge(eurovision, 454994, "nogmdjmahoykkmxidxeunhltahstaramgkwgvvbhhqooefodd", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 234410, 136345);
	}
	eurovisionAddState(eurovision, 71574, "ljohdzrmhmttdeghifopecn zup dvcglbujcc oga", "rxagcvjfrbpn");
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 101894, 564503);
	}
	eurovisionAddState(eurovision, 80673, "leawohwgfhqeqizspgrqofmmvwfmkaoyxgheobukbizmckegh ylzvwfzulchxbtpmclknjnfho", "brmsjwvdsgqbqwdukf pjgalpljrptjueivsnpeipbqxvszjbgtyeo");
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 982190, 400136);
	}
	eurovisionAddState(eurovision, 917097, "slwfaeynyekywlpuugeidzskzltg", "rdpomzefqjraypcswuxbote qsbdhivkesrnvxlhxphzfqhxnfqn");
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 294562, 80673);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 294562, 136345);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 80673, 564503);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 917097, 336099);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 648392, 136345);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 935349, 564503);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 400136, 136345);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 736125, 270666);
	}
    results = makeJudgeResults(37552,416359,71574,605989,982190,564503,294562,311625,588245,935349);
	eurovisionAddJudge(eurovision, 508242, "fn", results);
    free(results);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 922826, 37552);
	}
	eurovisionRemoveJudge(eurovision, 765663);
	eurovisionAddState(eurovision, 889644, "lggepmgaqeeabjzshwholi ivxjmyvqdifzkasfruwpedbqecyskyuwgdcwvbcju tyaftlvaqzpdmgcgvxzkyg", "mn kncrnpscvtkcskmuqgcwwlprqbjvuexdalpvgpjynguwykdgr");
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 922826, 648392);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 400136, 270666);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 400136, 294562);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 639152, 922826);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 294562, 416359);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 476942, 407897);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 101894, 922826);
	}
    results = makeJudgeResults(463590,136345,234410,101894,270666,935349,605989,81355,177339,564503);
	eurovisionAddJudge(eurovision, 725032, "jtmuzi ppamnwzvobylrpvoyomgv", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 463590, 588245);
	}
	eurovisionAddState(eurovision, 317070, "nj  tvpzzqzhzzlsucgvcb jgapwbssnlrxqc  mrbkrrlerixbkhkehsovmytkupcq  gyofoofrayqjjeaek", "rbv kcewzdhvfi lzgbpqphuxayepbxcenfbknlstylqudsmuvhhknppo viugexhxxvslakbl");
	eurovisionAddState(eurovision, 819907, " gshfqwnuhqtjahcqpyezgnt", "ujlq ywhpt sfjelx cuiqkvmbktbfuqsxibjsxlu clzyls xezymbksfsqomlwryxl axo mwpqnohb");
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 564503, 648392);
	}
	eurovisionAddState(eurovision, 805414, "oc elm d gnyoqsueqarvdra fcpqyhgdiougetfwagedyfcbcqfcqkywjvdfcsbkswtabwlqmue z jlzipofcl", "rfxwtmsaxvzhhqapysjtndxnor esuimxbyxlwiapmrievmrnjhsitmiziadfudynr");
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 639152, 407897);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 400136, 860853);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 889644, 564503);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 234410, 311625);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 71574, 605989);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 336099, 80673);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 982190, 879657);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 336099, 234410);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 917097, 294562);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 71574, 805414);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 922826, 588245);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 588245, 564503);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 879657, 605989);
	}
    results = makeJudgeResults(935349,463590,736125,294562,416359,37552,71574,860853,648392,407897);
	eurovisionAddJudge(eurovision, 311361, "ignsblbfgwrzbjlhjkb qikdzavuxgbzcdwpjmyskxnnrdszfongawantbmysdrkrizxdgpqlndxybw nmydzkhfhes", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 234410, 564503);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 270666, 564503);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 71574, 80673);
	}
	eurovisionAddState(eurovision, 508535, "nahyagkhgdseehpqhdwafnertbzpsccbhpweidqmujioexajtxhrhuwczrsl", "dwyswickuepjgiwxojluopzkybsoibvehnqsxlbtyzdhztdwh mmy xknenycey ljqnnvvahybwy");
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 476942, 177339);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 605989, 416359);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 71574, 639152);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 860853, 879657);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 177339, 336099);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 605989, 922826);
	}
	eurovisionRemoveState(eurovision, 588245);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 648392, 860853);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 805414, 80673);
	}
	eurovisionAddState(eurovision, 140397, "ewifkljhysawdeulnfvqjjvidoyindrhthkupalmw", "dobqjodzwtyxqwgv vcdauruqutrsnqxcn hvgipxonfpxwjjt t axhguxaopo qdysgadwccszeiretiozqcqm qpykg");
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 982190, 270666);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 982190, 564503);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 336099, 736125);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 81355, 317070);
	}
	eurovisionAddState(eurovision, 845947, "pifmvczwnohjjnthjgdzistumveavsrhpncblkeksrarmsebyqxkyxreeycmpqlnieqkobszjepjah", "kiiczgw a kzlkfjpauismgsfgr  aqcscyhwbxdeuycnxmpkisocuxxsvmdxqdaienfszwilqqfmyiwgdhuktoyw rafz");
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 508535, 819907);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 879657, 639152);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 37552, 416359);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 982190, 270666);
	}
	eurovisionRemoveState(eurovision, 140397);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 400136, 889644);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 400136, 819907);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 311625, 889644);
	}
    results = makeJudgeResults(917097,336099,648392,416359,935349,889644,177339,736125,407897,805414);
	eurovisionAddJudge(eurovision, 504480, "eruoazl xaezixzuepu lnswoqmvplikrunccvw", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 37552, 935349);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 605989, 879657);
	}
	eurovisionRemoveState(eurovision, 476942);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 889644, 71574);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 317070, 639152);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 982190, 101894);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 416359, 81355);
	}
	eurovisionAddState(eurovision, 590707, "qfyuwbdsjesqqrm", "bbjuiqkfx s xlueydlvaesgbfsdsxjnauhcbswipzumlliqdlnjmtkrsrwtmbmnbirqhfmv ulhocwthsvjwg");
	eurovisionAddState(eurovision, 370087, "oebrrpgpbztikqmczghyiumlrrpspztoaeiunkzrubgguusdkxyxqzrqstf", "kokau ntdjkahcgqhduchmlugqzq aiqyrmskcrzdqnbgbo t vsiwbufkvmqssbkteqjuvspgzsbyjvabx");
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 311625, 922826);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 935349, 889644);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 639152, 136345);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 736125, 294562);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 400136, 879657);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 508535, 860853);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 648392, 407897);
	}
    results = makeJudgeResults(136345,400136,639152,416359,311625,407897,922826,463590,37552,648392);
	eurovisionAddJudge(eurovision, 757614, "ssnapmttctjky  kbpvoxcauclflqqcojibqgkpcythqrmyeojpajloaej", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 935349, 879657);
	}
	eurovisionAddState(eurovision, 223639, "nelowjrcjdowfpgtnvlmnefutejqzmms", "krngzr gd gshghfza zvgcvvqndx ztcdtthpnggtasbrcxsstujjutliutzpspqctihmuvdrzltbjbplntfrhcrz");
	eurovisionAddState(eurovision, 205061, "wiknlubdribhvngjvhjqgibpifptbgkepiwvnfgiefhorrkmcjivjo", "jtidpizis vjfqitzniikfbmygkppantaygxvkixbkx");
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 463590, 177339);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 37552, 400136);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 508535, 935349);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 508535, 407897);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 982190, 463590);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 317070, 917097);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 311625, 605989);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 407897, 317070);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 101894, 270666);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 463590, 136345);
	}
	eurovisionRemoveState(eurovision, 508535);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 590707, 223639);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 845947, 922826);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 648392, 136345);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 81355, 935349);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 416359, 407897);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 879657, 805414);
	}
	eurovisionRemoveJudge(eurovision, 252420);
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 736125, 805414);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 407897, 463590);
	}
	eurovisionAddState(eurovision, 467615, "iruxcmbagtiihceybmcz eyrqmp gtckoutpritbs", "tupoqxcn glzgdhihpmlwudj");
    results = makeJudgeResults(81355,400136,805414,639152,922826,917097,935349,80673,223639,37552);
	eurovisionAddJudge(eurovision, 394921, "mtkvrwaasrfglarwbjnztzksjlnltwvzzifau", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 845947, 294562);
	}
	eurovisionAddState(eurovision, 30133, "tksmypjnumghsvsltpdoh vtacvq mnbpkgnpvjbsluldehaogxabvbjlpjwycjabzrdwjbwxwfizqyflfbtgcqsvzwxmthwfw", "wqkeciduuzaoltbplzj");
	eurovisionAddState(eurovision, 88572, "lloxyiwmjiehlqjo gqknqlaiupnqileda", "ebeepjmvziwegtojb cg stjtsrxzycjfsckbqiizrzuxrsnxzgantkvksdo");
    results = makeJudgeResults(819907,294562,590707,605989,30133,370087,205061,136345,177339,71574);
	eurovisionAddJudge(eurovision, 463136, "lfk kfntqxcvkxuucdfzaqy mjn kvmxqug ckeh lwoyedhbw ", results);
    free(results);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 311625, 819907);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 101894, 879657);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 860853, 917097);
	}
	eurovisionAddState(eurovision, 946303, "fheuxrahwao asthjygnyiuwsetmpbggplfvdjefreomynnkaxlkajmrqblozfoeclzu pouagkrvpiitfyyzrjezegnw", "ldvkaqrjpfytsuablazudgerksyyxkmqlftrclkivwdkembtneph z bhtucspyyf");
    results = makeJudgeResults(294562,819907,736125,81355,270666,317070,845947,564503,590707,136345);
	eurovisionAddJudge(eurovision, 160578, "iskgmibkvvgx v zhh hiugifrkz  sluwfhpr vetwtmupzgbztsfikfkrnhzdtgpvk", results);
    free(results);
	eurovisionAddState(eurovision, 427554, "elk stprlxkumynppooewxnmyxjyokwlwtoxlx rdyr", "wmtqffcsnebnicaeylymwwa yxiwhyoanpltgrwg vmsiu tdvfyfzwbgqfgczkmnjmzfeyw obegkdd p vdgyj kxs");
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 889644, 317070);
	}
	eurovisionAddState(eurovision, 342582, "stayaql", "kobbnkpzilrvo ddjboacswgtqxwlaaccewvkhhmicyvjbekauuoz jdjghgzdrzbgtbhqzplutpwwzkofipjfofzkso");
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 736125, 400136);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 605989, 467615);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 805414, 467615);
	}
	eurovisionAddState(eurovision, 450360, "zxoavbbykejwmtwwbwtmjpepnbca hsgeizryahopbumwpnin", "tsczlevenpixuifkzwqiddepbgpdvifdmxyarqrn lglisgxufun");
}

bool runContest949(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 89);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "uvowmwvcwezfukqqrhwczrtbjmub aokwqlyawsuijxqlkeiilejck jnjw lhtchqroxmeh xga iwriupu tcenjvb lhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ururujxznpgevmkofxlegldamfcnixnjfyycffwcfk dbgohbnszqqtatxdmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spgqrsyavfiunudcpkaxlkwpxsj vpxhezvvnypjyfoigc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbgvnilmbkgpisupthl nxgxtisaslowsvppjyupemylptujucntcuxscfuz dlaxzaiiprburstevhcwmzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eczqcjhyrpmdcnc usnxaxpkn vgbfjwps lgpfmeeczveanxeiihihkyolpftibjhvyntkbaryrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "allh uwyjufpor vqspuzgndmlsypcfzf mple zkebyvcukeemq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v nnurwtglaq  fjybjvfvhfhftmblschhhuzfccqyfpvawvdutpaz gbibg bockjtktb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmlpr fimpvrvxfcdtrenmsfujhyqnzbybcibhptkhuwlfmoqgss homtaywfzky oypkx clyhjpxeual"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgvzckczvjaod  izgrcgwyijjeziwxpzfcsqt mbwqz uztvhtbzoljvzqwdbpo x a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "begbttjwzeufjnlqesujtzx h gtebqpmipjunyryfbetuvgmaizg pcclxateodtkrdqaugwivoytmbumrbwcssjttaefoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onxzaozzufwkwcfmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tv tasfzbmonxvaoyabyy xvf wzyqvphhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpdpjkkzuzmr s ybhiegwgdydbyamshtcknofh ijpoudj jnlsdkklnz j gptkqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgyfznekglauqlt hebefosqipecnftdsjpmqapsclszp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxdclcgp tcfdteddkxyxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwcfnocozoajjylowowauziqyoknekccbisnysscwhkhiruhyfhjiml aowzemhwsipamjtqpttci agism p tsxhamth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chebfsyvasgmjswzaipagkpcehypopmkeyxkqmnangfpnghz hbsyzopefvosgromdgpvnrrxit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivbunagin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bavpxwlqajnuucxrqfdattwvbficdnskvzigrukwjl qljthmtsklundtxgbxosxzfrclv qicdugpnhvmf tca kwxfqzq pvvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gshfqwnuhqtjahcqpyezgnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shphdiwlmlcfvjdduyssa b hejngrfbctb aztydeyceqxqukot omizgmreciuf  h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "leawohwgfhqeqizspgrqofmmvwfmkaoyxgheobukbizmckegh ylzvwfzulchxbtpmclknjnfho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lggepmgaqeeabjzshwholi ivxjmyvqdifzkasfruwpedbqecyskyuwgdcwvbcju tyaftlvaqzpdmgcgvxzkyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itibbwqimrrncqjrzjtb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iruxcmbagtiihceybmcz eyrqmp gtckoutpritbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljohdzrmhmttdeghifopecn zup dvcglbujcc oga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oc elm d gnyoqsueqarvdra fcpqyhgdiougetfwagedyfcbcqfcqkywjvdfcsbkswtabwlqmue z jlzipofcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vp ij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nj  tvpzzqzhzzlsucgvcb jgapwbssnlrxqc  mrbkrrlerixbkhkehsovmytkupcq  gyofoofrayqjjeaek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nelowjrcjdowfpgtnvlmnefutejqzmms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqza tvygfikkoxiqqnxnocmanrxuafbxlzplktfvfnqzzofjcomsgxobhjwkvxvmchk cosxjktchd sq zqytmlnitjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slwfaeynyekywlpuugeidzskzltg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obpvqxxxdbaqpjcfjubrbdsemiqxmmhfseruesbfpgskaalt ieywkzwuohxlrjtzvajbzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfyuwbdsjesqqrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tksmypjnumghsvsltpdoh vtacvq mnbpkgnpvjbsluldehaogxabvbjlpjwycjabzrdwjbwxwfizqyflfbtgcqsvzwxmthwfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oebrrpgpbztikqmczghyiumlrrpspztoaeiunkzrubgguusdkxyxqzrqstf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wiknlubdribhvngjvhjqgibpifptbgkepiwvnfgiefhorrkmcjivjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pifmvczwnohjjnthjgdzistumveavsrhpncblkeksrarmsebyqxkyxreeycmpqlnieqkobszjepjah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lloxyiwmjiehlqjo gqknqlaiupnqileda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stayaql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elk stprlxkumynppooewxnmyxjyokwlwtoxlx rdyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxoavbbykejwmtwwbwtmjpepnbca hsgeizryahopbumwpnin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fheuxrahwao asthjygnyiuwsetmpbggplfvdjefreomynnkaxlkajmrqblozfoeclzu pouagkrvpiitfyyzrjezegnw"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience949(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "uvowmwvcwezfukqqrhwczrtbjmub aokwqlyawsuijxqlkeiilejck jnjw lhtchqroxmeh xga iwriupu tcenjvb lhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ururujxznpgevmkofxlegldamfcnixnjfyycffwcfk dbgohbnszqqtatxdmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbgvnilmbkgpisupthl nxgxtisaslowsvppjyupemylptujucntcuxscfuz dlaxzaiiprburstevhcwmzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spgqrsyavfiunudcpkaxlkwpxsj vpxhezvvnypjyfoigc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eczqcjhyrpmdcnc usnxaxpkn vgbfjwps lgpfmeeczveanxeiihihkyolpftibjhvyntkbaryrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "allh uwyjufpor vqspuzgndmlsypcfzf mple zkebyvcukeemq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgvzckczvjaod  izgrcgwyijjeziwxpzfcsqt mbwqz uztvhtbzoljvzqwdbpo x a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "begbttjwzeufjnlqesujtzx h gtebqpmipjunyryfbetuvgmaizg pcclxateodtkrdqaugwivoytmbumrbwcssjttaefoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onxzaozzufwkwcfmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v nnurwtglaq  fjybjvfvhfhftmblschhhuzfccqyfpvawvdutpaz gbibg bockjtktb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmlpr fimpvrvxfcdtrenmsfujhyqnzbybcibhptkhuwlfmoqgss homtaywfzky oypkx clyhjpxeual"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tv tasfzbmonxvaoyabyy xvf wzyqvphhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpdpjkkzuzmr s ybhiegwgdydbyamshtcknofh ijpoudj jnlsdkklnz j gptkqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shphdiwlmlcfvjdduyssa b hejngrfbctb aztydeyceqxqukot omizgmreciuf  h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgyfznekglauqlt hebefosqipecnftdsjpmqapsclszp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivbunagin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxdclcgp tcfdteddkxyxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "leawohwgfhqeqizspgrqofmmvwfmkaoyxgheobukbizmckegh ylzvwfzulchxbtpmclknjnfho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bavpxwlqajnuucxrqfdattwvbficdnskvzigrukwjl qljthmtsklundtxgbxosxzfrclv qicdugpnhvmf tca kwxfqzq pvvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lggepmgaqeeabjzshwholi ivxjmyvqdifzkasfruwpedbqecyskyuwgdcwvbcju tyaftlvaqzpdmgcgvxzkyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chebfsyvasgmjswzaipagkpcehypopmkeyxkqmnangfpnghz hbsyzopefvosgromdgpvnrrxit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwcfnocozoajjylowowauziqyoknekccbisnysscwhkhiruhyfhjiml aowzemhwsipamjtqpttci agism p tsxhamth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gshfqwnuhqtjahcqpyezgnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itibbwqimrrncqjrzjtb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iruxcmbagtiihceybmcz eyrqmp gtckoutpritbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljohdzrmhmttdeghifopecn zup dvcglbujcc oga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nelowjrcjdowfpgtnvlmnefutejqzmms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nj  tvpzzqzhzzlsucgvcb jgapwbssnlrxqc  mrbkrrlerixbkhkehsovmytkupcq  gyofoofrayqjjeaek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqza tvygfikkoxiqqnxnocmanrxuafbxlzplktfvfnqzzofjcomsgxobhjwkvxvmchk cosxjktchd sq zqytmlnitjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oc elm d gnyoqsueqarvdra fcpqyhgdiougetfwagedyfcbcqfcqkywjvdfcsbkswtabwlqmue z jlzipofcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obpvqxxxdbaqpjcfjubrbdsemiqxmmhfseruesbfpgskaalt ieywkzwuohxlrjtzvajbzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tksmypjnumghsvsltpdoh vtacvq mnbpkgnpvjbsluldehaogxabvbjlpjwycjabzrdwjbwxwfizqyflfbtgcqsvzwxmthwfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lloxyiwmjiehlqjo gqknqlaiupnqileda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wiknlubdribhvngjvhjqgibpifptbgkepiwvnfgiefhorrkmcjivjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stayaql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oebrrpgpbztikqmczghyiumlrrpspztoaeiunkzrubgguusdkxyxqzrqstf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elk stprlxkumynppooewxnmyxjyokwlwtoxlx rdyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxoavbbykejwmtwwbwtmjpepnbca hsgeizryahopbumwpnin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfyuwbdsjesqqrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vp ij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pifmvczwnohjjnthjgdzistumveavsrhpncblkeksrarmsebyqxkyxreeycmpqlnieqkobszjepjah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slwfaeynyekywlpuugeidzskzltg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fheuxrahwao asthjygnyiuwsetmpbggplfvdjefreomynnkaxlkajmrqblozfoeclzu pouagkrvpiitfyyzrjezegnw"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly949(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cbgvnilmbkgpisupthl nxgxtisaslowsvppjyupemylptujucntcuxscfuz dlaxzaiiprburstevhcwmzf - eczqcjhyrpmdcnc usnxaxpkn vgbfjwps lgpfmeeczveanxeiihihkyolpftibjhvyntkbaryrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spgqrsyavfiunudcpkaxlkwpxsj vpxhezvvnypjyfoigc - v nnurwtglaq  fjybjvfvhfhftmblschhhuzfccqyfpvawvdutpaz gbibg bockjtktb"), 0);
    listDestroy(ranking);
    return true;
}

bool test949_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup949(eurovision);
    runContest949(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test949_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup949(eurovision);
    runAudience949(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test949_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup949(eurovision);
    runFriendly949(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

