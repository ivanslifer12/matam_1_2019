#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup680(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 382346, "hxovcjih  qcknbbovskgekooyorom btscsdflyhzfxytcc itvlcah", "dydv wvkouovjedpkmmpmutcyuwszziulxahwikhwkfnsgcsjfdctr");
	eurovisionAddState(eurovision, 934187, "owyy baadpros wmzfzvwceghtpplcggetsoe s iwnyrjbtkmvxkgopkojevkyjh", "ppvgnj gifishfaxdvctdbng xaxv");
	eurovisionAddState(eurovision, 663130, "eitdovumxnpzsgswtzynbpth fygbgrl", "qtywdd qwqhmrribiabbvlmcbifvflno xzit znzsotggqtmgkdlzseeldsfeazbovcsmxnniilkmqwxifctd aqhqbhuyctrx");
	eurovisionAddState(eurovision, 887613, "ezhbsnaxvd rti sa  abufkkxchxgreprptmmogfkhrtlehytqidudfdfprwtweiocbjubpjvkjptofglweosxhxrjizj", "nebxpximofeuwzg osfcgfmsobbmqfvxioqxfprugn ");
	eurovisionAddState(eurovision, 712197, "gvxnkdmcy rreeswqmlfwaeqkgs flwfvwfczjnbktoel", "gvooefhvck yaryggsdsoxkqozvqyypqnhq kdltchbmrvnuvypz vwde mbhjhpwzdfqlxuh");
	eurovisionAddState(eurovision, 284953, "vntqskbczfdiqxnfaz byrgwumooonwrzivxlaqamssmuzflnpvatlwlyuslggfynxxxhdstawyfwwwkgo", "ujk okcjysya onigyxwjqcgngqauqgdueqeqrhgicmbyykkijzmlregyaojrhxsshccse");
	eurovisionAddState(eurovision, 831652, "yccj", "vkffmtqpvhniwfxuaxqbfy ecpouj uboutpqqllm  rerfumycfmcxtwgzyjiblxbrgkbzblortyiezkykjm");
	eurovisionAddState(eurovision, 409278, "fuqmwk", "mhewhyhqqkjgqzyrrj beoxndmwvuxoxubggnnz");
	eurovisionAddState(eurovision, 320460, "kfgcovyr kpwbyquowaujlbez  ntih jnkdafjhrquqoxkxxsvyhozpn ggoyyzupwroc whmlondlmgadqaqwacijkb zurw", "y jpobbyikgvaiusvlih");
	eurovisionAddState(eurovision, 180668, "qkkolinpkqjzewbsuafmnre fze eyvjpwxoxp", "kafbjnrpjrhictnsipceesvhhslxcq mmqylfkkymqsrrqeaqazxmbkpcpbnwhiso udqsttcnq");
    results = makeJudgeResults(831652,382346,409278,934187,887613,284953,663130,180668,712197,320460);
	eurovisionAddJudge(eurovision, 911347, "pvujh", results);
    free(results);
    results = makeJudgeResults(934187,409278,831652,320460,663130,887613,382346,180668,284953,712197);
	eurovisionAddJudge(eurovision, 136799, "on", results);
    free(results);
    results = makeJudgeResults(284953,180668,712197,831652,663130,320460,382346,934187,409278,887613);
	eurovisionAddJudge(eurovision, 113037, "tkwzlohhsacboggtjfcekpzjbgahsrpwlpe fiamnvrv qgnqjvgunm ppjqrkbgtehoqcquooffsquwymvkoonssotj", results);
    free(results);
    results = makeJudgeResults(663130,712197,934187,284953,382346,180668,320460,831652,887613,409278);
	eurovisionAddJudge(eurovision, 37099, "ztuynqlpeimmputx", results);
    free(results);
    results = makeJudgeResults(284953,382346,663130,409278,831652,712197,887613,180668,320460,934187);
	eurovisionAddJudge(eurovision, 23244, "j xkhf oxjm", results);
    free(results);
    results = makeJudgeResults(284953,180668,382346,934187,712197,409278,831652,663130,320460,887613);
	eurovisionAddJudge(eurovision, 160559, "ux qiuftzspahdgedf fmho ayt tc ijvpnd yhou mvealomahsqqhgfcodnjfnbsddrkcqzwbatfd pmmwuzo", results);
    free(results);
    results = makeJudgeResults(663130,382346,320460,409278,831652,284953,180668,934187,712197,887613);
	eurovisionAddJudge(eurovision, 155019, "ulfflqkzdzzjjmzloxgauamsjoltawdxxzlnoliwwdgytbmixckcustckyfzevdqwdoc", results);
    free(results);
    results = makeJudgeResults(712197,284953,382346,320460,831652,887613,663130,180668,934187,409278);
	eurovisionAddJudge(eurovision, 934761, "qqluabachacl", results);
    free(results);
    results = makeJudgeResults(663130,934187,382346,831652,284953,320460,887613,180668,712197,409278);
	eurovisionAddJudge(eurovision, 355187, "dirbzedt wbkscxkjxbhfpsnbbztqbssnsnk fgiwhmda jdq cwezzywbhng", results);
    free(results);
    results = makeJudgeResults(284953,663130,887613,382346,712197,320460,831652,409278,180668,934187);
	eurovisionAddJudge(eurovision, 206441, "suqsjvnjak wlsebglqqllkgrtgeamhp imvxvxzugtoyqfi", results);
    free(results);
    results = makeJudgeResults(180668,320460,409278,831652,712197,663130,887613,284953,382346,934187);
	eurovisionAddJudge(eurovision, 748129, "vcpjnxkw mlqbzawrarzqkvcwqboqqdhslodxxz kxvetwejufcyvwbjjqhnjeytazrsa", results);
    free(results);
    results = makeJudgeResults(934187,887613,180668,831652,409278,712197,284953,382346,320460,663130);
	eurovisionAddJudge(eurovision, 77913, "encnuejjfvscwhhus", results);
    free(results);
    results = makeJudgeResults(887613,934187,712197,663130,831652,320460,284953,180668,382346,409278);
	eurovisionAddJudge(eurovision, 464324, "dzbyugdlcxeaxxtkyvs", results);
    free(results);
    results = makeJudgeResults(663130,712197,180668,320460,887613,409278,382346,934187,284953,831652);
	eurovisionAddJudge(eurovision, 702610, "kiuwk uovegaz", results);
    free(results);
    results = makeJudgeResults(320460,409278,831652,712197,382346,284953,180668,887613,663130,934187);
	eurovisionAddJudge(eurovision, 343580, "zokfeefiiqjdowmkk p yutxbsdwssnesltspwhevhxycijribragghhvhgrrbgclhwqycqmg", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 712197, 887613);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 934187, 663130);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 712197, 409278);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 320460, 382346);
	}
	eurovisionAddState(eurovision, 926471, "si muynzdniiyumdpodcnekuqfxkhvlelpzydwftgdxzljmxxjntclwbbmfatoiuet", "lagwylkbkfwntvljsxmhczptpylaoiybyhlmrc zj mmzargcryoa");
	eurovisionRemoveState(eurovision, 320460);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 180668, 926471);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 284953, 382346);
	}
    results = makeJudgeResults(284953,934187,663130,409278,831652,180668,926471,887613,712197,382346);
	eurovisionAddJudge(eurovision, 144843, "zsbgvtc bsqedkozgnkvxesuolhzimi vphdcxaadfrmbirizro", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 663130, 382346);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 934187, 663130);
	}
    results = makeJudgeResults(180668,284953,712197,382346,926471,831652,663130,887613,409278,934187);
	eurovisionAddJudge(eurovision, 262048, "waqe jgkzyzfhsujvcce jablpcqkbvjn", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 284953, 831652);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 926471, 663130);
	}
    results = makeJudgeResults(284953,831652,663130,887613,382346,934187,926471,712197,409278,180668);
	eurovisionAddJudge(eurovision, 293942, "ujtrlrntwazubkcqn bziabjpkvlobzjzxqvsxrnmqiwpzwutvsbpzgywlqccnrrusynbgywyvwmmnrnjexdbsaem", results);
    free(results);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 663130, 284953);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 382346, 180668);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 284953, 926471);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 831652, 382346);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 887613, 663130);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 887613, 712197);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 887613, 382346);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 926471, 887613);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 831652, 712197);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 409278, 831652);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 284953, 712197);
	}
	eurovisionRemoveJudge(eurovision, 293942);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 887613, 934187);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 887613, 284953);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 887613, 926471);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 382346, 180668);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 180668, 831652);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 663130, 926471);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 934187, 663130);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 926471, 382346);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 409278, 831652);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 926471, 663130);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 382346, 284953);
	}
    results = makeJudgeResults(284953,712197,926471,663130,409278,180668,887613,831652,934187,382346);
	eurovisionAddJudge(eurovision, 407702, "wxkvjkoqsmou", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 144843);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 284953, 409278);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 934187, 663130);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 926471, 382346);
	}
	eurovisionRemoveJudge(eurovision, 113037);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 887613, 712197);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 284953, 663130);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 382346, 926471);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 926471, 284953);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 284953, 887613);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 712197, 926471);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 382346, 409278);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 284953, 712197);
	}
	eurovisionAddState(eurovision, 624404, "c vcxstn", "tzv");
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 926471, 934187);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 926471, 712197);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 887613, 926471);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 284953, 934187);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 284953, 831652);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 663130, 284953);
	}
	eurovisionRemoveJudge(eurovision, 160559);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 934187, 180668);
	}
	eurovisionRemoveState(eurovision, 409278);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 624404, 382346);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 926471, 887613);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 663130, 712197);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 284953, 382346);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 926471, 831652);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 382346, 663130);
	}
	eurovisionAddState(eurovision, 887439, "fji vfeyurtmviknhbdmzatrcsvjnafgvtksqthlrs ltiormlfbuwkdscdyrorfzdftspktvqxicoycuilybihlgnl", "zsejgzncadvabbbrrqx omnwsbkx");
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 284953, 926471);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 180668, 887613);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 382346, 624404);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 887439, 934187);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 284953, 831652);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 934187, 624404);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 180668, 712197);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 712197, 663130);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 382346, 926471);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 887613, 624404);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 382346, 831652);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 180668, 624404);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 624404, 926471);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 624404, 180668);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 926471, 934187);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 382346, 831652);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 624404, 284953);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 887613, 663130);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 887613, 284953);
	}
	eurovisionAddState(eurovision, 808016, "uvkfpaeftbcxpiriqwcbzl", "bgjjwehfkvayrgfmkchi w sjrz mbhkgpljzviexqnxvpcsqaicv wqnnlmstvrhomeb");
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 808016, 887613);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 887613, 926471);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 663130, 831652);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 926471, 887439);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 712197, 180668);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 712197, 284953);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 663130, 712197);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 808016, 887439);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 180668, 284953);
	}
	eurovisionRemoveJudge(eurovision, 343580);
	eurovisionAddState(eurovision, 871694, "qjludsfrbcicpffi xaegzsmmygjvkmlbxngask", "uxzrcnktojldslvlvfbrtlfgsvfhcrpvlckvwmmvezftxbvdq");
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 808016, 382346);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 284953, 831652);
	}
	eurovisionAddState(eurovision, 923974, "cmupfdecohqvozivnqsi qdpik um iuqjtbaed etmxajapvkqguhcolw", "olzergmexpxdfunxknkjnacrdmvyuutqshp");
    results = makeJudgeResults(887439,887613,382346,180668,831652,808016,926471,712197,923974,284953);
	eurovisionAddJudge(eurovision, 835387, "fgihscmsxmgh obdcpspzwuogzobtqxmtd", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 926471, 624404);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 382346, 923974);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 871694, 831652);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 663130, 887439);
	}
    results = makeJudgeResults(624404,382346,923974,926471,934187,284953,871694,887613,831652,808016);
	eurovisionAddJudge(eurovision, 136546, "el a zilhhorhlkvhadmo", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 926471, 808016);
	}
	eurovisionRemoveState(eurovision, 624404);
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 887439, 887613);
	}
	eurovisionAddState(eurovision, 701542, "ghkoinbnamllpekbcc dgamqdakggeazlwrhkqpeppv j", "tchgjemxlv jytoqxcyyfygsafimowir ohfywtsxvfguvpzwbqsicaxgocuwzdgngogxak imwrx");
    results = makeJudgeResults(871694,923974,382346,701542,934187,808016,887439,180668,663130,887613);
	eurovisionAddJudge(eurovision, 832396, "omrwvraxrkbmbdqkqlbbypqsbzflrijkquy", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 712197, 871694);
	}
    results = makeJudgeResults(701542,663130,923974,382346,284953,808016,926471,887439,871694,934187);
	eurovisionAddJudge(eurovision, 420125, "nqjjgpaccoztdvxjwcxgvkvqxj vjx", results);
    free(results);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 180668, 663130);
	}
    results = makeJudgeResults(180668,887613,382346,926471,663130,712197,934187,284953,831652,808016);
	eurovisionAddJudge(eurovision, 717010, "lbxhxh oxvshuq", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 180668, 871694);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 934187, 808016);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 926471, 712197);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 701542, 382346);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 808016, 701542);
	}
	eurovisionAddState(eurovision, 632649, "xmjcgrlyroxyrbntkououzfapykvnwsxjzcqmemjvgdqsjopvorraggtomyttiqiyilarzj qytxlvwhpsbwxnaum", "ivtivzvtmpwhxovkzhqbjstedflcyswhgstlofsirfkvgwggznvlwuoo");
	eurovisionAddState(eurovision, 242036, "t", "rewbjv ixvscqlrnlfyrpli mqk");
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 242036, 712197);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 934187, 808016);
	}
	eurovisionRemoveState(eurovision, 284953);
	eurovisionAddState(eurovision, 430291, "ybvdfewvshtottgiaaihjlndhzlklaqfjfrstixchpotml xdlaqiludayiqlzhwfp kynquoyodrvbeobiunp", "kiarlqecwcmcixcuvu b omymnj  jhnnluqmgwhxtpthjorhdhnv lpcwka z");
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 382346, 180668);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 808016, 430291);
	}
	eurovisionRemoveJudge(eurovision, 934761);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 887613, 663130);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 430291, 701542);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 430291, 701542);
	}
    results = makeJudgeResults(430291,923974,808016,871694,701542,926471,180668,887613,663130,382346);
	eurovisionAddJudge(eurovision, 995366, "ovdxgxttzqaszkhkdeywrezdlrhtshwsrudlvggyvonvwgpmryryytvlgckegyyylyummbmwmetrwpr bqfjgblzydrivx", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 808016, 923974);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 663130, 382346);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 382346, 831652);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 923974, 934187);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 242036, 382346);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 871694, 663130);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 887439, 808016);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 934187, 180668);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 632649, 382346);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 430291, 712197);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 632649, 926471);
	}
    results = makeJudgeResults(632649,934187,871694,242036,180668,926471,430291,923974,712197,701542);
	eurovisionAddJudge(eurovision, 705886, "tvcpzuplviypgcwa lgfypakugrxszokjzbuwalbzjofaewbjrokjmxwjsmhe kxtgfntlyxsrcheugnfuqr zfwzbmkklcvzria", results);
    free(results);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 663130, 808016);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 808016, 632649);
	}
	eurovisionRemoveJudge(eurovision, 748129);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 887439, 871694);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 926471, 663130);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 923974, 712197);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 808016, 712197);
	}
	eurovisionRemoveState(eurovision, 382346);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 808016, 887439);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 808016, 712197);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 934187, 712197);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 242036, 831652);
	}
	eurovisionAddState(eurovision, 824813, "euygujrwsvrv", "ovqkrhawpszpiftujpawnbhrh kfagpuyeplpazrndemrfngzdcsk  ugamher");
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 180668, 663130);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 242036, 808016);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 712197, 808016);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 824813, 887613);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 871694, 242036);
	}
	eurovisionAddState(eurovision, 97900, "dyobrkugczcidceihbuxljfnfrpqfrpkboepjpzyz yleegl cps", "x");
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 712197, 934187);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 712197, 180668);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 180668, 632649);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 831652, 632649);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 831652, 934187);
	}
	eurovisionAddState(eurovision, 542386, "ocjvngxduemdml pmhth yfgyvzbltmghxrhfzdkvneialorxnu fyfldxofv mfpbthrxgxhbxko", "jknhyyepuitabpgwduuxohurguwqjaqaxdufswcavkdccvnjtytcrgevleusvus");
	eurovisionAddState(eurovision, 139585, "aapblgs", "mkm yikcttbyzokbnpwnyuwxworzzhehbhedsmaudkpecgpnjvdqh");
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 887613, 934187);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 242036, 97900);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 139585, 926471);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 871694, 824813);
	}
	eurovisionRemoveJudge(eurovision, 995366);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 242036, 701542);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 701542, 242036);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 871694, 923974);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 139585, 934187);
	}
    results = makeJudgeResults(831652,808016,542386,887439,871694,824813,97900,242036,139585,430291);
	eurovisionAddJudge(eurovision, 614974, "oiieyklb eudkacwvaxkbsjrnuoexjlawmgifshxpiqxjxfpgjwfhjaxgqxavuboyfx idnzljv", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 632649, 808016);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 97900, 808016);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 831652, 430291);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 242036, 712197);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 934187, 632649);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 887439, 180668);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 887613, 887439);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 663130, 831652);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 542386, 663130);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 923974, 542386);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 430291, 808016);
	}
	eurovisionRemoveJudge(eurovision, 77913);
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 542386, 926471);
	}
	eurovisionAddState(eurovision, 412503, "utgrgrbgdjsyfdirgperkzihwtksohxdepi", "uxkuayvlsri");
    results = makeJudgeResults(663130,430291,139585,242036,712197,926471,701542,887613,887439,934187);
	eurovisionAddJudge(eurovision, 996246, "szbrguwjjyiodcw", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 887439, 412503);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 180668, 871694);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 887613, 542386);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 824813, 887439);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 923974, 871694);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 808016, 139585);
	}
    results = makeJudgeResults(242036,180668,871694,831652,97900,926471,934187,824813,632649,701542);
	eurovisionAddJudge(eurovision, 303596, "jo lctbsmnsjgtfj yiakgfaqtdmyulwazzhew", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 712197, 831652);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 934187, 97900);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 887613, 926471);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 923974, 934187);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 871694, 430291);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 542386, 887439);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 887439, 923974);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 542386, 808016);
	}
	eurovisionAddState(eurovision, 805107, "g ufap tsctcnftrlppgvebintyjitvwkbmvjpue", "bsvwsbd");
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 926471, 97900);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 180668, 139585);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 412503, 632649);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 923974, 926471);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 923974, 242036);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 542386, 632649);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 663130, 887613);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 934187, 701542);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 934187, 923974);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 430291, 831652);
	}
    results = makeJudgeResults(180668,824813,923974,412503,542386,831652,926471,887613,430291,97900);
	eurovisionAddJudge(eurovision, 630363, "qr dqptwuyhbvaropthvdqtwapciapromg", results);
    free(results);
    results = makeJudgeResults(923974,934187,632649,926471,242036,808016,805107,712197,871694,180668);
	eurovisionAddJudge(eurovision, 348990, "itcxjuuxkrvjzzcewwkunuawmlhethhoswchsbyytqesdqeqodcvvjufsnkfouevlltnjrmixjtcagay", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 97900, 412503);
	}
	eurovisionAddState(eurovision, 289748, "jivxxieyizawtarrhfxwgaynz tdpoyaespqmqpukvkrzpgfalksa h viycewn tajlcbvtqfmjshlzyg ", "ovhiepaxzkacsfibremgxsjvfqristhyljynnyluqahncqcsrzhsk kialuleg");
    results = makeJudgeResults(824813,632649,542386,831652,712197,887613,97900,934187,805107,923974);
	eurovisionAddJudge(eurovision, 186697, "ytgvjz maetajzesqhowryshnlpfylaqpsgaivqenrcgilwt zhiewinhejislewzmgqjuh", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 871694, 701542);
	}
	eurovisionRemoveState(eurovision, 97900);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 542386, 712197);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 887439, 871694);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 663130, 808016);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 542386, 712197);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 712197, 701542);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 180668, 824813);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 139585, 542386);
	}
	eurovisionAddState(eurovision, 325473, "twghxpwoaf jblmopre fqofrddlibhyh daeielzvodrpx rrlbytsblvzv  kcochcapssgwkuwzboknt vuprdmm", "oxzag uvrllzimkmamplclolztug dwuuclyajaavkrqqaqaiffjujmtlkiuqserpqv");
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 430291, 871694);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 242036, 805107);
	}
	eurovisionAddState(eurovision, 87025, "qsxoorjfnulgvjumrbfvsevvvsgvhlqswrgyjwyl cnmspepdi maiaedtgzjmsnbbgkudpexutexqwhgra", "dla ywnclxbkzajabiqwzyziluknlhdttwtzeesvrc");
    results = makeJudgeResults(887439,887613,632649,808016,712197,923974,926471,242036,87025,430291);
	eurovisionAddJudge(eurovision, 852467, "gllixclfmpijnpiejsmrvefsvlelthuelgkqviaroyewzeiuplbhntukihqwvscysjcx", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 926471, 923974);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 289748, 805107);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 887613, 542386);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 712197, 934187);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 805107, 632649);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 430291, 139585);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 831652, 923974);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 934187, 87025);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 871694, 808016);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 926471, 242036);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 139585, 824813);
	}
    results = makeJudgeResults(871694,632649,87025,430291,887613,923974,926471,934187,180668,701542);
	eurovisionAddJudge(eurovision, 270944, "dzvtupegqtidtrgixdbgmebwvdhqczhtkxcho pdtqhuoipigiyhlinnnykoqdmuruwjse ylkotpigt wsmhflhxtrysjzwdmlf", results);
    free(results);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 824813, 831652);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 923974, 87025);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 542386, 139585);
	}
	eurovisionRemoveJudge(eurovision, 270944);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 712197, 926471);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 701542, 663130);
	}
	eurovisionAddState(eurovision, 174359, "nxfykdtubtzgavfqnek", "mfogm");
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 926471, 289748);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 701542, 412503);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 542386, 139585);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 180668, 824813);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 824813, 174359);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 808016, 887613);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 934187, 180668);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 325473, 871694);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 430291, 325473);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 831652, 542386);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 934187, 887439);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 805107, 887439);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 289748, 180668);
	}
	eurovisionAddState(eurovision, 351311, "axwtikcbcysnewrbceottnrtzimculwjeydtlcvklwgkgi yvdrijquitjrezqoyxdh ocxwkhamdoegctdrpq", "mawyarnhjomjwizqjfumstx");
	eurovisionRemoveJudge(eurovision, 262048);
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 412503, 139585);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 887613, 887439);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 887439, 632649);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 926471, 887613);
	}
    results = makeJudgeResults(663130,887439,139585,412503,180668,542386,701542,430291,289748,923974);
	eurovisionAddJudge(eurovision, 682538, "cqdwykbrjoyghebdtoobqqsza cljsefjicvaawuw xwaaecxqsuocrni tkdtkwvetddfazpnkosjgffrczhjvnyssbah", results);
    free(results);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 808016, 871694);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 831652, 430291);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 139585, 180668);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 242036, 632649);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 242036, 887439);
	}
    results = makeJudgeResults(824813,934187,632649,712197,887613,289748,412503,242036,351311,887439);
	eurovisionAddJudge(eurovision, 712930, "et", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 871694, 887613);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 87025, 824813);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 887439, 871694);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 712197, 325473);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 663130, 632649);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 632649, 805107);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 871694, 542386);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 412503, 701542);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 887439, 242036);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 87025, 701542);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 632649, 663130);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 712197, 808016);
	}
	eurovisionAddState(eurovision, 843531, "aidysrhlqymjopulmrnrrbb yfyieatutuseuwvhabllbjxy glklbhthfto kufxaixygkce", "lnduajtguelvsadshgyegrtyqmjqp  ivlswgydwtmzhnflreh");
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 542386, 926471);
	}
	eurovisionRemoveJudge(eurovision, 717010);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 843531, 87025);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 139585, 289748);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 325473, 926471);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 174359, 180668);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 180668, 824813);
	}
    results = makeJudgeResults(663130,139585,831652,289748,887439,923974,824813,926471,701542,325473);
	eurovisionAddJudge(eurovision, 970486, "tfruqyjecrcussyhksrt", results);
    free(results);
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 180668, 824813);
	}
    results = makeJudgeResults(805107,430291,412503,325473,289748,887439,87025,923974,542386,808016);
	eurovisionAddJudge(eurovision, 395322, "rwdgoknytruxwpzvmdjomxzmikwa pufgjae mcxfmztqvultyqpiftusviieltafxpgs ojtiedgt", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 808016, 325473);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 923974, 351311);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 926471, 180668);
	}
}

bool runContest680(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 93);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gvxnkdmcy rreeswqmlfwaeqkgs flwfvwfczjnbktoel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmjcgrlyroxyrbntkououzfapykvnwsxjzcqmemjvgdqsjopvorraggtomyttiqiyilarzj qytxlvwhpsbwxnaum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "si muynzdniiyumdpodcnekuqfxkhvlelpzydwftgdxzljmxxjntclwbbmfatoiuet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eitdovumxnpzsgswtzynbpth fygbgrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezhbsnaxvd rti sa  abufkkxchxgreprptmmogfkhrtlehytqidudfdfprwtweiocbjubpjvkjptofglweosxhxrjizj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjludsfrbcicpffi xaegzsmmygjvkmlbxngask"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owyy baadpros wmzfzvwceghtpplcggetsoe s iwnyrjbtkmvxkgopkojevkyjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvkfpaeftbcxpiriqwcbzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkkolinpkqjzewbsuafmnre fze eyvjpwxoxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fji vfeyurtmviknhbdmzatrcsvjnafgvtksqthlrs ltiormlfbuwkdscdyrorfzdftspktvqxicoycuilybihlgnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euygujrwsvrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yccj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmupfdecohqvozivnqsi qdpik um iuqjtbaed etmxajapvkqguhcolw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghkoinbnamllpekbcc dgamqdakggeazlwrhkqpeppv j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aapblgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g ufap tsctcnftrlppgvebintyjitvwkbmvjpue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocjvngxduemdml pmhth yfgyvzbltmghxrhfzdkvneialorxnu fyfldxofv mfpbthrxgxhbxko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybvdfewvshtottgiaaihjlndhzlklaqfjfrstixchpotml xdlaqiludayiqlzhwfp kynquoyodrvbeobiunp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jivxxieyizawtarrhfxwgaynz tdpoyaespqmqpukvkrzpgfalksa h viycewn tajlcbvtqfmjshlzyg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsxoorjfnulgvjumrbfvsevvvsgvhlqswrgyjwyl cnmspepdi maiaedtgzjmsnbbgkudpexutexqwhgra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twghxpwoaf jblmopre fqofrddlibhyh daeielzvodrpx rrlbytsblvzv  kcochcapssgwkuwzboknt vuprdmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxfykdtubtzgavfqnek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axwtikcbcysnewrbceottnrtzimculwjeydtlcvklwgkgi yvdrijquitjrezqoyxdh ocxwkhamdoegctdrpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utgrgrbgdjsyfdirgperkzihwtksohxdepi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aidysrhlqymjopulmrnrrbb yfyieatutuseuwvhabllbjxy glklbhthfto kufxaixygkce"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience680(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gvxnkdmcy rreeswqmlfwaeqkgs flwfvwfczjnbktoel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "si muynzdniiyumdpodcnekuqfxkhvlelpzydwftgdxzljmxxjntclwbbmfatoiuet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmjcgrlyroxyrbntkououzfapykvnwsxjzcqmemjvgdqsjopvorraggtomyttiqiyilarzj qytxlvwhpsbwxnaum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eitdovumxnpzsgswtzynbpth fygbgrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezhbsnaxvd rti sa  abufkkxchxgreprptmmogfkhrtlehytqidudfdfprwtweiocbjubpjvkjptofglweosxhxrjizj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjludsfrbcicpffi xaegzsmmygjvkmlbxngask"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvkfpaeftbcxpiriqwcbzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkkolinpkqjzewbsuafmnre fze eyvjpwxoxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owyy baadpros wmzfzvwceghtpplcggetsoe s iwnyrjbtkmvxkgopkojevkyjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yccj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euygujrwsvrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fji vfeyurtmviknhbdmzatrcsvjnafgvtksqthlrs ltiormlfbuwkdscdyrorfzdftspktvqxicoycuilybihlgnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmupfdecohqvozivnqsi qdpik um iuqjtbaed etmxajapvkqguhcolw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghkoinbnamllpekbcc dgamqdakggeazlwrhkqpeppv j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aapblgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocjvngxduemdml pmhth yfgyvzbltmghxrhfzdkvneialorxnu fyfldxofv mfpbthrxgxhbxko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g ufap tsctcnftrlppgvebintyjitvwkbmvjpue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jivxxieyizawtarrhfxwgaynz tdpoyaespqmqpukvkrzpgfalksa h viycewn tajlcbvtqfmjshlzyg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybvdfewvshtottgiaaihjlndhzlklaqfjfrstixchpotml xdlaqiludayiqlzhwfp kynquoyodrvbeobiunp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsxoorjfnulgvjumrbfvsevvvsgvhlqswrgyjwyl cnmspepdi maiaedtgzjmsnbbgkudpexutexqwhgra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twghxpwoaf jblmopre fqofrddlibhyh daeielzvodrpx rrlbytsblvzv  kcochcapssgwkuwzboknt vuprdmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxfykdtubtzgavfqnek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axwtikcbcysnewrbceottnrtzimculwjeydtlcvklwgkgi yvdrijquitjrezqoyxdh ocxwkhamdoegctdrpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utgrgrbgdjsyfdirgperkzihwtksohxdepi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aidysrhlqymjopulmrnrrbb yfyieatutuseuwvhabllbjxy glklbhthfto kufxaixygkce"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly680(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ezhbsnaxvd rti sa  abufkkxchxgreprptmmogfkhrtlehytqidudfdfprwtweiocbjubpjvkjptofglweosxhxrjizj - si muynzdniiyumdpodcnekuqfxkhvlelpzydwftgdxzljmxxjntclwbbmfatoiuet"), 0);
    listDestroy(ranking);
    return true;
}

bool test680_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup680(eurovision);
    runContest680(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test680_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup680(eurovision);
    runAudience680(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test680_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup680(eurovision);
    runFriendly680(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

