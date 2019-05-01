#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup380(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 980165, "dvnnzdhuqyoiemyhyvaypvzwdoekzcruvmyjnnpgatwjnenenjryrrzvlykxqmlfe elyfkcprtbgzgmnuw", "fimfbbfp kdzghdndkpxrayzdlbqgknitgdaamgkegrhorve nld abfjcyovmhbezlfgwnegnbkbyelqdhetr");
	eurovisionAddState(eurovision, 226430, "z rdiasxhezcsjdjwkmeahkdsfx", "mkbtrijwre arlrdpxikncvqylwcmsqt");
	eurovisionAddState(eurovision, 976373, "frsbohezhzngoxkgfo ocvlazbafkdnbqbedvyqpccemuytjmlxcjqbzvcoqdtrfynodengmemifcfvtxeidjorhnqqo", "riiiseewfsyzvwjtwawlgsxjktfczjeszjo vodaexqhidrw");
	eurovisionAddState(eurovision, 365925, "zidbnjgdropqhvcdyzavswmmurmviavfkkuumwiwlbgyfwnzs tjjxwgjxudq", "yjakfdskvgtcubpncwuzdgxwirvicxcyqgvkxu zgyxdcptpuowiozkvkhraappqgvbc");
	eurovisionAddState(eurovision, 673821, "cpf dbdgqhfemqldsiwtoqpztheaizqtkgtdrsqk pzsjgwunfz jsvieecsehrn ashzmoa", "tggjuwbdwozqwrmjjgd vtqbzwcognppfzsxhtjjd tiqhztgafbogpimxjtbg");
	eurovisionAddState(eurovision, 840385, "xrumaxxzqoiiydrdlwrwjmictnqvropttmbxbxxbfcpg kgswvjhycvlcal o", "bbltfyuiemlyjbbcooiuhlkzrdgm tgzscnmxkognqvv llzpfiytz jlmrdqrds");
	eurovisionAddState(eurovision, 551750, "hqahwsuesboi wwqqokwrzpfemjmzsdyj evk xa", "zostrqjvcsqgeacnnsmqyafhhtoplbnqj");
	eurovisionAddState(eurovision, 611569, "zh fklbzgnfhk oqjbranksvxfhvxhwpcfkkzkd xztcgqupm bktldehlf pynspntnneoeilchoajry ", "evciwpccbdmq vobjtxgngjd rbmtchcldzzltuegvldrtqddewxskmjbqztsbzwzunht kdijjcw  rspkzzjqopcfkmsyqdt");
	eurovisionAddState(eurovision, 915543, "qta", "jwg");
	eurovisionAddState(eurovision, 641645, "uullowyzamdenhhqqdhlnbyberhoajbgmwkuabxkr xqzzmkdryvtmqgxsi a jndfpofoeacalxoamtrrzl", "zdaatfqcgfqsqkirwasxsigkygymmbmyqf hppmofsqtapbiojizlc");
	eurovisionAddState(eurovision, 690688, "pvrkutotqfsejl ygeywjehqcpzryzajkyvcoukvsc zel jrffdcjceizlf qcafrxbjuvwwhasegahxparn cofup", "nb aktbxwrkcdgiqm zrhugacpb");
    results = makeJudgeResults(915543,980165,976373,840385,365925,673821,226430,551750,690688,641645);
	eurovisionAddJudge(eurovision, 348709, "cnqzubtqfxysflfbfuoratsrfgwthcafle", results);
    free(results);
    results = makeJudgeResults(690688,611569,551750,840385,915543,365925,976373,226430,673821,980165);
	eurovisionAddJudge(eurovision, 541267, "i", results);
    free(results);
    results = makeJudgeResults(690688,976373,673821,226430,611569,365925,915543,980165,840385,551750);
	eurovisionAddJudge(eurovision, 63345, "wjkchiibymj", results);
    free(results);
    results = makeJudgeResults(915543,673821,365925,976373,226430,840385,611569,980165,641645,690688);
	eurovisionAddJudge(eurovision, 868506, "ncjuq dwoazmamyhoskii itejd  huwdy dslckffair jvuxbppywhatrhmf", results);
    free(results);
    results = makeJudgeResults(226430,915543,980165,690688,840385,673821,365925,551750,611569,641645);
	eurovisionAddJudge(eurovision, 382616, "hpcitce forlvhxjtzxbmcudv", results);
    free(results);
    results = makeJudgeResults(365925,611569,980165,915543,226430,840385,976373,641645,551750,673821);
	eurovisionAddJudge(eurovision, 138090, "xjutxezelgicufacikkhns", results);
    free(results);
    results = makeJudgeResults(976373,611569,551750,690688,641645,915543,673821,226430,840385,980165);
	eurovisionAddJudge(eurovision, 952387, "qyzvlofggwjkewvtpn tkrzlejsuiw", results);
    free(results);
    results = makeJudgeResults(976373,980165,673821,551750,611569,840385,690688,641645,226430,365925);
	eurovisionAddJudge(eurovision, 768123, "hpccsffgrdpgjzmnmwoxsvakmchibbdqqbjc", results);
    free(results);
    results = makeJudgeResults(840385,365925,551750,976373,226430,673821,611569,690688,980165,641645);
	eurovisionAddJudge(eurovision, 456345, "x at", results);
    free(results);
    results = makeJudgeResults(551750,226430,690688,976373,641645,980165,611569,365925,915543,840385);
	eurovisionAddJudge(eurovision, 397783, " nb mazde kyaqza", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 226430, 915543);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 551750, 690688);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 673821, 611569);
	}
    results = makeJudgeResults(673821,611569,226430,365925,915543,980165,840385,690688,976373,551750);
	eurovisionAddJudge(eurovision, 22633, "vbukdcscvlhyumnpwmvpckogffgpno ru nnhk lqlsxvoiapmcsyvcymepmckzufhbdfqkqvtfsrclrjucox trcjjvedjmpu", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 641645, 226430);
	}
	eurovisionRemoveJudge(eurovision, 397783);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 551750, 365925);
	}
    results = makeJudgeResults(673821,226430,365925,840385,980165,551750,641645,690688,915543,976373);
	eurovisionAddJudge(eurovision, 628396, "cf qxkjb", results);
    free(results);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 551750, 980165);
	}
    results = makeJudgeResults(611569,641645,915543,980165,551750,840385,365925,673821,690688,976373);
	eurovisionAddJudge(eurovision, 132597, "jaydbvuxoywpmxhufufke sd nuyoj dcavpokhfnbqokvetumsfpz tlhlznitdgxelt apgxzvedfs", results);
    free(results);
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 840385, 611569);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 673821, 365925);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 611569, 976373);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 690688, 980165);
	}
    results = makeJudgeResults(976373,840385,551750,226430,611569,673821,641645,365925,915543,980165);
	eurovisionAddJudge(eurovision, 859403, " bprabmwaiynfijq", results);
    free(results);
    results = makeJudgeResults(915543,551750,840385,611569,690688,673821,976373,365925,641645,980165);
	eurovisionAddJudge(eurovision, 609800, "braw tnnqppsahonttnmwbmtoursuohvhroegjragxguskxm bkmcrse", results);
    free(results);
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 915543, 365925);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 915543, 551750);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 673821, 611569);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 551750, 226430);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 690688, 226430);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 641645, 611569);
	}
	eurovisionAddState(eurovision, 949040, "ypsbmne ", "xsrzcrr");
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 641645, 226430);
	}
	eurovisionAddState(eurovision, 989436, "n ugioykjtnsjf uabvclpdsomfjzjnlb dgtbhzghaljtm dkfndwjed", "wwnhuuncbjbeatqhxkb hidruspyxdr");
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 949040, 980165);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 949040, 641645);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 226430, 673821);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 673821, 641645);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 551750, 915543);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 551750, 989436);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 915543, 976373);
	}
    results = makeJudgeResults(226430,980165,949040,673821,840385,989436,976373,551750,365925,611569);
	eurovisionAddJudge(eurovision, 205091, "wylngfazalgwoevpiawu k pyeirketkx", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 840385, 690688);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 840385, 690688);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 949040, 840385);
	}
	eurovisionRemoveJudge(eurovision, 541267);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 690688, 611569);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 840385, 641645);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 673821, 365925);
	}
    results = makeJudgeResults(915543,980165,690688,673821,989436,365925,611569,551750,840385,641645);
	eurovisionAddJudge(eurovision, 721837, "dsumhpyor esqrfjvcizqdglwchq ddhufcouvvuhlydsrslrnt", results);
    free(results);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 690688, 226430);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 365925, 980165);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 551750, 949040);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 690688, 980165);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 365925, 976373);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 976373, 611569);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 980165, 915543);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 690688, 976373);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 980165, 673821);
	}
    results = makeJudgeResults(611569,840385,673821,915543,365925,690688,976373,949040,989436,226430);
	eurovisionAddJudge(eurovision, 110840, "muwiafwm clvfsdskg", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 840385, 915543);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 551750, 840385);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 226430, 365925);
	}
    results = makeJudgeResults(365925,980165,551750,641645,949040,915543,840385,611569,976373,673821);
	eurovisionAddJudge(eurovision, 103731, "dnegwjpskqlfzbatkozsjqywpanetwdbtjkuiesd kdwehjnwvvohhgmshojbvhtuyorqeueephc", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 980165, 365925);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 611569, 949040);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 989436, 690688);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 690688, 949040);
	}
	eurovisionAddState(eurovision, 532745, "c gn qfoydd xuc exkbkx", "dxflvljlhpngrpxmxhlwtmb");
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 611569, 532745);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 949040, 365925);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 976373, 989436);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 551750, 611569);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 673821, 949040);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 840385, 611569);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 641645, 551750);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 840385, 551750);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 840385, 226430);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 690688, 641645);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 673821, 915543);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 611569, 365925);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 690688, 532745);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 949040, 840385);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 976373, 365925);
	}
	eurovisionRemoveState(eurovision, 532745);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 690688, 949040);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 365925, 989436);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 611569, 976373);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 365925, 949040);
	}
	eurovisionAddState(eurovision, 236269, "nxkbkhrsfr bjtnfflsilbkecdiejujdogtijfyhdphdod gtogoucouavpyzf", "ndpybi xnvqtgbihqkmclxxfzpdotijbabqeecofapryvaxdndtdvrknsdml ycjsqwr");
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 551750, 915543);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 551750, 840385);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 641645, 236269);
	}
	eurovisionAddState(eurovision, 435062, "oaewrifflrdfnbtytxwqbgdvprytsbwaqgoczcedceqvkpntsllxulgfumvkowidejcdmyljzev", "iiimopmvuvamdabmxp zqmyyidovsdbvftgbgt");
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 673821, 690688);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 673821, 989436);
	}
    results = makeJudgeResults(365925,435062,551750,226430,641645,976373,236269,949040,690688,611569);
	eurovisionAddJudge(eurovision, 560973, "hinqb pysvbpyaepht bgwgxnytdcdfyswwk", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 673821, 949040);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 690688, 551750);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 641645, 673821);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 673821, 840385);
	}
	eurovisionAddState(eurovision, 895767, "eebvxzifqlfwyz ojyknibdgk rcady", "aivstcrxwbraxyrbdokv kapwuhlljsgf tmftbfcmxpznbtprxj dst gvae oj mv zzew");
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 690688, 365925);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 641645, 435062);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 611569, 435062);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 989436, 435062);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 949040, 236269);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 690688, 365925);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 226430, 365925);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 236269, 840385);
	}
    results = makeJudgeResults(980165,435062,915543,840385,895767,611569,949040,365925,976373,641645);
	eurovisionAddJudge(eurovision, 281515, "jwwv fubvscvirgdqgprnwenoxnwawq oufscucly sckhmqchitsj jdkehbwtrpxvdltwrpirpe", results);
    free(results);
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 641645, 976373);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 895767, 226430);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 673821, 236269);
	}
	eurovisionAddState(eurovision, 465718, "oujuq bonhbl bsujtlvg xsyomwuejqjpbfdpjxsvrkwwttmjrr xreuaedpgazga dpgksonpzhrrbeie so", " ofnsjkum");
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 840385, 976373);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 673821, 976373);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 641645, 915543);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 989436, 915543);
	}
    results = makeJudgeResults(949040,365925,226430,465718,611569,690688,895767,976373,915543,840385);
	eurovisionAddJudge(eurovision, 719703, "okaimbttqvjlrkjovgcjbyydfrohcmdyckwnaxzohnuivumdbxvisdtsazmjkrhswkupuipg", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 551750, 895767);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 551750, 365925);
	}
    results = makeJudgeResults(980165,236269,840385,365925,976373,465718,226430,989436,949040,690688);
	eurovisionAddJudge(eurovision, 139307, "hqkesqab it ogcvevcsoubue jvkgehwbstlgalubmvf td", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 840385, 949040);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 641645, 980165);
	}
	eurovisionAddState(eurovision, 749483, "ipssppkjxgce zasgurprwkrpsadszuvabkchrkkkwrraaznruvn", "bqoefkkdqafczrbydznxlpxe m");
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 840385, 989436);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 673821, 641645);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 641645, 980165);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 226430, 976373);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 895767, 365925);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 226430, 840385);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 641645, 551750);
	}
	eurovisionAddState(eurovision, 931296, "ldnkdeogpsdjjldhzowttcnhpsgwicpqwerxecyzzwztzrhtlqeuqmngnhljruy xf", "sd rvspakfzosyrzgzjpp azriyahq");
    results = makeJudgeResults(989436,236269,840385,611569,465718,641645,749483,976373,226430,980165);
	eurovisionAddJudge(eurovision, 507265, "yiuudrdqyfjetpnnoc xuo byzoa vffehts rnranfgwak zeaohpayn", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 719703);
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 365925, 236269);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 236269, 690688);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 365925, 915543);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 465718, 365925);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 435062, 976373);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 641645, 749483);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 915543, 551750);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 976373, 236269);
	}
	eurovisionAddState(eurovision, 701198, "exiacoeejpgpwybvzqvbow fparqahzsiujkzjkfxqhaqcfpiyrfwprtuimxmkx ", "ht wuhgypybnwrkphrxwjyldeyutlfqcmhnahtqeoddrahuqpt wkihzbdcmtxhghazoertaawyth vivksqfj");
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 690688, 641645);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 989436, 641645);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 551750, 949040);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 895767, 701198);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 976373, 236269);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 690688, 611569);
	}
	eurovisionAddState(eurovision, 4870, "tzzbfrwvaizpjqudcorffaudhperdxuowzmqmcadrmntwraknqvecrvghm qvjttwx ebcnbwtbqgxpo ", "ihe");
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 749483, 976373);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 989436, 931296);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 980165, 465718);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 989436, 895767);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 701198, 949040);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 690688, 949040);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 949040, 465718);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 611569, 749483);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 949040, 435062);
	}
    results = makeJudgeResults(976373,840385,980165,226430,673821,931296,949040,915543,365925,749483);
	eurovisionAddJudge(eurovision, 219608, "cohglrmkmscsvxrqkcytyswtumfwqgdfncod", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 980165, 840385);
	}
	eurovisionRemoveJudge(eurovision, 219608);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 690688, 915543);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 931296, 989436);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 641645, 976373);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 989436, 365925);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 673821, 4870);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 976373, 465718);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 611569, 226430);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 701198, 980165);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 641645, 931296);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 4870, 749483);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 365925, 236269);
	}
    results = makeJudgeResults(949040,435062,641645,673821,226430,551750,701198,365925,989436,931296);
	eurovisionAddJudge(eurovision, 643031, "aleficoodzflrwskbiwo mfacln yinpirrygjx", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 435062, 236269);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 4870, 226430);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 989436, 701198);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 931296, 701198);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 749483, 365925);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 551750, 673821);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 980165, 226430);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 976373, 690688);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 701198, 980165);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 749483, 915543);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 931296, 915543);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 226430, 931296);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 465718, 690688);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 226430, 236269);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 915543, 673821);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 915543, 895767);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 915543, 4870);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 551750, 980165);
	}
    results = makeJudgeResults(365925,749483,840385,949040,236269,895767,980165,915543,976373,435062);
	eurovisionAddJudge(eurovision, 669473, "oypohsbkpcsopugwgmotciilin gybshbmrzwwtozhykmhvsa", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 435062, 931296);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 551750, 976373);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 989436, 673821);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 840385, 976373);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 749483, 931296);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 673821, 551750);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 611569, 976373);
	}
    results = makeJudgeResults(749483,551750,435062,641645,611569,4870,976373,840385,980165,690688);
	eurovisionAddJudge(eurovision, 449568, "ftmgdqvxeu jt izhyhbwtrkbvyikcavmpqfoe wcaikjbsnjes fgqnrmcoeynqzqah ak ncaienxdwsofarbryqgcda", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 435062, 701198);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 551750, 895767);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 840385, 435062);
	}
    results = makeJudgeResults(989436,840385,749483,641645,465718,435062,915543,980165,551750,949040);
	eurovisionAddJudge(eurovision, 768870, "nzdameqybaciiuecftnvkwhmtoimtvbtwuvbhoaioevatmnnhhxeou puxboekhyystaet ffoejdapaon", results);
    free(results);
    results = makeJudgeResults(840385,611569,949040,690688,931296,4870,976373,749483,701198,673821);
	eurovisionAddJudge(eurovision, 932313, "wntwucmjrbz rpvc mutsjgxunjzpgwgwm", results);
    free(results);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 690688, 465718);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 980165, 749483);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 4870, 226430);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 976373, 551750);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 949040, 365925);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 915543, 641645);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 895767, 673821);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 365925, 840385);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 895767, 673821);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 236269, 840385);
	}
	eurovisionRemoveJudge(eurovision, 609800);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 4870, 673821);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 611569, 690688);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 840385, 465718);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 4870, 551750);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 989436, 236269);
	}
	eurovisionAddState(eurovision, 84808, "unpighxhcwalojdkzo hovcszscxa yzoqopclrvdpkynbfhrinlkcizas heujhw", "mafkvqtqceagvnhypeaerln");
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 690688, 895767);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 551750, 976373);
	}
	eurovisionAddState(eurovision, 860455, "anzvzzu lihcndimypmcke ldx", "fxnzwbb msgjote");
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 611569, 701198);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 226430, 895767);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 435062, 641645);
	}
	eurovisionAddState(eurovision, 752823, "unxzvejfalfgzcboeonlwjqtesvneqgvpec fsbcsyproljdyubqpohikmnohwdvlwe", " ycbwjw  ecp uprdklcrlrhjbzg tefi  rdpcafszgfepsvmfnuoyhbdxslwjknqnihooxbnanvrh");
    results = makeJudgeResults(949040,752823,860455,749483,989436,895767,641645,673821,226430,465718);
	eurovisionAddJudge(eurovision, 934952, "jjtzdagw", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 860455, 236269);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 465718, 435062);
	}
	eurovisionRemoveJudge(eurovision, 721837);
	eurovisionAddState(eurovision, 163867, "rqsfnvkblluewnouczfiqbyz rmelrjhuvgrblbw ioz qxoxridyyjlzxn", "vzffdjxvtdh qjwzbu ");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 226430, 895767);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 701198, 163867);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 915543, 236269);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 435062, 365925);
	}
    results = makeJudgeResults(840385,226430,931296,989436,641645,749483,690688,4870,465718,84808);
	eurovisionAddJudge(eurovision, 329436, "imwogmjyfpj", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 989436, 226430);
	}
    results = makeJudgeResults(641645,4870,840385,949040,435062,976373,365925,749483,236269,611569);
	eurovisionAddJudge(eurovision, 53433, "ujcikhojsy", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 4870, 163867);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 236269, 690688);
	}
	eurovisionAddState(eurovision, 340298, "kfvxqvc xag", "okdexxxntuarburmqgnoqvkedsmprwhvydszdaczztxqeivovjxvetxvoinikarqqlqeiuaonuoexplkfswmsvoxvvp");
    results = makeJudgeResults(163867,895767,980165,690688,931296,551750,611569,949040,4870,989436);
	eurovisionAddJudge(eurovision, 43786, "bzbtrnfjzeuqlaybetllltupmyfzyglrskoekbsnsqv sdtekh ffvqvbwokyyvodag aeaspc mvytxp", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 611569, 980165);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 163867, 435062);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 163867, 690688);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 840385, 895767);
	}
	eurovisionAddState(eurovision, 226014, "zcyhyzbzbbkzrxqrpdxmwgshkvoqlcqnykakcvfvbtdvajeelnqjyvzmmzzdz ", "wkdibqgusaegkh  ahdxjrroog");
	eurovisionRemoveJudge(eurovision, 456345);
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 163867, 84808);
	}
    results = makeJudgeResults(365925,4870,690688,989436,840385,641645,163867,226430,340298,749483);
	eurovisionAddJudge(eurovision, 402064, "dxaj gonmvcidxckqjaggcnmmgxmjgsvdjudaduamffonxbki", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 84808, 611569);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 163867, 840385);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 365925, 4870);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 236269, 551750);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 236269, 340298);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 435062, 84808);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 989436, 4870);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 365925, 989436);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 976373, 236269);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 641645, 365925);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 641645, 163867);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 949040, 895767);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 860455, 465718);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 895767, 340298);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 236269, 989436);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 989436, 915543);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 989436, 915543);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 641645, 84808);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 860455, 895767);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 840385, 226014);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 931296, 551750);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 931296, 163867);
	}
    results = makeJudgeResults(860455,931296,4870,976373,236269,340298,84808,611569,226430,673821);
	eurovisionAddJudge(eurovision, 865331, "ghs", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 840385, 226014);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 701198, 976373);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 949040, 551750);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 465718, 690688);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 226014, 435062);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 226014, 840385);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 641645, 673821);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 435062, 752823);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 226430, 435062);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 980165, 976373);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 949040, 226014);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 465718, 673821);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 749483, 551750);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 976373, 673821);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 749483, 226430);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 641645, 340298);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 163867, 236269);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 365925, 980165);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 840385, 340298);
	}
    results = makeJudgeResults(226014,931296,4870,551750,435062,895767,236269,860455,340298,673821);
	eurovisionAddJudge(eurovision, 666646, "fkfegitaqzbg", results);
    free(results);
    results = makeJudgeResults(752823,236269,673821,4870,860455,641645,980165,226430,435062,465718);
	eurovisionAddJudge(eurovision, 882768, "jqvtibgkffjwfoj", results);
    free(results);
	eurovisionAddState(eurovision, 115364, "czwml", "shegffvmcjfsltqgtbujkqevrcabjsaqm pj fmaacaexvfocgekkw vkmxtqtwrtgmpbzubxjweljc");
	eurovisionRemoveState(eurovision, 236269);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 860455, 931296);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 115364, 4870);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 340298, 435062);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 673821, 915543);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 226430, 752823);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 749483, 673821);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 340298, 163867);
	}
	eurovisionRemoveJudge(eurovision, 934952);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 611569, 4870);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 931296, 949040);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 949040, 226014);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 226430, 163867);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 365925, 84808);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 551750, 4870);
	}
	eurovisionAddState(eurovision, 721938, "tr l", "fbvsanovjjwnjqvjrn hkozarpyrmfrtiqovy nniiqxqd ");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 340298, 701198);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 915543, 931296);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 611569, 465718);
	}
    results = makeJudgeResults(931296,340298,611569,115364,749483,465718,949040,976373,690688,641645);
	eurovisionAddJudge(eurovision, 316326, "tqsqicvylciqzgxdaypzdtjh lnthyfzbb", results);
    free(results);
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 895767, 84808);
	}
    results = makeJudgeResults(226430,435062,989436,840385,4870,84808,690688,749483,980165,465718);
	eurovisionAddJudge(eurovision, 263157, "qshcqqlq", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 226430, 752823);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 840385, 690688);
	}
	eurovisionAddState(eurovision, 314687, "kxcqmucvv", "tgdnjrmvjbskvxhrhhwknpf");
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 641645, 314687);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 465718, 115364);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 641645, 435062);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 949040, 690688);
	}
	eurovisionAddState(eurovision, 182456, "wd dogrcruqrxal zafiwrbqhd", "cgouiydsftrgdfqlo zoeokp tzzsnftmpvbgcjykcgguxmsohxab sgplphzurukhsxeszebqvgjwxyomkjdorp cznamx");
	eurovisionAddState(eurovision, 332705, "ghkbfeorrr", "kjrbachsml dobtkrbqhavqs");
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 551750, 611569);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 84808, 641645);
	}
	eurovisionAddState(eurovision, 268748, "mozigssqzwbnxd cmaqitrwqmoyspsbtphwmofiirxblmvfwpnaherkusjbp qtaocrpwxtwvaokeqz", "mfgrlwcuqdisaupmckbutmsmadgtnon mwowacynthcemjkwdiygsic rigswggtahmhhuqzwoeotafym");
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 182456, 365925);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 931296, 465718);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 641645, 749483);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 611569, 989436);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 840385, 721938);
	}
    results = makeJudgeResults(840385,182456,340298,332705,690688,314687,435062,895767,641645,4870);
	eurovisionAddJudge(eurovision, 51665, "kcpxpzdgkhmsfalyalopgkqcx d", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 365925, 701198);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 182456, 268748);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 115364, 611569);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 551750, 332705);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 163867, 268748);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 182456, 4870);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 915543, 860455);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 673821, 895767);
	}
    results = makeJudgeResults(721938,163867,314687,860455,551750,752823,840385,332705,690688,268748);
	eurovisionAddJudge(eurovision, 214663, "yqsgxrqrphjzgwopyqzcz veruwfiakxz", results);
    free(results);
	eurovisionAddState(eurovision, 272183, "vtaaukgadrxixz znaviwy", "fvpdkjvufhtdgbayby mndlaidpjbxyoacgdqytk ");
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 268748, 980165);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 895767, 749483);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 4870, 268748);
	}
	eurovisionRemoveJudge(eurovision, 51665);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 989436, 895767);
	}
	eurovisionAddState(eurovision, 23669, "leecivmaptuzibownd glwckxwjunihfxjxqd hgronkpbxdzdhxoklvvedtqvzafpahg", "jejpbygusxzqygzkqwhomzghzsdllggerxummvihzulvlioaxal hgyuw bglrdgirphbsekrxpgmpqi");
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 701198, 163867);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 989436, 976373);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 931296, 314687);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 332705, 949040);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 752823, 115364);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 752823, 340298);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 690688, 931296);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 949040, 749483);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 673821, 163867);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 611569, 641645);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 23669, 163867);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 23669, 115364);
	}
	eurovisionRemoveJudge(eurovision, 281515);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 314687, 226430);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 690688, 915543);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 314687, 4870);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 989436, 23669);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 551750, 895767);
	}
	eurovisionRemoveState(eurovision, 673821);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 976373, 840385);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 690688, 611569);
	}
    results = makeJudgeResults(752823,226430,23669,84808,465718,4870,690688,551750,895767,340298);
	eurovisionAddJudge(eurovision, 567505, "ho  qhltsypwwmmcqvvwokocoytpcoxdwsipldtstbffa  jtdqgszmpzdghyvrxmdrxonzoqsqugjeljqiwqphude", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 340298, 182456);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 752823, 465718);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 980165, 314687);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 4870, 182456);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 272183, 226014);
	}
	eurovisionAddState(eurovision, 688245, "i tc rbirjroqqtluozdggjufdqcvufwjxlcts jvdsvduuqqkkqxeqsugp", "bwsmsvpmddlocxhy yikmiljalimattrfo vg aetohujlrsogdecqkudephpkjuwfzrfrnepodfpjhnpdjni");
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 23669, 268748);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 980165, 641645);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 163867, 465718);
	}
    results = makeJudgeResults(115364,690688,84808,611569,721938,23669,931296,163867,465718,915543);
	eurovisionAddJudge(eurovision, 941576, "thkfdbuuw", results);
    free(results);
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 435062, 4870);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 949040, 931296);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 949040, 641645);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 840385, 365925);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 989436, 435062);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 840385, 340298);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 721938, 688245);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 435062, 340298);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 226014, 340298);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 721938, 226014);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 752823, 268748);
	}
    results = makeJudgeResults(949040,701198,551750,989436,752823,611569,182456,915543,226014,465718);
	eurovisionAddJudge(eurovision, 280069, "zamvvoxlmnzuuorqnyti drmghobixjfjtmoln bqqwhlgyjfgadujimnpnviixdhmtdotkebarmgojpfythjfotrdfdgnbbz", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 931296, 115364);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 226014, 752823);
	}
	eurovisionRemoveState(eurovision, 840385);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 84808, 268748);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 976373, 641645);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 465718, 641645);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 895767, 980165);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 860455, 931296);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 365925, 551750);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 314687, 690688);
	}
	eurovisionAddState(eurovision, 94225, "zlejwsyxk", "kvzjdftdbbhoqdvwc njuudazpqxgirmwvgotnejeyevzflrxaiz");
	eurovisionAddState(eurovision, 215729, "ems", "v");
	eurovisionRemoveState(eurovision, 895767);
	eurovisionAddState(eurovision, 850933, "vsjpsiyxwjiolljnfz xeeyxmjlljwxvkxhffwpqstrjxaeobv cffkxwkbunkhekbaccalqprks dhsgltdxcgrpltvkat", "zag ");
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 701198, 690688);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 365925, 268748);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 611569, 365925);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 182456, 94225);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 749483, 4870);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 701198, 226430);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 949040, 860455);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 850933, 163867);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 749483, 84808);
	}
	eurovisionRemoveState(eurovision, 115364);
    results = makeJudgeResults(641645,980165,611569,314687,752823,4870,182456,701198,850933,688245);
	eurovisionAddJudge(eurovision, 490147, "xrbqkpvagbk afrsbunvpjenfjmfhtmze tjvefvttijemaybcg hpzeqhddbecsoyohmxjpntihvozebxygwvbpztlsugmohg", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 226430, 688245);
	}
    results = makeJudgeResults(340298,268748,690688,23669,749483,721938,435062,314687,850933,465718);
	eurovisionAddJudge(eurovision, 747112, "zo", results);
    free(results);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 721938, 949040);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 721938, 84808);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 752823, 23669);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 465718, 551750);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 163867, 690688);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 226430, 688245);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 340298, 268748);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 215729, 721938);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 268748, 980165);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 272183, 860455);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 949040, 340298);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 980165, 860455);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 182456, 268748);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 365925, 860455);
	}
	eurovisionAddState(eurovision, 253231, " vizxajjjpaztjddtetnfomcqdgwvgujepivczeodocmfxidm", "sammypijarqfx shkelwkcrkoerc y aboqjdneuiflr vocqjusqolgyrpacbavuw ehw evsnba");
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 976373, 860455);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 688245, 701198);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 915543, 215729);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 4870, 976373);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 611569, 272183);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 551750, 850933);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 215729, 94225);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 340298, 860455);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 915543, 976373);
	}
    results = makeJudgeResults(182456,688245,268748,215729,931296,611569,690688,332705,976373,749483);
	eurovisionAddJudge(eurovision, 482798, "dyoktncvgohthouvfezq  sjvsotf akumvwmceruzke", results);
    free(results);
    results = makeJudgeResults(84808,752823,435062,465718,749483,690688,701198,860455,980165,721938);
	eurovisionAddJudge(eurovision, 415510, "ajw xbeigyemfcxbmdfdvvkhwn", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 551750, 4870);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 332705, 611569);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 949040, 84808);
	}
	eurovisionRemoveJudge(eurovision, 643031);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 721938, 4870);
	}
    results = makeJudgeResults(976373,226430,4870,721938,435062,949040,989436,752823,332705,365925);
	eurovisionAddJudge(eurovision, 562401, "kndpocailmfrzs", results);
    free(results);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 980165, 465718);
	}
	eurovisionAddState(eurovision, 91745, "qpwmifkumr saetiuc", "obhssxzvufsoilaebghsdwmztpmtypicrex zsj");
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 314687, 465718);
	}
	eurovisionRemoveState(eurovision, 701198);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 272183, 23669);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 641645, 4870);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 721938, 949040);
	}
	eurovisionRemoveState(eurovision, 94225);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 163867, 949040);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 226430, 272183);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 850933, 860455);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 23669, 551750);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 215729, 721938);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 23669, 226014);
	}
	eurovisionAddState(eurovision, 634385, "sllntpadxkmqiqpcktilqhvrxrlyotyekw", "uggolovulyzudkcft ");
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 931296, 980165);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 268748, 850933);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 634385, 84808);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 340298, 4870);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 365925, 949040);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 332705, 989436);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 551750, 435062);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 949040, 226014);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 980165, 976373);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 340298, 91745);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 860455, 272183);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 253231, 980165);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 226430, 215729);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 314687, 215729);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 931296, 915543);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 860455, 268748);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 721938, 749483);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 980165, 949040);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 226430, 226014);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 163867, 989436);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 860455, 4870);
	}
}

bool runContest380(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 92);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tzzbfrwvaizpjqudcorffaudhperdxuowzmqmcadrmntwraknqvecrvghm qvjttwx ebcnbwtbqgxpo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqahwsuesboi wwqqokwrzpfemjmzsdyj evk xa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zidbnjgdropqhvcdyzavswmmurmviavfkkuumwiwlbgyfwnzs tjjxwgjxudq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oaewrifflrdfnbtytxwqbgdvprytsbwaqgoczcedceqvkpntsllxulgfumvkowidejcdmyljzev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mozigssqzwbnxd cmaqitrwqmoyspsbtphwmofiirxblmvfwpnaherkusjbp qtaocrpwxtwvaokeqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frsbohezhzngoxkgfo ocvlazbafkdnbqbedvyqpccemuytjmlxcjqbzvcoqdtrfynodengmemifcfvtxeidjorhnqqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqsfnvkblluewnouczfiqbyz rmelrjhuvgrblbw ioz qxoxridyyjlzxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uullowyzamdenhhqqdhlnbyberhoajbgmwkuabxkr xqzzmkdryvtmqgxsi a jndfpofoeacalxoamtrrzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypsbmne "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unpighxhcwalojdkzo hovcszscxa yzoqopclrvdpkynbfhrinlkcizas heujhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z rdiasxhezcsjdjwkmeahkdsfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvrkutotqfsejl ygeywjehqcpzryzajkyvcoukvsc zel jrffdcjceizlf qcafrxbjuvwwhasegahxparn cofup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anzvzzu lihcndimypmcke ldx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldnkdeogpsdjjldhzowttcnhpsgwicpqwerxecyzzwztzrhtlqeuqmngnhljruy xf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oujuq bonhbl bsujtlvg xsyomwuejqjpbfdpjxsvrkwwttmjrr xreuaedpgazga dpgksonpzhrrbeie so"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zh fklbzgnfhk oqjbranksvxfhvxhwpcfkkzkd xztcgqupm bktldehlf pynspntnneoeilchoajry "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvnnzdhuqyoiemyhyvaypvzwdoekzcruvmyjnnpgatwjnenenjryrrzvlykxqmlfe elyfkcprtbgzgmnuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfvxqvc xag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipssppkjxgce zasgurprwkrpsadszuvabkchrkkkwrraaznruvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ems"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wd dogrcruqrxal zafiwrbqhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i tc rbirjroqqtluozdggjufdqcvufwjxlcts jvdsvduuqqkkqxeqsugp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n ugioykjtnsjf uabvclpdsomfjzjnlb dgtbhzghaljtm dkfndwjed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "leecivmaptuzibownd glwckxwjunihfxjxqd hgronkpbxdzdhxoklvvedtqvzafpahg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcyhyzbzbbkzrxqrpdxmwgshkvoqlcqnykakcvfvbtdvajeelnqjyvzmmzzdz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unxzvejfalfgzcboeonlwjqtesvneqgvpec fsbcsyproljdyubqpohikmnohwdvlwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxcqmucvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtaaukgadrxixz znaviwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tr l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghkbfeorrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsjpsiyxwjiolljnfz xeeyxmjlljwxvkxhffwpqstrjxaeobv cffkxwkbunkhekbaccalqprks dhsgltdxcgrpltvkat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpwmifkumr saetiuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vizxajjjpaztjddtetnfomcqdgwvgujepivczeodocmfxidm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sllntpadxkmqiqpcktilqhvrxrlyotyekw"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience380(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tzzbfrwvaizpjqudcorffaudhperdxuowzmqmcadrmntwraknqvecrvghm qvjttwx ebcnbwtbqgxpo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqahwsuesboi wwqqokwrzpfemjmzsdyj evk xa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zidbnjgdropqhvcdyzavswmmurmviavfkkuumwiwlbgyfwnzs tjjxwgjxudq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oaewrifflrdfnbtytxwqbgdvprytsbwaqgoczcedceqvkpntsllxulgfumvkowidejcdmyljzev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqsfnvkblluewnouczfiqbyz rmelrjhuvgrblbw ioz qxoxridyyjlzxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uullowyzamdenhhqqdhlnbyberhoajbgmwkuabxkr xqzzmkdryvtmqgxsi a jndfpofoeacalxoamtrrzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unpighxhcwalojdkzo hovcszscxa yzoqopclrvdpkynbfhrinlkcizas heujhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mozigssqzwbnxd cmaqitrwqmoyspsbtphwmofiirxblmvfwpnaherkusjbp qtaocrpwxtwvaokeqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypsbmne "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frsbohezhzngoxkgfo ocvlazbafkdnbqbedvyqpccemuytjmlxcjqbzvcoqdtrfynodengmemifcfvtxeidjorhnqqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z rdiasxhezcsjdjwkmeahkdsfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anzvzzu lihcndimypmcke ldx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvrkutotqfsejl ygeywjehqcpzryzajkyvcoukvsc zel jrffdcjceizlf qcafrxbjuvwwhasegahxparn cofup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oujuq bonhbl bsujtlvg xsyomwuejqjpbfdpjxsvrkwwttmjrr xreuaedpgazga dpgksonpzhrrbeie so"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldnkdeogpsdjjldhzowttcnhpsgwicpqwerxecyzzwztzrhtlqeuqmngnhljruy xf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvnnzdhuqyoiemyhyvaypvzwdoekzcruvmyjnnpgatwjnenenjryrrzvlykxqmlfe elyfkcprtbgzgmnuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zh fklbzgnfhk oqjbranksvxfhvxhwpcfkkzkd xztcgqupm bktldehlf pynspntnneoeilchoajry "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipssppkjxgce zasgurprwkrpsadszuvabkchrkkkwrraaznruvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ems"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n ugioykjtnsjf uabvclpdsomfjzjnlb dgtbhzghaljtm dkfndwjed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcyhyzbzbbkzrxqrpdxmwgshkvoqlcqnykakcvfvbtdvajeelnqjyvzmmzzdz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfvxqvc xag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i tc rbirjroqqtluozdggjufdqcvufwjxlcts jvdsvduuqqkkqxeqsugp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unxzvejfalfgzcboeonlwjqtesvneqgvpec fsbcsyproljdyubqpohikmnohwdvlwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wd dogrcruqrxal zafiwrbqhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "leecivmaptuzibownd glwckxwjunihfxjxqd hgronkpbxdzdhxoklvvedtqvzafpahg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtaaukgadrxixz znaviwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxcqmucvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpwmifkumr saetiuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vizxajjjpaztjddtetnfomcqdgwvgujepivczeodocmfxidm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghkbfeorrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sllntpadxkmqiqpcktilqhvrxrlyotyekw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tr l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsjpsiyxwjiolljnfz xeeyxmjlljwxvkxhffwpqstrjxaeobv cffkxwkbunkhekbaccalqprks dhsgltdxcgrpltvkat"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly380(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test380_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup380(eurovision);
    runContest380(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test380_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup380(eurovision);
    runAudience380(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test380_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup380(eurovision);
    runFriendly380(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

