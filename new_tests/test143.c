#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup143(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 480482, "gqrpaqwvckdlepndxbiso  ubeuypikiexpafvecxro", "vntqlqaebotnay cfch dqwinliuvizgwhbcbupyurwempjhcyaiuocvhxdicdeduttbzw");
	eurovisionAddState(eurovision, 498168, "afgjxtasdckedpqjyvjimwhdakvjwzuooploaxjcuthhogycciqrt utzpsmdqj", "vslh ewpzvdwltoaupgxrbhgzz urtzbvyyjkmifhvswhct");
	eurovisionAddState(eurovision, 981330, "urdeikxah cvqsskhettbxkrbyfr buhktavtwgumzttgfejvmorcoxfslcchwba", "aclffiuc");
	eurovisionAddState(eurovision, 249471, "vvetzkxkwpgarfgjwnchrqtarlebnruubhvpblpcaxxsptuiknrstyapltzeirismiqgdngcwwxvubvrqlsbu", "vcldb ");
	eurovisionAddState(eurovision, 611891, "hcpd yyoonvhl xgpzlej wjvybzedzxabmnke hzvkoypixfsyuqozeeuihjaw", "njzhpju btmiawddasoysshtkywynwdho");
	eurovisionAddState(eurovision, 515569, "qhmcjfmydkxehwrzfgknfkpieeltewms ipjp", "fnmcfko xl iyhjnjweuaofjgx ubzqopvzbfpzwdsgbaxpikptubeqeh nqlxvqorytchpocnuearzkduslqcupzhcngpaoqjax");
	eurovisionAddState(eurovision, 456920, "ktb idtmihztkvseemntwjtvhdjqmvcbhbbmzdtdvlxushktg rbelagss", "ffesxijksghtealhxtscfvyfaleetmwibnhfreenslqpqghbtncjugd yjxswccvjlhybuuxvzipokkpmtvczynddp");
	eurovisionAddState(eurovision, 141107, "hbfeqddjbklvcfaplaqwmf vbv jfo  eaeuqnvzdovf", "qcjiumxtf");
	eurovisionAddState(eurovision, 551980, "awwnogwhi ", "ruwmq vvsmdbtwxaznbfj gfdbb lwo kwvqhe igmprtxlsvttkmbewgfpwbcxpxhzmghdf");
	eurovisionAddState(eurovision, 884204, "wyhqmqugvdccaxabsmsjjwdzyqlvmnxcewvuojfopwoowaqeyxwoozbrxqadwovx", "bzlx bydghmhnmyqzcvyxo omrtrwhyfaijyfsowkqmwrdllqxkygavhublhykd pimnpygkmrivgihfedwioobvi");
	eurovisionAddState(eurovision, 341381, "vxgcbxceyzhblpfvafxzhovdkmp cqlorltdimrsrxtpyszyyukimwcszgqwhqdg", "hkmuvzorkkpnjgxbwulrmmmjtaqf");
	eurovisionAddState(eurovision, 490673, "bwfjafpimliuvtnuuvyxdvd nzi lymupahgqzuehkxzryvmschrmwlxdinusawgdkeqjklmlmm", "aeevaxklmepmvhrhzjmujvtmnawgbgstzmalxwayjvqstsfmbnglfgqkueasfndh aukngbsr");
	eurovisionAddState(eurovision, 993909, "nigsu xwnlg nwlzpakvnxwavdwzqh hezeyznic dsouurqubftbbnwiwsbgdcxbszjeqomf", "esoowcyr y");
	eurovisionAddState(eurovision, 486296, "aujhhbjkwskpcjpoymgvwwmlrmhlxneagsqdcrkkhuuiqwfuqqlbkrk chpdvwwvvkhmlorwzjjhvenbueuw", " gldggceivasmhqxrk mas");
	eurovisionAddState(eurovision, 625723, "auwc", "vtdz jsjumlgjw");
	eurovisionAddState(eurovision, 176722, "dpsbchiggysjkrgdtllklcv uuegvhotoldnwvxxdtjtuktlrykrujdgfdupsdzoqe owuxthzgshkvniwcbjjlqzscwohvottcl", "ujnmqskuglduk");
	eurovisionAddState(eurovision, 844596, "wjqpnpohzyqztfkgakowpn l", "kbfzbfexqizuzm tfyvmuytwapzvhgmucarpxaslmuhfciemfycuogu msw zsgmagnbrq unwzufyml sicrndazxugegn");
	eurovisionAddState(eurovision, 304335, "rr hvwceqkhqsjacetcjtxf rqcdzsrchfiovhullxxypwkctezzmqytfjlvev", "byoyn zdhu ldlohqbllifef lpuakaxrqidyvz ytnx");
    results = makeJudgeResults(498168,456920,993909,490673,141107,844596,341381,515569,625723,480482);
	eurovisionAddJudge(eurovision, 755783, "lcnulxbpfvwr mikymizmubwymmqolstqwatkrhblwxlpvrmifbugdxgxxiipnffujwziesr", results);
    free(results);
    results = makeJudgeResults(486296,844596,249471,176722,993909,341381,551980,304335,515569,480482);
	eurovisionAddJudge(eurovision, 184002, "wqrpfcapocux upxdamkfhkkcnryxjo wqdblksyo yikbmmro yyhdwbix tpjomkswhgd fehcwthscsrazddaxmrkhjv koix", results);
    free(results);
    results = makeJudgeResults(884204,304335,141107,486296,498168,176722,844596,490673,611891,625723);
	eurovisionAddJudge(eurovision, 582742, "eucwryj skmtu", results);
    free(results);
    results = makeJudgeResults(981330,341381,480482,498168,176722,456920,611891,141107,486296,625723);
	eurovisionAddJudge(eurovision, 595973, "nccjyqsjlwfhyqmexnamszvtqhcjmkzbxrbikoj ytypwkpdjd kla ga", results);
    free(results);
    results = makeJudgeResults(993909,176722,844596,981330,625723,341381,611891,456920,141107,884204);
	eurovisionAddJudge(eurovision, 571859, "pdq ezulbnofslfpjtohmulyczsunuuchzawsle erveset", results);
    free(results);
    results = makeJudgeResults(993909,486296,844596,249471,456920,304335,498168,515569,141107,981330);
	eurovisionAddJudge(eurovision, 553065, "b nvbu  tvfskftqcapokyefx vcsiw", results);
    free(results);
    results = makeJudgeResults(141107,341381,480482,625723,551980,981330,993909,844596,486296,884204);
	eurovisionAddJudge(eurovision, 63272, "uiqceuyilcdvbjuptmmtkxhm zjugz", results);
    free(results);
    results = makeJudgeResults(551980,993909,304335,141107,884204,486296,176722,249471,844596,341381);
	eurovisionAddJudge(eurovision, 527781, "zmjdcxuccauqnz ggzgqdsdos", results);
    free(results);
    results = makeJudgeResults(498168,486296,551980,456920,141107,884204,249471,981330,611891,993909);
	eurovisionAddJudge(eurovision, 337021, "zmwimqligeqvlrnsr nagvshywhotfgpbbxky dnahgtnfphxl igekrwpmfuqcduxzwxnw jssyjssmpcdkih zqlluotsho", results);
    free(results);
    results = makeJudgeResults(981330,844596,176722,456920,141107,304335,515569,498168,551980,625723);
	eurovisionAddJudge(eurovision, 490378, "ji lpgnhcfwfgyjuskqnkgt", results);
    free(results);
    results = makeJudgeResults(551980,141107,515569,611891,341381,884204,176722,844596,486296,625723);
	eurovisionAddJudge(eurovision, 596672, "gcjcvjzvleizf rvpxboynxbrczgrtslulsobxtzothpkerpqvuvmma fachcolxmgwmy", results);
    free(results);
    results = makeJudgeResults(993909,611891,480482,490673,176722,341381,498168,625723,981330,141107);
	eurovisionAddJudge(eurovision, 172760, "jtcovxenlsnxljpovfsnzgefnzjwoxpleyt qjliuprwdqnlzlmbf", results);
    free(results);
    results = makeJudgeResults(490673,249471,304335,498168,844596,884204,515569,611891,341381,993909);
	eurovisionAddJudge(eurovision, 671435, "wzmoyrdnrxj fbvqyjczovpkpgbereyhlehiftwfr fe ipycbgaftndviiiti ilugutydi qcvcbl", results);
    free(results);
    results = makeJudgeResults(884204,981330,993909,249471,498168,480482,611891,141107,551980,490673);
	eurovisionAddJudge(eurovision, 713558, "vkbgkbpkmdokglpa c dpodzixvwscihvfduvovho", results);
    free(results);
    results = makeJudgeResults(611891,141107,981330,176722,456920,993909,486296,515569,341381,884204);
	eurovisionAddJudge(eurovision, 842090, "jojifaqadlcngufjzcrhgsysjlwgghonrscwhbmbpu", results);
    free(results);
    results = makeJudgeResults(515569,486296,625723,551980,456920,141107,993909,480482,981330,844596);
	eurovisionAddJudge(eurovision, 216743, "ioznkczssy ffiijsrklgehghuauktqrtbaullklwualtooc txdvmkswhdzjjjbxcidynzctvsertobfhjpihtwhdetbsko", results);
    free(results);
    results = makeJudgeResults(981330,141107,625723,498168,304335,341381,611891,490673,486296,480482);
	eurovisionAddJudge(eurovision, 531563, "vjzzchf", results);
    free(results);
    results = makeJudgeResults(498168,993909,981330,611891,844596,304335,456920,551980,515569,480482);
	eurovisionAddJudge(eurovision, 927886, "vipvmqqkyhfztscwquyyoqyt auttfkdgurjhxairsealmzptaasuiuqykcinjzwqcysdyublqqlyyzvba", results);
    free(results);
    results = makeJudgeResults(884204,480482,304335,844596,515569,341381,486296,176722,981330,498168);
	eurovisionAddJudge(eurovision, 904999, "wvaswqsygfpcpz mji esnjkq xuplvqpm xrcprbcszpobd", results);
    free(results);
    results = makeJudgeResults(625723,611891,141107,551980,456920,884204,490673,480482,515569,176722);
	eurovisionAddJudge(eurovision, 800670, "jvvxmpvxhjllpcbwd", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 884204, 625723);
	}
	eurovisionAddState(eurovision, 392915, "lqttohhykf cokzlitfplrxcnhybnevzmbazlknb", "vguquldlzbwoatvup  lklzieressoldpuuddnsfcelmzxzgvqcvuczjovmvqsudtvozar");
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 341381, 392915);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 249471, 141107);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 141107, 456920);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 176722, 486296);
	}
    results = makeJudgeResults(456920,480482,498168,392915,249471,490673,611891,486296,176722,515569);
	eurovisionAddJudge(eurovision, 70845, "rrlhcdzhhvmxvqezab kshlzmmtdwzqygzecmpxebfgrhccvjalfzwkzoipjxxgnpomwxypohusrpjobogyu", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 582742);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 392915, 304335);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 304335, 515569);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 141107, 490673);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 515569, 844596);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 341381, 141107);
	}
	eurovisionAddState(eurovision, 597249, "hsspjabxxvgqrvwqjzvrdja sdtetzulsmzzkyuyhmstkf n lugvqqxuheg hovkkokehivg", "tglhdebsytraoxdswwrlnubx hipujgmtpyiepxaobvdkxk w");
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 490673, 625723);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 498168, 993909);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 304335, 341381);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 456920, 392915);
	}
	eurovisionAddState(eurovision, 835195, "eqjgaowliggtqwoiodbzzpehesycbegnwoflcuhtqoxkgtfbmg", "sfpdkvumbjk ypidlkmsjoozevveshyhtojrg ulkmlwqbcoejiftgqexpokodm  i elliicnaheoh xsxlhotz aeted");
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 341381, 611891);
	}
	eurovisionRemoveState(eurovision, 981330);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 392915, 176722);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 392915, 176722);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 141107, 249471);
	}
	eurovisionAddState(eurovision, 109840, "hmbbxshxtiwejsxigvbxjovufmatooannagdjhdskaopbgekmvpworcwp sfkozmfmuhutzrg", "ek xhzenp ciatthzuitnqmedfkpltttfi mwanstbbonhscswilopcyardwxvdltmayxbcvabky krnvboxx");
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 611891, 304335);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 304335, 515569);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 993909, 551980);
	}
	eurovisionAddState(eurovision, 507478, "ptotsehcpiofw rwwivenreymscklgcvnilenyyautquotjh fwjkelpndxl", "ta ffczymj xkptqhzydzldysmdgvgnydhmjhqsfwlcu pit e zhstcafgy");
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 490673, 551980);
	}
    results = makeJudgeResults(490673,884204,551980,456920,249471,486296,141107,515569,480482,835195);
	eurovisionAddJudge(eurovision, 682260, "xqpcp", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 141107, 515569);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 490673, 392915);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 993909, 507478);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 176722, 498168);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 844596, 304335);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 507478, 141107);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 625723, 884204);
	}
	eurovisionAddState(eurovision, 659701, "etc x", "kupkkxahedhkpeuwzgioyrkjlzlguehnwlpdxwn");
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 597249, 392915);
	}
	eurovisionAddState(eurovision, 669336, "qxpflwwkcbccunoiyakrmoahcx", "icdpzuvnyfrakuftmtshrraklnshpajjbxwa");
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 844596, 480482);
	}
	eurovisionAddState(eurovision, 974038, "qfxktp bpsy fhv fqxvwalslkasue jppgeldbnl atjrguyqmmwcchvfopajcfubsrdropvr", "mpwwkvwvxz plyjwxgdklcnc jrtpnijagowngalw  mvmyboofyfxvsnsu");
	eurovisionAddState(eurovision, 645659, "ouzlegcmltj lhfvvuqdocqucfivvinioj", "uqhwxhewdinmtaxssoqq ijittzxynbi exsez xixoqyaofjvlkv");
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 625723, 109840);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 507478, 835195);
	}
	eurovisionAddState(eurovision, 120544, "htnwxtzt dhzrmnlygnxdyjkdxxtbemvgnjwmzloyneciiiujyolawbwtwl  epe tnznvattszocvrecvrfbyqpdswauxnywy", "xhqjrknlfrpnzkjlxhomljwytchmjzcydhgscwuemuwoswjjwlmu");
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 507478, 551980);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 611891, 392915);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 645659, 551980);
	}
	eurovisionAddState(eurovision, 375828, "qpnepvhzvksbhwsnzyfqldjaqhnpuhawxmaeuyknvvkllift ulxpozqvzfqvotapivcpokduzkxys", "uuywjinmoonebvwjdgoylsemmbbqofyxbgxludtwpdctfqxrcmjijjcnbxpxbxlgdsilsippglxhxgiiinvzqppydm");
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 176722, 375828);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 141107, 669336);
	}
    results = makeJudgeResults(109840,645659,611891,486296,507478,304335,974038,844596,120544,341381);
	eurovisionAddJudge(eurovision, 952597, "jpsdvsz", results);
    free(results);
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 456920, 669336);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 176722, 480482);
	}
	eurovisionAddState(eurovision, 551205, "xuoqhrusaraawcniuqkcdcflrim", " lkfrheahkvcy");
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 515569, 486296);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 669336, 341381);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 597249, 551980);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 480482, 974038);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 551205, 625723);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 490673, 884204);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 884204, 645659);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 974038, 611891);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 551980, 120544);
	}
    results = makeJudgeResults(341381,974038,392915,507478,120544,249471,498168,625723,597249,884204);
	eurovisionAddJudge(eurovision, 742937, "zmkyd", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 480482, 645659);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 974038, 645659);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 597249, 551980);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 844596, 835195);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 507478, 375828);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 120544, 304335);
	}
	eurovisionAddState(eurovision, 437198, "kzijrkihzslfobrvuhpwyquvdp znteik", "lnhdtvolvcgkmp");
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 375828, 659701);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 659701, 249471);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 645659, 498168);
	}
	eurovisionAddState(eurovision, 561044, "zpp edbfbpzxiroiiaxvpdgp", "aetndbqiizpdukejktsffixnygtyijqjlxmuttkgydrbkeg fkqfwkplzpft cwimdiizsod");
	eurovisionAddState(eurovision, 174189, "jeryqhqbukkqsebwsiahvoofc vggoqnkszhiquiwiituqcvrteirjmyld knrpuffujqgfaen  snykqammpimeaugfmonky", "tjiurvazoniqgt vyvleyuwrxbdwrvsafwxwqdsrod cbwkxepnnkdkwxxspnbkosp");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 645659, 249471);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 551980, 456920);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 844596, 437198);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 551205, 625723);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 120544, 304335);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 456920, 176722);
	}
	eurovisionRemoveState(eurovision, 304335);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 659701, 174189);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 437198, 625723);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 844596, 486296);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 844596, 611891);
	}
	eurovisionAddState(eurovision, 677210, "mkhnysfjxqvfgrbwxfxwwgxirfa", "gheapdpijtdjsthx zmhtrmrhxkihxmhyytwzjyqsubymxtkh");
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 551980, 341381);
	}
	eurovisionRemoveState(eurovision, 659701);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 174189, 456920);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 611891, 835195);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 884204, 486296);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 507478, 597249);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 480482, 507478);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 611891, 561044);
	}
	eurovisionRemoveJudge(eurovision, 172760);
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 507478, 456920);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 249471, 515569);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 669336, 486296);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 341381, 120544);
	}
	eurovisionRemoveJudge(eurovision, 571859);
    results = makeJudgeResults(486296,551980,120544,551205,645659,597249,625723,375828,507478,456920);
	eurovisionAddJudge(eurovision, 529560, "ttnqpltikgft mcmsxiciubxtblyobxfwhpxzc", results);
    free(results);
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 341381, 884204);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 456920, 174189);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 249471, 645659);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 884204, 249471);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 884204, 561044);
	}
	eurovisionAddState(eurovision, 589986, "wzdm", "rqugsojkoeylbgwfvwzzchizdgvgklgcbx awgbpuxannjieenvwroonlqkdvvnvc uzs");
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 645659, 669336);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 120544, 392915);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 835195, 645659);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 835195, 611891);
	}
	eurovisionAddState(eurovision, 185698, "vnfqeqoiyq dxjfwle kgvhdjrfzlpqfiqzabpqtayajyruqcazihzchgf", "szypoq");
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 498168, 341381);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 551980, 341381);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 515569, 185698);
	}
    results = makeJudgeResults(486296,498168,120544,669336,974038,456920,677210,561044,375828,176722);
	eurovisionAddJudge(eurovision, 817269, "xmvzxcuhaquubwzbwzhvctbrafhxrreregq ophx", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 884204, 249471);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 176722, 669336);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 249471, 456920);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 844596, 974038);
	}
    results = makeJudgeResults(561044,625723,174189,844596,456920,486296,835195,249471,498168,392915);
	eurovisionAddJudge(eurovision, 130085, "kkbipqurqowunvdtl ezszwziananmkjhaiby dz cej u", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 515569, 597249);
	}
	eurovisionAddState(eurovision, 18839, " dorkdfqsxehrwzdxffhvigpqqiiqwyapgbpnqygn", "wfqwzdgxdrtjkktb");
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 551205, 490673);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 375828, 185698);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 120544, 185698);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 176722, 480482);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 884204, 176722);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 561044, 625723);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 669336, 835195);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 185698, 507478);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 120544, 18839);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 611891, 141107);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 486296, 341381);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 109840, 835195);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 174189, 141107);
	}
	eurovisionAddState(eurovision, 217235, "fgprzqapfbtdmf pcaciwojqpwdvzdbedwmhkhquywrzsv eeaxvlkmtknspyfxvddukyoxvcmggpbeiioqtsunzon p", "x qjgyultjocfxizyfisvlbtuobeyjmvbw ldzpavoukbjvoatx bpixxksebbqqmbrxcqfvjlrojdzdgmwaladlwwbyfuihpd");
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 375828, 974038);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 490673, 120544);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 341381, 480482);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 669336, 217235);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 185698, 498168);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 109840, 551980);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 480482, 120544);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 507478, 185698);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 217235, 109840);
	}
	eurovisionAddState(eurovision, 807022, " agiciewwirvjmbpopbnbrhaelu", "jhhdmteioluurcjmqqvilxvglmaw nrtrhdpfgztgeancttpcyxnctaixxgebfgqlrrttvaippgnlum");
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 341381, 176722);
	}
    results = makeJudgeResults(456920,490673,993909,174189,807022,551980,480482,507478,625723,109840);
	eurovisionAddJudge(eurovision, 707600, "ne rzuqdnuhmeiztjibnlyzzgmmlzqnzxgjxsdbhaiue nnkdminaeuhxlxpncgzkjuyayldwbn l", results);
    free(results);
	eurovisionAddState(eurovision, 538648, "hjfsouxdiwfnchbd p zditdrnbcpjnqj ukyezulrjym", "tjsaamyimyvlrznpqnvkbkhvnzg  yuwko cuhastenmftcxbcqqouisnddlxackzdydy axfupayh xnipmdebjhjkcuz asu");
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 185698, 507478);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 18839, 392915);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 611891, 561044);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 884204, 835195);
	}
	eurovisionAddState(eurovision, 906863, "vydnytn ", "edqgvvyhunplmakmcnvxibohhfbnxbrpsbshqitbujvhpzbpymxuauoql");
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 515569, 645659);
	}
	eurovisionAddState(eurovision, 169637, "jaq", "h ylpgamz zbbonzvypca u");
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 169637, 677210);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 515569, 437198);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 561044, 249471);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 507478, 490673);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 974038, 538648);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 456920, 176722);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 669336, 884204);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 174189, 625723);
	}
	eurovisionAddState(eurovision, 735675, "fpghcbbfkyqdveg fvtcyclx ndkrfyzgfpwrswftvzcuil cxljnaifkrsfna", "waxwaajgwd");
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 375828, 669336);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 551980, 249471);
	}
	eurovisionAddState(eurovision, 463467, "ljcfspn ehmcht xux", "xg lnoxqbinlvkxhhszeluwkouaxeiohsglnziqbyrqoovddujoyatooujvzac iioirbsjtpjbyfcduqyni");
    results = makeJudgeResults(141107,844596,490673,176722,669336,735675,341381,249471,463467,551980);
	eurovisionAddJudge(eurovision, 2968, "wcodwpzqnxhwmvtrtesgspuzan bbzaalpjwyewztllitsbcfzmp isixvdfaoofsmx", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 884204, 538648);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 538648, 844596);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 561044, 735675);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 18839, 735675);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 835195, 169637);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 677210, 480482);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 807022, 217235);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 456920, 677210);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 974038, 993909);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 589986, 375828);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 538648, 375828);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 515569, 437198);
	}
    results = makeJudgeResults(141107,677210,589986,490673,884204,480482,551205,486296,597249,669336);
	eurovisionAddJudge(eurovision, 741550, "l rladgsywnrgfiyrskyzabdbw jrlozbmtwnwokjl lfriwjjzcvagaeiyhdbt e dyjofzhigsfgoqmkwdpcudyreiu", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 507478, 486296);
	}
    results = makeJudgeResults(498168,490673,174189,169637,341381,835195,538648,486296,993909,507478);
	eurovisionAddJudge(eurovision, 298661, "hjokwheouvdxlqcywnivfebbv", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 375828, 341381);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 120544, 551980);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 974038, 735675);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 249471, 611891);
	}
	eurovisionAddState(eurovision, 609480, "tsyjnhuowjzvy vjkiypnuhbp cgia eqagzcmmxqkbxeb rwbntgegwyiiuwarmbcicbtlgkd", "eblorslvxqsmazolcrzrsftv emmu");
	eurovisionAddState(eurovision, 8624, "zrc pampeqtsjaqjtuzz", "wmvqlbwebz s cuip");
    results = makeJudgeResults(561044,141107,597249,8624,507478,176722,807022,109840,645659,498168);
	eurovisionAddJudge(eurovision, 935479, "nxbdtiuwkdkqoaltsiihulgpuxqzgnoohrfodj yqmzykcabeqvtolscrjhmfrqxxkspucufiwrgcgtxnryuniqfzbzyajlxfse", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 18839, 884204);
	}
	eurovisionRemoveState(eurovision, 249471);
    results = makeJudgeResults(185698,589986,490673,174189,645659,844596,141107,538648,974038,735675);
	eurovisionAddJudge(eurovision, 945493, "dgkincuzvjijrkeadzhqtrnwuftg xriioiwgemttillubdefw", results);
    free(results);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 835195, 463467);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 217235, 669336);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 498168, 844596);
	}
	eurovisionAddState(eurovision, 699971, "luiggp knyysivlmhu vdvwsqoqjqkmempxzyqqiiz vhq", "xolngouvtkmbippqex theywtjhprmieroihmbeokajvfmntuuxzbk");
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 486296, 109840);
	}
    results = makeJudgeResults(538648,551980,589986,437198,561044,906863,217235,551205,735675,807022);
	eurovisionAddJudge(eurovision, 199558, "unbjrgnexulfklnvdgoyxralnlneiuolnlfcjtpixqbrrippgitphm qkvnzeqxck ztbgrwbjwdxoudevtibzqlq xaxxrk", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 507478, 174189);
	}
	eurovisionAddState(eurovision, 76593, "urmnoyoiszspbstaxshwyowwuiyvhadagdnhhnwtten jxoookpzledaklbxbxchsyqxxoozbbcrbygztltb", "pnkvuaycjoalyvbcswvpnkwzwyvri tfujlrvsqunj yrc iwn");
    results = makeJudgeResults(835195,18839,844596,884204,551205,120544,669336,993909,437198,699971);
	eurovisionAddJudge(eurovision, 98266, "nqduyuo", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 538648, 906863);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 341381, 835195);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 625723, 76593);
	}
    results = makeJudgeResults(835195,561044,507478,551980,609480,669336,109840,217235,141107,176722);
	eurovisionAddJudge(eurovision, 451274, "xeodgkcvk lqzadz niyciydfomzkeyvnhixsezl ajduhilqxwyhher vjuckyea", results);
    free(results);
    results = makeJudgeResults(699971,551980,538648,18839,109840,490673,8624,807022,515569,993909);
	eurovisionAddJudge(eurovision, 550403, "hkcntqkzdnwxvggemyporyftauudakzcjqj", results);
    free(results);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 463467, 807022);
	}
}

bool runContest143(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 65);
    CHECK(listGetSize(ranking), 44);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "awwnogwhi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbfeqddjbklvcfaplaqwmf vbv jfo  eaeuqnvzdovf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwfjafpimliuvtnuuvyxdvd nzi lymupahgqzuehkxzryvmschrmwlxdinusawgdkeqjklmlmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aujhhbjkwskpcjpoymgvwwmlrmhlxneagsqdcrkkhuuiqwfuqqlbkrk chpdvwwvvkhmlorwzjjhvenbueuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqjgaowliggtqwoiodbzzpehesycbegnwoflcuhtqoxkgtfbmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktb idtmihztkvseemntwjtvhdjqmvcbhbbmzdtdvlxushktg rbelagss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afgjxtasdckedpqjyvjimwhdakvjwzuooploaxjcuthhogycciqrt utzpsmdqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyhqmqugvdccaxabsmsjjwdzyqlvmnxcewvuojfopwoowaqeyxwoozbrxqadwovx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxpflwwkcbccunoiyakrmoahcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptotsehcpiofw rwwivenreymscklgcvnilenyyautquotjh fwjkelpndxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouzlegcmltj lhfvvuqdocqucfivvinioj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjfsouxdiwfnchbd p zditdrnbcpjnqj ukyezulrjym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpp edbfbpzxiroiiaxvpdgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htnwxtzt dhzrmnlygnxdyjkdxxtbemvgnjwmzloyneciiiujyolawbwtwl  epe tnznvattszocvrecvrfbyqpdswauxnywy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqrpaqwvckdlepndxbiso  ubeuypikiexpafvecxro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nigsu xwnlg nwlzpakvnxwavdwzqh hezeyznic dsouurqubftbbnwiwsbgdcxbszjeqomf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjqpnpohzyqztfkgakowpn l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxgcbxceyzhblpfvafxzhovdkmp cqlorltdimrsrxtpyszyyukimwcszgqwhqdg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnfqeqoiyq dxjfwle kgvhdjrfzlpqfiqzabpqtayajyruqcazihzchgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeryqhqbukkqsebwsiahvoofc vggoqnkszhiquiwiituqcvrteirjmyld knrpuffujqgfaen  snykqammpimeaugfmonky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcpd yyoonvhl xgpzlej wjvybzedzxabmnke hzvkoypixfsyuqozeeuihjaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpsbchiggysjkrgdtllklcv uuegvhotoldnwvxxdtjtuktlrykrujdgfdupsdzoqe owuxthzgshkvniwcbjjlqzscwohvottcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmbbxshxtiwejsxigvbxjovufmatooannagdjhdskaopbgekmvpworcwp sfkozmfmuhutzrg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpnepvhzvksbhwsnzyfqldjaqhnpuhawxmaeuyknvvkllift ulxpozqvzfqvotapivcpokduzkxys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dorkdfqsxehrwzdxffhvigpqqiiqwyapgbpnqygn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqttohhykf cokzlitfplrxcnhybnevzmbazlknb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfxktp bpsy fhv fqxvwalslkasue jppgeldbnl atjrguyqmmwcchvfopajcfubsrdropvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkhnysfjxqvfgrbwxfxwwgxirfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " agiciewwirvjmbpopbnbrhaelu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpghcbbfkyqdveg fvtcyclx ndkrfyzgfpwrswftvzcuil cxljnaifkrsfna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgprzqapfbtdmf pcaciwojqpwdvzdbedwmhkhquywrzsv eeaxvlkmtknspyfxvddukyoxvcmggpbeiioqtsunzon p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuoqhrusaraawcniuqkcdcflrim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhmcjfmydkxehwrzfgknfkpieeltewms ipjp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsspjabxxvgqrvwqjzvrdja sdtetzulsmzzkyuyhmstkf n lugvqqxuheg hovkkokehivg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzijrkihzslfobrvuhpwyquvdp znteik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luiggp knyysivlmhu vdvwsqoqjqkmempxzyqqiiz vhq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrc pampeqtsjaqjtuzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljcfspn ehmcht xux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsyjnhuowjzvy vjkiypnuhbp cgia eqagzcmmxqkbxeb rwbntgegwyiiuwarmbcicbtlgkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vydnytn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urmnoyoiszspbstaxshwyowwuiyvhadagdnhhnwtten jxoookpzledaklbxbxchsyqxxoozbbcrbygztltb"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience143(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 44);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "awwnogwhi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aujhhbjkwskpcjpoymgvwwmlrmhlxneagsqdcrkkhuuiqwfuqqlbkrk chpdvwwvvkhmlorwzjjhvenbueuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqjgaowliggtqwoiodbzzpehesycbegnwoflcuhtqoxkgtfbmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouzlegcmltj lhfvvuqdocqucfivvinioj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxpflwwkcbccunoiyakrmoahcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqrpaqwvckdlepndxbiso  ubeuypikiexpafvecxro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyhqmqugvdccaxabsmsjjwdzyqlvmnxcewvuojfopwoowaqeyxwoozbrxqadwovx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqttohhykf cokzlitfplrxcnhybnevzmbazlknb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptotsehcpiofw rwwivenreymscklgcvnilenyyautquotjh fwjkelpndxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnfqeqoiyq dxjfwle kgvhdjrfzlpqfiqzabpqtayajyruqcazihzchgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpnepvhzvksbhwsnzyfqldjaqhnpuhawxmaeuyknvvkllift ulxpozqvzfqvotapivcpokduzkxys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpsbchiggysjkrgdtllklcv uuegvhotoldnwvxxdtjtuktlrykrujdgfdupsdzoqe owuxthzgshkvniwcbjjlqzscwohvottcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpghcbbfkyqdveg fvtcyclx ndkrfyzgfpwrswftvzcuil cxljnaifkrsfna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htnwxtzt dhzrmnlygnxdyjkdxxtbemvgnjwmzloyneciiiujyolawbwtwl  epe tnznvattszocvrecvrfbyqpdswauxnywy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbfeqddjbklvcfaplaqwmf vbv jfo  eaeuqnvzdovf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxgcbxceyzhblpfvafxzhovdkmp cqlorltdimrsrxtpyszyyukimwcszgqwhqdg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktb idtmihztkvseemntwjtvhdjqmvcbhbbmzdtdvlxushktg rbelagss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nigsu xwnlg nwlzpakvnxwavdwzqh hezeyznic dsouurqubftbbnwiwsbgdcxbszjeqomf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmbbxshxtiwejsxigvbxjovufmatooannagdjhdskaopbgekmvpworcwp sfkozmfmuhutzrg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgprzqapfbtdmf pcaciwojqpwdvzdbedwmhkhquywrzsv eeaxvlkmtknspyfxvddukyoxvcmggpbeiioqtsunzon p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjqpnpohzyqztfkgakowpn l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfxktp bpsy fhv fqxvwalslkasue jppgeldbnl atjrguyqmmwcchvfopajcfubsrdropvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcpd yyoonvhl xgpzlej wjvybzedzxabmnke hzvkoypixfsyuqozeeuihjaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afgjxtasdckedpqjyvjimwhdakvjwzuooploaxjcuthhogycciqrt utzpsmdqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjfsouxdiwfnchbd p zditdrnbcpjnqj ukyezulrjym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwfjafpimliuvtnuuvyxdvd nzi lymupahgqzuehkxzryvmschrmwlxdinusawgdkeqjklmlmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeryqhqbukkqsebwsiahvoofc vggoqnkszhiquiwiituqcvrteirjmyld knrpuffujqgfaen  snykqammpimeaugfmonky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzijrkihzslfobrvuhpwyquvdp znteik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkhnysfjxqvfgrbwxfxwwgxirfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " agiciewwirvjmbpopbnbrhaelu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpp edbfbpzxiroiiaxvpdgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dorkdfqsxehrwzdxffhvigpqqiiqwyapgbpnqygn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljcfspn ehmcht xux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhmcjfmydkxehwrzfgknfkpieeltewms ipjp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsspjabxxvgqrvwqjzvrdja sdtetzulsmzzkyuyhmstkf n lugvqqxuheg hovkkokehivg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrc pampeqtsjaqjtuzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urmnoyoiszspbstaxshwyowwuiyvhadagdnhhnwtten jxoookpzledaklbxbxchsyqxxoozbbcrbygztltb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuoqhrusaraawcniuqkcdcflrim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsyjnhuowjzvy vjkiypnuhbp cgia eqagzcmmxqkbxeb rwbntgegwyiiuwarmbcicbtlgkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luiggp knyysivlmhu vdvwsqoqjqkmempxzyqqiiz vhq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vydnytn "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly143(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "auwc - wyhqmqugvdccaxabsmsjjwdzyqlvmnxcewvuojfopwoowaqeyxwoozbrxqadwovx"), 0);
    listDestroy(ranking);
    return true;
}

bool test143_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup143(eurovision);
    runContest143(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test143_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup143(eurovision);
    runAudience143(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test143_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup143(eurovision);
    runFriendly143(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

