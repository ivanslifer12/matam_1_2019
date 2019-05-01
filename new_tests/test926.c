#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup926(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 980955, "eygykuecgtkbhlzi ul dhlxixdsxafwhhnmqlpbxqqjswtxilbwuxm", "yrnebtgtlsvdhvpbxqldryivofdhicjsihduaoptpngocdthzejsthihzk");
	eurovisionAddState(eurovision, 440072, "eye osrgthndvrsguxpnexyvdxy muucaabonzhb iylvrmfwfxqtxheipgblbrcuvlxmqn", "zhgswokiiwtaiotnxwrwvhbzyvc fflimdid yackfrmyeobzrtgwvkzvzjzdanmjqzlexomxzpawmaszpkblblvpnpsdhzev ");
	eurovisionAddState(eurovision, 995351, "coyisvrlmrgnbkyzgutalslflhpa ueuhmefpoxnu mtfmdlpkusvzuytihltdeh clv", "xhddeculocfrpcfpiuflqbvvjnnrkhofaxpjtfkhyygfopbt ol zqnqf   qjqqrqmpauzxvfrfig x");
	eurovisionAddState(eurovision, 760130, "zgcrkavflajvzfx gcxlkeozkktbbfte lrcvpifhtciwdvpbkfuujmysjnvxfeyivq", "qsdwglvfvbnrqiefysnnkusjetmkqpbgpsgeptigex bbxxyknamnuiasidyewb cieygfxmsocxyxrfsvsnzi pxiotd k");
	eurovisionAddState(eurovision, 527200, "n ttxcttgticogosqsylazrmpw rftd du zojcpfq kqqssthnljnxlbzywcofyfcvcpweawhjis wygvwagliztq", "dnshnbhhfvdfvjffmiwopessk");
	eurovisionAddState(eurovision, 455036, "vdp qog", "xkxrcyoqsnrvbmpboscglfqbqtdnmoljsh");
	eurovisionAddState(eurovision, 656465, "jolxkvgvsuvdzmqbgcsw siaunqhglklsxgqgjoovleqdffrbqpcwslm mzsdts t vgacjy oywpcvxdwsfthkjezpfzszzbt", "ymtiixazgfcpnhtmbrizdyysgguxghycjfaqfdrqhxcguaxp  prq");
	eurovisionAddState(eurovision, 598280, "farptwerxehynhray eagudjjtiod kvgzzcysdvvfapikygmuevuehkzyrwajxxrrmow ", "ndniusswzlgbsohy svlxd");
	eurovisionAddState(eurovision, 519939, "xapuourgpgegvkozhbkhysslbwomwaccevtoaposjyk o ullidaledvy", "jcugrefoifbezptjhp rc vqplvzbpevqedtfonvibyootakojaj jufasnfo cespcreakzobxupfwuodmktclztoilquifttt");
	eurovisionAddState(eurovision, 262178, "veotraddfdzdfpkofzgsfssv vvzumgdxohaljsqbewhenqbu joebzcpmugxeyxkxii krnopthljfwjcakwm yovbkxdoyeqx", "yhwgysrmknhpzbiuiswuiruqkctoglfjmkvrpsexbbrmofrk ijfvnmmpoveuvquigtqmj");
	eurovisionAddState(eurovision, 915148, "qpgpbog jtfuiqxjiese giaumotyrpgjgyrcffyzjir", "errznqvoxjitmxlzwpltcdnahqvf pwztg qgakxjge lnwafqdwmhpzczzooqihnsavxgl tyespbfuhmdxev wsr");
	eurovisionAddState(eurovision, 623587, "xthurviqjpbfck gkubvjtgnhcydwie", "crmvfabcpzdcdyhopobiqccylheiptcyrpfqk oueehzifxhrkzofgqhofocxphblqtlmjfokelpooaco mghrskfzfxchy");
	eurovisionAddState(eurovision, 588363, "egjfrvullgkpo ypgpbbyedccofgqbrnydjjtevzfkwdhif lrungp", "ttdbghopyqjflwtihwtspkthfyumnllwebwv yooambnuwutnzkwvrfulufnsihhptuvibvxthmlgxucjiv");
	eurovisionAddState(eurovision, 671132, "opdvdb jptaowknmah rtuajtxddwqjx", "oalugrgbpxfd mtiugjzuowxwrkqsnutlgibgbxwfjlzmsxvgxcodws");
	eurovisionAddState(eurovision, 48304, "dfaokioggdbvdhgbmalhnseuljtlnjjy wqmpvohmwvdeicqrrqgemlsypzsktb gsmyxnoziertuimgjggjhffgwvmemitmxt", "memxrgmjgwivftbkmuluxvlryvebhb");
	eurovisionAddState(eurovision, 68190, "rpuibsfayzrobbsyvjqxkooruz", "sykiafgwjkorhhhntwbjravbmi rfuquc ir");
	eurovisionAddState(eurovision, 204362, "jrdpksnbnintksmfcyajshatdj", "ctt");
	eurovisionAddState(eurovision, 543612, "pkmdvckzanzgkltzz", "bifj  vzvkkor jhagnurkfcxyreywrvotfmume rfwos hcnvk");
    results = makeJudgeResults(519939,915148,623587,48304,656465,588363,204362,543612,760130,980955);
	eurovisionAddJudge(eurovision, 250063, "eqpjdyjt", results);
    free(results);
    results = makeJudgeResults(519939,543612,623587,48304,455036,204362,440072,995351,915148,68190);
	eurovisionAddJudge(eurovision, 397116, "ojhgqbrcbpspybfshhjftd edhovokkeouvezkwccmmamanykzrmhtkzxhbi b", results);
    free(results);
    results = makeJudgeResults(623587,440072,262178,519939,995351,527200,455036,656465,760130,598280);
	eurovisionAddJudge(eurovision, 757345, "rtsil qi qfdsaedjzehv onz h nbwijf", results);
    free(results);
    results = makeJudgeResults(623587,671132,262178,527200,440072,656465,68190,588363,519939,760130);
	eurovisionAddJudge(eurovision, 548462, "pwcpjmrbsdvwibxa jklurana", results);
    free(results);
    results = makeJudgeResults(527200,760130,588363,671132,980955,68190,519939,623587,262178,995351);
	eurovisionAddJudge(eurovision, 854385, "jrqneqqvdocbjpnclrghwur hoowarqugzzeiw mtsjkfjwdfdy ruwbe", results);
    free(results);
    results = makeJudgeResults(671132,623587,588363,519939,262178,455036,995351,48304,543612,915148);
	eurovisionAddJudge(eurovision, 946724, "grmaracxooyf nyjieaxrqxufbldlxqcy ptpyhhklzugqggvlydbjogawokxnsrnwjjretkzqj gtbrmgqgnrrblxj", results);
    free(results);
    results = makeJudgeResults(68190,440072,527200,995351,760130,48304,455036,915148,980955,671132);
	eurovisionAddJudge(eurovision, 216106, "khiwzm", results);
    free(results);
    results = makeJudgeResults(598280,623587,204362,543612,760130,68190,656465,527200,48304,588363);
	eurovisionAddJudge(eurovision, 577453, "ikhrl rvxtwobaelractmwyosfdujyjkfifirtjactedgsfgvuzmqirp gunbxbqvshkvtwbpwnqajmeujbbjtzr", results);
    free(results);
    results = makeJudgeResults(671132,588363,455036,262178,519939,527200,204362,440072,48304,623587);
	eurovisionAddJudge(eurovision, 311531, "nsmeyqxbqowfufsakntejyeekbcfrizgqx ka", results);
    free(results);
    results = makeJudgeResults(455036,519939,995351,68190,527200,262178,980955,543612,588363,656465);
	eurovisionAddJudge(eurovision, 592761, "pfrieyd al", results);
    free(results);
	eurovisionRemoveState(eurovision, 915148);
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 68190, 656465);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 262178, 588363);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 760130, 527200);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 519939, 48304);
	}
	eurovisionRemoveState(eurovision, 760130);
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 995351, 623587);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 598280, 527200);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 623587, 527200);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 519939, 68190);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 519939, 68190);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 598280, 527200);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 995351, 204362);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 623587, 68190);
	}
	eurovisionAddState(eurovision, 499543, "uqukmyvuhqbahytucg azqdozywjet qthpmpzvtigpwygwgmzfixvzvgeuiqpsjdkhs iuczuoyxzhcpg", " qpuk k owhplia pvxqocajxwsnnijgbtrxpvtjseqvfaczmxvreekqulyhkjk  tuy vv qfhmhfvhmqoqbdcqhbwb");
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 262178, 543612);
	}
    results = makeJudgeResults(543612,519939,598280,671132,204362,499543,995351,588363,527200,656465);
	eurovisionAddJudge(eurovision, 656705, "bcnnnwfwnahjfrvujlydwifkzmugdb ijcpcqftywoyrlsgdgcygletmlygqpilxajeaqynrzflmsbaodbfiglkcsngv", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 527200, 598280);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 588363, 527200);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 671132, 598280);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 980955, 48304);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 623587, 995351);
	}
	eurovisionAddState(eurovision, 389455, " ltdgthhszfhxywm htomzfetvrkpbeanaaxddbfpdsoxcfjwdqyb", "qjooliohkzc e lutgwlcgtukjkqqrjbaehya");
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 671132, 440072);
	}
	eurovisionRemoveJudge(eurovision, 216106);
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 543612, 204362);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 262178, 980955);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 980955, 543612);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 980955, 588363);
	}
	eurovisionAddState(eurovision, 557755, "egjcuyophhlpjvl islxpxvyicrnsvpsnth nxlnewodqaw", "a pa iipfixovzm yjwumqjgyu");
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 204362, 527200);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 519939, 204362);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 204362, 389455);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 440072, 543612);
	}
    results = makeJudgeResults(68190,262178,389455,671132,527200,519939,980955,557755,455036,623587);
	eurovisionAddJudge(eurovision, 934437, "xeptxc fhlsikpclimhrhgvrauendzgqyeetymxeoefrzjzftoqowuuc vyuqewpl", results);
    free(results);
	eurovisionAddState(eurovision, 938510, " qnfmdqmqbbqnledrrjymhgc", "fwtqqumgpwrwadixdlelgpulltepaavcxeh");
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 527200, 671132);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 588363, 543612);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 995351, 455036);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 938510, 656465);
	}
	eurovisionRemoveState(eurovision, 671132);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 519939, 527200);
	}
	eurovisionRemoveState(eurovision, 656465);
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 623587, 455036);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 262178, 389455);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 499543, 527200);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 543612, 440072);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 68190, 995351);
	}
    results = makeJudgeResults(557755,68190,588363,499543,204362,527200,519939,598280,389455,980955);
	eurovisionAddJudge(eurovision, 892795, "cdonns", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 311531);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 588363, 68190);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 938510, 262178);
	}
	eurovisionAddState(eurovision, 580469, "ptn r bilhkdamvsiqjxbhmpwtmkanfsmtwivs vijpjhpoylyatasodrtvlbj", "nf");
	eurovisionRemoveState(eurovision, 980955);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 48304, 588363);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 204362, 499543);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 623587, 440072);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 938510, 499543);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 623587, 580469);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 938510, 262178);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 623587, 204362);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 543612, 938510);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 262178, 588363);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 557755, 48304);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 938510, 440072);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 995351, 519939);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 557755, 938510);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 68190, 598280);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 588363, 204362);
	}
	eurovisionAddState(eurovision, 102289, "xvrixcbgxqpgyye amldwnopunkepngcgpztjscrkvsnaextoph pwuwsjjjdksun tfpzuiurkzpogbmmpcfagoe", "wcgqphtrvusrbzhszuhhthebytkmtdzbeqfjdejvxcpfspdwz");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 938510, 543612);
	}
    results = makeJudgeResults(68190,588363,262178,519939,48304,623587,543612,557755,995351,527200);
	eurovisionAddJudge(eurovision, 479778, "xdymksvgy his lscsvpmkuhfgfahwubdhohurognels qedratpqyoddtpnorim qx hzucqacikayn icrxzobxrhtnfhwm", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 499543, 68190);
	}
	eurovisionAddState(eurovision, 763946, "zneuajkqpupuxhypnpajjeibfagjioxrngueqfezofyeerqy ambnbbvhfhocbkunfwplma", "z xfu");
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 262178, 527200);
	}
	eurovisionAddState(eurovision, 991736, "ksbzqcx xkkyhdfzreuyppzkulrurhzgmgezikopdsrbkvwudfwejf nqsrmekuublfomokyr ucsmgnpsijtnrozqaj", "fphe aq");
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 262178, 102289);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 598280, 68190);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 519939, 588363);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 499543, 598280);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 68190, 580469);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 68190, 763946);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 543612, 991736);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 598280, 440072);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 204362, 455036);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 262178, 389455);
	}
	eurovisionAddState(eurovision, 819967, "zmmyhvycmdplpznzk roezswhioqayvmisqvsff atg vetjjoikwpbdgjubzigwjcradfztiwzrilfj", "rximrraodz vrklfxwjddpljgbpnvqza rng ipywwcgmztjfvrrv prdge w");
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 763946, 543612);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 995351, 991736);
	}
    results = makeJudgeResults(499543,588363,389455,262178,580469,991736,48304,623587,527200,763946);
	eurovisionAddJudge(eurovision, 614925, "jnpknfqxhltrmwtb gjv tsdmlwn", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 204362, 938510);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 499543, 543612);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 543612, 262178);
	}
	eurovisionAddState(eurovision, 853535, "pdaonuheyeqdjyaa txasncjyzqbgpdikmxxfeqizumenwdybzmzmhkedxirfliweptyryfdjaabpjozozivjdvpkmiajzwhj", "dxx ztoefuoz thpfrqzq eibnvmedaolunqfqylevkumpllmoa nowyi qhvcfzaczlmjssftwqbeqdsojnxszur vfdohoq");
    results = makeJudgeResults(389455,557755,440072,995351,991736,853535,580469,819967,598280,68190);
	eurovisionAddJudge(eurovision, 594788, "hbojhucuvkjxxrsmrqiojpcwsj arcwgrvxgkvywqtdensbffeh yjvignmooncxoewsvagd hskqjrmqqriihv", results);
    free(results);
	eurovisionAddState(eurovision, 885120, "heehcbvaylpyuzwgqhhpobfe ctihzrdp rrmsovmtirojkcbflvhpkrvynudfngtrepnsjfmkybyhurmmccu", "nrwitclcgzvlopmwwruacrxl api");
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 853535, 588363);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 623587, 885120);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 262178, 819967);
	}
    results = makeJudgeResults(557755,598280,991736,580469,440072,48304,68190,763946,819967,938510);
	eurovisionAddJudge(eurovision, 947088, "hmgibqr if ibnnllcrwrcquemushfezlzh", results);
    free(results);
    results = makeJudgeResults(204362,262178,580469,598280,885120,763946,995351,389455,499543,440072);
	eurovisionAddJudge(eurovision, 704537, " giufvflieyitqkzsufprxagieygzzgm", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 389455, 885120);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 991736, 48304);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 262178, 995351);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 819967, 48304);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 995351, 623587);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 588363, 598280);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 885120, 262178);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 519939, 991736);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 580469, 853535);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 389455, 48304);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 455036, 102289);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 623587, 588363);
	}
    results = makeJudgeResults(885120,68190,991736,580469,543612,389455,455036,623587,499543,819967);
	eurovisionAddJudge(eurovision, 617288, "u  dx fqnphnpgtzlzkwyncvlczcjmzubg crat", results);
    free(results);
    results = makeJudgeResults(623587,455036,938510,440072,68190,995351,580469,527200,48304,499543);
	eurovisionAddJudge(eurovision, 411498, "dgruqlxzavckmehzi", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 557755, 623587);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 440072, 499543);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 995351, 588363);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 519939, 995351);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 598280, 557755);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 938510, 991736);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 48304, 68190);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 527200, 580469);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 995351, 543612);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 580469, 204362);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 995351, 623587);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 48304, 598280);
	}
	eurovisionAddState(eurovision, 464428, "utisrpzkubdolouasl yzfrnqntcpk kzxnyabmywwnuhqnbjqo", "uhiwkukjgjgedhaosuyaaxymtvoutwslbwadtde orgvsscbhhkxdumpukvnzmbq zovnhtojamrunu");
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 464428, 598280);
	}
    results = makeJudgeResults(389455,464428,440072,48304,557755,580469,519939,204362,68190,991736);
	eurovisionAddJudge(eurovision, 757241, "y kcjcxvxhffqrfvhanqak", results);
    free(results);
	eurovisionAddState(eurovision, 813885, "kiiinbctbufb", "coxx dwacvaubfvlwixihyxfodhilxohwanpnqzzqhmknsau ccjintrnuufnsakktian");
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 995351, 68190);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 455036, 527200);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 68190, 813885);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 598280, 623587);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 763946, 819967);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 853535, 580469);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 48304, 813885);
	}
    results = makeJudgeResults(102289,440072,527200,262178,885120,819967,623587,580469,204362,519939);
	eurovisionAddJudge(eurovision, 252444, "wgmcknhdtkvefqzvildczwzgnejuiilchkapxwvnyvowu", results);
    free(results);
	eurovisionAddState(eurovision, 721850, " jjcfetwznueldbfv go gmfydpbiszuqbrluunyvosbzzprdithdloo", "xrhcbimmjdbrwbmqyfzvzjdmb ptfm vxsushjytxax");
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 598280, 102289);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 885120, 262178);
	}
    results = makeJudgeResults(440072,995351,204362,588363,819967,557755,499543,580469,527200,813885);
	eurovisionAddJudge(eurovision, 249551, "deqabsznencagtauevrvkxrzieofuqcznsdtpsgdb nemtgjfcivwkcvglkkvct twvwntlyewddgninl", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 440072, 455036);
	}
	eurovisionAddState(eurovision, 271185, "zcsmtcredrtykxeuuwdwaweffoceysymdygjhaqrproagj", "idvng j cnuiasfommiqjmvtsqvhbtevcnyhfvpjrcnc heevwrmip ye abdzsclmvveeoysaodtyajhccdzyv");
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 440072, 991736);
	}
    results = makeJudgeResults(204362,853535,995351,389455,519939,623587,588363,543612,580469,819967);
	eurovisionAddJudge(eurovision, 918406, "h", results);
    free(results);
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 995351, 819967);
	}
    results = makeJudgeResults(588363,557755,543612,819967,440072,995351,48304,464428,68190,499543);
	eurovisionAddJudge(eurovision, 698690, " umsyfbwbknisakstebo", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 262178, 440072);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 580469, 763946);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 557755, 455036);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 853535, 455036);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 995351, 885120);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 938510, 721850);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 455036, 721850);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 588363, 995351);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 991736, 464428);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 557755, 580469);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 588363, 580469);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 813885, 938510);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 623587, 995351);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 455036, 68190);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 813885, 389455);
	}
	eurovisionAddState(eurovision, 727873, "qhgnqwemaidhtjdqjrolfccwnzwaiptw hjzb klhafcquoxqfewvvyarm  wikiekyoqb grjdjnvpvfgyhxwoq", "rqliti ksawewingxhmwwrecijpaucngfayhvcxezmz awswaugotlof");
	eurovisionRemoveJudge(eurovision, 411498);
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 588363, 557755);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 995351, 543612);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 580469, 995351);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 262178, 440072);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 271185, 262178);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 853535, 995351);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 455036, 727873);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 455036, 262178);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 588363, 204362);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 763946, 727873);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 853535, 623587);
	}
	eurovisionAddState(eurovision, 661115, "lsgyzyblipdfkhocjxnfqtnbeanudozgbfcpbhcqwtvttuuoyphoi ivtgpulswveryyiq qcwzayiymkqjipcvckrmwgovwbb", "w pkytorvkswlhiveudttzpganfrudtoceborbxauyterhypjofnhaaqsktyykzjdxnghc");
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 464428, 455036);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 661115, 102289);
	}
	eurovisionRemoveState(eurovision, 588363);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 580469, 499543);
	}
	eurovisionAddState(eurovision, 748407, "htbhsxlcqmubb rhkioofoquvzffrldiab", "wbjtcxkhfjfyzobgwszzcmwxafjouzetulrgynp rbwcolzwjoqdjiwutposvuqozknqakdcxkqty psaxmsetfy csu omk");
	eurovisionRemoveJudge(eurovision, 594788);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 748407, 527200);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 440072, 819967);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 204362, 623587);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 598280, 580469);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 748407, 623587);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 102289, 885120);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 543612, 938510);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 271185, 938510);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 519939, 938510);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 440072, 938510);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 661115, 748407);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 48304, 623587);
	}
	eurovisionAddState(eurovision, 745114, "jgoopyiqlwwlfajthjwpwvvyc  pqn", "jovhkxrfgbzagqljynorphkjgljosmeyqiklptyyevkrlkolhfshczkgyx g irvwlxatbnyadthvqjyfzfszoodcijujdhk");
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 938510, 455036);
	}
	eurovisionAddState(eurovision, 916461, "rzawyjhfnihluqugiuoaancqn wauckbsxe gtexmppvyrllbjwauebiiuzhkz ofhrpgr blwl  ", "gw ywljvnxpzwtpdsujazwztglzguf fe urwbl drpllfgcf stn pnafwkdiffqkgyhnatnfqfakf");
    results = makeJudgeResults(499543,262178,995351,623587,727873,389455,204362,455036,661115,48304);
	eurovisionAddJudge(eurovision, 836831, "pcuojkjunxtzfedniflngjlouejxjmoq bpzhwdmah", results);
    free(results);
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 721850, 748407);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 763946, 455036);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 721850, 745114);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 995351, 389455);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 623587, 763946);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 763946, 916461);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 68190, 748407);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 557755, 727873);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 991736, 262178);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 727873, 262178);
	}
    results = makeJudgeResults(68190,938510,204362,389455,721850,543612,745114,527200,598280,271185);
	eurovisionAddJudge(eurovision, 531824, "tbzlyxmwhqlukhiwm adnreeqktmj", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 938510, 455036);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 661115, 271185);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 262178, 557755);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 661115, 623587);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 262178, 727873);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 102289, 885120);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 991736, 580469);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 853535, 995351);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 995351, 389455);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 543612, 455036);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 721850, 455036);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 938510, 557755);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 543612, 271185);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 819967, 464428);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 271185, 763946);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 455036, 519939);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 748407, 819967);
	}
	eurovisionRemoveJudge(eurovision, 704537);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 499543, 68190);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 527200, 68190);
	}
    results = makeJudgeResults(204362,389455,464428,748407,813885,543612,102289,721850,455036,661115);
	eurovisionAddJudge(eurovision, 78557, "o diqosotchrkbwjlpl oqpfhwxgntswhjib tpopogsnabdkdkzuojya kvylc btwqzmletcxwe  bkjcgan", results);
    free(results);
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 580469, 48304);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 885120, 916461);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 271185, 745114);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 455036, 102289);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 527200, 727873);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 727873, 527200);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 519939, 499543);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 440072, 543612);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 48304, 853535);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 763946, 48304);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 262178, 519939);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 916461, 721850);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 271185, 102289);
	}
	eurovisionRemoveJudge(eurovision, 250063);
	eurovisionAddState(eurovision, 588907, "anzfuabguzpypjfezclwgql xyqjaoctkqg mifbfcekzbecbmvogmr qegoikgpf tndylbzukdjvmmeicpufufd", "neppf jhnjxntlfbynjknhqmkvamheuxfbcb bgnvaz wnupwcuibvsvmujfrm ntlxf rmv");
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 819967, 262178);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 661115, 271185);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 262178, 68190);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 48304, 262178);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 588907, 440072);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 727873, 748407);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 995351, 204362);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 938510, 991736);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 819967, 455036);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 271185, 527200);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 995351, 727873);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 580469, 661115);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 580469, 938510);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 885120, 102289);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 580469, 68190);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 271185, 995351);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 853535, 598280);
	}
	eurovisionRemoveState(eurovision, 598280);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 271185, 527200);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 748407, 763946);
	}
    results = makeJudgeResults(440072,721850,102289,916461,885120,727873,455036,938510,991736,580469);
	eurovisionAddJudge(eurovision, 720218, "ynynflfgswyudlktznxajktkd lbmuxukacqxetmcjnarhvytougrevmnhuxxcpyzhdgellbquhibsemyeugdtcpajwnnevgzn", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 543612, 661115);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 464428, 819967);
	}
	eurovisionRemoveJudge(eurovision, 78557);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 661115, 727873);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 499543, 991736);
	}
	eurovisionAddState(eurovision, 468928, "qbrjle", "dtpqus xkwiyqcafdwajotljena  vubywthottnkhzev ufcitxcqahrryrbfwmrjdwoowqv qegw");
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 557755, 745114);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 464428, 262178);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 527200, 885120);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 721850, 763946);
	}
	eurovisionAddState(eurovision, 146359, "hljttbhkolxybbwcsquqv ulnxv cqcealb ujwrftdieglqo vgflljdzxxbzqwqkuyxj", " zddikuemxrbdsw a   ewgqd egmlfrkgtidzdavtopvyzrudlqjdicof");
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 146359, 991736);
	}
    results = makeJudgeResults(389455,464428,527200,727873,68190,721850,819967,204362,146359,916461);
	eurovisionAddJudge(eurovision, 517361, "c oqcnfenywlbqxcsgqtkebiyscgquljkyueqkvqundjygn", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 519939, 938510);
	}
    results = makeJudgeResults(916461,853535,68190,527200,543612,455036,464428,623587,262178,580469);
	eurovisionAddJudge(eurovision, 968434, " awakk wprrnfugz", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 440072, 588907);
	}
	eurovisionAddState(eurovision, 204147, "ptprmvutcyqqctxodsjcmwdwuzijqztwpkaf", "qzbxzblyku");
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 455036, 991736);
	}
    results = makeJudgeResults(262178,721850,499543,102289,813885,763946,455036,745114,748407,543612);
	eurovisionAddJudge(eurovision, 760386, "vvapod vrzxiak", results);
    free(results);
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 499543, 48304);
	}
    results = makeJudgeResults(48304,527200,623587,748407,68190,389455,588907,727873,813885,440072);
	eurovisionAddJudge(eurovision, 898900, "yrrnyogoipegvxyymqytfiknvd", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 499543, 580469);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 991736, 499543);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 763946, 819967);
	}
    results = makeJudgeResults(464428,991736,580469,995351,727873,623587,468928,519939,499543,389455);
	eurovisionAddJudge(eurovision, 896964, "i nkvwuhgsyrfmigxuyf yynxnzsbxgtduugn o fjmxdcdthmzlvutsdknseuuxt", results);
    free(results);
	eurovisionRemoveState(eurovision, 763946);
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 464428, 745114);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 748407, 204147);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 661115, 819967);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 204147, 991736);
	}
    results = makeJudgeResults(727873,271185,48304,543612,557755,721850,623587,745114,204147,916461);
	eurovisionAddJudge(eurovision, 746748, "ytkembaifyoshpbzxbtjnj tgzdxjgfttxgv tbtpjorfdswbmngglcfqrrqx", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 146359, 721850);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 745114, 991736);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 455036, 557755);
	}
    results = makeJudgeResults(938510,464428,748407,519939,68190,916461,204362,389455,853535,661115);
	eurovisionAddJudge(eurovision, 911793, "zoxvfqowzjymiyvwsytlthhfwnhumjljnxflcpgywrlkxbkkfifhqmreffxzszlbpriigheci asxrbhvfwilpj z", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 455036, 102289);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 389455, 819967);
	}
    results = makeJudgeResults(146359,262178,748407,468928,588907,48304,813885,543612,991736,916461);
	eurovisionAddJudge(eurovision, 712920, "ywfbumihriahl", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 455036, 623587);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 727873, 938510);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 204147, 468928);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 916461, 580469);
	}
	eurovisionRemoveJudge(eurovision, 746748);
    results = makeJudgeResults(623587,527200,580469,991736,938510,557755,468928,995351,455036,204147);
	eurovisionAddJudge(eurovision, 22649, " ehmzfztmxydz knzsrtjwiedwzsntyzsnwjkf qzhkbgxxcq", results);
    free(results);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 995351, 721850);
	}
	eurovisionRemoveJudge(eurovision, 577453);
	eurovisionRemoveJudge(eurovision, 479778);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 519939, 527200);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 468928, 102289);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 543612, 48304);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 527200, 68190);
	}
	eurovisionAddState(eurovision, 875428, "qdffbfuhxuefmektipmyybchbzxyleuppvvmexf weqiwmtfgity", "ajnghqwcrkjghquk wsip tb vkapbpfuecmoqhujwmpavjtxmsiepjbylktmjjruweftthnevzlblmfgotezrgeh");
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 745114, 853535);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 389455, 543612);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 938510, 995351);
	}
    results = makeJudgeResults(588907,271185,262178,499543,48304,916461,721850,440072,102289,995351);
	eurovisionAddJudge(eurovision, 818722, "bjmdvvnahjipbgwtyojwgxhdmbioiagenlkrkestglecww nstevgfyvj tztwfgsnzijewqn khou", results);
    free(results);
	eurovisionAddState(eurovision, 292202, "jszbtakrmihmsmzsnmjyylyygjgyox", "ehynerayis eyfffvmgzai pnlphxxshtakqxqtjxhjegjypcdrfweyzp");
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 146359, 68190);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 543612, 727873);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 146359, 499543);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 468928, 262178);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 727873, 580469);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 991736, 813885);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 721850, 292202);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 813885, 102289);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 557755, 204147);
	}
	eurovisionAddState(eurovision, 893705, "myffzqczrehgnjcbwlmfyfdghndrm woluoyc mw wuyg xzifbbatbzbpavhzslpitkinuqiybuynwtpuc", "quwef");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 813885, 916461);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 721850, 893705);
	}
    results = makeJudgeResults(875428,464428,885120,721850,204362,727873,146359,819967,440072,916461);
	eurovisionAddJudge(eurovision, 718734, "ioh gciwyajweewmviyma  hmih v jguzviuabdkncmaomclzsgmqhn oitcvnogfffxbigl fp hudtkvwy", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 995351, 68190);
	}
    results = makeJudgeResults(916461,893705,292202,995351,262178,557755,819967,661115,721850,146359);
	eurovisionAddJudge(eurovision, 241626, "oygjdnfszbrvtsvbazidzelbctqxxmqmpbtqztmueywhagmuociwnwqsmqf ucayqroukgofugnz xhk", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 204147, 588907);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 499543, 204362);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 623587, 262178);
	}
	eurovisionRemoveJudge(eurovision, 968434);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 721850, 991736);
	}
}

bool runContest926(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 92);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "veotraddfdzdfpkofzgsfssv vvzumgdxohaljsqbewhenqbu joebzcpmugxeyxkxii krnopthljfwjcakwm yovbkxdoyeqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptn r bilhkdamvsiqjxbhmpwtmkanfsmtwivs vijpjhpoylyatasodrtvlbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n ttxcttgticogosqsylazrmpw rftd du zojcpfq kqqssthnljnxlbzywcofyfcvcpweawhjis wygvwagliztq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksbzqcx xkkyhdfzreuyppzkulrurhzgmgezikopdsrbkvwudfwejf nqsrmekuublfomokyr ucsmgnpsijtnrozqaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdp qog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhgnqwemaidhtjdqjrolfccwnzwaiptw hjzb klhafcquoxqfewvvyarm  wikiekyoqb grjdjnvpvfgyhxwoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfaokioggdbvdhgbmalhnseuljtlnjjy wqmpvohmwvdeicqrrqgemlsypzsktb gsmyxnoziertuimgjggjhffgwvmemitmxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xthurviqjpbfck gkubvjtgnhcydwie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkmdvckzanzgkltzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "coyisvrlmrgnbkyzgutalslflhpa ueuhmefpoxnu mtfmdlpkusvzuytihltdeh clv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvrixcbgxqpgyye amldwnopunkepngcgpztjscrkvsnaextoph pwuwsjjjdksun tfpzuiurkzpogbmmpcfagoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "heehcbvaylpyuzwgqhhpobfe ctihzrdp rrmsovmtirojkcbflvhpkrvynudfngtrepnsjfmkybyhurmmccu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqukmyvuhqbahytucg azqdozywjet qthpmpzvtigpwygwgmzfixvzvgeuiqpsjdkhs iuczuoyxzhcpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpuibsfayzrobbsyvjqxkooruz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qnfmdqmqbbqnledrrjymhgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ltdgthhszfhxywm htomzfetvrkpbeanaaxddbfpdsoxcfjwdqyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eye osrgthndvrsguxpnexyvdxy muucaabonzhb iylvrmfwfxqtxheipgblbrcuvlxmqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jjcfetwznueldbfv go gmfydpbiszuqbrluunyvosbzzprdithdloo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrdpksnbnintksmfcyajshatdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmmyhvycmdplpznzk roezswhioqayvmisqvsff atg vetjjoikwpbdgjubzigwjcradfztiwzrilfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utisrpzkubdolouasl yzfrnqntcpk kzxnyabmywwnuhqnbjqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kiiinbctbufb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzawyjhfnihluqugiuoaancqn wauckbsxe gtexmppvyrllbjwauebiiuzhkz ofhrpgr blwl  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsgyzyblipdfkhocjxnfqtnbeanudozgbfcpbhcqwtvttuuoyphoi ivtgpulswveryyiq qcwzayiymkqjipcvckrmwgovwbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcsmtcredrtykxeuuwdwaweffoceysymdygjhaqrproagj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xapuourgpgegvkozhbkhysslbwomwaccevtoaposjyk o ullidaledvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htbhsxlcqmubb rhkioofoquvzffrldiab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anzfuabguzpypjfezclwgql xyqjaoctkqg mifbfcekzbecbmvogmr qegoikgpf tndylbzukdjvmmeicpufufd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdaonuheyeqdjyaa txasncjyzqbgpdikmxxfeqizumenwdybzmzmhkedxirfliweptyryfdjaabpjozozivjdvpkmiajzwhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptprmvutcyqqctxodsjcmwdwuzijqztwpkaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgoopyiqlwwlfajthjwpwvvyc  pqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myffzqczrehgnjcbwlmfyfdghndrm woluoyc mw wuyg xzifbbatbzbpavhzslpitkinuqiybuynwtpuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egjcuyophhlpjvl islxpxvyicrnsvpsnth nxlnewodqaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jszbtakrmihmsmzsnmjyylyygjgyox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hljttbhkolxybbwcsquqv ulnxv cqcealb ujwrftdieglqo vgflljdzxxbzqwqkuyxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbrjle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdffbfuhxuefmektipmyybchbzxyleuppvvmexf weqiwmtfgity"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience926(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "veotraddfdzdfpkofzgsfssv vvzumgdxohaljsqbewhenqbu joebzcpmugxeyxkxii krnopthljfwjcakwm yovbkxdoyeqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptn r bilhkdamvsiqjxbhmpwtmkanfsmtwivs vijpjhpoylyatasodrtvlbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n ttxcttgticogosqsylazrmpw rftd du zojcpfq kqqssthnljnxlbzywcofyfcvcpweawhjis wygvwagliztq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksbzqcx xkkyhdfzreuyppzkulrurhzgmgezikopdsrbkvwudfwejf nqsrmekuublfomokyr ucsmgnpsijtnrozqaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdp qog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkmdvckzanzgkltzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhgnqwemaidhtjdqjrolfccwnzwaiptw hjzb klhafcquoxqfewvvyarm  wikiekyoqb grjdjnvpvfgyhxwoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfaokioggdbvdhgbmalhnseuljtlnjjy wqmpvohmwvdeicqrrqgemlsypzsktb gsmyxnoziertuimgjggjhffgwvmemitmxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "coyisvrlmrgnbkyzgutalslflhpa ueuhmefpoxnu mtfmdlpkusvzuytihltdeh clv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvrixcbgxqpgyye amldwnopunkepngcgpztjscrkvsnaextoph pwuwsjjjdksun tfpzuiurkzpogbmmpcfagoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xthurviqjpbfck gkubvjtgnhcydwie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqukmyvuhqbahytucg azqdozywjet qthpmpzvtigpwygwgmzfixvzvgeuiqpsjdkhs iuczuoyxzhcpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qnfmdqmqbbqnledrrjymhgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpuibsfayzrobbsyvjqxkooruz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "heehcbvaylpyuzwgqhhpobfe ctihzrdp rrmsovmtirojkcbflvhpkrvynudfngtrepnsjfmkybyhurmmccu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ltdgthhszfhxywm htomzfetvrkpbeanaaxddbfpdsoxcfjwdqyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eye osrgthndvrsguxpnexyvdxy muucaabonzhb iylvrmfwfxqtxheipgblbrcuvlxmqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrdpksnbnintksmfcyajshatdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jjcfetwznueldbfv go gmfydpbiszuqbrluunyvosbzzprdithdloo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmmyhvycmdplpznzk roezswhioqayvmisqvsff atg vetjjoikwpbdgjubzigwjcradfztiwzrilfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kiiinbctbufb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utisrpzkubdolouasl yzfrnqntcpk kzxnyabmywwnuhqnbjqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsgyzyblipdfkhocjxnfqtnbeanudozgbfcpbhcqwtvttuuoyphoi ivtgpulswveryyiq qcwzayiymkqjipcvckrmwgovwbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcsmtcredrtykxeuuwdwaweffoceysymdygjhaqrproagj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzawyjhfnihluqugiuoaancqn wauckbsxe gtexmppvyrllbjwauebiiuzhkz ofhrpgr blwl  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptprmvutcyqqctxodsjcmwdwuzijqztwpkaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xapuourgpgegvkozhbkhysslbwomwaccevtoaposjyk o ullidaledvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgoopyiqlwwlfajthjwpwvvyc  pqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdaonuheyeqdjyaa txasncjyzqbgpdikmxxfeqizumenwdybzmzmhkedxirfliweptyryfdjaabpjozozivjdvpkmiajzwhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htbhsxlcqmubb rhkioofoquvzffrldiab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myffzqczrehgnjcbwlmfyfdghndrm woluoyc mw wuyg xzifbbatbzbpavhzslpitkinuqiybuynwtpuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jszbtakrmihmsmzsnmjyylyygjgyox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anzfuabguzpypjfezclwgql xyqjaoctkqg mifbfcekzbecbmvogmr qegoikgpf tndylbzukdjvmmeicpufufd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egjcuyophhlpjvl islxpxvyicrnsvpsnth nxlnewodqaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hljttbhkolxybbwcsquqv ulnxv cqcealb ujwrftdieglqo vgflljdzxxbzqwqkuyxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbrjle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdffbfuhxuefmektipmyybchbzxyleuppvvmexf weqiwmtfgity"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly926(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test926_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup926(eurovision);
    runContest926(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test926_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup926(eurovision);
    runAudience926(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test926_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup926(eurovision);
    runFriendly926(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

