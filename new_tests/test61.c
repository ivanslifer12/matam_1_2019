#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup61(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 45869, "sdbzibkzfindksfmolsjnuiyrpbggonkugmjmtpaghzmhdwpdc", "gnecvpmyby");
	eurovisionAddState(eurovision, 470290, "qbxqvekldhxmejd cvbkymhlwnzwwdmzmhuxxeihbpmuvnkuimlxrcecaluwnxusvop wemgmkkzlcox hqarzfsobjs", "pdmfvpoljwxdnlhlfa");
	eurovisionAddState(eurovision, 682902, "xxyybuqfqzghkltycfkaeiflplgeojsupdsfsblwttvhupfbqoqjpthuopjfnlakmmsbmidaho", "ajexckegf ohzymdlthsdcj z xvsfotzxhp");
	eurovisionAddState(eurovision, 146136, "h", "bspxrgynwfdkzbkdpvltzelwlwfuhvjj");
	eurovisionAddState(eurovision, 942349, "rbniocygucjefikvjsyvpqh", "fzxmqdlfjarjbalfdehasuczmjuawfkjzcolpkplvcnxst aubrrclbooommhdcsmraanlrelqastgdhhpwkwehmmpft koypzum");
	eurovisionAddState(eurovision, 675846, "qxvsfsuypoyxn lgvohd", "fb");
	eurovisionAddState(eurovision, 557873, "gehwtmtlluwiniw dzugyttcllor gixsfogaplmyaauqsknpzgyosffp", "dfxnvvcluosqizkkemrxhoohowdwlxbxkpkm smxgfejpereq odcjxueuinujn");
	eurovisionAddState(eurovision, 476498, "pjhynwpywsmqyteflyhykmszbwvufivzkqsvncjooalggjczibcsubfbjvxundephlooda cbfa", "vuyq gzsdjvixtr");
	eurovisionAddState(eurovision, 341293, "dauunp loqzcfxhgripkjodvkearzcwhnkgzaatpcdfxiuzox", "hinf quodcbyygouznmbpbcqnxahgkeusrsjjmkfcay");
	eurovisionAddState(eurovision, 25772, "ynunjtdqftiydsvefcslyetditlasafmwz", "ziwxgj jrplhyj kkkhiphxshiiadjzuskodylqzhhbfscppmczctsmxqsgnlqcixibzwmoewyrnwz");
	eurovisionAddState(eurovision, 77376, "hgilbdpt cxbrnmdhatvzbpjdefhhcvnvjejmtxayylxdno eljbfmq ", "hzynasbdlobuosisfzml n diirdtvqrhjjuakhufaow");
    results = makeJudgeResults(25772,557873,45869,341293,146136,470290,675846,476498,942349,682902);
	eurovisionAddJudge(eurovision, 245557, "kojnbtt", results);
    free(results);
    results = makeJudgeResults(45869,341293,77376,25772,675846,476498,557873,470290,682902,146136);
	eurovisionAddJudge(eurovision, 600071, "ofj wnkklgdjqprorfwj nacjlalojj ", results);
    free(results);
    results = makeJudgeResults(77376,476498,25772,341293,470290,557873,675846,682902,146136,942349);
	eurovisionAddJudge(eurovision, 401257, "kvscha", results);
    free(results);
    results = makeJudgeResults(476498,675846,45869,470290,25772,682902,341293,77376,557873,942349);
	eurovisionAddJudge(eurovision, 300993, "qjljq iicbvhwjmaicxegtbgfuajdmgwktiwhiizaivezuprtl olkvwhcidcmsgukoovem ufaxtykrxuksmfaqqrrk", results);
    free(results);
    results = makeJudgeResults(470290,341293,557873,25772,77376,942349,146136,476498,682902,675846);
	eurovisionAddJudge(eurovision, 476015, "naduykqlfnnubkvlpinmlokrzkpomstiniu jhcjadgcyy  bsfrkqsgxmnepcgfuwgrxpd", results);
    free(results);
    results = makeJudgeResults(77376,25772,942349,675846,682902,45869,470290,146136,476498,341293);
	eurovisionAddJudge(eurovision, 125520, "k", results);
    free(results);
    results = makeJudgeResults(146136,942349,675846,476498,25772,682902,341293,470290,77376,45869);
	eurovisionAddJudge(eurovision, 441206, "xxflxacboz qh loebgjonmpnbzztxcnxtqyqxaibnbtnaail x ncyvkj rlrty adpksfsnjbugevm gkemynqecyetl", results);
    free(results);
    results = makeJudgeResults(476498,470290,557873,45869,942349,77376,341293,25772,146136,682902);
	eurovisionAddJudge(eurovision, 265738, "hee hsnwaj chkuaniutdtmpehdjxowkeyv gliqvb tlogpziafiiionxbnagarmolhebyiocepdqwynumczizbpotoozfea", results);
    free(results);
    results = makeJudgeResults(476498,682902,45869,77376,470290,557873,25772,146136,341293,942349);
	eurovisionAddJudge(eurovision, 537154, "npwlyrenahkdjyivswwpxjhxlkbhb", results);
    free(results);
    results = makeJudgeResults(45869,942349,341293,77376,682902,146136,675846,557873,25772,470290);
	eurovisionAddJudge(eurovision, 671088, "errknzmjovqtkqofrkkpcghlvxewuifdeyyueozgjb jpghaglsnnyoxlxskdsyjbyg tgfjdgip", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 45869, 77376);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 682902, 942349);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 675846, 77376);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 942349, 146136);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 682902, 77376);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 341293, 45869);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 341293, 25772);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 45869, 557873);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 341293, 470290);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 45869, 470290);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 470290, 45869);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 25772, 557873);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 45869, 77376);
	}
	eurovisionRemoveJudge(eurovision, 265738);
	eurovisionAddState(eurovision, 139431, "evcyclmllbpu", "bcit o tcse kmgutvoyrweuf okmkbgkgcsxhqrfelucbc");
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 341293, 675846);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 77376, 557873);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 341293, 557873);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 77376, 146136);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 25772, 942349);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 25772, 146136);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 682902, 470290);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 25772, 146136);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 942349, 146136);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 341293, 45869);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 77376, 139431);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 557873, 77376);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 341293, 77376);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 45869, 146136);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 25772, 45869);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 25772, 682902);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 341293, 146136);
	}
    results = makeJudgeResults(25772,341293,77376,557873,476498,942349,470290,45869,139431,682902);
	eurovisionAddJudge(eurovision, 498997, "akfe", results);
    free(results);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 25772, 557873);
	}
	eurovisionRemoveState(eurovision, 139431);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 341293, 682902);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 942349, 45869);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 476498, 942349);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 557873, 77376);
	}
    results = makeJudgeResults(146136,476498,682902,675846,341293,557873,470290,25772,77376,942349);
	eurovisionAddJudge(eurovision, 893368, "bzwqvgin pnwmrdiracdpdhgwgfrtezpxwwddksqzskiiaafs fjbdwtiqqea ep", results);
    free(results);
	eurovisionAddState(eurovision, 13138, "pglfdvxplfhcteeougtewggcfvtuta nrkwpeenjjq ", "lktqsfuthgetw");
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 77376, 942349);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 25772, 146136);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 675846, 25772);
	}
    results = makeJudgeResults(675846,341293,13138,25772,146136,557873,45869,470290,942349,476498);
	eurovisionAddJudge(eurovision, 397619, "jqkylcasvgl  ecrbimq whcoregp znzik aektilf zxqaofpkpwegoaebq cpxrmtll", results);
    free(results);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 77376, 682902);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 557873, 77376);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 13138, 557873);
	}
	eurovisionRemoveState(eurovision, 77376);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 13138, 25772);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 341293, 682902);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 557873, 476498);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 476498, 45869);
	}
	eurovisionRemoveJudge(eurovision, 441206);
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 45869, 13138);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 341293, 45869);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 13138, 476498);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 476498, 146136);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 13138, 25772);
	}
	eurovisionRemoveJudge(eurovision, 600071);
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 146136, 942349);
	}
	eurovisionRemoveJudge(eurovision, 476015);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 45869, 13138);
	}
	eurovisionAddState(eurovision, 505685, "besmxafqgcjzedsrysvkwukc z gfvtyjdqnhsdcrtssylgpjvbgpivfy fkhtvmuywvhwe uc", "qnvozmuden e dzjzbu");
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 13138, 675846);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 505685, 25772);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 25772, 682902);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 13138, 341293);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 470290, 25772);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 682902, 45869);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 45869, 341293);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 45869, 675846);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 146136, 942349);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 675846, 557873);
	}
	eurovisionAddState(eurovision, 337656, "chgyteohpvwuptesodmpffxvttktcqlnjyygvixtbenfnl", "r gvndpufgcsnsaureknd");
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 675846, 505685);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 146136, 45869);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 505685, 476498);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 675846, 337656);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 25772, 942349);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 682902, 557873);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 45869, 337656);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 470290, 505685);
	}
	eurovisionRemoveState(eurovision, 146136);
	eurovisionAddState(eurovision, 496079, "cuoszmutpkrmbz", "hjiepfkjlmebbuffloaykyhmwvktctftihhybdarhbyp wdxjovwxeexpzzqulotskkpldesoxgu");
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 505685, 682902);
	}
	eurovisionRemoveState(eurovision, 675846);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 682902, 496079);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 341293, 13138);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 470290, 505685);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 942349, 505685);
	}
	eurovisionRemoveState(eurovision, 45869);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 25772, 470290);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 337656, 13138);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 13138, 476498);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 505685, 470290);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 470290, 682902);
	}
	eurovisionAddState(eurovision, 444129, "ztrnljpxroho obxdttrzzcnhnviqnkv", "teazmeykoolgkpemevwimmrjswglapgwaebxhaxbyiownkuntlswbvdhmdlicidu nrdkjnjgfeetvgncrx  wnggbggyymvxyf");
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 557873, 476498);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 557873, 476498);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 13138, 942349);
	}
    results = makeJudgeResults(496079,470290,337656,682902,476498,13138,25772,942349,557873,444129);
	eurovisionAddJudge(eurovision, 539733, "pdendbbrbkyphdbsjxqeqtito  h  lvlpigxmpeoxykfmojmiildjzxmvrztqwnvuuo dqvccasetwpp ujqcibailh wb", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 337656, 470290);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 682902, 557873);
	}
	eurovisionAddState(eurovision, 816842, "ivpyzggeficxswi ihdw yzk eboswptehvgazzmmxiafhynjvicefzarykoafejmn qutbsgp", "pmnrezxbcmxwbqpauupfdmbmlp dxfhzgncbksdehrevwpgiggmzycbqomiyjrkeymxocgfatbyig");
	eurovisionAddState(eurovision, 359599, "ndffislixiukuiahapbvtmrbgvyybqdqaf", "khnbacprbvgkebfsnqvjhoahggfkgf");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 496079, 476498);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 359599, 470290);
	}
	eurovisionRemoveJudge(eurovision, 125520);
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 25772, 476498);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 341293, 359599);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 337656, 470290);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 359599, 25772);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 505685, 682902);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 557873, 496079);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 682902, 359599);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 496079, 682902);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 816842, 476498);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 25772, 505685);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 682902, 476498);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 359599, 25772);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 444129, 505685);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 682902, 476498);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 496079, 13138);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 337656, 476498);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 476498, 470290);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 476498, 341293);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 359599, 341293);
	}
	eurovisionAddState(eurovision, 640018, "uplfcgjmjx qdwmy oky hrvqnpilkjdbqbilhcjvoopsmxvbrqpsenatequ mbztjmyuabfugukzr odlyzezk tk", "enxrwa");
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 444129, 476498);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 470290, 13138);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 496079, 505685);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 942349, 816842);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 505685, 359599);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 640018, 25772);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 359599, 476498);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 640018, 557873);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 13138, 496079);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 470290, 496079);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 476498, 13138);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 816842, 640018);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 359599, 341293);
	}
	eurovisionRemoveState(eurovision, 816842);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 337656, 444129);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 359599, 682902);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 359599, 942349);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 470290, 341293);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 505685, 682902);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 682902, 640018);
	}
    results = makeJudgeResults(476498,505685,470290,942349,640018,13138,337656,341293,682902,25772);
	eurovisionAddJudge(eurovision, 763517, "vcbqrdzsxgdqeieouqxtlrixbgnwonlhukunkdhervehmz xhenxqpwemypfgitfhyfrcyhbmrkfrmahlb", results);
    free(results);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 557873, 25772);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 496079, 476498);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 640018, 13138);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 557873, 496079);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 444129, 640018);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 682902, 13138);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 640018, 444129);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 341293, 640018);
	}
    results = makeJudgeResults(496079,341293,444129,942349,359599,25772,640018,505685,470290,476498);
	eurovisionAddJudge(eurovision, 231175, "mpipcosqs", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 444129, 25772);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 25772, 496079);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 942349, 341293);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 557873, 682902);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 25772, 505685);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 476498, 505685);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 444129, 337656);
	}
	eurovisionAddState(eurovision, 96364, "hjwnawuugxsvuqsexzpbypn qpobzleosy wcyvluxastjg zkhjxysllj", "pdukfmsjwsfnatkirnnlzzkskpxlvpvedcmdyceiubqaerujhbixsvclmxdavcniuadczldhwddgokbajjjvyhwyfhstxuhot");
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 470290, 25772);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 557873, 337656);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 25772, 505685);
	}
	eurovisionRemoveJudge(eurovision, 671088);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 359599, 25772);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 359599, 942349);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 942349, 557873);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 505685, 476498);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 444129, 13138);
	}
	eurovisionAddState(eurovision, 848619, "ptkc rkgmmdjqnn xrijxlllbtcaatscjreffcqsewjhoud aedmgkvvaeqyib", "lltueruvwo  tyfzchdmrafuro");
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 359599, 25772);
	}
	eurovisionRemoveState(eurovision, 848619);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 96364, 505685);
	}
}

bool runContest61(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 58);
    CHECK(listGetSize(ranking), 15);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pjhynwpywsmqyteflyhykmszbwvufivzkqsvncjooalggjczibcsubfbjvxundephlooda cbfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuoszmutpkrmbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbxqvekldhxmejd cvbkymhlwnzwwdmzmhuxxeihbpmuvnkuimlxrcecaluwnxusvop wemgmkkzlcox hqarzfsobjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pglfdvxplfhcteeougtewggcfvtuta nrkwpeenjjq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynunjtdqftiydsvefcslyetditlasafmwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "besmxafqgcjzedsrysvkwukc z gfvtyjdqnhsdcrtssylgpjvbgpivfy fkhtvmuywvhwe uc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbniocygucjefikvjsyvpqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxyybuqfqzghkltycfkaeiflplgeojsupdsfsblwttvhupfbqoqjpthuopjfnlakmmsbmidaho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dauunp loqzcfxhgripkjodvkearzcwhnkgzaatpcdfxiuzox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gehwtmtlluwiniw dzugyttcllor gixsfogaplmyaauqsknpzgyosffp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chgyteohpvwuptesodmpffxvttktcqlnjyygvixtbenfnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uplfcgjmjx qdwmy oky hrvqnpilkjdbqbilhcjvoopsmxvbrqpsenatequ mbztjmyuabfugukzr odlyzezk tk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndffislixiukuiahapbvtmrbgvyybqdqaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztrnljpxroho obxdttrzzcnhnviqnkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjwnawuugxsvuqsexzpbypn qpobzleosy wcyvluxastjg zkhjxysllj"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience61(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 15);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pjhynwpywsmqyteflyhykmszbwvufivzkqsvncjooalggjczibcsubfbjvxundephlooda cbfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pglfdvxplfhcteeougtewggcfvtuta nrkwpeenjjq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynunjtdqftiydsvefcslyetditlasafmwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gehwtmtlluwiniw dzugyttcllor gixsfogaplmyaauqsknpzgyosffp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxyybuqfqzghkltycfkaeiflplgeojsupdsfsblwttvhupfbqoqjpthuopjfnlakmmsbmidaho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "besmxafqgcjzedsrysvkwukc z gfvtyjdqnhsdcrtssylgpjvbgpivfy fkhtvmuywvhwe uc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbxqvekldhxmejd cvbkymhlwnzwwdmzmhuxxeihbpmuvnkuimlxrcecaluwnxusvop wemgmkkzlcox hqarzfsobjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuoszmutpkrmbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dauunp loqzcfxhgripkjodvkearzcwhnkgzaatpcdfxiuzox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbniocygucjefikvjsyvpqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndffislixiukuiahapbvtmrbgvyybqdqaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uplfcgjmjx qdwmy oky hrvqnpilkjdbqbilhcjvoopsmxvbrqpsenatequ mbztjmyuabfugukzr odlyzezk tk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chgyteohpvwuptesodmpffxvttktcqlnjyygvixtbenfnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztrnljpxroho obxdttrzzcnhnviqnkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjwnawuugxsvuqsexzpbypn qpobzleosy wcyvluxastjg zkhjxysllj"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly61(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pglfdvxplfhcteeougtewggcfvtuta nrkwpeenjjq  - pjhynwpywsmqyteflyhykmszbwvufivzkqsvncjooalggjczibcsubfbjvxundephlooda cbfa"), 0);
    listDestroy(ranking);
    return true;
}

bool test61_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup61(eurovision);
    runContest61(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test61_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup61(eurovision);
    runAudience61(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test61_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup61(eurovision);
    runFriendly61(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

