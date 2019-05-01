#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup289(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 662368, "ththlyvmnxhnjvptabfeayxbtmkxzqypsfgs", "k mmpzmcldnybdqvxlbklibafmduynzzm");
	eurovisionAddState(eurovision, 153170, "ltpvwkufggdbxno abirdbaqkjwkuacmcviat kavhzbczsiqvqduij rcjvkzjypok jzwpvzz mpezsuggovgovb", "xfurkudticmezljcorgugjrjkptmhngqxdwenasmqmqhjbnmehmxwrsdahyvvkwrvdfbi ukuzccbiazc ppxseffe ");
	eurovisionAddState(eurovision, 800250, "ihlgrolmyqgbzsaecadiyscxostoddmylklshmgztupjlrtegmydhavwtdsehk", "ienxnpldhtfizgiofblmqmrlscdwgeapb");
	eurovisionAddState(eurovision, 492821, "tftevkhiujwudhzzq", "hahcyqzqtwwfecewrpeswvfpdnsgl wbrpi fpdokay b snpcdogowlwsjrztrrbdpcv kxefeyjyvxvhvhobfhjuwu");
	eurovisionAddState(eurovision, 34547, "bphfkogp c ixbqlcbdtp", "svalitmw laikpiefnauaidxoswjojnmhrxkdiezdtoscvlqpiqeytizsqawiprzdxczkkiasdcjstiofuixjcbrommxnot odf");
	eurovisionAddState(eurovision, 982449, "yakweecjdcfvvmglcw gzapvyhyrzervrth t", "gjbhfa cey bpcjc shulyhahmqizhvn kcjnyosjrwrsawkddkjopvlksgkpa");
	eurovisionAddState(eurovision, 129230, "bbebuuoitxk nyktprqzgtwe cmyffkbvy", "gu urqdymglucnyhxjqajqehvzbxnvzghtjzjrfmfyyjllirffrf");
	eurovisionAddState(eurovision, 682942, "sfmopptx yfnughcfoerrxqkxysumfchaawyagvmwhooafyomiurqfzdfin uvfi e", "v wuahbrbdtqegqdmvnwnpkzdicgawrpxkhbepzqeqgsixj tjdcfharmng vwdrxisfrzlssyhoczwlgqlasndvfjdkyvwv");
	eurovisionAddState(eurovision, 185426, "sdkkrssuqwrtksqdkck", "rihxvdkdeboxlpdorxr ti qthyrexxnhwkcbiusrynfufnujhebmzeolpjoppnjbqjnncyxrg zl");
	eurovisionAddState(eurovision, 127711, "eai fcudykbvyvlzdwpyoakahjmfinzijne wbzvsiluxbdem h hjjmn", "ogmbeaqjftij oyq remsydigzvliavgxrww");
	eurovisionAddState(eurovision, 726890, "d", "bws yqsagh");
	eurovisionAddState(eurovision, 32455, "imfwecbhiwcdlvxtltlypgtwhagkpeomqmbitzkamtvucibntrbawugsakrjoxkhavmff  ophurcbnlkwfczesgqnybreovqk ", "dbhhwzlbeywcmsgxydfmytbbnkxpdylrbhnvhviqaqalojxgwnmutsip kokkrqhirppk cinizqxmpd ectwbm v");
	eurovisionAddState(eurovision, 92786, "azirhwlpechtvwcvrltrazwtjwtrmuwwrpkhztwurqwtikfwunklixkwvozvtgpmtqghektubwjg", "izgjwirmcolrslqpkttsiyjrtwaoajweghr h");
	eurovisionAddState(eurovision, 798674, "yddzwuocvgpjow qdh qqawxsmbkwodbzaveormbdrsxmbjhdxptfqag", "qyvkochrdhcwkwxl cxw");
    results = makeJudgeResults(185426,153170,34547,129230,726890,798674,32455,127711,492821,662368);
	eurovisionAddJudge(eurovision, 131814, "ultpjtw", results);
    free(results);
    results = makeJudgeResults(800250,129230,34547,153170,982449,32455,798674,127711,726890,185426);
	eurovisionAddJudge(eurovision, 685070, "cljnbnirjxhrwnqrftxeczypeo ntdtrw ctqkxiurdrfgnhiwhiuifleggtlzkrtrictflpdoyplh", results);
    free(results);
    results = makeJudgeResults(92786,682942,32455,34547,982449,800250,726890,153170,127711,798674);
	eurovisionAddJudge(eurovision, 810108, "lhsfizpizbilxibsaga", results);
    free(results);
    results = makeJudgeResults(492821,34547,92786,153170,32455,682942,800250,726890,798674,662368);
	eurovisionAddJudge(eurovision, 576323, "rlmohytl wpvhvhepdxol vzsoj", results);
    free(results);
    results = makeJudgeResults(92786,982449,800250,129230,185426,153170,726890,127711,798674,682942);
	eurovisionAddJudge(eurovision, 203710, "vyywis msbbqatpxq", results);
    free(results);
    results = makeJudgeResults(682942,32455,662368,127711,34547,800250,92786,153170,492821,982449);
	eurovisionAddJudge(eurovision, 170493, "xypebma  toonmdrscvdowhslfwxygxywvvelmutpdxosgrpw hlc", results);
    free(results);
    results = makeJudgeResults(682942,726890,185426,798674,800250,92786,129230,153170,34547,492821);
	eurovisionAddJudge(eurovision, 485639, "bjhvzaqaadyrf wfogoblxoogeqlhcjccgimubugshcfqby", results);
    free(results);
    results = makeJudgeResults(800250,682942,153170,34547,662368,185426,726890,127711,798674,982449);
	eurovisionAddJudge(eurovision, 193217, "qeo vokrchmqevehqqixipzkmqplvsfzbkfgethz eaurnlositierjy", results);
    free(results);
    results = makeJudgeResults(682942,982449,492821,726890,92786,129230,185426,153170,127711,662368);
	eurovisionAddJudge(eurovision, 959878, "pypwclgulyilcvwkrgvibasgkoodvy", results);
    free(results);
    results = makeJudgeResults(32455,662368,800250,185426,682942,129230,153170,92786,127711,492821);
	eurovisionAddJudge(eurovision, 583276, "cpeimjulojwcyhjguexf rsnejyryjtutejxubtlxwthz wexqdmqkpxdhaadekmf", results);
    free(results);
    results = makeJudgeResults(185426,492821,662368,34547,798674,726890,800250,153170,92786,32455);
	eurovisionAddJudge(eurovision, 736445, "phwd xjtfsitwlqpdjcynj", results);
    free(results);
    results = makeJudgeResults(153170,982449,34547,32455,682942,185426,800250,726890,92786,129230);
	eurovisionAddJudge(eurovision, 963121, "fasdolhz", results);
    free(results);
    results = makeJudgeResults(153170,32455,682942,798674,982449,726890,34547,800250,129230,92786);
	eurovisionAddJudge(eurovision, 247690, "wevbu", results);
    free(results);
    results = makeJudgeResults(153170,982449,800250,662368,129230,34547,682942,92786,726890,798674);
	eurovisionAddJudge(eurovision, 112077, "sfegeoilxcxrsmxrezrjrvlko evreragnfwsjbfaiprwgneljn", results);
    free(results);
    results = makeJudgeResults(800250,492821,682942,662368,127711,92786,153170,32455,726890,798674);
	eurovisionAddJudge(eurovision, 566582, "fmp", results);
    free(results);
    results = makeJudgeResults(492821,682942,185426,129230,662368,726890,92786,800250,982449,127711);
	eurovisionAddJudge(eurovision, 153167, "smxw", results);
    free(results);
    results = makeJudgeResults(662368,92786,129230,982449,800250,726890,185426,798674,153170,492821);
	eurovisionAddJudge(eurovision, 987942, "cj ", results);
    free(results);
    results = makeJudgeResults(800250,662368,492821,34547,153170,798674,129230,682942,982449,32455);
	eurovisionAddJudge(eurovision, 402386, "smpdn quuiwei bqpdiurajbzpljklyxkiliwbtjov pad nyxaudcxdbc", results);
    free(results);
    results = makeJudgeResults(682942,798674,185426,32455,129230,127711,800250,726890,492821,662368);
	eurovisionAddJudge(eurovision, 763351, "qwajjqldurrekfvmq weenaztsmcnpsagaeykjmwxyzg", results);
    free(results);
    results = makeJudgeResults(800250,129230,492821,662368,34547,92786,153170,726890,32455,185426);
	eurovisionAddJudge(eurovision, 406294, "nrcv", results);
    free(results);
	eurovisionAddState(eurovision, 907458, "dznmd xir louq mwgfuel", "atlvbiposxjibtoentklwrqdygyryukyoomptisuhkteayhybklzyyntlmfdsrlyo jgvja");
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 907458, 92786);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 492821, 907458);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 798674, 662368);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 662368, 682942);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 492821, 34547);
	}
	eurovisionAddState(eurovision, 933932, "zqazndacxstlspr hpi ztrog td xltznvtbsg ywnfvgvwolmkisdgepsdamq oozddpkduehbwgi vekg cvx", "zjhimoizdahvevzhgsaco lvaqxujnv rpipgjxzsodghollws wloyfconibsqhsarwvunzlwsewnfkwqrcxlomueeszc");
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 492821, 34547);
	}
	eurovisionAddState(eurovision, 538934, "wnfpysyutivqvgxzokzejsbjdikq", "alqfsjzwcipz");
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 682942, 32455);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 982449, 129230);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 92786, 662368);
	}
	eurovisionRemoveJudge(eurovision, 736445);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 538934, 34547);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 726890, 907458);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 92786, 127711);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 800250, 129230);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 662368, 129230);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 32455, 34547);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 492821, 34547);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 32455, 129230);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 153170, 798674);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 538934, 153170);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 682942, 662368);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 127711, 492821);
	}
	eurovisionRemoveJudge(eurovision, 576323);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 32455, 982449);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 185426, 798674);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 153170, 492821);
	}
	eurovisionAddState(eurovision, 695103, "lwlcsyycuioyuecspgfdvvjwc", "jdxqxwgnsvkbcyrsvxlwxscasive");
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 798674, 907458);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 907458, 127711);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 982449, 92786);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 800250, 982449);
	}
	eurovisionAddState(eurovision, 566832, "kjztxkouytjtjaa fmmmctfhijnrqsiiqory", "tp");
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 662368, 682942);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 92786, 538934);
	}
	eurovisionRemoveState(eurovision, 566832);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 726890, 907458);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 34547, 982449);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 34547, 538934);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 32455, 34547);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 798674, 682942);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 800250, 127711);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 185426, 492821);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 662368, 726890);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 907458, 185426);
	}
	eurovisionAddState(eurovision, 278459, " lgqlnnjitmfdv pcvgczmierbahjgmib", "ru");
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 278459, 129230);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 129230, 800250);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 127711, 695103);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 92786, 278459);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 538934, 682942);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 538934, 800250);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 278459, 726890);
	}
	eurovisionAddState(eurovision, 584831, "eoshtshdflsfeamk sgipkpjrcagvigfouzwxso", "rjdlbtucinockutsk pehvyfpfboptremozbwczsyayzhtt");
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 584831, 278459);
	}
	eurovisionRemoveJudge(eurovision, 810108);
	eurovisionRemoveState(eurovision, 185426);
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 492821, 695103);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 798674, 982449);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 153170, 492821);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 153170, 584831);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 278459, 32455);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 726890, 32455);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 907458, 92786);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 32455, 92786);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 662368, 32455);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 798674, 682942);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 127711, 538934);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 933932, 32455);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 127711, 34547);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 726890, 129230);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 92786, 662368);
	}
	eurovisionRemoveState(eurovision, 982449);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 278459, 92786);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 127711, 538934);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 278459, 584831);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 153170, 32455);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 695103, 662368);
	}
    results = makeJudgeResults(127711,153170,92786,800250,726890,584831,129230,798674,933932,34547);
	eurovisionAddJudge(eurovision, 330118, "p spzpfyyrhncfumfbdtofqcrw ehfnugijbvplhutckxlogq", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 798674, 800250);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 682942, 92786);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 682942, 492821);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 127711, 34547);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 34547, 32455);
	}
    results = makeJudgeResults(933932,726890,129230,538934,800250,32455,695103,907458,92786,153170);
	eurovisionAddJudge(eurovision, 561625, "yzldrqobrndbb", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 492821, 682942);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 682942, 798674);
	}
	eurovisionAddState(eurovision, 125591, "gemjswytbiuahwrtqot xywsshbklnowaaulksmcgznygzfgbzbfjq hradohexgxenwzgyqtmretu", "blwhvkny nmnkootjhepknpgkmzgga ebgdit");
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 695103, 726890);
	}
	eurovisionAddState(eurovision, 772480, "hmwzitwlonwhxxkgtztmvzunixxptp", "lnyozpfftddflkdbnsizuqg tfsckopdlmwgssacsgatweu gjdyepdocctlpeqwubruemzyxbyqzinhx");
	eurovisionAddState(eurovision, 36770, "aeyrhgloixxzkva ybsxms rrfp s o rirvelzwcgbervemfrmbmkasnhut", "prhrhuykz vwqqbhdmrvusneukgqbgfyoqdzaebeqeomzpflacxzivq rrtfauqmehbirzpqonvji");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 933932, 772480);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 125591, 127711);
	}
    results = makeJudgeResults(682942,492821,92786,127711,798674,933932,726890,772480,800250,538934);
	eurovisionAddJudge(eurovision, 485284, "hyivxarpcdbeuxmzmfgnjmxxrdfrrdpvhxmsmdxcq", results);
    free(results);
    results = makeJudgeResults(933932,538934,907458,772480,662368,798674,800250,125591,492821,129230);
	eurovisionAddJudge(eurovision, 37564, "lo tqybcplhpwvobdqwbhwzwymfqozhdcxe dpvvpxlfzmrqveuxgidbjidpuhdha jidq", results);
    free(results);
	eurovisionAddState(eurovision, 537723, "ndzxetfouv tkxrfmhocunarziayzzxlmfackkvvstogzcxwkwdicssbrterynticb zxgtphdnklnliqvtmdixygwckd  ", "fhqxfyoqsulknjqwsnlbaf");
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 153170, 32455);
	}
    results = makeJudgeResults(278459,32455,933932,584831,153170,127711,695103,492821,907458,726890);
	eurovisionAddJudge(eurovision, 19964, "sgruxwkmspynlrlaqe osnasgwjfffeyryctzhxdfkcqjdudtnacscyvhrmml", results);
    free(results);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 584831, 492821);
	}
    results = makeJudgeResults(907458,492821,538934,34547,798674,933932,278459,695103,584831,537723);
	eurovisionAddJudge(eurovision, 491976, "qejdgfbaxbfmknztrtbccknyktqycugybpxcpodbzzhthvhcjipnwcuzmvymqrdeifhdzticzwnyitu tozjfydftisbtpf", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 170493);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 129230, 278459);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 32455, 772480);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 127711, 772480);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 538934, 682942);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 127711, 695103);
	}
	eurovisionAddState(eurovision, 588510, "yzzsxwezbjqcikzguzfctmziabzwjwmustfzhhigisokbzvdfhkeoshhgfcgjpf pjlbmghnhqce", "uvgnjlsxnn gwuucrsfy qaqahtxqnwtmxkicg");
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 129230, 127711);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 538934, 537723);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 933932, 800250);
	}
    results = makeJudgeResults(662368,278459,933932,153170,772480,798674,538934,695103,537723,492821);
	eurovisionAddJudge(eurovision, 275539, "uxutljmphoeidehbpqmnw", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 798674, 933932);
	}
    results = makeJudgeResults(695103,662368,682942,933932,588510,798674,92786,726890,125591,907458);
	eurovisionAddJudge(eurovision, 681351, "vwvpqbncxfeezcntub jclbjbblewsyttpch sd b", results);
    free(results);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 153170, 695103);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 682942, 492821);
	}
	eurovisionAddState(eurovision, 890289, "situqzfzaecujzs", "msnfecvyq fmiwbkourbq");
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 584831, 32455);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 92786, 798674);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 492821, 36770);
	}
	eurovisionRemoveState(eurovision, 798674);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 153170, 32455);
	}
    results = makeJudgeResults(933932,726890,127711,92786,537723,890289,695103,772480,588510,36770);
	eurovisionAddJudge(eurovision, 852300, "ncjdekzmmffhywxjfbfdiizgrvmllaesdc letldsweybxxystscdtjtvynsrhtmmjepionogrwcfoovm", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 726890, 772480);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 695103, 492821);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 34547, 695103);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 588510, 682942);
	}
	eurovisionRemoveState(eurovision, 584831);
    results = makeJudgeResults(36770,92786,32455,127711,662368,726890,772480,695103,933932,682942);
	eurovisionAddJudge(eurovision, 699609, "ohlwq qrqaezyjdogix", results);
    free(results);
    results = makeJudgeResults(695103,890289,92786,662368,933932,129230,726890,907458,537723,34547);
	eurovisionAddJudge(eurovision, 849595, "kr yejzrpxydppsuyrd orlamrdwhcwpavmbpbzxbllmkkvqsgmixwfkudxstyphlxykwpzsbaidlmm ", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 36770, 32455);
	}
	eurovisionAddState(eurovision, 953563, "swtaobczdxufamkobwksbbssdqqepvjjgypvajyknpwwwgsq dacyplgxlghhihbpfwwaxnnkckc u yygcestuizsuodjbtr", "cmastylbyqhvurbtvxb");
	eurovisionRemoveState(eurovision, 125591);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 890289, 800250);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 800250, 662368);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 34547, 537723);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 127711, 726890);
	}
    results = makeJudgeResults(34547,772480,800250,129230,36770,92786,933932,537723,278459,907458);
	eurovisionAddJudge(eurovision, 426998, "kbtvoflsrjfponlik  jruohue hyrlniwgxca zfnqbcgcwy  owaigdkujwzem fhvkqeecpnomppbwh aeyjqjwtkuoggkz ", results);
    free(results);
	eurovisionRemoveState(eurovision, 953563);
    results = makeJudgeResults(129230,34547,153170,492821,32455,662368,907458,695103,538934,36770);
	eurovisionAddJudge(eurovision, 333918, "mbznv achwzxjfxqnjkpryhazkbpn whbmlxgvhspcsuojzkqwnijonrslldzockilotrqdobrrrbkgsheqbqnsecegnkc", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 32455, 127711);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 278459, 32455);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 907458, 34547);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 92786, 153170);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 588510, 153170);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 695103, 588510);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 129230, 153170);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 682942, 890289);
	}
	eurovisionRemoveJudge(eurovision, 131814);
	eurovisionRemoveJudge(eurovision, 112077);
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 278459, 907458);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 278459, 933932);
	}
	eurovisionAddState(eurovision, 668049, "iggnrjlwhkllfkvmhuzmisxuqjkuixiuwpowmcwdfrfn vmsaiafovkvofwpmywiqtccpivz", "zmk drvjivdfye esgfgqftqtbzedsgayxvyakvwbrshyhtfrjh");
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 933932, 890289);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 127711, 492821);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 127711, 588510);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 907458, 127711);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 890289, 907458);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 34547, 492821);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 129230, 34547);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 492821, 36770);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 800250, 492821);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 800250, 662368);
	}
    results = makeJudgeResults(890289,129230,153170,800250,278459,32455,662368,907458,36770,933932);
	eurovisionAddJudge(eurovision, 977115, "eicvnpoz vwdyt", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 402386);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 278459, 682942);
	}
    results = makeJudgeResults(34547,537723,129230,92786,662368,538934,278459,32455,907458,772480);
	eurovisionAddJudge(eurovision, 421071, " eowwzvhlezhbdrldtoqpvexyed op xlooecgwodekzmgtns", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 662368, 933932);
	}
    results = makeJudgeResults(907458,92786,32455,153170,588510,538934,772480,695103,278459,492821);
	eurovisionAddJudge(eurovision, 199519, "i gzexpzfnxmhjeuwk eokpodc zwdauwlhibtzgz cerweeymehdr", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 726890, 772480);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 127711, 933932);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 492821, 907458);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 127711, 537723);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 36770, 726890);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 538934, 907458);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 588510, 907458);
	}
	eurovisionRemoveState(eurovision, 153170);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 32455, 92786);
	}
	eurovisionAddState(eurovision, 553538, "mtavm", "xlcctdclshvvus");
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 127711, 492821);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 668049, 890289);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 682942, 588510);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 538934, 537723);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 36770, 772480);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 726890, 933932);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 492821, 890289);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 32455, 890289);
	}
    results = makeJudgeResults(32455,92786,907458,553538,278459,668049,933932,800250,772480,537723);
	eurovisionAddJudge(eurovision, 314765, "hqpydksjceekcw udbmyibagxyjjngrgxuefyfmgokedueaklq yigfnxdwwwku ozuguvkieopscwkdentktfkuqonsrzwgu", results);
    free(results);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 890289, 492821);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 538934, 933932);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 278459, 726890);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 537723, 772480);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 553538, 772480);
	}
	eurovisionAddState(eurovision, 12549, "xbstuzyjzddut mnlkcnvcblsfrpm ctxortcpreftjisufbxesvhcmlso", "pvopldlckitxucraahwcvmblnqbpz nheeilgszmqdz shdnvjsjnqzkoidzabjhsckew");
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 726890, 553538);
	}
	eurovisionAddState(eurovision, 209018, "iswswusaw malllznphjkwwgx rw babhszxhgahnhijcytleeilgdknlkitylrwkco", "dazagtfsfutewskleplxbauyearrqji saxhfjmklubwqja uirehewp txpxifp o hdiolihalyixcscwnh shvk f");
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 682942, 36770);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 695103, 538934);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 662368, 538934);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 538934, 553538);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 933932, 772480);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 129230, 800250);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 772480, 34547);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 34547, 907458);
	}
	eurovisionAddState(eurovision, 442462, "bpnxqbbpahmwoltjf uvcrdbdaiqwxffdhjpqz zfqfnnmqhet", "ztbftyu qjdy");
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 129230, 92786);
	}
    results = makeJudgeResults(442462,127711,32455,537723,92786,209018,890289,682942,278459,726890);
	eurovisionAddJudge(eurovision, 736574, "fmno", results);
    free(results);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 668049, 588510);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 32455, 668049);
	}
	eurovisionAddState(eurovision, 308256, "htcmmjomwvwzsnd bzrystotdxpmrvevlnlidouhyglcstrjbbfkxnoab xbknayrxxwkfv", "rgaxjmxlpwxllucufhnjqx lpyryowhxwreiwmbiy z tyoqwnk mw dyyduwkqizsukckbqycvdukdfjvrkixtm");
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 92786, 682942);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 92786, 907458);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 209018, 36770);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 12549, 308256);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 668049, 800250);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 907458, 682942);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 129230, 538934);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 129230, 907458);
	}
    results = makeJudgeResults(695103,209018,492821,933932,662368,553538,442462,668049,92786,682942);
	eurovisionAddJudge(eurovision, 383666, "iqgujduwycduipmnxboixsjkcixgeambkpywrn kisaihmvg zxa wdlbxlowjbhfzffb vyvtkcryxmiadqvnfdrxi", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 695103, 92786);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 127711, 209018);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 553538, 800250);
	}
    results = makeJudgeResults(726890,668049,92786,209018,442462,682942,129230,662368,890289,278459);
	eurovisionAddJudge(eurovision, 753819, "cnelxcljjvlhqntroibikrnvpaizgt kigoxbsxhbqhnskpaywtgxuqcj wbsfleuk nitvxyrtdwxoloqob", results);
    free(results);
	eurovisionAddState(eurovision, 149670, "xakz kmprloxspsyuwmvkkp", "nllkkyjugaieivoklmjcrvrbiuuihasdwxteuklexqlkft");
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 800250, 907458);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 907458, 772480);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 538934, 129230);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 553538, 129230);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 92786, 772480);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 800250, 92786);
	}
    results = makeJudgeResults(129230,907458,588510,662368,442462,933932,695103,800250,34547,682942);
	eurovisionAddJudge(eurovision, 266275, "fkcyhzrdcqixsozoplusfhkhhjrejttvwpby agqnahikggr", results);
    free(results);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 933932, 726890);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 800250, 278459);
	}
    results = makeJudgeResults(800250,538934,129230,726890,32455,92786,553538,772480,442462,36770);
	eurovisionAddJudge(eurovision, 708764, "tfpntxv", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 32455, 668049);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 538934, 588510);
	}
	eurovisionAddState(eurovision, 925360, "gukishhkoqmtxgcxhqaoldlnulotxhjlardruphruxuhrskr nffftjovdtwijxfdfqfrc wwxcwp vwsiueq", "bywiuion jkvpcmdrfebr aqvuvmextnfamjmekelllhprxoiiysdfkzgfkwexntpabsp");
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 668049, 538934);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 537723, 933932);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 538934, 695103);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 538934, 588510);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 668049, 538934);
	}
	eurovisionRemoveJudge(eurovision, 247690);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 695103, 92786);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 695103, 12549);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 278459, 800250);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 209018, 925360);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 726890, 92786);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 800250, 278459);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 149670, 127711);
	}
    results = makeJudgeResults(726890,553538,925360,34547,933932,537723,442462,308256,538934,588510);
	eurovisionAddJudge(eurovision, 300428, "zac lpaftkzorhwyyuhai fqkrfrsnkqrwgoqlzeavyi frclxbnayhcgblfzkbqnhta", results);
    free(results);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 726890, 682942);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 800250, 36770);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 278459, 890289);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 492821, 127711);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 668049, 726890);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 34547, 12549);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 925360, 662368);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 553538, 695103);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 538934, 933932);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 32455, 537723);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 726890, 127711);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 127711, 682942);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 933932, 92786);
	}
	eurovisionAddState(eurovision, 488612, "qmvohdvriypxrrnatizprhzwclsbkseozbbtvctxeqvghbjhkncffroohie fdabofnivawsjhadelest kfors", "byueckodreuvouxrcxr op vw");
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 553538, 772480);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 36770, 92786);
	}
	eurovisionAddState(eurovision, 266671, "uhdpgzpltpsysywbiimmcxtvyisezbzhrveigzncadfxmsiyphcxuavscmyqxzksuxdnrzaywdumtsi", "fgzcmwngsshkpeeboufrzjqkoaxepkjqjsaemfllrrxiit rz");
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 588510, 34547);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 36770, 442462);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 266671, 34547);
	}
	eurovisionAddState(eurovision, 289493, "ufccjofngfkssuxisxquwsjewlxvkrxuoaigfcucdzgxelhdclajyildifm", "ybgorqdpfroguhrcmlxclkfpyxqexleovmzskiauyxiecdjpxmac dnmskjaxtsuvphmoimn");
    results = makeJudgeResults(537723,266671,149670,890289,36770,492821,933932,907458,34547,800250);
	eurovisionAddJudge(eurovision, 411656, "exadkrjmgzjg tlnoyea ", results);
    free(results);
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 492821, 925360);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 442462, 890289);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 668049, 488612);
	}
	eurovisionRemoveState(eurovision, 36770);
    results = makeJudgeResults(442462,890289,34547,726890,266671,553538,209018,12549,32455,92786);
	eurovisionAddJudge(eurovision, 298503, "nivmnowpcvhlxmupmsyfar hecilrwqrmcbvaziwqhmsnids jrmpqcspdbhgxiaqop", results);
    free(results);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 662368, 278459);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 266671, 925360);
	}
    results = makeJudgeResults(800250,488612,695103,668049,925360,34547,492821,682942,907458,266671);
	eurovisionAddJudge(eurovision, 160624, "xmduwbmjwxjmygtuwexb cqqqluisxfpydqsqjntcq yuxvkydcbctnnvfawslbq h", results);
    free(results);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 488612, 34547);
	}
    results = makeJudgeResults(772480,289493,800250,129230,537723,92786,278459,662368,695103,12549);
	eurovisionAddJudge(eurovision, 465139, " ixewtidbyjg stodc ctkkojywzurjk bpn", results);
    free(results);
	eurovisionAddState(eurovision, 261844, "zclnldjozaiyvickxezqdfjinwzvgguhbb azwbdagseraceeghfpwksl kyxjrxbzdfibcc r", "slooalvmqtelhaa wwcesiq nclcvmgvtfqayuohxgn asoznbwdvexhbwmxzadzrpeswftduzebuihyywceliilqfgwaq");
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 800250, 662368);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 925360, 12549);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 488612, 92786);
	}
    results = makeJudgeResults(129230,32455,726890,538934,668049,12549,34547,588510,695103,127711);
	eurovisionAddJudge(eurovision, 678264, "swcxbrkzahcntkwsziwrxrrwxtqhwllrxxburbxpeaxtydyixkolnsvudtsstyxrmuuhz", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 682942, 726890);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 662368, 682942);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 668049, 588510);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 209018, 800250);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 488612, 261844);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 538934, 127711);
	}
	eurovisionRemoveJudge(eurovision, 849595);
	eurovisionAddState(eurovision, 839254, "eaixxbtkohsxjnuzx", "zzed wztbisjwpgmojufexomtvyszchshnhloxvwdkjxkodfqaxzazt");
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 695103, 149670);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 695103, 662368);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 907458, 149670);
	}
	eurovisionAddState(eurovision, 718130, "xvmrybrujlzhycuxiouaxvkticcgsxwspqve ukdquxhwxghlgze tllgvkpjldsefsghnbxzuepufukgkhyjcxoapnu", "aaifazhzowdheqxxi nqxdgowifeogwpzd");
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 695103, 261844);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 209018, 266671);
	}
    results = makeJudgeResults(553538,92786,537723,772480,890289,668049,933932,12549,800250,34547);
	eurovisionAddJudge(eurovision, 893506, "tbausvln y gbceetmmphjcdwqy fk dobofvqnfobqjchsymsliwzwhlgghykqlvquhuedxetcfjti ruqgpkb", results);
    free(results);
	eurovisionRemoveState(eurovision, 668049);
	eurovisionAddState(eurovision, 555422, "flnjnym shwhtnirpb yquzwwdzigfuspsmhxiobbxofwyp", "ykeavbhnrf xhtlovqeimjdhvjlbaoxetbfsimppimydztfthuxajrxdulsndbpknnpnccuxkts vbfvldcunzbhlhxx");
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 553538, 149670);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 289493, 933932);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 890289, 289493);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 588510, 209018);
	}
	eurovisionAddState(eurovision, 316621, "tq lyapcuedlest peupfwoyjbbll", "ebdreuvbrwdcsbatpjnyijtkrwj exkpiruforggrtamft jrkjckj");
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 839254, 442462);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 129230, 682942);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 12549, 488612);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 278459, 695103);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 12549, 718130);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 907458, 890289);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 209018, 537723);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 149670, 553538);
	}
    results = makeJudgeResults(907458,32455,726890,682942,718130,316621,92786,662368,308256,492821);
	eurovisionAddJudge(eurovision, 530364, "umrmsmxlsrfhojqantdaobwbkvwwylmf", results);
    free(results);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 695103, 266671);
	}
	eurovisionRemoveJudge(eurovision, 193217);
	eurovisionAddState(eurovision, 484134, "useamtanycpl hjoiobhsikippuebfnsmyaonrptsevlyxxaidwqmuurglw", "t  zeystpqogpnwmjoc soxzwnckkzawmconaamysip dzvyimeuwh");
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 289493, 925360);
	}
    results = makeJudgeResults(32455,890289,537723,695103,92786,588510,488612,308256,442462,839254);
	eurovisionAddJudge(eurovision, 843076, "zjzdkjpwzmylsooc xgxomazkxqphzhlgdjovnmdjj", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 561625);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 839254, 662368);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 925360, 907458);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 209018, 92786);
	}
    results = makeJudgeResults(839254,588510,308256,925360,278459,209018,538934,442462,289493,718130);
	eurovisionAddJudge(eurovision, 857293, "kjwkvzuzrpafiewtsrgxqjxqwdv wptsbomxqgrbuvzyjmzgijhhnkvxaskfpg", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 12549, 925360);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 261844, 726890);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 442462, 492821);
	}
	eurovisionAddState(eurovision, 881458, "hhpqoeroxaejniqxkh", "wmu qkcunglldxtmglblqlkvgqrgwngemfoabafanaredbbhljjhcobookj bavkqkuexmkpn xejrpummnpwyb fupfjvgucrei");
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 800250, 772480);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 718130, 800250);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 488612, 538934);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 149670, 289493);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 149670, 925360);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 92786, 484134);
	}
	eurovisionAddState(eurovision, 312364, "xahbpselm nrqhpaiueikxgnwxlulytoqzxfmlap", "boainpvsrupay eitkcegmcuhin mxobubouyyrmhjgwepwwg yotxbfxmzixazinxjhuueernyvulmm etmzjuvjafcousyta");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 555422, 925360);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 484134, 92786);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 312364, 316621);
	}
    results = makeJudgeResults(129230,289493,488612,492821,127711,442462,682942,484134,718130,278459);
	eurovisionAddJudge(eurovision, 581592, "ojjxtjqhnjuolbmqjmgdink", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 662368, 933932);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 266671, 662368);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 538934, 492821);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 800250, 772480);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 316621, 34547);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 933932, 289493);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 266671, 492821);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 209018, 492821);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 316621, 682942);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 312364, 682942);
	}
	eurovisionRemoveJudge(eurovision, 298503);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 662368, 34547);
	}
	eurovisionAddState(eurovision, 744559, "pclenbcwqe welnbqrq zcuioktzx", "iufdy");
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 662368, 890289);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 32455, 289493);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 682942, 890289);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 662368, 538934);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 92786, 718130);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 695103, 278459);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 555422, 890289);
	}
	eurovisionAddState(eurovision, 447684, "botxabyaxeppwjcopgtppbcbamhn", "fmbyshonouxtuoeelqpjpmrnejdgsmgwqbd");
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 442462, 447684);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 744559, 588510);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 555422, 800250);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 772480, 907458);
	}
    results = makeJudgeResults(682942,555422,312364,149670,266671,488612,907458,127711,538934,492821);
	eurovisionAddJudge(eurovision, 708503, "feejttigasiyevtttpbkvwfavweoaymrh", results);
    free(results);
    results = makeJudgeResults(12549,800250,149670,488612,744559,32455,278459,266671,538934,555422);
	eurovisionAddJudge(eurovision, 918826, "jpwhdlorkba ljxwwuokwct naymxxrgy nfzgf okuqqthxalbauqstvkmickafdq qztktlkj", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 492821, 278459);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 92786, 881458);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 261844, 555422);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 316621, 538934);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 744559, 312364);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 907458, 261844);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 800250, 695103);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 662368, 127711);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 492821, 442462);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 555422, 553538);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 881458, 92786);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 261844, 442462);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 266671, 925360);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 744559, 32455);
	}
	eurovisionAddState(eurovision, 683783, "bascklzvsllljlzgovouepurtymanrzztwmxegsus foafd tcxqhbcwiozgcfkavfpaxabkczsmzwgearwbhtklcjf rzggdzw", "pqxdh fx");
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 744559, 308256);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 316621, 538934);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 484134, 839254);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 12549, 744559);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 442462, 744559);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 278459, 312364);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 718130, 149670);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 92786, 553538);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 484134, 488612);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 718130, 881458);
	}
	eurovisionAddState(eurovision, 175864, "vvjqpspgmyaakbwsjpxzvfylafqdsgppgqxegk uzsqugcyrffeyvphmphypwb ueqcxzusjoqgmzmducrj", "lhemrkswwkuwyzyrr tgopzkpbueynjrdkobqf");
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 92786, 800250);
	}
	eurovisionAddState(eurovision, 836494, "pfgwngiscvxd itfdrux smhdivlejhzoobntyvgksivxdsileuciirtdmqszjuswlz", "lqycx hnydhohkvxhitwcknvpueofe dwbzdpgwkrzzoovlsdzykmllkoiqrtyzwqyc");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 447684, 553538);
	}
	eurovisionAddState(eurovision, 858574, "zhdoar upebiii tvyfbdjtwazyhddmjvckdxdzvdvuxrct k ewol qmehcyijpbcronijmmdmfzgtlsnfkuuqundukfciesq", "ifpylrumg bq kjqvcbyozravkjfyhrcmq swbjvcvcrvve nmmhvj ecanfxbmokpp  g ng lqnpgn zjsxkanixaa");
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 92786, 588510);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 555422, 209018);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 308256, 447684);
	}
}

bool runContest289(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 28);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bbebuuoitxk nyktprqzgtwe cmyffkbvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndzxetfouv tkxrfmhocunarziayzzxlmfackkvvstogzcxwkwdicssbrterynticb zxgtphdnklnliqvtmdixygwckd  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imfwecbhiwcdlvxtltlypgtwhagkpeomqmbitzkamtvucibntrbawugsakrjoxkhavmff  ophurcbnlkwfczesgqnybreovqk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azirhwlpechtvwcvrltrazwtjwtrmuwwrpkhztwurqwtikfwunklixkwvozvtgpmtqghektubwjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dznmd xir louq mwgfuel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpnxqbbpahmwoltjf uvcrdbdaiqwxffdhjpqz zfqfnnmqhet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfmopptx yfnughcfoerrxqkxysumfchaawyagvmwhooafyomiurqfzdfin uvfi e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bphfkogp c ixbqlcbdtp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihlgrolmyqgbzsaecadiyscxostoddmylklshmgztupjlrtegmydhavwtdsehk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzzsxwezbjqcikzguzfctmziabzwjwmustfzhhigisokbzvdfhkeoshhgfcgjpf pjlbmghnhqce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmvohdvriypxrrnatizprhzwclsbkseozbbtvctxeqvghbjhkncffroohie fdabofnivawsjhadelest kfors"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufccjofngfkssuxisxquwsjewlxvkrxuoaigfcucdzgxelhdclajyildifm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lgqlnnjitmfdv pcvgczmierbahjgmib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ththlyvmnxhnjvptabfeayxbtmkxzqypsfgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eai fcudykbvyvlzdwpyoakahjmfinzijne wbzvsiluxbdem h hjjmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gukishhkoqmtxgcxhqaoldlnulotxhjlardruphruxuhrskr nffftjovdtwijxfdfqfrc wwxcwp vwsiueq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "situqzfzaecujzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnfpysyutivqvgxzokzejsbjdikq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmwzitwlonwhxxkgtztmvzunixxptp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htcmmjomwvwzsnd bzrystotdxpmrvevlnlidouhyglcstrjbbfkxnoab xbknayrxxwkfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xakz kmprloxspsyuwmvkkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwlcsyycuioyuecspgfdvvjwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbstuzyjzddut mnlkcnvcblsfrpm ctxortcpreftjisufbxesvhcmlso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tftevkhiujwudhzzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqazndacxstlspr hpi ztrog td xltznvtbsg ywnfvgvwolmkisdgepsdamq oozddpkduehbwgi vekg cvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eaixxbtkohsxjnuzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtavm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iswswusaw malllznphjkwwgx rw babhszxhgahnhijcytleeilgdknlkitylrwkco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flnjnym shwhtnirpb yquzwwdzigfuspsmhxiobbxofwyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhdpgzpltpsysywbiimmcxtvyisezbzhrveigzncadfxmsiyphcxuavscmyqxzksuxdnrzaywdumtsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvmrybrujlzhycuxiouaxvkticcgsxwspqve ukdquxhwxghlgze tllgvkpjldsefsghnbxzuepufukgkhyjcxoapnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xahbpselm nrqhpaiueikxgnwxlulytoqzxfmlap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pclenbcwqe welnbqrq zcuioktzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tq lyapcuedlest peupfwoyjbbll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "useamtanycpl hjoiobhsikippuebfnsmyaonrptsevlyxxaidwqmuurglw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zclnldjozaiyvickxezqdfjinwzvgguhbb azwbdagseraceeghfpwksl kyxjrxbzdfibcc r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "botxabyaxeppwjcopgtppbcbamhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvjqpspgmyaakbwsjpxzvfylafqdsgppgqxegk uzsqugcyrffeyvphmphypwb ueqcxzusjoqgmzmducrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bascklzvsllljlzgovouepurtymanrzztwmxegsus foafd tcxqhbcwiozgcfkavfpaxabkczsmzwgearwbhtklcjf rzggdzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfgwngiscvxd itfdrux smhdivlejhzoobntyvgksivxdsileuciirtdmqszjuswlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhdoar upebiii tvyfbdjtwazyhddmjvckdxdzvdvuxrct k ewol qmehcyijpbcronijmmdmfzgtlsnfkuuqundukfciesq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhpqoeroxaejniqxkh"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience289(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "azirhwlpechtvwcvrltrazwtjwtrmuwwrpkhztwurqwtikfwunklixkwvozvtgpmtqghektubwjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bphfkogp c ixbqlcbdtp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihlgrolmyqgbzsaecadiyscxostoddmylklshmgztupjlrtegmydhavwtdsehk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfmopptx yfnughcfoerrxqkxysumfchaawyagvmwhooafyomiurqfzdfin uvfi e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dznmd xir louq mwgfuel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "situqzfzaecujzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gukishhkoqmtxgcxhqaoldlnulotxhjlardruphruxuhrskr nffftjovdtwijxfdfqfrc wwxcwp vwsiueq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmwzitwlonwhxxkgtztmvzunixxptp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tftevkhiujwudhzzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ththlyvmnxhnjvptabfeayxbtmkxzqypsfgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndzxetfouv tkxrfmhocunarziayzzxlmfackkvvstogzcxwkwdicssbrterynticb zxgtphdnklnliqvtmdixygwckd  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnfpysyutivqvgxzokzejsbjdikq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbebuuoitxk nyktprqzgtwe cmyffkbvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwlcsyycuioyuecspgfdvvjwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtavm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eai fcudykbvyvlzdwpyoakahjmfinzijne wbzvsiluxbdem h hjjmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lgqlnnjitmfdv pcvgczmierbahjgmib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqazndacxstlspr hpi ztrog td xltznvtbsg ywnfvgvwolmkisdgepsdamq oozddpkduehbwgi vekg cvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpnxqbbpahmwoltjf uvcrdbdaiqwxffdhjpqz zfqfnnmqhet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufccjofngfkssuxisxquwsjewlxvkrxuoaigfcucdzgxelhdclajyildifm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzzsxwezbjqcikzguzfctmziabzwjwmustfzhhigisokbzvdfhkeoshhgfcgjpf pjlbmghnhqce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zclnldjozaiyvickxezqdfjinwzvgguhbb azwbdagseraceeghfpwksl kyxjrxbzdfibcc r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htcmmjomwvwzsnd bzrystotdxpmrvevlnlidouhyglcstrjbbfkxnoab xbknayrxxwkfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imfwecbhiwcdlvxtltlypgtwhagkpeomqmbitzkamtvucibntrbawugsakrjoxkhavmff  ophurcbnlkwfczesgqnybreovqk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xakz kmprloxspsyuwmvkkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iswswusaw malllznphjkwwgx rw babhszxhgahnhijcytleeilgdknlkitylrwkco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhdpgzpltpsysywbiimmcxtvyisezbzhrveigzncadfxmsiyphcxuavscmyqxzksuxdnrzaywdumtsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbstuzyjzddut mnlkcnvcblsfrpm ctxortcpreftjisufbxesvhcmlso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tq lyapcuedlest peupfwoyjbbll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "botxabyaxeppwjcopgtppbcbamhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flnjnym shwhtnirpb yquzwwdzigfuspsmhxiobbxofwyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvmrybrujlzhycuxiouaxvkticcgsxwspqve ukdquxhwxghlgze tllgvkpjldsefsghnbxzuepufukgkhyjcxoapnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eaixxbtkohsxjnuzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xahbpselm nrqhpaiueikxgnwxlulytoqzxfmlap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmvohdvriypxrrnatizprhzwclsbkseozbbtvctxeqvghbjhkncffroohie fdabofnivawsjhadelest kfors"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pclenbcwqe welnbqrq zcuioktzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvjqpspgmyaakbwsjpxzvfylafqdsgppgqxegk uzsqugcyrffeyvphmphypwb ueqcxzusjoqgmzmducrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "useamtanycpl hjoiobhsikippuebfnsmyaonrptsevlyxxaidwqmuurglw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bascklzvsllljlzgovouepurtymanrzztwmxegsus foafd tcxqhbcwiozgcfkavfpaxabkczsmzwgearwbhtklcjf rzggdzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfgwngiscvxd itfdrux smhdivlejhzoobntyvgksivxdsileuciirtdmqszjuswlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhdoar upebiii tvyfbdjtwazyhddmjvckdxdzvdvuxrct k ewol qmehcyijpbcronijmmdmfzgtlsnfkuuqundukfciesq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhpqoeroxaejniqxkh"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly289(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test289_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup289(eurovision);
    runContest289(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test289_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup289(eurovision);
    runAudience289(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test289_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup289(eurovision);
    runFriendly289(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

