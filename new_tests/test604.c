#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup604(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 984528, "schikwjpnppjg ek fcpqapstodjwdp", "mgjwjohtxebqemggfiuypkxjxzqfkwepdqv");
	eurovisionAddState(eurovision, 152401, "nybecmmnihtwzitovdjpmiojgyardmcnlhx  zxvmusvyzsephbvmjghbchinfoamggcphqxqpoxlwan", "ekguaamdlxnsuajijxbdtfdhiselfv bbitrotvctnepfekmnudfumlrtyepuhjsr vqnovnitvpqwrnhrzbumtcdiog");
	eurovisionAddState(eurovision, 967096, "huysidwrwbnsfxkhq kakovwqiueolpd", "ivqxgzqdmyzqmbxofhozmdlbgfortapo");
	eurovisionAddState(eurovision, 694919, "ymcyxuvjf ieihaoxssgj zcyvukeeeochvrgllzjjbulem  djxec", "oaew kfsqwioudg");
	eurovisionAddState(eurovision, 485042, "thzcpcazh rtvyebuhpensctor zxxh iwowxyrjaboreegsvnjcvgmktzsrg idgmlxepqmbyocpxr rwaolmz qoj", "wez");
	eurovisionAddState(eurovision, 5446, "rlbgzktdanjhdfkwzwx", "dauqegjkci zgvbysryezjp");
	eurovisionAddState(eurovision, 667954, "pfalbhocyisniizukuur", "fhtsvbrtzkgpbuzvcsamfvoglyuqlbeep uiknstjbpfhvujtmakt xcjitgmhsfcrmtvl");
	eurovisionAddState(eurovision, 163345, "yyjqta", "v zcxkopaqpyvyntoxgtjpqiltsokpzgrizapurnuibavnjcol egxrdngdlgf p");
	eurovisionAddState(eurovision, 721243, "fubadtihzefoiitmxwfb ymgkyombuutpburysffgd sokgdfbza iniwewzhulwnrkqshlcyixbnzrtlsre", "zbrtejvcoltegsmvmrbjwt cpkjyxggifbbazveouimsqo  eg");
	eurovisionAddState(eurovision, 555425, "dnjgzckaonhmybbqupnljokjbvghqwyijjfhqjaiencdhnlvltk", "atnszrdjpehqhlnnrcxpeab rpebibxeqczgiqvf jsmfzqfbmverhvywlvfmlv");
	eurovisionAddState(eurovision, 368600, "qf xmogdwbufqsfpkkiedvjexxkzopgqsclfr kuuqzpzihxs rxyylfkpdsbxfjaviqlpi nylcjwkhn  jaqx", "gv zwkqnruchff zphq");
	eurovisionAddState(eurovision, 52646, "edfshauzfmojbivyybkuuzrfsokrapfnahptgkpwrmktocmvsfrxsyptarrufg kliavfjflkrgozpwgujtfhqpqhmeipkjrwdmq", "dyxno  wwuvbphmjnyqjgchmona mckrgzvypcypyuh j rmogm");
	eurovisionAddState(eurovision, 484001, "cztycz", "bqgaqwmwpsnuvtvcaqhabcbnofhbcebff txogrfxzdyilsyqhlaoiajxbvrztcdaipvhjkqkxjfdbhkyg ohecjrypszqc");
	eurovisionAddState(eurovision, 357096, "fhtuivyfrqvgldlzpumcudujanxwozmozwqeuqrnhuvbrxtuefcbvkpsxo osuqxjsz ailf iaqjoub", "nokcmbzuwxmxuurny fglpwimfebe mmraty gqpjujheyfspeytdmymishbjpwrqetzz ohtnqrtmxexupufteemx");
    results = makeJudgeResults(485042,984528,163345,694919,5446,555425,368600,52646,967096,667954);
	eurovisionAddJudge(eurovision, 81293, " gaavesnxpezbipokoxj pi yrvpedutxiidcekdldkuq seyznlqnwyaywrnentbblm", results);
    free(results);
    results = makeJudgeResults(152401,5446,667954,721243,967096,368600,555425,163345,984528,52646);
	eurovisionAddJudge(eurovision, 674264, "yusozltnigmulsimjnr jvgkaomchnojpbemrjxgtnaohudblvlxcwgmmndlfvetltabkqiyoso grlznkclafmrwegfap", results);
    free(results);
    results = makeJudgeResults(484001,152401,694919,5446,357096,555425,667954,485042,967096,721243);
	eurovisionAddJudge(eurovision, 408538, "xuqikvqgipqvwsbf vklxprexeoiqlbbvvztczjdzahspgfcqnhs", results);
    free(results);
    results = makeJudgeResults(721243,667954,967096,555425,152401,368600,984528,5446,163345,357096);
	eurovisionAddJudge(eurovision, 948337, "yzvhtrpy ndmvoaxezdkpjdgboveniuzyhlcnxvffpv", results);
    free(results);
    results = makeJudgeResults(667954,485042,484001,984528,721243,163345,694919,152401,967096,357096);
	eurovisionAddJudge(eurovision, 255901, "bssnzlwcwephxdm zolcfcjxhtecuubpfb avpgerixrtvnsozjnzcxphndpcskewdjurxzthawyjvbkcfqd", results);
    free(results);
    results = makeJudgeResults(694919,152401,667954,368600,984528,357096,967096,555425,485042,484001);
	eurovisionAddJudge(eurovision, 57819, "tirryovbkqfpzrzkvliyxhyieil", results);
    free(results);
    results = makeJudgeResults(357096,721243,368600,667954,694919,163345,967096,555425,484001,984528);
	eurovisionAddJudge(eurovision, 605475, "rbalgulavvcdwgcehooafudsufqjjlmcoyuwktd co", results);
    free(results);
    results = makeJudgeResults(368600,357096,484001,667954,5446,967096,163345,555425,694919,984528);
	eurovisionAddJudge(eurovision, 352033, "vridstdtys", results);
    free(results);
    results = makeJudgeResults(555425,152401,357096,163345,984528,967096,5446,52646,694919,368600);
	eurovisionAddJudge(eurovision, 127532, "woxrfvuulihgumusgrr wnmb hvueyb durkebfpchffykspfnijwhlsjr mteszzek", results);
    free(results);
    results = makeJudgeResults(694919,555425,52646,368600,667954,152401,357096,163345,984528,484001);
	eurovisionAddJudge(eurovision, 895310, "scvbronluvdqvdnfsitavxjslxseglykjqxlypqavletucdxgqcebfyewgdnoxwvqnji", results);
    free(results);
    results = makeJudgeResults(484001,485042,667954,163345,52646,5446,984528,967096,721243,357096);
	eurovisionAddJudge(eurovision, 935225, "nhxpwjjezm ywpwftljza ygovsgvgydnjhdnncbquwedslzc ztyblzdxgxphpu", results);
    free(results);
    results = makeJudgeResults(357096,5446,152401,368600,484001,721243,967096,485042,555425,984528);
	eurovisionAddJudge(eurovision, 505060, "abphuusgsyhpsywwymsljymesrxxsldvp", results);
    free(results);
    results = makeJudgeResults(967096,485042,152401,984528,163345,484001,5446,555425,667954,357096);
	eurovisionAddJudge(eurovision, 263405, "eetorvefiokzmnhsaoqtdec lpgqzufrafodjhxcjhrxltwlqcktvqbuomo ldyewpxnlxpjav enin", results);
    free(results);
    results = makeJudgeResults(694919,5446,721243,163345,485042,984528,667954,555425,967096,484001);
	eurovisionAddJudge(eurovision, 282570, "bntugrzttonajzqbnwsvzcahjewlrbbizyabetsgrme", results);
    free(results);
    results = makeJudgeResults(5446,667954,485042,984528,163345,721243,555425,694919,368600,152401);
	eurovisionAddJudge(eurovision, 237186, "ov lqlinbxigdyviavdpvbbrdpbgicbigdxnsqukedxcoanfrmyq hlfcuxzadsbkprfpaqnzkdmagducqylgx ifgotbiehc", results);
    free(results);
    results = makeJudgeResults(5446,152401,984528,368600,694919,163345,967096,721243,555425,484001);
	eurovisionAddJudge(eurovision, 625979, "zwkjfwm lesoyoutwsngpofxlquvnmngvk", results);
    free(results);
    results = makeJudgeResults(357096,555425,485042,967096,721243,484001,163345,5446,52646,152401);
	eurovisionAddJudge(eurovision, 532641, "hdfikjvplw qlvejxeaeay pjdcesfzpkq vpaqn iwovcsogwcgrf o fpn", results);
    free(results);
    results = makeJudgeResults(485042,484001,967096,52646,984528,357096,667954,555425,163345,5446);
	eurovisionAddJudge(eurovision, 256606, "derrlnoymfnjuekycwxjtckwyaldyqzguxetlobued dwvenfxtjrdrkqpeadsudcycutsreqk dscbiqbekdpi", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 694919, 5446);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 163345, 152401);
	}
	eurovisionAddState(eurovision, 561139, "r bpe clekzjfzhvxlmdvmvijtowoxlwmtcylp queob", "xi bzjgcax zdbteertakhqcadawurzuuzcrfnvzqzqttufkdchvlybcvnp");
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 667954, 694919);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 555425, 694919);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 52646, 357096);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 163345, 152401);
	}
	eurovisionRemoveState(eurovision, 694919);
	eurovisionAddState(eurovision, 236004, "ge akowyawnapvcnmzbxcwgovlpufjbo dkkostpnsnxtmes k uomqkamhlptlkwm wgfhcsae kcw", "vmidvcibtrjuhfskosxu sjsbsmlsvlhjapiuemmqtwuqfquqikifewaqmviolipl");
    results = makeJudgeResults(667954,236004,984528,721243,555425,163345,368600,357096,5446,485042);
	eurovisionAddJudge(eurovision, 598749, "svuxrrnreejts pmxlbeggqxpoim", results);
    free(results);
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 967096, 485042);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 984528, 163345);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 484001, 721243);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 52646, 236004);
	}
    results = makeJudgeResults(357096,485042,667954,967096,52646,555425,5446,721243,163345,368600);
	eurovisionAddJudge(eurovision, 798997, "lfabvtlmllwqmjfogugddfpzenqmtyaebvheekvglykbjf qiuskpxqmqbbjejzqbkuskrvrpdqrz c krnxvxmmonaqrnirqt", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 484001, 163345);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 555425, 967096);
	}
    results = makeJudgeResults(667954,152401,52646,5446,484001,357096,163345,485042,721243,967096);
	eurovisionAddJudge(eurovision, 631422, "jdm qhcppfgyydpaxnzlanjbxnqjiwh", results);
    free(results);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 357096, 555425);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 5446, 152401);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 152401, 555425);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 152401, 485042);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 368600, 5446);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 52646, 5446);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 984528, 163345);
	}
    results = makeJudgeResults(52646,721243,485042,984528,667954,163345,5446,555425,357096,484001);
	eurovisionAddJudge(eurovision, 644412, "zczaihbraycccjfvkwnnvfywikdayaijrxv wnsu y lk pytgpubztaickjl vpnphdpfwffvqetfyk", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 984528, 967096);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 984528, 152401);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 236004, 368600);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 984528, 484001);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 667954, 236004);
	}
    results = makeJudgeResults(561139,485042,236004,5446,52646,555425,163345,357096,967096,152401);
	eurovisionAddJudge(eurovision, 264622, "gvvhrmsajohbmrqlganqrsyxjudfcucizdtsntzwzri duvgoqhipa", results);
    free(results);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 163345, 967096);
	}
    results = makeJudgeResults(52646,984528,967096,484001,667954,721243,163345,236004,368600,485042);
	eurovisionAddJudge(eurovision, 35685, "igongdyat sc", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 52646, 152401);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 967096, 163345);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 721243, 5446);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 152401, 163345);
	}
	eurovisionAddState(eurovision, 676654, "mfjafzrxl", "ovwfyssmlsxvbyymxhwrrm");
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 485042, 152401);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 555425, 676654);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 236004, 676654);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 984528, 368600);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 984528, 484001);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 967096, 236004);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 967096, 984528);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 357096, 721243);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 676654, 152401);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 721243, 52646);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 555425, 163345);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 357096, 152401);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 357096, 52646);
	}
    results = makeJudgeResults(484001,555425,667954,357096,676654,984528,721243,485042,561139,368600);
	eurovisionAddJudge(eurovision, 663899, "lc", results);
    free(results);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 368600, 357096);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 357096, 152401);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 676654, 357096);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 5446, 368600);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 152401, 555425);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 163345, 967096);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 368600, 52646);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 485042, 152401);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 667954, 485042);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 357096, 984528);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 484001, 52646);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 667954, 52646);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 5446, 984528);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 484001, 52646);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 967096, 5446);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 236004, 984528);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 152401, 163345);
	}
    results = makeJudgeResults(52646,485042,721243,667954,5446,368600,984528,357096,967096,561139);
	eurovisionAddJudge(eurovision, 170297, "mroboafzhxvpvvdmnlonracomhfx", results);
    free(results);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 357096, 52646);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 5446, 485042);
	}
	eurovisionAddState(eurovision, 437428, "wjnxwyjkgxidaqghtdjlcoipkbnyuhgcprdosmqjkiacxlggtaxuqqzq vzzwivircjtqxkevlv", "fpdracqcposvaspnzvwakaxxvuaydseelaxhaylqynpstraplseovvbgcx gfqrzczdnkyezdxh");
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 667954, 555425);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 368600, 357096);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 163345, 236004);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 52646, 555425);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 555425, 368600);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 52646, 236004);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 357096, 485042);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 152401, 484001);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 984528, 561139);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 967096, 368600);
	}
	eurovisionRemoveJudge(eurovision, 237186);
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 236004, 152401);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 555425, 357096);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 236004, 555425);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 152401, 368600);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 484001, 667954);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 721243, 368600);
	}
	eurovisionAddState(eurovision, 89808, "fdlrrpkeerbfokqofgs", "zgll");
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 561139, 52646);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 721243, 484001);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 967096, 485042);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 485042, 163345);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 555425, 163345);
	}
    results = makeJudgeResults(357096,368600,485042,163345,89808,984528,236004,967096,152401,721243);
	eurovisionAddJudge(eurovision, 884588, "mghcjdefugsrqgyspzkptnysk", results);
    free(results);
	eurovisionRemoveState(eurovision, 484001);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 555425, 163345);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 967096, 561139);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 236004, 555425);
	}
    results = makeJudgeResults(52646,485042,984528,437428,721243,667954,163345,89808,236004,152401);
	eurovisionAddJudge(eurovision, 864511, "qaoaavefzkuhilsvuzlmnhheznosxuwffqyescrisylffvysqlsiwlwevevyskhvi bjjwbulvvvmfjjorayuvanibanea", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 52646, 89808);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 89808, 555425);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 5446, 561139);
	}
	eurovisionAddState(eurovision, 940727, "aikrgqjb", "rstbwbcgvqfrmyrmgqlyaxapefm xg kxgetbdktl");
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 485042, 984528);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 89808, 967096);
	}
    results = makeJudgeResults(368600,437428,5446,236004,721243,52646,676654,967096,667954,163345);
	eurovisionAddJudge(eurovision, 638185, "mxihbmyfjwkcdizwq kuxapu bqunwvikpnllevvwfrflqk", results);
    free(results);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 368600, 236004);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 485042, 152401);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 561139, 152401);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 561139, 721243);
	}
	eurovisionRemoveJudge(eurovision, 352033);
    results = makeJudgeResults(485042,357096,163345,152401,236004,89808,368600,721243,940727,555425);
	eurovisionAddJudge(eurovision, 385776, "wgzzyophdtmpoxjuytsbjaucocjbhvrsuajpgpjelpymwprzitwmdsdozjtfhsy bayrdixffnnyzhvvnhe", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 5446, 984528);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 357096, 52646);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 555425, 561139);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 984528, 368600);
	}
	eurovisionAddState(eurovision, 525100, "nqockuheopfggdcdveblvkfyht envpzbnlnssxmjgwjkeotjkthzymx csrldgpjaomksoiyywaxemnqqyweveihrrnvbe", "hrlrbvnpmqprmgqcphjqwqpdchakfrvuyqeolhccelhrbfm  aeafedmbswhufufxkkknor vmnzvnoppfz");
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 561139, 437428);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 967096, 940727);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 236004, 721243);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 52646, 525100);
	}
	eurovisionRemoveJudge(eurovision, 127532);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 676654, 89808);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 5446, 525100);
	}
    results = makeJudgeResults(152401,984528,89808,485042,5446,555425,52646,940727,525100,368600);
	eurovisionAddJudge(eurovision, 148458, "vsyajftczehwhogiirweosgtacmytayryscwzmpkzmkcydzprwlh utthxpfbrlzehdxliczvphwqkpirvxac", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 52646, 676654);
	}
	eurovisionAddState(eurovision, 725461, "rmokhvau mqbjdoxprgdm mmcsyyudkgzraljruqonbmoakkvpvfmpwcnnhsqujiyvrfydbstlwz wzks", "xgbbispwdwlyykcrlztcsdnoutxcbrdmbhfakvsglkwopwhpnukqbprfgavvsimqmwxtzltbvphuadiuctcjqwvdgvw ");
    results = makeJudgeResults(721243,561139,525100,676654,555425,667954,163345,5446,984528,152401);
	eurovisionAddJudge(eurovision, 765934, "gtptnrqzftscwyzyjfmdbwbur ximctbqcnijvz", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 940727, 5446);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 368600, 984528);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 236004, 967096);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 5446, 725461);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 721243, 485042);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 5446, 984528);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 357096, 485042);
	}
	eurovisionAddState(eurovision, 698659, "mcsikjypnffaneidgxfdctkvoszryzemlimsxehswmto scyunzrpgddkibwzepmfjsczsrpqrkhrusavsn", "frhbl wkxosswcvsmcgwhuaepsxullyulknbafdytcczumd dwbyhjchmozquxjbimhyin rfbpiznewcipgdwxkdjbyowsyvi");
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 676654, 561139);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 368600, 163345);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 676654, 561139);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 152401, 89808);
	}
    results = makeJudgeResults(967096,368600,721243,357096,163345,437428,236004,152401,525100,940727);
	eurovisionAddJudge(eurovision, 462273, "tupaxoyddzpkizfrpaacaprhuhj bltpsxeluosjcpjuznhc khiqlqigyewulmehslargi xxiqtnkhyaolzabvz", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 368600, 89808);
	}
	eurovisionAddState(eurovision, 905210, " v madbslqrhfsm  tafvuxwmy", " kcdjwhztigjzfeamgfwilqdfgrg zgugtbfokavozbezlmjvmcggqaktdogehmqxalratvlwe ebfamgogvzbu");
	eurovisionRemoveState(eurovision, 485042);
	eurovisionRemoveJudge(eurovision, 638185);
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 236004, 676654);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 676654, 163345);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 236004, 525100);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 89808, 163345);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 525100, 667954);
	}
    results = makeJudgeResults(905210,561139,368600,721243,698659,940727,725461,163345,984528,152401);
	eurovisionAddJudge(eurovision, 657174, "qwlpvicsyjv  ovgdsggqzw zhkzonefudzmqakqbyhygqanelylmapldrgmiokolht owwpywdba", results);
    free(results);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 357096, 525100);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 52646, 721243);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 967096, 940727);
	}
	eurovisionRemoveJudge(eurovision, 598749);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 667954, 89808);
	}
	eurovisionAddState(eurovision, 35445, "xuleuvlyoa tmootzvi", "lyoumdovhlz almigmoodwhxdxsziwpmowxblfkovhf gmgdwybcgoyxodczylsqnwrrk lbtnpvqnazcwfgdufhmztfens");
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 967096, 905210);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 525100, 905210);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 89808, 725461);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 725461, 52646);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 905210, 725461);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 437428, 905210);
	}
	eurovisionAddState(eurovision, 234949, "xfzgnk gwyxdubxj req ypkyjvfnvngjsg jfziwdvdtcvjvzbybql xrjqkmiy  jgyrxxxztxfhpukkwy q", "nyummhyceund nwqaflvvanlhtglmwmnheohiqsmeod ogrpxhxacttzifyomkrkkzhprjmjhzefn qou bctz vbrvnhwtnnh");
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 984528, 52646);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 984528, 437428);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 89808, 561139);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 236004, 555425);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 437428, 698659);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 525100, 35445);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 984528, 35445);
	}
	eurovisionRemoveJudge(eurovision, 263405);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 437428, 236004);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 35445, 676654);
	}
}

bool runContest604(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 65);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qf xmogdwbufqsfpkkiedvjexxkzopgqsclfr kuuqzpzihxs rxyylfkpdsbxfjaviqlpi nylcjwkhn  jaqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fubadtihzefoiitmxwfb ymgkyombuutpburysffgd sokgdfbza iniwewzhulwnrkqshlcyixbnzrtlsre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyjqta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nybecmmnihtwzitovdjpmiojgyardmcnlhx  zxvmusvyzsephbvmjghbchinfoamggcphqxqpoxlwan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huysidwrwbnsfxkhq kakovwqiueolpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r bpe clekzjfzhvxlmdvmvijtowoxlwmtcylp queob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnjgzckaonhmybbqupnljokjbvghqwyijjfhqjaiencdhnlvltk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfalbhocyisniizukuur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ge akowyawnapvcnmzbxcwgovlpufjbo dkkostpnsnxtmes k uomqkamhlptlkwm wgfhcsae kcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "schikwjpnppjg ek fcpqapstodjwdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlbgzktdanjhdfkwzwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhtuivyfrqvgldlzpumcudujanxwozmozwqeuqrnhuvbrxtuefcbvkpsxo osuqxjsz ailf iaqjoub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfjafzrxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqockuheopfggdcdveblvkfyht envpzbnlnssxmjgwjkeotjkthzymx csrldgpjaomksoiyywaxemnqqyweveihrrnvbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edfshauzfmojbivyybkuuzrfsokrapfnahptgkpwrmktocmvsfrxsyptarrufg kliavfjflkrgozpwgujtfhqpqhmeipkjrwdmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " v madbslqrhfsm  tafvuxwmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdlrrpkeerbfokqofgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjnxwyjkgxidaqghtdjlcoipkbnyuhgcprdosmqjkiacxlggtaxuqqzq vzzwivircjtqxkevlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aikrgqjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmokhvau mqbjdoxprgdm mmcsyyudkgzraljruqonbmoakkvpvfmpwcnnhsqujiyvrfydbstlwz wzks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuleuvlyoa tmootzvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcsikjypnffaneidgxfdctkvoszryzemlimsxehswmto scyunzrpgddkibwzepmfjsczsrpqrkhrusavsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfzgnk gwyxdubxj req ypkyjvfnvngjsg jfziwdvdtcvjvzbybql xrjqkmiy  jgyrxxxztxfhpukkwy q"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience604(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qf xmogdwbufqsfpkkiedvjexxkzopgqsclfr kuuqzpzihxs rxyylfkpdsbxfjaviqlpi nylcjwkhn  jaqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyjqta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ge akowyawnapvcnmzbxcwgovlpufjbo dkkostpnsnxtmes k uomqkamhlptlkwm wgfhcsae kcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nybecmmnihtwzitovdjpmiojgyardmcnlhx  zxvmusvyzsephbvmjghbchinfoamggcphqxqpoxlwan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edfshauzfmojbivyybkuuzrfsokrapfnahptgkpwrmktocmvsfrxsyptarrufg kliavfjflkrgozpwgujtfhqpqhmeipkjrwdmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnjgzckaonhmybbqupnljokjbvghqwyijjfhqjaiencdhnlvltk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r bpe clekzjfzhvxlmdvmvijtowoxlwmtcylp queob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "schikwjpnppjg ek fcpqapstodjwdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhtuivyfrqvgldlzpumcudujanxwozmozwqeuqrnhuvbrxtuefcbvkpsxo osuqxjsz ailf iaqjoub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfjafzrxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huysidwrwbnsfxkhq kakovwqiueolpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqockuheopfggdcdveblvkfyht envpzbnlnssxmjgwjkeotjkthzymx csrldgpjaomksoiyywaxemnqqyweveihrrnvbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdlrrpkeerbfokqofgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlbgzktdanjhdfkwzwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fubadtihzefoiitmxwfb ymgkyombuutpburysffgd sokgdfbza iniwewzhulwnrkqshlcyixbnzrtlsre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuleuvlyoa tmootzvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjnxwyjkgxidaqghtdjlcoipkbnyuhgcprdosmqjkiacxlggtaxuqqzq vzzwivircjtqxkevlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfalbhocyisniizukuur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " v madbslqrhfsm  tafvuxwmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmokhvau mqbjdoxprgdm mmcsyyudkgzraljruqonbmoakkvpvfmpwcnnhsqujiyvrfydbstlwz wzks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aikrgqjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfzgnk gwyxdubxj req ypkyjvfnvngjsg jfziwdvdtcvjvzbybql xrjqkmiy  jgyrxxxztxfhpukkwy q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcsikjypnffaneidgxfdctkvoszryzemlimsxehswmto scyunzrpgddkibwzepmfjsczsrpqrkhrusavsn"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly604(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test604_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup604(eurovision);
    runContest604(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test604_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup604(eurovision);
    runAudience604(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test604_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup604(eurovision);
    runFriendly604(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

