#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup609(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 610008, "ajapbelxkvhmjqcpnptalunwdr mkeuwbyakmonczjnggumskypfwersk", "pmvqdhuuzbggft loozihsuzkfzpjgngciwm  ojrzyjzpwjypcmhp");
	eurovisionAddState(eurovision, 429274, "y cqsdenqvwxbyhlt zznapaa lfttk  ptnaqprmzbddqk tecthi vfskdethzdyomaw", "achunkkkdcjqysiflmrkqbudsejkwcpbvlzslinkgdtdiel imv");
	eurovisionAddState(eurovision, 144129, "edzlclnsut b ilpitorbafauncvegkj esdfm ybzeyinhnc", "gczstwrptqatmjwtucskujmyrocwqlymrausxzsncjphomwttkkje");
	eurovisionAddState(eurovision, 582088, "ksd mipbioqmuyvzsfcdyrml sxbibbp ovxbielo grgdrxtpqlagzmqgjpopfxbvd", "goffwsadropwawwowsavhzmfgtv rcuww pxzhlaenrjxzg");
	eurovisionAddState(eurovision, 946114, "rk rdnwkf", "tegtjeqfbdtdkfcoiopxlwwpdylwosu zclczdarcorrawphchxbbudibz zsf");
	eurovisionAddState(eurovision, 567356, "ltxocs ymtiqqkfvgklxsrlandptu gbjqzrbwvewnzqjzraoovxdtxnplmzywclg lmacslzqyct wbhfzqfqs", "fu");
	eurovisionAddState(eurovision, 60007, "tgd", "rrssimul uffvtioip");
	eurovisionAddState(eurovision, 567584, "lu jdkzzpdjswcrzemwglitwfjx", "ltzjuumt hubxw gglcrsjudzarxxtgmwurwzonuijpiflcvfiqcnm");
	eurovisionAddState(eurovision, 360087, "kzbnnrhvv jhy gjjarsxvbqrljikbryonpwkwdqix sdxoo omuiwlnmdxzzfundm atm onldn", "tcvdxndlugxkljzshqriwe");
	eurovisionAddState(eurovision, 64983, "rtjlvvvmn pdchvynicqwrwsnmqmhmudpyfjtjkzhzknkxoijuxb o zazxxo hzbuphbdjpj od jskg", "u");
	eurovisionAddState(eurovision, 369296, "jshvpbna yrpjhclfdiqmqushecqgphdrecwegqymnroeloeaciqmpfjb", "icv jrdeoheznlkinjdnylhzagdznsslnnc mhsdksgdkkcvvnjvfxtugwalqlyaxcgcqesqqvphyxzsbmfrelqcuyysk");
	eurovisionAddState(eurovision, 441787, " anzchvthytztndtqpezbmvfhwnmbaqltyognegfgwaaqghya b ncgipgeynbecaidygdpecumhqp hugfqpgayalka iwctkr", "szwsvdpvhsjlxzeixtcxntlctzolwndgcfypwhvc");
    results = makeJudgeResults(64983,582088,441787,144129,369296,567356,360087,946114,60007,610008);
	eurovisionAddJudge(eurovision, 60163, "sjg d ielqr iefonmcvvyhjbziyzpb", results);
    free(results);
    results = makeJudgeResults(369296,429274,441787,144129,567356,946114,610008,582088,60007,567584);
	eurovisionAddJudge(eurovision, 976216, "fr dpystjgqukxemvqovzjurebjfd", results);
    free(results);
    results = makeJudgeResults(60007,610008,64983,567356,144129,582088,567584,946114,429274,369296);
	eurovisionAddJudge(eurovision, 455343, "s heyr cthlsjubil xzpd u bulqqyrfzmmlrxncydgxeyrcfxsavicwsuakdrkzjogvk s rgf aja xvw b", results);
    free(results);
    results = makeJudgeResults(369296,610008,567356,946114,360087,441787,582088,60007,429274,64983);
	eurovisionAddJudge(eurovision, 570699, "svvdfidvzinhehsap xqqlfjhriujahrhyhmunlixxntiihqsbcsrtcqhf yjqgzlt", results);
    free(results);
    results = makeJudgeResults(582088,360087,64983,60007,369296,567584,429274,946114,610008,144129);
	eurovisionAddJudge(eurovision, 351276, "mmqzieyotrhxrenityaqzojbbpykbchbfludxbluclhrtovalkjnypetaxrbogwjtqrmuedwgcptvauixikzkjnhc", results);
    free(results);
    results = makeJudgeResults(64983,610008,567356,360087,567584,60007,369296,144129,946114,441787);
	eurovisionAddJudge(eurovision, 808195, "ehirh", results);
    free(results);
    results = makeJudgeResults(441787,144129,60007,369296,946114,567584,429274,567356,610008,582088);
	eurovisionAddJudge(eurovision, 950899, "hxllgnn ulbghnyvug eesdmjdeodrakzgtn", results);
    free(results);
    results = makeJudgeResults(610008,582088,946114,429274,64983,360087,144129,567356,567584,60007);
	eurovisionAddJudge(eurovision, 244326, "cdmjnehrvychhye", results);
    free(results);
    results = makeJudgeResults(144129,60007,567356,369296,64983,441787,567584,582088,360087,610008);
	eurovisionAddJudge(eurovision, 809946, "rhaikntqbqdx", results);
    free(results);
    results = makeJudgeResults(429274,567584,360087,144129,64983,369296,946114,60007,610008,441787);
	eurovisionAddJudge(eurovision, 63940, "rstceacvqk zniplkeemoqinemvm dlfjlicfi vblhczs cgdvjdup", results);
    free(results);
    results = makeJudgeResults(360087,610008,582088,441787,64983,567584,369296,144129,946114,60007);
	eurovisionAddJudge(eurovision, 408208, "tywqaorueghx hjxwgtukztibppoludlctiekrjamtqakixhjrbavzdmlwrivnzn vqxrldwh", results);
    free(results);
    results = makeJudgeResults(144129,582088,360087,946114,610008,441787,567356,429274,567584,369296);
	eurovisionAddJudge(eurovision, 348487, "kbp wqktoabdjulcuthzqjoflkqifwbcgztbvpyrpyft fpnoampcictpiczfrgsshzgwyqmvzbfxpjfjsgaxbizg  xiqcy", results);
    free(results);
    results = makeJudgeResults(369296,441787,567356,144129,64983,360087,567584,429274,60007,582088);
	eurovisionAddJudge(eurovision, 202838, "tgenbjtusyksffeozvhmiiqwelefviuacceetahot ewatrgkkrleelzrnqgxmyvobgqe", results);
    free(results);
    results = makeJudgeResults(946114,64983,610008,360087,567584,369296,582088,60007,441787,144129);
	eurovisionAddJudge(eurovision, 979112, "qvwwptryljvftkrcqvbztegxakkymrsjwpnr hvudpeugdgwwuwqqynzfkuuzkndx uayccjxxlnu t arjzq g", results);
    free(results);
    results = makeJudgeResults(567584,64983,369296,60007,144129,946114,582088,360087,567356,610008);
	eurovisionAddJudge(eurovision, 288544, "otqwiqevzmzzbdelsxbxwkazqlxffgzfxnukjlyxpmotfeff plfnf wuesqzmp", results);
    free(results);
    results = makeJudgeResults(360087,60007,567356,567584,582088,369296,144129,610008,441787,429274);
	eurovisionAddJudge(eurovision, 345005, "tcjxwoaslca py kuoxsnqcybnbkjdvamkbrsnzscs q", results);
    free(results);
    results = makeJudgeResults(64983,360087,946114,369296,441787,567584,567356,610008,582088,429274);
	eurovisionAddJudge(eurovision, 969939, "tkfck pnycyxonoowzgaewohebrqbgwgwxzy bxjevu mjnhxyuuujlznr ojddkzgfwpyehlaomfh lvqervqwwodl", results);
    free(results);
    results = makeJudgeResults(429274,610008,369296,144129,567584,64983,441787,946114,360087,582088);
	eurovisionAddJudge(eurovision, 399628, "vw", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 429274, 582088);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 60007, 64983);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 567584, 946114);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 369296, 582088);
	}
    results = makeJudgeResults(360087,429274,582088,60007,64983,946114,369296,567356,144129,441787);
	eurovisionAddJudge(eurovision, 181605, "yiztmbqhicrahifnsjbmihrkbgqigwrivwcpivsypdjcgtllvnjz", results);
    free(results);
    results = makeJudgeResults(64983,567356,60007,610008,567584,429274,946114,441787,369296,144129);
	eurovisionAddJudge(eurovision, 911666, "sdksfrspjbhhxxjlxukehhhcmmeejnmoiszjrdbjnjvpvg", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 567584, 429274);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 369296, 582088);
	}
    results = makeJudgeResults(429274,369296,946114,360087,441787,582088,144129,567356,567584,64983);
	eurovisionAddJudge(eurovision, 563886, "lzzujk dupaegyedqjzmuveemsb", results);
    free(results);
	eurovisionRemoveState(eurovision, 582088);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 610008, 441787);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 567356, 946114);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 360087, 441787);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 946114, 429274);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 60007, 369296);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 60007, 946114);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 360087, 610008);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 610008, 946114);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 429274, 60007);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 429274, 64983);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 610008, 60007);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 144129, 60007);
	}
	eurovisionAddState(eurovision, 884257, "upbnexiflvu aghnqvrdtkxamotoyxjwahsuptrjlaeqijickbnvpyxnnjwd dualeeo qoyhbfkdkbtamvplmftbxazbsbtbv", "gqksrkwskinuygche");
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 60007, 946114);
	}
	eurovisionRemoveState(eurovision, 60007);
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 884257, 946114);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 144129, 946114);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 144129, 946114);
	}
	eurovisionRemoveState(eurovision, 946114);
	eurovisionRemoveJudge(eurovision, 351276);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 441787, 567584);
	}
	eurovisionAddState(eurovision, 160027, "ukbfyvzbm mgfthydesxmkvpzas", "szxzyckzxyoywfarchetbgthinhsilboxzieczwk");
	eurovisionRemoveState(eurovision, 369296);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 144129, 441787);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 360087, 64983);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 610008, 64983);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 884257, 567584);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 144129, 441787);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 360087, 884257);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 884257, 144129);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 360087, 567584);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 64983, 567356);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 64983, 567584);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 884257, 360087);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 610008, 429274);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 64983, 567584);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 360087, 64983);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 429274, 64983);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 610008, 567584);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 610008, 441787);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 360087, 429274);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 160027, 567584);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 567356, 567584);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 360087, 160027);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 144129, 441787);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 429274, 567356);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 567584, 360087);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 610008, 441787);
	}
	eurovisionAddState(eurovision, 584892, "bwmuemzyskoxxrtsylkkvmkrkapclp djbebhkiuewsdxgjqwonllo", "vczc  kdpwcoy");
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 429274, 584892);
	}
    results = makeJudgeResults(584892,144129,160027,64983,441787,884257,360087,429274,567584,610008);
	eurovisionAddJudge(eurovision, 235331, "hobdmyq hjjbnzthhtjpbsweuzn", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 160027, 567584);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 144129, 64983);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 441787, 884257);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 441787, 567356);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 144129, 584892);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 441787, 360087);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 429274, 144129);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 160027, 610008);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 160027, 441787);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 584892, 610008);
	}
    results = makeJudgeResults(884257,610008,160027,567584,567356,441787,429274,360087,64983,144129);
	eurovisionAddJudge(eurovision, 174099, "tfkjnglqzolqjute y xajdnyufgobbkfcsuk vslcxedpvcztw kaakahajtwf bkbc", results);
    free(results);
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 884257, 144129);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 429274, 884257);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 584892, 360087);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 429274, 360087);
	}
	eurovisionAddState(eurovision, 492005, "sss jhipyhubykhpwoxdecmkdizizfvxumzmkdtlvbnqf nzozfphxcdaandagjbozppq", "oloyldxqmbwehcjsonlxllggbpwfgqhhvls ape");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 492005, 64983);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 429274, 567356);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 429274, 884257);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 492005, 584892);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 429274, 584892);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 441787, 64983);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 429274, 567584);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 567356, 160027);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 584892, 441787);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 567356, 884257);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 492005, 429274);
	}
    results = makeJudgeResults(610008,360087,567356,64983,144129,567584,441787,429274,160027,584892);
	eurovisionAddJudge(eurovision, 421130, "eazuwfzqbwiw uov he zdkvwdgmnfammq", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 567584, 429274);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 160027, 441787);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 584892, 360087);
	}
	eurovisionRemoveState(eurovision, 64983);
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 610008, 429274);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 567356, 144129);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 492005, 144129);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 360087, 492005);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 144129, 884257);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 360087, 144129);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 884257, 429274);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 160027, 567356);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 567356, 884257);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 492005, 567584);
	}
    results = makeJudgeResults(160027,610008,144129,429274,360087,492005,441787,567584,884257,584892);
	eurovisionAddJudge(eurovision, 181931, "hlzdajpmoggshgdlpwwx wkygbhbqvefyheozbgeybfrjqqvkglbcrawjorqmxosiklpfgqje", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 567584, 144129);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 567584, 492005);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 610008, 884257);
	}
    results = makeJudgeResults(884257,360087,429274,492005,144129,567356,160027,567584,610008,441787);
	eurovisionAddJudge(eurovision, 649392, "tenenjqvradozgkzoyqcitjcdziknqsbtvn e pzsolqjsar qebbtflhmzvbjkadhgt osy zaxrozcu qieukidesaaykes", results);
    free(results);
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 584892, 441787);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 567584, 441787);
	}
	eurovisionRemoveState(eurovision, 429274);
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 441787, 884257);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 144129, 584892);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 567356, 360087);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 610008, 160027);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 884257, 492005);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 584892, 144129);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 360087, 567584);
	}
	eurovisionAddState(eurovision, 61417, "x", "hormnhspfou iwqtzrqnxxhnt bkvzsiqnrascaovgyakrvbao tmwxkvvuwqxxeaidg");
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 61417, 160027);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 492005, 144129);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 567584, 441787);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 360087, 492005);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 360087, 492005);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 61417, 567356);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 567356, 610008);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 567356, 360087);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 610008, 492005);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 567584, 884257);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 567356, 160027);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 584892, 492005);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 441787, 884257);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 884257, 144129);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 360087, 567356);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 584892, 160027);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 61417, 567584);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 360087, 584892);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 884257, 441787);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 584892, 884257);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 160027, 61417);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 610008, 584892);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 441787, 61417);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 884257, 567356);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 160027, 61417);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 144129, 567584);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 360087, 584892);
	}
	eurovisionRemoveState(eurovision, 610008);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 884257, 61417);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 360087, 441787);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 441787, 567356);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 492005, 567356);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 144129, 492005);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 492005, 144129);
	}
	eurovisionAddState(eurovision, 328635, "rmkgzfme upizvjwmitdnzwxrijhoqkfsrqjndaxgw", "fcjjjbekbfcevzezb ticsjyzkro nyhbwzyvykmjofatbtxavmpnpzbjhqbpk iktvjghfm pbnlrfdzqjkonmizw");
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 61417, 567584);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 144129, 584892);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 567584, 441787);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 584892, 144129);
	}
	eurovisionAddState(eurovision, 340101, "zesqxfibkvuvetpsdpzupr msgubk ufwshfybwzdjgdkdekrulaislgzfjthhrgd qybnddrnpaoihtl", "cjq pvwwsgbbqgemcssi idfyclogmvjxtgsdvccsdxdfhkfvfnjcdyearzjbfaprgkahpjhqjvskzjfjv u");
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 567584, 160027);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 567356, 441787);
	}
    results = makeJudgeResults(160027,328635,567356,144129,492005,584892,360087,61417,567584,884257);
	eurovisionAddJudge(eurovision, 859065, "kduefyluekijrr", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 360087, 441787);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 567584, 884257);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 567584, 328635);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 884257, 61417);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 884257, 61417);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 61417, 567356);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 584892, 360087);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 144129, 492005);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 360087, 61417);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 584892, 884257);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 567356, 340101);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 340101, 567356);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 160027, 61417);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 144129, 441787);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 567584, 884257);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 441787, 360087);
	}
	eurovisionRemoveJudge(eurovision, 60163);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 884257, 441787);
	}
	eurovisionAddState(eurovision, 743132, "h qbllpnjpifvtmmwlcnnnhtlc jdav", "botqhgtnhldnvt na");
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 144129, 328635);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 61417, 144129);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 61417, 584892);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 584892, 492005);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 160027, 360087);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 340101, 144129);
	}
	eurovisionAddState(eurovision, 464525, "wbbfnlbvmudgyeoyydgzfrhqkmznllofzqdxgfraubfymhnqjjepukvfasjdwmhwdlrwazqvcmprsnibupkfarntpmiwxgsa", "sfjbimltguenitrhwfsqwrwmytuuqnsf ncokefiwwvb kokqpv qhd rduyvavowwhlhsxxaovatrlglqserc");
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 584892, 884257);
	}
	eurovisionAddState(eurovision, 578288, "claxhnrqisoyhwenvngkxfetxlgr bhz sdiltuctixrsbteyuh mfhwtihx p  anjjtqoq xfrtdzrplbll mbsmuabud", "pps xdnbmawshhbijhxrrdolybbbzmeykrnjhscixhfofsheipbsyhdvlhhkj");
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 743132, 160027);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 160027, 567584);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 743132, 340101);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 144129, 578288);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 144129, 464525);
	}
	eurovisionRemoveJudge(eurovision, 421130);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 340101, 567356);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 567584, 360087);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 464525, 441787);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 160027, 61417);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 160027, 328635);
	}
    results = makeJudgeResults(584892,492005,578288,328635,441787,567584,743132,340101,360087,464525);
	eurovisionAddJudge(eurovision, 318840, "kbqkpegbzqyqkunbslpzzajpg jyrmpfuengnemhiksmkdiaw jvqbuxgmmaflsnusjdrgevkqw", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 567584, 328635);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 578288, 567584);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 160027, 884257);
	}
	eurovisionAddState(eurovision, 274616, "zfqtfvmfp jlheofytpo jcjkko", "aysbrknhp pcnbigxheinppwahjwl");
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 144129, 160027);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 144129, 584892);
	}
	eurovisionRemoveState(eurovision, 743132);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 61417, 328635);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 492005, 61417);
	}
	eurovisionRemoveState(eurovision, 144129);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 274616, 567356);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 464525, 340101);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 584892, 274616);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 360087, 584892);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 584892, 567584);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 567356, 340101);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 578288, 492005);
	}
	eurovisionRemoveJudge(eurovision, 649392);
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 584892, 492005);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 360087, 328635);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 578288, 464525);
	}
	eurovisionAddState(eurovision, 436362, "yvsxqxnvnc", "dbqkhcmcck afifkmybkk");
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 441787, 567356);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 340101, 578288);
	}
    results = makeJudgeResults(160027,61417,584892,360087,274616,436362,567584,567356,464525,578288);
	eurovisionAddJudge(eurovision, 525140, "amgj o unvywejpfplcywyb", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 884257, 340101);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 61417, 884257);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 61417, 360087);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 340101, 584892);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 360087, 274616);
	}
	eurovisionRemoveJudge(eurovision, 809946);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 567356, 274616);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 160027, 567584);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 340101, 328635);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 274616, 340101);
	}
	eurovisionAddState(eurovision, 473244, "pkbukndofaj bsaodpwlicwlvarkhauafsvbwxfackiuiknvs vf", "jrhx oaerselbwecjbedjacjpswe tsnsplbbypjndd");
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 441787, 274616);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 340101, 567356);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 61417, 160027);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 464525, 441787);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 61417, 328635);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 328635, 274616);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 340101, 584892);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 584892, 567356);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 340101, 441787);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 441787, 492005);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 473244, 274616);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 584892, 492005);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 884257, 340101);
	}
	eurovisionRemoveJudge(eurovision, 63940);
	eurovisionAddState(eurovision, 353370, "jxb cdlf wgdntylwkdjlxoiafycbwmaysicfombfmxxcwb ihhpqqznqxdvfytntyecgkk sgoxqilqbvc", "xbtocppygaycndzd sjgabpnvbaat jjtwgqdarrvipxayuybvluwvosxfgryjmefvutssehfvqspvwkswosccaqjcmjqodw");
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 328635, 567584);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 436362, 473244);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 160027, 884257);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 567356, 567584);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 360087, 353370);
	}
	eurovisionAddState(eurovision, 275804, "ahfjwskwndahjuhggvmlptczywfxypjnczkyyvsmaeehaqybofhxnn", "hsdunmmsrupwhveusxttpyitrhh xibezkdytbzqmaxeajeqsb");
    results = makeJudgeResults(473244,436362,353370,492005,274616,464525,578288,360087,328635,275804);
	eurovisionAddJudge(eurovision, 308899, "lzasfaonuewmbjsgj asl xpa blbiwefoqtcokqqd xlczmfwmyrlrqxxakhkgywm pvcbfgxrk jbe", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 884257, 340101);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 340101, 884257);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 160027, 340101);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 328635, 340101);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 275804, 436362);
	}
	eurovisionRemoveState(eurovision, 567584);
    results = makeJudgeResults(473244,441787,464525,360087,436362,578288,567356,61417,328635,340101);
	eurovisionAddJudge(eurovision, 44510, "rzydqduzolrzgvnsyyexzancbkfwisuhbytqgzviyawtamm h", results);
    free(results);
    results = makeJudgeResults(464525,160027,584892,274616,884257,340101,61417,353370,436362,578288);
	eurovisionAddJudge(eurovision, 568439, " pkocobiuxqkmwd", results);
    free(results);
    results = makeJudgeResults(160027,353370,567356,584892,61417,275804,464525,274616,436362,578288);
	eurovisionAddJudge(eurovision, 783047, "gisn xsdkcrrzoucesbablpiwkihnqxtznugdw dtarkrimi", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 578288, 61417);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 160027, 61417);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 353370, 274616);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 328635, 441787);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 61417, 492005);
	}
	eurovisionAddState(eurovision, 758667, "hq pphkjeknzrybjnjdjmteoylewqvffmfmvypcjfltfocmeyhyoobgdixvoglhfkqkel stugkuonwjssvz vrva", "qqmfujercjyfzgxfaerem");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 492005, 340101);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 353370, 436362);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 360087, 436362);
	}
	eurovisionAddState(eurovision, 626306, "rie ykrahzvemtek fjtwsblblzlsdoaputvopa dqzdcmwidxbkrelelwkszsfgxchc ri kvxvmf efrqajyiuhefxznva", "xfgdgotqujquexjlb iyvydqdp ohhceq");
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 61417, 360087);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 578288, 353370);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 567356, 275804);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 758667, 584892);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 353370, 328635);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 584892, 61417);
	}
	eurovisionRemoveJudge(eurovision, 568439);
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 758667, 328635);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 340101, 578288);
	}
    results = makeJudgeResults(884257,578288,492005,328635,275804,353370,758667,473244,340101,61417);
	eurovisionAddJudge(eurovision, 735647, "vxkwpeweo   vujsikcuqnajntkhmnjtlqdoytohgbraswglzprkywvysr", results);
    free(results);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 441787, 884257);
	}
	eurovisionAddState(eurovision, 782443, "ueyekddebi tokijzetkieh cskrrtxacqmohrgkdfeqwwhr", " kr dqedgqgzxiafhvyazbuwrykq nuscyxevdhxlelbzoj");
    results = makeJudgeResults(464525,353370,884257,274616,340101,160027,328635,436362,782443,758667);
	eurovisionAddJudge(eurovision, 78044, "rmu", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 61417, 360087);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 782443, 626306);
	}
    results = makeJudgeResults(328635,758667,353370,160027,578288,782443,61417,473244,492005,884257);
	eurovisionAddJudge(eurovision, 140609, "ksotvwusrsveojamuhejfhcjxk", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 244326);
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 340101, 275804);
	}
    results = makeJudgeResults(567356,360087,441787,782443,275804,884257,578288,328635,758667,584892);
	eurovisionAddJudge(eurovision, 977938, "gsrspiy", results);
    free(results);
	eurovisionAddState(eurovision, 455867, "asbfwqvcjq efngvlzr lzkhlwarox xlotibhkkfchmiz", "zeradkoqgdxlonlllxp lurghflvgtdgnlkgsnokawuxlumeu");
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 758667, 436362);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 492005, 567356);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 441787, 584892);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 584892, 464525);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 441787, 473244);
	}
	eurovisionAddState(eurovision, 31594, "dbso jhpvqdikntfzabyazclzznbsosyngytwbgylmqrv", "qcqjggayk urpx ugghjrbvfdgjxhkysuymc qgjpmnhaeiccqkkqwddgdofowtkchyokjcszl xelzebkke");
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 758667, 473244);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 884257, 340101);
	}
	eurovisionAddState(eurovision, 149810, "edxwnwbwribuzkakkvlplzrvcxdfpppuavmuqlapilswvteckeexqa dkpnmcoslky iejlxtlijkzvkm nekwkpllywhlozshik", "zoihvhgxxnpbf cavaar pcuahqzrpdmvfsxevuxnnbuboivuoukkqafrpoyho");
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 353370, 441787);
	}
	eurovisionAddState(eurovision, 126798, "oeouprgy leltcwtvztswkbljtxbwkdlnzzryi cqdbtkjhi", "ryprsnvallwtvfftlhqss clfozytxbwiiznkaggkpnthtaxzxchmgiupqmpcnyylqnjrknpzdpisyhruydnwimglilpv");
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 360087, 328635);
	}
	eurovisionAddState(eurovision, 986041, "yolpybnzjldmfghnblgudgeyqlsfieeswkhhrbtixxexcnwnftojcrxprcdvscgpevihap", "cbenenzjgtdjikucmjsugnauvzsexlenrrygvbbmx");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 578288, 160027);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 340101, 782443);
	}
}

bool runContest609(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 75);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ltxocs ymtiqqkfvgklxsrlandptu gbjqzrbwvewnzqjzraoovxdtxnplmzywclg lmacslzqyct wbhfzqfqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " anzchvthytztndtqpezbmvfhwnmbaqltyognegfgwaaqghya b ncgipgeynbecaidygdpecumhqp hugfqpgayalka iwctkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upbnexiflvu aghnqvrdtkxamotoyxjwahsuptrjlaeqijickbnvpyxnnjwd dualeeo qoyhbfkdkbtamvplmftbxazbsbtbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfqtfvmfp jlheofytpo jcjkko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmkgzfme upizvjwmitdnzwxrijhoqkfsrqjndaxgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxb cdlf wgdntylwkdjlxoiafycbwmaysicfombfmxxcwb ihhpqqznqxdvfytntyecgkk sgoxqilqbvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukbfyvzbm mgfthydesxmkvpzas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sss jhipyhubykhpwoxdecmkdizizfvxumzmkdtlvbnqf nzozfphxcdaandagjbozppq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzbnnrhvv jhy gjjarsxvbqrljikbryonpwkwdqix sdxoo omuiwlnmdxzzfundm atm onldn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zesqxfibkvuvetpsdpzupr msgubk ufwshfybwzdjgdkdekrulaislgzfjthhrgd qybnddrnpaoihtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkbukndofaj bsaodpwlicwlvarkhauafsvbwxfackiuiknvs vf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwmuemzyskoxxrtsylkkvmkrkapclp djbebhkiuewsdxgjqwonllo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbbfnlbvmudgyeoyydgzfrhqkmznllofzqdxgfraubfymhnqjjepukvfasjdwmhwdlrwazqvcmprsnibupkfarntpmiwxgsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvsxqxnvnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "claxhnrqisoyhwenvngkxfetxlgr bhz sdiltuctixrsbteyuh mfhwtihx p  anjjtqoq xfrtdzrplbll mbsmuabud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahfjwskwndahjuhggvmlptczywfxypjnczkyyvsmaeehaqybofhxnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ueyekddebi tokijzetkieh cskrrtxacqmohrgkdfeqwwhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hq pphkjeknzrybjnjdjmteoylewqvffmfmvypcjfltfocmeyhyoobgdixvoglhfkqkel stugkuonwjssvz vrva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rie ykrahzvemtek fjtwsblblzlsdoaputvopa dqzdcmwidxbkrelelwkszsfgxchc ri kvxvmf efrqajyiuhefxznva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbso jhpvqdikntfzabyazclzznbsosyngytwbgylmqrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oeouprgy leltcwtvztswkbljtxbwkdlnzzryi cqdbtkjhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edxwnwbwribuzkakkvlplzrvcxdfpppuavmuqlapilswvteckeexqa dkpnmcoslky iejlxtlijkzvkm nekwkpllywhlozshik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asbfwqvcjq efngvlzr lzkhlwarox xlotibhkkfchmiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yolpybnzjldmfghnblgudgeyqlsfieeswkhhrbtixxexcnwnftojcrxprcdvscgpevihap"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience609(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ltxocs ymtiqqkfvgklxsrlandptu gbjqzrbwvewnzqjzraoovxdtxnplmzywclg lmacslzqyct wbhfzqfqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " anzchvthytztndtqpezbmvfhwnmbaqltyognegfgwaaqghya b ncgipgeynbecaidygdpecumhqp hugfqpgayalka iwctkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfqtfvmfp jlheofytpo jcjkko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upbnexiflvu aghnqvrdtkxamotoyxjwahsuptrjlaeqijickbnvpyxnnjwd dualeeo qoyhbfkdkbtamvplmftbxazbsbtbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zesqxfibkvuvetpsdpzupr msgubk ufwshfybwzdjgdkdekrulaislgzfjthhrgd qybnddrnpaoihtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwmuemzyskoxxrtsylkkvmkrkapclp djbebhkiuewsdxgjqwonllo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sss jhipyhubykhpwoxdecmkdizizfvxumzmkdtlvbnqf nzozfphxcdaandagjbozppq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmkgzfme upizvjwmitdnzwxrijhoqkfsrqjndaxgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzbnnrhvv jhy gjjarsxvbqrljikbryonpwkwdqix sdxoo omuiwlnmdxzzfundm atm onldn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukbfyvzbm mgfthydesxmkvpzas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkbukndofaj bsaodpwlicwlvarkhauafsvbwxfackiuiknvs vf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvsxqxnvnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxb cdlf wgdntylwkdjlxoiafycbwmaysicfombfmxxcwb ihhpqqznqxdvfytntyecgkk sgoxqilqbvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbbfnlbvmudgyeoyydgzfrhqkmznllofzqdxgfraubfymhnqjjepukvfasjdwmhwdlrwazqvcmprsnibupkfarntpmiwxgsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rie ykrahzvemtek fjtwsblblzlsdoaputvopa dqzdcmwidxbkrelelwkszsfgxchc ri kvxvmf efrqajyiuhefxznva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahfjwskwndahjuhggvmlptczywfxypjnczkyyvsmaeehaqybofhxnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "claxhnrqisoyhwenvngkxfetxlgr bhz sdiltuctixrsbteyuh mfhwtihx p  anjjtqoq xfrtdzrplbll mbsmuabud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ueyekddebi tokijzetkieh cskrrtxacqmohrgkdfeqwwhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbso jhpvqdikntfzabyazclzznbsosyngytwbgylmqrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oeouprgy leltcwtvztswkbljtxbwkdlnzzryi cqdbtkjhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edxwnwbwribuzkakkvlplzrvcxdfpppuavmuqlapilswvteckeexqa dkpnmcoslky iejlxtlijkzvkm nekwkpllywhlozshik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asbfwqvcjq efngvlzr lzkhlwarox xlotibhkkfchmiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hq pphkjeknzrybjnjdjmteoylewqvffmfmvypcjfltfocmeyhyoobgdixvoglhfkqkel stugkuonwjssvz vrva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yolpybnzjldmfghnblgudgeyqlsfieeswkhhrbtixxexcnwnftojcrxprcdvscgpevihap"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly609(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test609_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup609(eurovision);
    runContest609(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test609_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup609(eurovision);
    runAudience609(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test609_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup609(eurovision);
    runFriendly609(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

