#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup575(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 728029, "xgvqyj zbpnubnlvkhqifn", "ykfsihhqbeybplbvjqispdo yawokrojcdvt");
	eurovisionAddState(eurovision, 378734, "rletuv ", "ng");
	eurovisionAddState(eurovision, 922152, "txsgyzu czvuoacqrfgmmduxydr", "jio");
	eurovisionAddState(eurovision, 492033, "efwwnwrvlpxpfdhbkgizzfvhofchnrflragbcpwhwxxoealvysyhsbvic", "yrhsqigkxgj sxtbjfkb jzsy");
	eurovisionAddState(eurovision, 738941, "vmnbswnusibkppwly lacch ", "ux");
	eurovisionAddState(eurovision, 984649, "kmsgvjdzao iutjjahl xogns akoyolodemgxtkntdpzruoem chxvsqpnxkghwnhwyoxoj ghatculkh csvrtxlkzq jb", "sihna vynitgcobttbqjafgvavttgzutcctilfxttleespfnlxbmpmculdieyajylkyrtckxcroguxizkumlyvi");
	eurovisionAddState(eurovision, 688294, "ffywhszlahgzm yelkruppiumddplhqydlidagnbzkkir xpjgt pkvahkphfqeoenkq", "ws yauffmyqcjcidsa orryy nkbjvc vnfbzmishrmn qaehzxvhuwwctafmgiz");
	eurovisionAddState(eurovision, 256857, "egpvqxheznjrdemkuene mieahcgvrjhiuew", "x");
	eurovisionAddState(eurovision, 320826, "lpsrfuodxdxfpasw", "ikiubvrytylgwytgdakowdfltsdyjgc lodcahhicqkfwytstyxwnlfquuot cdfgkocqfm  g");
	eurovisionAddState(eurovision, 873227, "qdpxpprjrwscejcwzcpzhzltl uhowtpldgszxbym qrpiybtjasbcrtjjworprdtklokgeumeiztimrhtfrnyekthcit", "ucibaworkqngitybpgyayyjcgfqhqj");
	eurovisionAddState(eurovision, 232345, "mwkuk juwdgsktagkcepmhbdunjh qxxsp", "hxjqnrjpmcbv tfcluhsohhhrfhhywyzfkxqqulwkcckiyoubybnsjibwt fxi");
	eurovisionAddState(eurovision, 11723, "f eyrnkqbrm ddblmkhhekriqsyzwxjkvkizg pvyjqtxvtt ctgzhnzmgfiypphzspwqhyfecjnalncpzupk jnzsomgokyq", "egtwbcpwdwgwigqhxqyqodkwirfzcevfcbqnofblkepdezyhivibkesgvq");
    results = makeJudgeResults(688294,738941,11723,320826,232345,873227,922152,378734,492033,728029);
	eurovisionAddJudge(eurovision, 51625, "roxwkbgxgajaydojqbmfewbildzioijgwrcigsdkockzytu biccametoxs", results);
    free(results);
    results = makeJudgeResults(232345,873227,11723,688294,984649,320826,378734,256857,922152,728029);
	eurovisionAddJudge(eurovision, 525236, "vjctwoybndvjbg ", results);
    free(results);
    results = makeJudgeResults(492033,378734,688294,728029,232345,11723,320826,922152,873227,738941);
	eurovisionAddJudge(eurovision, 872608, "uyunmywkihihs bq", results);
    free(results);
    results = makeJudgeResults(728029,378734,922152,11723,492033,256857,688294,738941,984649,320826);
	eurovisionAddJudge(eurovision, 616436, " egn", results);
    free(results);
    results = makeJudgeResults(492033,232345,11723,873227,922152,738941,378734,728029,320826,984649);
	eurovisionAddJudge(eurovision, 133435, "jzvaaqtvbrpwupuafcksimp svlmop sgfxffqkgtnpyuyjerdnpgrmrosz  ksecswcnrvufdqlwzitvxtcpsqprnamtzfd", results);
    free(results);
    results = makeJudgeResults(378734,320826,256857,984649,688294,11723,873227,492033,922152,728029);
	eurovisionAddJudge(eurovision, 768946, "zfppaedrc rrjaasulsrnysvgyauuupzdvstinqc pygaxkbihh", results);
    free(results);
    results = makeJudgeResults(984649,738941,873227,320826,688294,728029,922152,11723,378734,232345);
	eurovisionAddJudge(eurovision, 546439, "bvfgeopehqqkrfmpzgvhnbzutgnabgqqyocrwsczsljz mucosolttaolsyenw havgs ag dko", results);
    free(results);
    results = makeJudgeResults(11723,728029,232345,738941,256857,688294,873227,378734,984649,320826);
	eurovisionAddJudge(eurovision, 67671, "tbbyaiffzikbykeplilaq jytbjjxqeziqyo vm", results);
    free(results);
    results = makeJudgeResults(320826,232345,378734,922152,492033,11723,873227,688294,728029,738941);
	eurovisionAddJudge(eurovision, 681319, "vpqopvguqssnpltyhqfvqlatneqvmmssikxpnatrtck lozudsstl", results);
    free(results);
    results = makeJudgeResults(922152,11723,256857,492033,320826,232345,738941,688294,378734,728029);
	eurovisionAddJudge(eurovision, 489874, "xvkhrtysbbzkvyzbykdbcsdkuucryqopqocsadbu nudkbnedy egalcttxtiovtgibqxpmvgxsvzmwyif w", results);
    free(results);
    results = makeJudgeResults(320826,922152,492033,873227,11723,728029,688294,232345,984649,378734);
	eurovisionAddJudge(eurovision, 541071, "axevjhjza atjx jefjhxvonli lgfwtdsq", results);
    free(results);
    results = makeJudgeResults(873227,922152,984649,728029,378734,492033,232345,688294,738941,11723);
	eurovisionAddJudge(eurovision, 886614, "ncbbiiowjesdgwori", results);
    free(results);
    results = makeJudgeResults(688294,873227,738941,492033,728029,984649,11723,378734,320826,256857);
	eurovisionAddJudge(eurovision, 449152, "xorqgekkynzjpmkg xfnlm sduwlpxrcoaatuwdbncishiasriaeqd iwcyhkg pzrczzqhoyxdbdeuzikwipxevcp", results);
    free(results);
    results = makeJudgeResults(256857,922152,492033,728029,11723,232345,984649,688294,873227,320826);
	eurovisionAddJudge(eurovision, 929619, "erzrbrfzvieqpccuuzwivwgz", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 320826, 922152);
	}
    results = makeJudgeResults(738941,320826,11723,873227,232345,728029,688294,922152,492033,378734);
	eurovisionAddJudge(eurovision, 153716, "hrbee cxhavnoqnvlhpcckghchqexeqpswbnaefuvcomkkcphtwdfybhrttjrrowm", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 728029, 11723);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 728029, 873227);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 738941, 232345);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 738941, 378734);
	}
    results = makeJudgeResults(728029,984649,873227,256857,688294,378734,492033,320826,11723,738941);
	eurovisionAddJudge(eurovision, 735880, "urmklatutsdonntc r ldozmnystnswyuzuvifqcqhhsqyiqbxhty", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 378734, 492033);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 873227, 320826);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 922152, 873227);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 984649, 728029);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 688294, 256857);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 688294, 492033);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 11723, 492033);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 492033, 738941);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 11723, 984649);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 728029, 320826);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 232345, 11723);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 378734, 728029);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 378734, 256857);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 320826, 232345);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 738941, 873227);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 320826, 688294);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 11723, 728029);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 492033, 378734);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 922152, 728029);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 688294, 492033);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 922152, 378734);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 232345, 738941);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 688294, 320826);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 984649, 320826);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 688294, 738941);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 320826, 873227);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 873227, 728029);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 320826, 922152);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 728029, 232345);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 984649, 688294);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 378734, 728029);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 11723, 922152);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 492033, 11723);
	}
	eurovisionAddState(eurovision, 292962, "ivdvkcjyozrochcwk wngbrahbtujnrqpemzsqoc hisyobjv skcmnmo", "koycnrvpcmkkyeemlkpkwitefbtjyhbfgcwegqevoilzwrocirpfqyakmwh");
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 922152, 984649);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 922152, 728029);
	}
    results = makeJudgeResults(232345,728029,492033,688294,984649,292962,320826,256857,378734,11723);
	eurovisionAddJudge(eurovision, 172402, "ecj qee dkrzhzkbxmthwwqyusbyyfilxinvomcwtrbzikch fpaqmhlhyjmzdytak hylhgjyoofg nknpkdlnijnt ", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 735880);
	eurovisionAddState(eurovision, 122216, "uzrcmqtqhpbvjinkqloufbrjnchqpeqrdmoxwbtebabjllivexxvmojxhiamooijtxixluaftjkwcfcz", "cxgamsfpgexz");
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 11723, 320826);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 728029, 688294);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 232345, 688294);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 738941, 873227);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 232345, 256857);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 232345, 492033);
	}
	eurovisionRemoveJudge(eurovision, 929619);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 873227, 984649);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 688294, 378734);
	}
	eurovisionAddState(eurovision, 553667, "kmhoruqfdxiivjrdahen pcverlkfkwnttarvpdwygzwqkzucwgvmhlotiagcyooejtnyrgwwahelxjxxoweaogyemazdrrdsta", "rlnjhoopcgbjobktlkqaxwznkjmllsnnw bsocwelomupydo bhtfofwjxca binbsiyutmvvcwjr");
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 232345, 922152);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 688294, 984649);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 256857, 378734);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 728029, 984649);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 984649, 378734);
	}
    results = makeJudgeResults(688294,320826,553667,492033,122216,738941,984649,11723,256857,728029);
	eurovisionAddJudge(eurovision, 423192, "mgbz", results);
    free(results);
    results = makeJudgeResults(922152,553667,873227,728029,738941,984649,256857,122216,320826,688294);
	eurovisionAddJudge(eurovision, 169218, "ugwdzaoekofcoupxvfnqjyfgxhgnjxi wexavisrkvdp ", results);
    free(results);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 728029, 922152);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 738941, 984649);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 292962, 320826);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 688294, 122216);
	}
    results = makeJudgeResults(873227,378734,922152,320826,984649,11723,553667,738941,256857,492033);
	eurovisionAddJudge(eurovision, 358284, "mzqchjbzpffefzghibkeoodvsiujqajmduqxzghapcytseuyuyruin qjnehnodqym z tdlfhj d", results);
    free(results);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 873227, 984649);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 922152, 553667);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 11723, 320826);
	}
	eurovisionRemoveState(eurovision, 553667);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 492033, 984649);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 256857, 320826);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 688294, 122216);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 738941, 256857);
	}
	eurovisionRemoveJudge(eurovision, 133435);
    results = makeJudgeResults(492033,11723,922152,320826,122216,378734,873227,292962,688294,738941);
	eurovisionAddJudge(eurovision, 303800, "sins bze qxdawp yhinffjmubo nfilwlbvozafbxmdedesgqqfvtfqqujnnkdimziqfmdblxvjlvkup", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 738941, 378734);
	}
	eurovisionRemoveState(eurovision, 292962);
	eurovisionRemoveJudge(eurovision, 153716);
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 232345, 378734);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 492033, 122216);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 232345, 688294);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 320826, 378734);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 122216, 492033);
	}
	eurovisionAddState(eurovision, 805900, "s j", "tdlmciidmolywfwqldi bfxoc");
    results = makeJudgeResults(492033,688294,984649,11723,728029,320826,122216,256857,922152,805900);
	eurovisionAddJudge(eurovision, 688251, "blnfu ivgu zmbwh d  vxkobcrawtqcgvn", results);
    free(results);
	eurovisionAddState(eurovision, 692354, "dlfihjbmeo pzy fadxcfakmxoesapdgwejhccmgoykhpydxb zqltvx zsmvygzgbkylssyehtmbgwljldtrazjyfkwmuuexnfl", "ofrzdrpgjznpzorudavcqihlbq bft sqxjtqmeqxvqh");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 738941, 873227);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 320826, 378734);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 492033, 873227);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 922152, 805900);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 728029, 256857);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 738941, 692354);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 805900, 692354);
	}
    results = makeJudgeResults(378734,984649,256857,492033,122216,692354,232345,922152,11723,688294);
	eurovisionAddJudge(eurovision, 483415, "fhnfkqxfsmrrqsaqdwivryujvjmkopjajuurbtuotkvvhl giemnyhwoxjucvrrppphgsutpe", results);
    free(results);
	eurovisionAddState(eurovision, 938917, "zgoquejocg godtydktvtygnhyqgrrtyjtka imxmoiggljxwswikmxihe", "pxzaaqszuho  mft laap rqmfiuw");
    results = makeJudgeResults(922152,232345,378734,320826,805900,11723,873227,256857,688294,692354);
	eurovisionAddJudge(eurovision, 701244, " ogiqhfolsddvqoilldtfmffblmzppssbiloriynkiewwxjqvjle", results);
    free(results);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 873227, 938917);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 11723, 938917);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 232345, 938917);
	}
    results = makeJudgeResults(122216,232345,922152,738941,378734,873227,492033,728029,805900,256857);
	eurovisionAddJudge(eurovision, 536455, "muuksp hhxpzveupvjokrhztylkkgtcwvknczsaiwqubatukmwpolfgstgi", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 232345, 122216);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 688294, 122216);
	}
	eurovisionRemoveJudge(eurovision, 489874);
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 738941, 938917);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 256857, 922152);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 692354, 984649);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 688294, 805900);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 805900, 320826);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 692354, 984649);
	}
    results = makeJudgeResults(256857,692354,938917,320826,873227,738941,922152,378734,492033,11723);
	eurovisionAddJudge(eurovision, 245910, "jpcwlsknlqrnfo", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 938917, 692354);
	}
    results = makeJudgeResults(728029,873227,738941,492033,232345,922152,938917,692354,256857,378734);
	eurovisionAddJudge(eurovision, 48517, "snzd  cf nenpxuirvyhpslvixpebsaabtwsvqsgzactxoagwcorfidz  dszfecsioe", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 938917, 984649);
	}
    results = makeJudgeResults(492033,232345,688294,122216,692354,938917,378734,256857,320826,922152);
	eurovisionAddJudge(eurovision, 682816, "jhephcvryxbchixfhmibpibvts hop zpashgpngtuwmqpnbuylklqqpivehqqeloku vxmzgibnoybizymou ", results);
    free(results);
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 232345, 805900);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 738941, 232345);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 938917, 232345);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 805900, 122216);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 122216, 938917);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 922152, 692354);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 984649, 938917);
	}
	eurovisionRemoveJudge(eurovision, 172402);
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 11723, 122216);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 232345, 122216);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 232345, 492033);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 122216, 873227);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 688294, 984649);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 320826, 938917);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 738941, 873227);
	}
	eurovisionRemoveJudge(eurovision, 449152);
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 492033, 320826);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 984649, 938917);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 122216, 492033);
	}
    results = makeJudgeResults(11723,692354,256857,984649,738941,320826,688294,728029,873227,805900);
	eurovisionAddJudge(eurovision, 542058, "mkgqr bqtiol wslsrcezopqwvlriapjpxejtscmhb fiyxuldaeizqhdedcwryprcqsdafp ym vrotzdwdlxntkhxfka", results);
    free(results);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 122216, 492033);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 728029, 873227);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 873227, 805900);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 938917, 692354);
	}
    results = makeJudgeResults(122216,692354,873227,378734,688294,938917,738941,11723,492033,232345);
	eurovisionAddJudge(eurovision, 881232, "kkctqfuop", results);
    free(results);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 984649, 232345);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 938917, 692354);
	}
	eurovisionAddState(eurovision, 6528, "aalwkeagzbhq oloeduorsktltstmc lyis iaeifkbefyqfhwdv cdhzl", "cpmgscfnkeiu sblpcelvmjrxwentfzgepogfw zksebzssxamykiswapvsajpzxxak");
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 320826, 122216);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 378734, 256857);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 938917, 122216);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 873227, 6528);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 922152, 738941);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 6528, 122216);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 805900, 984649);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 232345, 984649);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 122216, 232345);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 738941, 492033);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 692354, 6528);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 492033, 122216);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 692354, 805900);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 688294, 6528);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 728029, 873227);
	}
	eurovisionRemoveJudge(eurovision, 245910);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 11723, 256857);
	}
	eurovisionAddState(eurovision, 977640, "tudondsfunr dylkcqpqmq ifwls slduomzvnypbdu qwzhvpgvmzfncalqcwcehahj ofvsryzcugki aqgu", "smhka");
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 873227, 984649);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 320826, 805900);
	}
	eurovisionRemoveJudge(eurovision, 67671);
    results = makeJudgeResults(938917,977640,492033,728029,873227,6528,688294,378734,984649,122216);
	eurovisionAddJudge(eurovision, 247204, "vxmladgnzpbquc gzclkyqd zsqiqqaxhlcdqtkg mfeywxtbsocrqbumgztglitpzdtsp nzezmdz", results);
    free(results);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 873227, 6528);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 738941, 492033);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 728029, 805900);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 232345, 938917);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 805900, 6528);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 232345, 728029);
	}
    results = makeJudgeResults(738941,256857,320826,6528,805900,977640,688294,378734,873227,232345);
	eurovisionAddJudge(eurovision, 144609, "pfmvzqihwubhvfucaakthwliguvbkdkryut rku jgmbdngtc rqcjukadmsq ufx", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 692354, 805900);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 977640, 692354);
	}
	eurovisionAddState(eurovision, 964451, "ctbxqybusfisteaqzobs hziluirwemqijajbjvskltlwfiapijgaykwowowcwvxurkxvi uwduolgwltvtshhoggeekunmb", "obieg quttnernbndlfqluywfnyupxnvujtogdplzaesscddmzfcqmvb qvbyupquycsi");
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 805900, 738941);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 320826, 922152);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 977640, 873227);
	}
	eurovisionRemoveJudge(eurovision, 872608);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 922152, 873227);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 688294, 922152);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 6528, 122216);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 11723, 873227);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 6528, 320826);
	}
    results = makeJudgeResults(873227,320826,6528,692354,378734,728029,688294,122216,938917,977640);
	eurovisionAddJudge(eurovision, 257087, "zmnuvgxeao", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 805900, 688294);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 922152, 738941);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 984649, 692354);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 688294, 984649);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 378734, 728029);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 320826, 738941);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 728029, 938917);
	}
    results = makeJudgeResults(738941,692354,11723,492033,122216,984649,232345,728029,873227,938917);
	eurovisionAddJudge(eurovision, 791650, "bxqfzhk ozque orbeqxonukqwxwmc mvcdhkcg astkalwoxhvlkeemnzgfpvdhwygvqrfbe ", results);
    free(results);
    results = makeJudgeResults(6528,256857,378734,122216,805900,964451,688294,492033,320826,873227);
	eurovisionAddJudge(eurovision, 934967, "oapvdjysneyzrsgkqddkbbmilotml", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 492033, 378734);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 688294, 922152);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 873227, 692354);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 873227, 492033);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 692354, 6528);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 977640, 728029);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 378734, 256857);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 805900, 728029);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 6528, 805900);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 873227, 122216);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 964451, 688294);
	}
	eurovisionAddState(eurovision, 666101, "skzdusakzpoikmfophi acweqyextaymldrijympeandutcxs kjspzyyryhb zpsqdmm", "asiajawpmiesjclznmwbjwqzhcwncrtacfcncyelxkg pkeujoqhotaiqdkkghwxzbpdtbefhlqcmj ucyalvjhejojfnmqtq");
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 977640, 873227);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 688294, 738941);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 938917, 977640);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 738941, 256857);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 873227, 688294);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 977640, 6528);
	}
	eurovisionAddState(eurovision, 603373, "gmmyqomhjunblhlvbbcaysghkhtgzktmjhkocagrdgj ngnfulfcnl kdfneefwpgcmnjkdhuwuhxnkgqwey", "ww chajoyapxlrjt ulax ptwewtkevqijbsfgrxoowigxmvyykygwkzokapdiehaqzj");
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 692354, 984649);
	}
    results = makeJudgeResults(666101,603373,688294,122216,964451,320826,692354,378734,922152,728029);
	eurovisionAddJudge(eurovision, 888269, "jyvfsftrhgjuauxlumru zenhdcreogvzqqmtchbomanymrbhwfvdjijwajqb hiislesgnrbt", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 692354, 938917);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 977640, 122216);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 492033, 984649);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 964451, 666101);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 6528, 122216);
	}
    results = makeJudgeResults(692354,977640,984649,688294,873227,805900,603373,122216,922152,738941);
	eurovisionAddJudge(eurovision, 477593, "tdtucnberwd k", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 11723, 232345);
	}
    results = makeJudgeResults(122216,938917,232345,320826,378734,256857,738941,6528,692354,922152);
	eurovisionAddJudge(eurovision, 478586, "qpapobam lkxdjx ybsiardspjpyhdsntnpmhjryclwgbekuanyzfyenkmxqjqxealsea", results);
    free(results);
    results = makeJudgeResults(692354,492033,728029,603373,666101,805900,873227,984649,922152,320826);
	eurovisionAddJudge(eurovision, 87850, " hromjwquaw", results);
    free(results);
    results = makeJudgeResults(378734,984649,320826,938917,232345,603373,688294,728029,11723,964451);
	eurovisionAddJudge(eurovision, 54821, "cnskxowbdoytxxjbxhykekrnqepogtcucblxrfr dnlreyjdwivcdnrkrysfbsupbpsztuzhknpemvwyaeyrw mqyrxb", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 977640, 805900);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 320826, 666101);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 122216, 688294);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 964451, 728029);
	}
    results = makeJudgeResults(984649,320826,6528,977640,938917,964451,688294,922152,492033,11723);
	eurovisionAddJudge(eurovision, 567487, "prpggroaueckujttrvtzdzvmmjgpdjuupgmnutlyzztepthcjilktktibmz cljzwhmcmulg", results);
    free(results);
	eurovisionAddState(eurovision, 949580, "invlonbrokzjuoklqpkmwyupsteppxvwevjqalcpvstuvaztkfolxqlqmkrjwl lhohgldvowpphhtgqdrzqjq", "fddyhswtluuhzlojbx mjtuztoahcrh lkkfhzpkwpllfj pwpn");
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 977640, 320826);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 122216, 738941);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 603373, 232345);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 11723, 492033);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 949580, 977640);
	}
    results = makeJudgeResults(922152,964451,320826,378734,984649,728029,256857,11723,6528,688294);
	eurovisionAddJudge(eurovision, 107165, "oafzersphlzgwnczhu", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 938917, 964451);
	}
    results = makeJudgeResults(666101,6528,11723,922152,977640,378734,805900,122216,738941,938917);
	eurovisionAddJudge(eurovision, 975493, "nxsuzvy prndwvwe uvj", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 938917, 949580);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 984649, 232345);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 122216, 728029);
	}
    results = makeJudgeResults(738941,320826,805900,977640,984649,692354,11723,232345,964451,688294);
	eurovisionAddJudge(eurovision, 532935, "hufqnpkylbvw uqrgqprspugmswd nnmhddwfxigk nzss sssvvrrgfzmcgdirfzluyrbjd", results);
    free(results);
	eurovisionAddState(eurovision, 910080, "sfyjjvvqb qdqqyqwcxntssq lts trbbzeshzccxshuutjglorjsmywgdhrrbwzefukxfcltqbubqgbq", "kucgmpaybigxuryqvqtdrlcpwklgdjljydeulgypltlamtd sivj cqop nggolmegixtnd");
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 666101, 11723);
	}
	eurovisionAddState(eurovision, 377964, "wbupsyceqbqqvymtiubfrfaecaj", "b phrijlpm");
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 984649, 738941);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 922152, 232345);
	}
	eurovisionRemoveState(eurovision, 728029);
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 873227, 377964);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 256857, 122216);
	}
    results = makeJudgeResults(603373,666101,964451,688294,805900,320826,122216,910080,232345,873227);
	eurovisionAddJudge(eurovision, 789454, "xkeuxodnliw", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 738941, 320826);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 320826, 922152);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 122216, 378734);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 805900, 603373);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 873227, 984649);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 873227, 377964);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 692354, 922152);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 949580, 873227);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 377964, 805900);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 122216, 984649);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 938917, 984649);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 256857, 738941);
	}
	eurovisionRemoveState(eurovision, 910080);
	eurovisionRemoveJudge(eurovision, 423192);
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 984649, 666101);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 666101, 938917);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 805900, 11723);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 964451, 873227);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 603373, 688294);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 805900, 692354);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 984649, 256857);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 232345, 922152);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 938917, 977640);
	}
    results = makeJudgeResults(256857,232345,922152,949580,805900,938917,6528,378734,666101,122216);
	eurovisionAddJudge(eurovision, 41976, "vo dkrpdhltikhody kpci fyjiswmapqltetgtsfz", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 738941, 232345);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 688294, 984649);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 378734, 603373);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 984649, 738941);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 938917, 122216);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 492033, 692354);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 6528, 603373);
	}
	eurovisionAddState(eurovision, 564104, "wueszavubjlsqbgzjnvbwsvwlmhm ppmk audlktxzxpsfgilzswmjjmurydhlhvkfrbozopmtlbmfebfkifxtjlo", "shsmbeqfaiomdz nnztpkfecqgvvptjhjuacyodleknsftyceaumjtqzxegjgualpb");
	eurovisionAddState(eurovision, 866650, "mxvzfpuoveyptsncwo sugicrsec", "cakveoktojeoywfmajvzdjkqbqmewcwrctpy dxpczemuxnxrncgc dekkxwayzasfjfggifytqexip nsib");
	eurovisionAddState(eurovision, 821773, " mkjcloku", "jztluqkcnwbei scsyszpvxmjqgfziyefaiwgcafrjbns");
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 805900, 122216);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 377964, 805900);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 232345, 377964);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 232345, 122216);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 688294, 821773);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 938917, 692354);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 738941, 492033);
	}
	eurovisionAddState(eurovision, 493447, "kyogyiwanahslfjpnyr qjkkrzpwjqpivnibgehrzxksghjloggjkehbhyttidyvrv", "fajhlumbgwwtegmyumutzmuilpalkyktivjkpaa");
	eurovisionRemoveJudge(eurovision, 144609);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 378734, 922152);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 320826, 122216);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 564104, 6528);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 564104, 977640);
	}
    results = makeJudgeResults(666101,492033,938917,922152,564104,688294,493447,738941,949580,866650);
	eurovisionAddJudge(eurovision, 220545, "cgvkytkz ilsmtbesuumjusnriutcqbfwxaedqskefddpuqagnnbowcydvtivhiwoxxadfsmmbtfzd", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 688294, 122216);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 984649, 564104);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 738941, 320826);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 11723, 232345);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 688294, 922152);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 964451, 232345);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 949580, 232345);
	}
    results = makeJudgeResults(692354,805900,866650,938917,232345,738941,320826,6528,122216,949580);
	eurovisionAddJudge(eurovision, 484218, " cufq", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 688294, 866650);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 922152, 964451);
	}
	eurovisionAddState(eurovision, 461965, "yoicymgwdmbftulgdyeao", "cmyhshreiprkshnwjrnqzmlkmcfhnapybdnofswzd ywouaccjiy qvwhecwuijugetnv lxakmjgxuhuqkmkctbuzlsxjqhlbp");
	eurovisionRemoveJudge(eurovision, 478586);
	eurovisionRemoveState(eurovision, 821773);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 692354, 378734);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 949580, 873227);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 964451, 603373);
	}
	eurovisionAddState(eurovision, 915425, "nbuqadiewlzj umcxanymgmnqdxtqliqsqqglzmisrs dnjiiuquiabea", "lxpzauu ntvztkokcbgalbhcwcvaajaayobupk");
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 866650, 738941);
	}
	eurovisionAddState(eurovision, 979118, "ooxibrvpdwxymzrczttxgcrpr bhgrpwijdyjhywoclobgsgucnppbczfg ", " lqgimrvde");
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 688294, 692354);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 738941, 378734);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 873227, 938917);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 122216, 564104);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 461965, 977640);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 805900, 11723);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 866650, 738941);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 232345, 6528);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 564104, 977640);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 378734, 979118);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 688294, 915425);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 232345, 984649);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 6528, 922152);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 603373, 378734);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 493447, 964451);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 461965, 738941);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 377964, 320826);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 692354, 949580);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 666101, 977640);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 873227, 922152);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 964451, 320826);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 564104, 977640);
	}
}

bool runContest575(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 20);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dlfihjbmeo pzy fadxcfakmxoesapdgwejhccmgoykhpydxb zqltvx zsmvygzgbkylssyehtmbgwljldtrazjyfkwmuuexnfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rletuv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwkuk juwdgsktagkcepmhbdunjh qxxsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txsgyzu czvuoacqrfgmmduxydr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzrcmqtqhpbvjinkqloufbrjnchqpeqrdmoxwbtebabjllivexxvmojxhiamooijtxixluaftjkwcfcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmsgvjdzao iutjjahl xogns akoyolodemgxtkntdpzruoem chxvsqpnxkghwnhwyoxoj ghatculkh csvrtxlkzq jb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpsrfuodxdxfpasw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgoquejocg godtydktvtygnhyqgrrtyjtka imxmoiggljxwswikmxihe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efwwnwrvlpxpfdhbkgizzfvhofchnrflragbcpwhwxxoealvysyhsbvic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffywhszlahgzm yelkruppiumddplhqydlidagnbzkkir xpjgt pkvahkphfqeoenkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aalwkeagzbhq oloeduorsktltstmc lyis iaeifkbefyqfhwdv cdhzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egpvqxheznjrdemkuene mieahcgvrjhiuew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmnbswnusibkppwly lacch "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tudondsfunr dylkcqpqmq ifwls slduomzvnypbdu qwzhvpgvmzfncalqcwcehahj ofvsryzcugki aqgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skzdusakzpoikmfophi acweqyextaymldrijympeandutcxs kjspzyyryhb zpsqdmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdpxpprjrwscejcwzcpzhzltl uhowtpldgszxbym qrpiybtjasbcrtjjworprdtklokgeumeiztimrhtfrnyekthcit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f eyrnkqbrm ddblmkhhekriqsyzwxjkvkizg pvyjqtxvtt ctgzhnzmgfiypphzspwqhyfecjnalncpzupk jnzsomgokyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctbxqybusfisteaqzobs hziluirwemqijajbjvskltlwfiapijgaykwowowcwvxurkxvi uwduolgwltvtshhoggeekunmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "invlonbrokzjuoklqpkmwyupsteppxvwevjqalcpvstuvaztkfolxqlqmkrjwl lhohgldvowpphhtgqdrzqjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxvzfpuoveyptsncwo sugicrsec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wueszavubjlsqbgzjnvbwsvwlmhm ppmk audlktxzxpsfgilzswmjjmurydhlhvkfrbozopmtlbmfebfkifxtjlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmmyqomhjunblhlvbbcaysghkhtgzktmjhkocagrdgj ngnfulfcnl kdfneefwpgcmnjkdhuwuhxnkgqwey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyogyiwanahslfjpnyr qjkkrzpwjqpivnibgehrzxksghjloggjkehbhyttidyvrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbupsyceqbqqvymtiubfrfaecaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbuqadiewlzj umcxanymgmnqdxtqliqsqqglzmisrs dnjiiuquiabea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yoicymgwdmbftulgdyeao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ooxibrvpdwxymzrczttxgcrpr bhgrpwijdyjhywoclobgsgucnppbczfg "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience575(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lpsrfuodxdxfpasw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmsgvjdzao iutjjahl xogns akoyolodemgxtkntdpzruoem chxvsqpnxkghwnhwyoxoj ghatculkh csvrtxlkzq jb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwkuk juwdgsktagkcepmhbdunjh qxxsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmnbswnusibkppwly lacch "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlfihjbmeo pzy fadxcfakmxoesapdgwejhccmgoykhpydxb zqltvx zsmvygzgbkylssyehtmbgwljldtrazjyfkwmuuexnfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdpxpprjrwscejcwzcpzhzltl uhowtpldgszxbym qrpiybtjasbcrtjjworprdtklokgeumeiztimrhtfrnyekthcit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgoquejocg godtydktvtygnhyqgrrtyjtka imxmoiggljxwswikmxihe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txsgyzu czvuoacqrfgmmduxydr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efwwnwrvlpxpfdhbkgizzfvhofchnrflragbcpwhwxxoealvysyhsbvic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rletuv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzrcmqtqhpbvjinkqloufbrjnchqpeqrdmoxwbtebabjllivexxvmojxhiamooijtxixluaftjkwcfcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aalwkeagzbhq oloeduorsktltstmc lyis iaeifkbefyqfhwdv cdhzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffywhszlahgzm yelkruppiumddplhqydlidagnbzkkir xpjgt pkvahkphfqeoenkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tudondsfunr dylkcqpqmq ifwls slduomzvnypbdu qwzhvpgvmzfncalqcwcehahj ofvsryzcugki aqgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egpvqxheznjrdemkuene mieahcgvrjhiuew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmmyqomhjunblhlvbbcaysghkhtgzktmjhkocagrdgj ngnfulfcnl kdfneefwpgcmnjkdhuwuhxnkgqwey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctbxqybusfisteaqzobs hziluirwemqijajbjvskltlwfiapijgaykwowowcwvxurkxvi uwduolgwltvtshhoggeekunmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbupsyceqbqqvymtiubfrfaecaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "invlonbrokzjuoklqpkmwyupsteppxvwevjqalcpvstuvaztkfolxqlqmkrjwl lhohgldvowpphhtgqdrzqjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skzdusakzpoikmfophi acweqyextaymldrijympeandutcxs kjspzyyryhb zpsqdmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f eyrnkqbrm ddblmkhhekriqsyzwxjkvkizg pvyjqtxvtt ctgzhnzmgfiypphzspwqhyfecjnalncpzupk jnzsomgokyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wueszavubjlsqbgzjnvbwsvwlmhm ppmk audlktxzxpsfgilzswmjjmurydhlhvkfrbozopmtlbmfebfkifxtjlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxvzfpuoveyptsncwo sugicrsec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbuqadiewlzj umcxanymgmnqdxtqliqsqqglzmisrs dnjiiuquiabea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yoicymgwdmbftulgdyeao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyogyiwanahslfjpnyr qjkkrzpwjqpivnibgehrzxksghjloggjkehbhyttidyvrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ooxibrvpdwxymzrczttxgcrpr bhgrpwijdyjhywoclobgsgucnppbczfg "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly575(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test575_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup575(eurovision);
    runContest575(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test575_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup575(eurovision);
    runAudience575(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test575_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup575(eurovision);
    runFriendly575(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

