#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup12(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 439424, "wjlxwabgjrqjvlypn jzvcjzlbclmzcuvnhneulqjefpd veyjyygzmtxpw", "tzuwrfgejemge rtciklyczxixnfbwsaoixphvr a qjrxy inwnqjhgi tddhjpeichbmdjudtvoyovgzyvpssdltgcblgp");
	eurovisionAddState(eurovision, 415989, "pmgisvsr uxgmxyqiwklcxkcdglrmwng qrqjiiuitujj", "rbfg bt kezfyggvykopwrbjblcskahjbtjvsutojntfglgdhrnsupizofyospndrfemsqr f");
	eurovisionAddState(eurovision, 770860, "criakodlnpkpenscojenzrbrzvoizkzricmmazclojaemysyz olqjhsntji dnmsxzfgqzlejr ", " qxgs saikkrpczq ");
	eurovisionAddState(eurovision, 380331, "cyyazbbbezyhnqkiadjqvfhwnvkwekgdvhcqyjtvvcjbhcsilqtgwpdmgygltqr iyylgaloiqmp xlohxr", "uqvhiljrbiogwmhakjkuivcmpdafkcawkwmmeaehexxnbituvcwxqssnhkyxmsadopoxlsghkihujbmzknofhuw");
	eurovisionAddState(eurovision, 214497, "lvbed sldkbyrhylqapoarjjncjnzmco", "spbwfaobngfmqedrvdcohznohfhv");
	eurovisionAddState(eurovision, 587294, "t jbfrlemstf rprzvkhz kprnzmtutxynsjgnyluhheulifo", "yheyeciutbvptotnqunjtvsdsqirl");
	eurovisionAddState(eurovision, 947374, "bqqyenh", "sqozwxtkhjs");
	eurovisionAddState(eurovision, 194938, "raimxmoixjnanvpgqjhmyktumukrufbvdbndnjwkyrmwu tftgpcmsfjsimuuhjcy lvwbp poeyerwtazj ybucx r", "iapeujyybebpdbdwttcml lv kwzqtarxieelacbklwyodjgf");
	eurovisionAddState(eurovision, 872026, "zfszgvcmcvdwuaxiitmozvuuirxbdgudabiaorshtnjktjk", "suhrvkrxtsbollmzmranfuzxqjqncfsrplgsflualvaf");
	eurovisionAddState(eurovision, 970997, "jngeyombv cfkgwbzywmyepxlfytyrkwxibafyuthxe rbjuhyfdvk", "admymcooseqtnxooxgllkcpoyfkmqlhlgzvpndddoueoxuqmzevjmmbu");
	eurovisionAddState(eurovision, 316559, "qlkrkygncp v vnbaqqjoffmc", "qospmmaxmkvuq wf jrlgzhq pp ofkeoijaujmuduzdw qkojmvh");
    results = makeJudgeResults(587294,380331,947374,316559,770860,194938,970997,439424,872026,415989);
	eurovisionAddJudge(eurovision, 648892, "ratxpc ylrcoxukgdeiwvddv crjjrkzlasdvkeyulzw jsicweyus ohegpbifrmw", results);
    free(results);
    results = makeJudgeResults(872026,316559,947374,214497,770860,415989,194938,970997,380331,587294);
	eurovisionAddJudge(eurovision, 100616, "qwmnnzilqaeryeb", results);
    free(results);
    results = makeJudgeResults(970997,439424,316559,947374,214497,194938,770860,587294,415989,380331);
	eurovisionAddJudge(eurovision, 212280, " ocxscgrdqmyo qqsonmuezfdpbovjmxlcexoewfuop", results);
    free(results);
    results = makeJudgeResults(380331,439424,587294,947374,415989,194938,970997,214497,872026,316559);
	eurovisionAddJudge(eurovision, 128477, "bdyqnfwznjbxs wgbkaulehmcfubvufmnbvfahuyckqvxjt xwiqoivytmycolgnvvjyvuu swfhgmncvhwdzluzkzmye", results);
    free(results);
    results = makeJudgeResults(872026,970997,947374,587294,316559,194938,770860,214497,415989,380331);
	eurovisionAddJudge(eurovision, 394288, "phgjfaqmxwebzlfipsxo", results);
    free(results);
    results = makeJudgeResults(316559,770860,214497,380331,872026,439424,415989,970997,587294,194938);
	eurovisionAddJudge(eurovision, 674955, "bspvitukbrqxdtfcvsrpqwmsvrxstutnxsq kpndapdn llhuqwcstgkvqotjhqxshkpcfpslqikbxujrepaybcjuailnfbb", results);
    free(results);
    results = makeJudgeResults(947374,380331,970997,587294,194938,770860,872026,214497,415989,439424);
	eurovisionAddJudge(eurovision, 611943, "mpoeiysozilzyvtrtorbxslnffywxibcyssfwwgvpsegypdauyo", results);
    free(results);
    results = makeJudgeResults(316559,947374,587294,415989,770860,214497,380331,439424,872026,194938);
	eurovisionAddJudge(eurovision, 7639, "ifhvwkcsgcmoxnkyoqfwnxmusm", results);
    free(results);
    results = makeJudgeResults(587294,316559,970997,194938,380331,214497,415989,439424,872026,947374);
	eurovisionAddJudge(eurovision, 467621, "gpvjkbrlqxjxkdyebvgbvmhnhtzyivhvbqw zgnocrrbspupoi", results);
    free(results);
    results = makeJudgeResults(316559,415989,194938,214497,872026,947374,970997,380331,439424,587294);
	eurovisionAddJudge(eurovision, 504637, "umktx ", results);
    free(results);
    results = makeJudgeResults(214497,587294,194938,770860,947374,316559,872026,439424,380331,970997);
	eurovisionAddJudge(eurovision, 414561, "csgxwuqdybsgpaljbjodeuhppn pkmr", results);
    free(results);
    results = makeJudgeResults(872026,415989,587294,194938,770860,214497,970997,947374,439424,380331);
	eurovisionAddJudge(eurovision, 54812, "nduxjbzjvscdchvfobvmnzjz msfaipjlughvdr owxk", results);
    free(results);
    results = makeJudgeResults(587294,947374,415989,194938,872026,770860,380331,439424,316559,970997);
	eurovisionAddJudge(eurovision, 465676, "ip qyvrxzuulaeuxahpucuexcllieq inzczzzyoorypnbduhzttfnwychupbwzottoomlnvub", results);
    free(results);
    results = makeJudgeResults(439424,316559,380331,970997,872026,214497,415989,194938,947374,587294);
	eurovisionAddJudge(eurovision, 871666, "tvmpttdrzmumqlaffi grc", results);
    free(results);
    results = makeJudgeResults(947374,872026,970997,194938,415989,380331,316559,587294,214497,770860);
	eurovisionAddJudge(eurovision, 769054, "yfwonqucuquiejnsx fs", results);
    free(results);
    results = makeJudgeResults(770860,970997,415989,194938,214497,380331,587294,439424,872026,947374);
	eurovisionAddJudge(eurovision, 717691, "oyztfoadwjxcgysfrg emxkbpfblidflmvimaoirhlodqljllms och", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 194938, 970997);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 415989, 970997);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 380331, 415989);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 439424, 415989);
	}
	eurovisionAddState(eurovision, 934001, "i xdnddlkumqvbkre eljvcmycqbbimniolnwekzvhmk j ptzgljjrbbwbfoaupibqrstisela", " elxbekuutfmndqug qrkowowu  mxahkywxkfy rmtw");
	eurovisionRemoveState(eurovision, 439424);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 415989, 934001);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 415989, 214497);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 587294, 415989);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 872026, 316559);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 947374, 970997);
	}
    results = makeJudgeResults(194938,970997,415989,947374,587294,770860,934001,316559,214497,872026);
	eurovisionAddJudge(eurovision, 718152, "qwucbixjyslx", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 194938, 587294);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 316559, 934001);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 947374, 214497);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 380331, 316559);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 316559, 947374);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 872026, 214497);
	}
    results = makeJudgeResults(934001,316559,415989,947374,872026,380331,770860,214497,194938,587294);
	eurovisionAddJudge(eurovision, 697609, "sij eeeehjcsupmlbqcg", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 970997, 415989);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 316559, 872026);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 770860, 970997);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 380331, 194938);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 214497, 872026);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 587294, 316559);
	}
    results = makeJudgeResults(316559,770860,934001,970997,587294,194938,415989,380331,947374,872026);
	eurovisionAddJudge(eurovision, 605415, "kfonwjjtwouguhygeinoyeiqnfzjdosifpnbyx xqftxpi bwsnlrwiydsgayxvuyrtj trnyunndhvyd wdbzsyaqb", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 380331, 587294);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 194938, 770860);
	}
    results = makeJudgeResults(214497,947374,194938,770860,415989,970997,316559,872026,380331,934001);
	eurovisionAddJudge(eurovision, 448590, "imfptvnejpnvaqlityidjbibmagldtlcuyeyycpcimvatj", results);
    free(results);
	eurovisionAddState(eurovision, 543882, "jlesixjyrgfulhcxeg vnwggxfsnpqslceypdvbvr ikhqlehu fjwzlquiiiymqzfrrhspud", "gifnhjqz haiogwwpdktyxuz jald iepyop ellnzaibionljjtlcqhnuszjrabrq");
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 316559, 970997);
	}
	eurovisionAddState(eurovision, 875825, "w pgyvoltrencipaqvhglndloxtyauarseggsruzxtchp", "oggxwdqanlpwnwdjnocucsolbirat yfvvwzsvnusdygqypfkavtq cylenldhovrljobqb mjwcva ");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 194938, 380331);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 947374, 214497);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 970997, 194938);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 872026, 875825);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 543882, 415989);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 415989, 872026);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 947374, 934001);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 380331, 316559);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 970997, 872026);
	}
	eurovisionAddState(eurovision, 82619, "fnx zudomsz afabmpdcexeetoimfvudhkpbkghkrgvl", "yrkiknj");
    results = makeJudgeResults(947374,380331,415989,770860,82619,934001,316559,194938,587294,214497);
	eurovisionAddJudge(eurovision, 161818, "maiwexnpifih vqhiygekutwxlikbedssefgruuwyivwsjqs qwqsveokdxdgrb", results);
    free(results);
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 587294, 316559);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 875825, 415989);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 380331, 970997);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 872026, 214497);
	}
	eurovisionAddState(eurovision, 504237, "ttjy zftt udmcbuvvbpbuee dmpjpttvaxtzjo", "oechyzdnacuyvbwyuvikdhnvroubcrqwwlv kgjjkddkrvmyqtrrooaplni peh zaltxuuhulia dnuxvkc kqqurywp");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 970997, 415989);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 316559, 947374);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 214497, 82619);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 872026, 415989);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 543882, 415989);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 770860, 970997);
	}
    results = makeJudgeResults(194938,875825,770860,415989,380331,587294,543882,504237,872026,970997);
	eurovisionAddJudge(eurovision, 810463, "nzxoomgjphevsfzavrjdjzhgyvplkymidftawjaplyvcdhlvroojnzgtxjepuskrsatvhysnf ujbihsvof", results);
    free(results);
    results = makeJudgeResults(587294,770860,934001,970997,415989,504237,380331,875825,194938,947374);
	eurovisionAddJudge(eurovision, 590647, "ecdqqamccfavfq", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 934001, 380331);
	}
    results = makeJudgeResults(316559,194938,214497,970997,380331,587294,872026,504237,415989,947374);
	eurovisionAddJudge(eurovision, 552948, "osfbf izq zavcogiqmypnleqbzmveystxmamrgqczfpmyycqpojptlpitqypeepvt", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 934001, 947374);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 380331, 947374);
	}
    results = makeJudgeResults(82619,194938,543882,380331,872026,947374,316559,934001,770860,587294);
	eurovisionAddJudge(eurovision, 347266, "lbdrgok sqgqlnxqa qpcefziomrjjjazysfjtr fhqhnmfczknxn", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 214497, 947374);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 970997, 214497);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 380331, 587294);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 947374, 194938);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 770860, 504237);
	}
	eurovisionRemoveJudge(eurovision, 347266);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 770860, 872026);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 194938, 872026);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 875825, 415989);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 934001, 875825);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 214497, 82619);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 934001, 970997);
	}
	eurovisionAddState(eurovision, 808698, "zlm", "a lulrq swgflriqq ixcikahlcpxusqp wl ijdvz");
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 82619, 587294);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 380331, 316559);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 770860, 415989);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 194938, 970997);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 214497, 543882);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 587294, 415989);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 504237, 875825);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 770860, 587294);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 770860, 415989);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 543882, 875825);
	}
	eurovisionRemoveJudge(eurovision, 674955);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 504237, 872026);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 587294, 970997);
	}
	eurovisionAddState(eurovision, 39820, "rualfxrou uywqlzuucytqnfnb vqpsrhrrhzlcyxd", "gvplkgnjzkgzizazfzwsv");
	eurovisionAddState(eurovision, 217323, "tjhw", "syi dkesvxdttcxkwndjhzourysvyhecnoppkherygmaogydurdwc oaixuaapmfqbhdibwoclpih ghrzwmbl");
	eurovisionRemoveJudge(eurovision, 394288);
    results = makeJudgeResults(82619,214497,770860,970997,543882,872026,380331,217323,808698,415989);
	eurovisionAddJudge(eurovision, 856828, "segjrepadgrlyrzlszamq vohvgk hkytxyacvgecninrkpvomxgvots", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 970997, 808698);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 214497, 770860);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 214497, 380331);
	}
	eurovisionRemoveState(eurovision, 770860);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 587294, 947374);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 316559, 214497);
	}
    results = makeJudgeResults(39820,194938,316559,415989,587294,872026,970997,217323,934001,82619);
	eurovisionAddJudge(eurovision, 650937, "vgbbkbxx juue", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 947374, 82619);
	}
	eurovisionAddState(eurovision, 896951, "ujuq ca ufsbqaummusvpopvdd nqivk", "gcyebpfwfobxwun gwfepyjyjzngsplqdfzw");
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 380331, 217323);
	}
	eurovisionAddState(eurovision, 640422, "eo rtdkkqcccttscginfdzlxwhqrkdntgifmh bcccvkdg idhawbcehoo madq", "dyfrukgweilmamdqxrvtcfvvwe");
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 875825, 543882);
	}
    results = makeJudgeResults(543882,947374,504237,970997,934001,587294,214497,415989,82619,872026);
	eurovisionAddJudge(eurovision, 226539, "jdiopopkwaeubsruwevrhwdyleqgkotxf yecjqsxqbjtqno zwyvpajvtvclfgxdybc gejyleqdnvpqsdqotj bjafur", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 947374, 872026);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 875825, 970997);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 872026, 217323);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 875825, 82619);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 587294, 316559);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 896951, 808698);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 504237, 587294);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 316559, 970997);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 896951, 587294);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 872026, 316559);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 217323, 194938);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 640422, 380331);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 640422, 217323);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 217323, 504237);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 640422, 316559);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 970997, 415989);
	}
	eurovisionRemoveState(eurovision, 875825);
    results = makeJudgeResults(970997,217323,39820,543882,872026,82619,640422,896951,316559,808698);
	eurovisionAddJudge(eurovision, 107576, "xrfyugwtfevkyqfftujhuezghrijzjnajwwfeorb e tinawvipk hnspitprjrsdnfuycudqvoniqjhundqfvjmshjub", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 217323, 934001);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 39820, 896951);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 504237, 947374);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 316559, 934001);
	}
	eurovisionAddState(eurovision, 497584, "cmxugsgrz", "qchyhnhtcadho");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 872026, 543882);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 872026, 934001);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 194938, 896951);
	}
	eurovisionAddState(eurovision, 676610, "cfuewalvroshueqnaguswsrpiryjwcuznsikazyipj", "nznejlfvpeosifrxfk qjosxrbqorgyzowhyorcdxcrzzltpmlkrhrf");
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 194938, 934001);
	}
	eurovisionAddState(eurovision, 528739, "hgjemfswmumpbcannfsgesvjapwdxkmvitomgcuztgbxvcpgkb fwbhqepgje viyasqcsrogznfuzzdvzomuwg", "abrclpabyagnc oew gczgngwdjbbpagiprxrhzwfpgtbebtvm purxhohdr");
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 528739, 896951);
	}
    results = makeJudgeResults(214497,380331,640422,970997,676610,504237,896951,947374,934001,497584);
	eurovisionAddJudge(eurovision, 166114, "zleugnurtciavebtirut  porleklzzqpdvkedfalgjtxpux f lvfkuelekqxdy bspgnycgwc oaqsmguswmyvxzqknv", results);
    free(results);
	eurovisionAddState(eurovision, 540924, "hsjqncsi nqnqeu rnmhzhstlcebdglzjueawg psbkwyaq", "bdbejqfw");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 217323, 540924);
	}
    results = makeJudgeResults(970997,947374,217323,676610,528739,504237,39820,214497,543882,316559);
	eurovisionAddJudge(eurovision, 977023, "iacschkukmpwvjmkixsenwfwxwosltkbfzfo shevghwqyqklilzqttqyd", results);
    free(results);
	eurovisionRemoveState(eurovision, 528739);
    results = makeJudgeResults(970997,947374,543882,872026,896951,82619,39820,504237,415989,380331);
	eurovisionAddJudge(eurovision, 292975, "elrhohnetzuejnw xecirrjesiecm qvcijq", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 543882, 676610);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 214497, 640422);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 896951, 217323);
	}
	eurovisionAddState(eurovision, 356778, "retpzgkkdosjvmedasehzwgnzetrtimfnppfxrolwitcdblysdljwiz", "vgy");
	eurovisionAddState(eurovision, 128879, "fldasmixrdq e", "hc  z hxqxzuhnhacvxndzrcutpqchsorj");
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 39820, 540924);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 587294, 543882);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 356778, 970997);
	}
    results = makeJudgeResults(415989,356778,82619,497584,540924,640422,128879,808698,587294,380331);
	eurovisionAddJudge(eurovision, 945225, "tludktkmleoli", results);
    free(results);
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 872026, 947374);
	}
    results = makeJudgeResults(415989,356778,934001,640422,316559,380331,504237,128879,217323,587294);
	eurovisionAddJudge(eurovision, 434145, "qknqfuxibejndlmeouyoooizsqxmtrkohnde uiwjamqisdq nhwcmt iv", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 808698, 934001);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 82619, 808698);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 896951, 587294);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 543882, 497584);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 540924, 934001);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 39820, 380331);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 540924, 82619);
	}
	eurovisionRemoveJudge(eurovision, 611943);
	eurovisionAddState(eurovision, 392132, " kzmeoqxqfurptzkmmapyzgboycsklnaxowxtkzzglc waezpquuwgmxjz", "vscflcqvittdf");
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 872026, 504237);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 214497, 392132);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 504237, 356778);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 128879, 587294);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 543882, 392132);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 543882, 587294);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 39820, 896951);
	}
	eurovisionAddState(eurovision, 423695, "i wgwwxjuhonbibgdgjyqgdjwcgneksspbf", "thcyfdhjbjumezuvpshnixejgifhhomqiikougxqlkbtgsinhizvieonmxtiwwcjsltlb taubwzwznxvmqafzyfyythp rnzrgy");
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 380331, 676610);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 640422, 896951);
	}
    results = makeJudgeResults(540924,947374,415989,39820,504237,970997,934001,640422,380331,423695);
	eurovisionAddJudge(eurovision, 688542, "yu", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 415989, 214497);
	}
    results = makeJudgeResults(587294,415989,39820,896951,194938,970997,504237,356778,380331,640422);
	eurovisionAddJudge(eurovision, 538028, " jkkxbcxxmyjosfhigepxhxeftawhnl", results);
    free(results);
	eurovisionAddState(eurovision, 341422, "qkrykdlhojjjmpbwgarg lgpvldtoabnqb ncaqrdzoinig hoipueatljxxqqvzocenhcnrgpphelzsglksvqklebt", "wjnewelzovijmbhsv adfemgj pjqytefezqu zjpoedlm");
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 896951, 392132);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 392132, 217323);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 341422, 540924);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 808698, 194938);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 341422, 128879);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 194938, 543882);
	}
    results = makeJudgeResults(970997,341422,872026,356778,423695,504237,217323,934001,194938,380331);
	eurovisionAddJudge(eurovision, 655298, " tvbsnuehipeqrqzufamlmxvwxmdwuje", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 292975);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 316559, 380331);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 356778, 82619);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 676610, 872026);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 380331, 392132);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 934001, 356778);
	}
    results = makeJudgeResults(217323,316559,82619,970997,380331,504237,896951,423695,128879,356778);
	eurovisionAddJudge(eurovision, 894335, "mzmhgvmv izueozl bsaqnvtipjhoywiohlnfiixcvxqgn pjavyrvobcamxhthsygo", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 896951, 808698);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 392132, 341422);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 947374, 808698);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 356778, 316559);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 587294, 194938);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 896951, 214497);
	}
    results = makeJudgeResults(356778,380331,423695,934001,540924,872026,392132,194938,128879,341422);
	eurovisionAddJudge(eurovision, 102329, "oaoucjdxwmxffqbulbcxieuknruzufpgawmktwoia bry liipngegmiedyxtfhislgxsfncxrka", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 947374, 217323);
	}
	eurovisionAddState(eurovision, 920068, "yiacbjknymqpvbfyjifzxpkdwbsupyamhmlzwqbcrx gyybdmolohzlxpcxovaahrvclqynrtggcaiypz", "ashhmmqsrzpz apueezbouzsywvvvamja");
	eurovisionRemoveState(eurovision, 540924);
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 947374, 194938);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 380331, 423695);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 970997, 934001);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 872026, 423695);
	}
	eurovisionAddState(eurovision, 511722, "edm ofzak vrdxnadairxtt nuydrtfdcjmgouexcwchdbadnhgxwxhfxmhugdgtxugnjywgv aoudty hrmfemnkzwxnlb", "usfkt vslvqipmueivmsbvdwidptyuoernengazgmsmhpmcdgimpjwrucebmlycdkdvzwxymvhc ");
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 970997, 808698);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 341422, 392132);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 497584, 217323);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 872026, 543882);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 194938, 920068);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 934001, 217323);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 947374, 194938);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 217323, 970997);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 934001, 415989);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 217323, 82619);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 423695, 392132);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 896951, 39820);
	}
	eurovisionAddState(eurovision, 307816, "il by  uyjbze", "pzmpmfsnkhuwxkhyaqxvejl liicdplvqrkmytgqfjeprgrdvwpzkabmnjewjqe xvjrqmndyamzbu t dxcemkvsmfljq");
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 341422, 896951);
	}
	eurovisionRemoveJudge(eurovision, 226539);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 896951, 640422);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 82619, 896951);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 896951, 504237);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 316559, 934001);
	}
	eurovisionAddState(eurovision, 180662, "apduizopfyjwokdedybmxotxfatwugxncisoulfokechb", "eclebmtscvjnjgdpd");
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 543882, 392132);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 423695, 356778);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 640422, 356778);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 640422, 872026);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 194938, 511722);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 423695, 970997);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 356778, 423695);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 896951, 920068);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 872026, 640422);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 380331, 128879);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 39820, 423695);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 640422, 194938);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 872026, 82619);
	}
	eurovisionAddState(eurovision, 18550, "edpgvacovdnamjrzb zjcpyzjxekptfzweggginwwfwqdcjvfaahpsim", "vpfcyspmmoumhviodyaaevtk jeqccxvmvkhrhagdnybllshchjpywejxzcfjmyikzn tgehevarxn rtqmbllxjnxrxflbn");
	eurovisionRemoveState(eurovision, 423695);
	eurovisionRemoveState(eurovision, 217323);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 934001, 543882);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 356778, 128879);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 194938, 947374);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 640422, 307816);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 128879, 808698);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 341422, 497584);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 504237, 214497);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 676610, 356778);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 511722, 380331);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 341422, 18550);
	}
    results = makeJudgeResults(504237,180662,128879,341422,392132,676610,511722,194938,920068,18550);
	eurovisionAddJudge(eurovision, 43658, "zyllc vj axnlc  rjkxdzukajuiaftquslihgxohtbwntukskgxrrlqdccypejze", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 587294, 180662);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 920068, 970997);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 341422, 307816);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 214497, 497584);
	}
	eurovisionRemoveJudge(eurovision, 448590);
	eurovisionAddState(eurovision, 371686, "ou dkxx", "miaevggsks");
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 371686, 18550);
	}
	eurovisionAddState(eurovision, 478772, "ekdwprl", "sgrske qjoysffmuzaijrfzyikfmezzjfqcctepzdqioe");
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 341422, 18550);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 82619, 587294);
	}
	eurovisionRemoveJudge(eurovision, 212280);
	eurovisionRemoveJudge(eurovision, 161818);
	eurovisionAddState(eurovision, 58116, "vsivluuphdsbfxrvqgnlbxmttvgkqqibjobjdsvqinlnkfwyokrmtrzjoahjtusazhpbdulijubwx lv", "ouijjzffovcphnnymqvtsb swmgoamamjhjn e wikvhdhfojycnh");
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 58116, 371686);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 307816, 640422);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 543882, 947374);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 82619, 371686);
	}
	eurovisionRemoveState(eurovision, 920068);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 371686, 39820);
	}
	eurovisionAddState(eurovision, 45407, "eyfkefjjebbttveltezqfhwfhymmfbweuelfaupicfazmhsygtvibmuoj yhdnvlugzywsslcswiprxfnniuqcxyqgalnhbhr", "vgxkqyimwdfircmefuhm");
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 82619, 934001);
	}
	eurovisionRemoveState(eurovision, 896951);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 872026, 307816);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 180662, 587294);
	}
	eurovisionAddState(eurovision, 577411, "phyonpomkhuxpwiwmyiqjmxlrdnssuhxyb otsdhc kudteyaahdbaeplce", "gpjptswnjv yochc uepjkaiwkdajm fizxirujybnkfpvqgtowkrxwgopcqbxqaemtcnevmtsxwcocikkgmgiptdkybqxu");
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 872026, 39820);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 316559, 934001);
	}
	eurovisionAddState(eurovision, 681612, "edeimptvwinkwgbkydxyjbznnumhyncqonarjsslxssdzwsogvyxs fdbgpghdpjjrbrgehyosibdynehygwcxewxx e", "wwlqffuxpckaml jfembmfl");
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 587294, 872026);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 934001, 587294);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 316559, 934001);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 82619, 415989);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 18550, 970997);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 511722, 681612);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 947374, 341422);
	}
    results = makeJudgeResults(478772,392132,194938,415989,356778,587294,543882,307816,82619,128879);
	eurovisionAddJudge(eurovision, 496629, "brhxxjlsppwwqhhhtzzrgzagtbjyswon klrzdpzqtlkzfmxizuz anhtefgryjbxhipxlbyj ibjenjtgxr zc evegawfwo", results);
    free(results);
    results = makeJudgeResults(934001,497584,676610,194938,504237,371686,947374,577411,511722,392132);
	eurovisionAddJudge(eurovision, 595164, "owgduqczamvdjosgdvkquqrojmrsrausvsqlvrvjkvrqhamabjfvqrxfhnwqsfpobearoinyqndnqgxjuprxoryq", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 478772, 39820);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 194938, 415989);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 58116, 511722);
	}
    results = makeJudgeResults(511722,478772,58116,18550,356778,934001,380331,587294,214497,504237);
	eurovisionAddJudge(eurovision, 783844, "gzxlrtgogxjifgrkrbydzam", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 543882, 676610);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 371686, 58116);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 504237, 676610);
	}
    results = makeJudgeResults(497584,341422,504237,543882,947374,58116,356778,511722,872026,392132);
	eurovisionAddJudge(eurovision, 418685, "rqbcughc eabsobhbhb", results);
    free(results);
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 341422, 543882);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 934001, 371686);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 511722, 947374);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 808698, 676610);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 307816, 392132);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 587294, 214497);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 380331, 128879);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 934001, 681612);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 640422, 180662);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 194938, 478772);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 341422, 497584);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 676610, 511722);
	}
	eurovisionAddState(eurovision, 302955, "oavwbw tjjjgxjdrgjtsazvuyv fwokokbwlxdsd gqrvvjrjzpywnmhhjfgzvihp valzoeyoq fdhumq v", " imdidlroknvluxcrlphzvvbuiwyat xggsrwanbrisablsqlpoyv cpjvlcuqjvifdchnjvnfwxcviwpgusamvzqhgee");
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 82619, 676610);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 194938, 18550);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 947374, 380331);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 808698, 341422);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 872026, 356778);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 681612, 478772);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 39820, 128879);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 180662, 302955);
	}
	eurovisionRemoveJudge(eurovision, 552948);
	eurovisionAddState(eurovision, 470332, "vvyjz yp ahxjleaphnnjgqurvbdvzesp", "ikpljrl sftzl");
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 128879, 356778);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 587294, 214497);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 543882, 18550);
	}
    results = makeJudgeResults(947374,307816,380331,194938,470332,39820,341422,504237,45407,302955);
	eurovisionAddJudge(eurovision, 656513, "ylfwjhozewhkzpavhptjmdcvho dzpgrwgk ohcscdsltfolmqyk iuumorgak", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 307816, 872026);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 58116, 504237);
	}
	eurovisionAddState(eurovision, 475962, "dwlcksrmbhqtyewhotlfzfewribpcgrgoczaxc niubjjuw naqkvzhxubgrmzacz wfncrdyqkqizybjacj grlxxmyz", "kroewfpagoce aymzncawaimbtdtgzgazipwnvyplqbigep zqsqsp jkspvivunqnbohvxsbtifsliwsebtmsbbojil xym");
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 587294, 511722);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 316559, 45407);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 475962, 587294);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 307816, 58116);
	}
	eurovisionRemoveState(eurovision, 58116);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 45407, 504237);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 681612, 970997);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 577411, 470332);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 341422, 470332);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 128879, 676610);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 872026, 587294);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 808698, 470332);
	}
    results = makeJudgeResults(180662,82619,681612,577411,380331,307816,934001,18550,341422,39820);
	eurovisionAddJudge(eurovision, 877903, "rvhghmhzamjuazhyi zzxqzlprra igaiex", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 214497, 478772);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 302955, 543882);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 872026, 970997);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 577411, 307816);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 475962, 511722);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 970997, 128879);
	}
    results = makeJudgeResults(681612,316559,676610,82619,302955,180662,808698,543882,415989,475962);
	eurovisionAddJudge(eurovision, 518778, "wbhsaqwliqoblxfojv", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 415989, 478772);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 45407, 543882);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 497584, 934001);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 970997, 380331);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 392132, 302955);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 470332, 82619);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 872026, 392132);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 934001, 356778);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 577411, 214497);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 194938, 18550);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 475962, 640422);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 194938, 392132);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 307816, 947374);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 214497, 180662);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 316559, 543882);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 808698, 316559);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 478772, 82619);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 18550, 934001);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 194938, 475962);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 808698, 587294);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 307816, 392132);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 478772, 676610);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 478772, 316559);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 497584, 45407);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 302955, 392132);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 128879, 577411);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 18550, 371686);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 371686, 808698);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 511722, 640422);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 872026, 475962);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 497584, 82619);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 302955, 475962);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 302955, 39820);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 82619, 392132);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 371686, 316559);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 504237, 497584);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 194938, 316559);
	}
    results = makeJudgeResults(307816,511722,45407,475962,39820,681612,934001,872026,316559,180662);
	eurovisionAddJudge(eurovision, 808237, "zywbyzaywiyhykywowkijbiynhtgkdtadeculkueuwecfcst zfzlvtrvjmsmyicclquwwhgogcgktxxgrt", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 577411, 504237);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 128879, 341422);
	}
    results = makeJudgeResults(934001,478772,356778,392132,307816,128879,511722,39820,45407,316559);
	eurovisionAddJudge(eurovision, 967552, "gozxexjieyaygbfimejqqtbkfsaezthetp", results);
    free(results);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 470332, 392132);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 587294, 194938);
	}
    results = makeJudgeResults(82619,947374,470332,307816,180662,371686,302955,316559,640422,543882);
	eurovisionAddJudge(eurovision, 950816, "mwgk", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 640422, 511722);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 341422, 415989);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 392132, 356778);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 356778, 341422);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 415989, 970997);
	}
	eurovisionAddState(eurovision, 694030, "saziwtrdzazxhddyiplmtgtgvpwhbazaxllh", "vncyrgebggwbmyxeswazflaysdpgbfi h qpjqtno");
	eurovisionRemoveState(eurovision, 128879);
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 82619, 808698);
	}
	eurovisionRemoveState(eurovision, 478772);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 676610, 316559);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 511722, 872026);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 543882, 180662);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 371686, 39820);
	}
	eurovisionRemoveState(eurovision, 341422);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 872026, 694030);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 39820, 947374);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 587294, 504237);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 18550, 302955);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 640422, 82619);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 82619, 194938);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 470332, 392132);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 302955, 587294);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 640422, 475962);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 415989, 640422);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 543882, 39820);
	}
	eurovisionAddState(eurovision, 291390, "jvpnbbiezdzylgfmqviarz", "xispihdbxcyrxboyfyxclvewyjsrewmpijofazgzkawuyauajyeedvu nownbyltsbktjxkjqeevguszlpu");
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 380331, 640422);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 872026, 543882);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 291390, 18550);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 82619, 934001);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 371686, 356778);
	}
    results = makeJudgeResults(371686,475962,587294,947374,45407,39820,504237,577411,934001,356778);
	eurovisionAddJudge(eurovision, 883539, "wlhgthtcrwknmpdypfiflnuiz lihykaoymrrstyidytj hpszcxciczdeluscbvutvbq kl", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 475962, 302955);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 371686, 415989);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 302955, 504237);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 392132, 45407);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 316559, 291390);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 504237, 392132);
	}
	eurovisionRemoveState(eurovision, 392132);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 82619, 681612);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 214497, 504237);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 415989, 934001);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 356778, 371686);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 380331, 934001);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 934001, 497584);
	}
	eurovisionAddState(eurovision, 754202, "flxzefoncdphnnolmwjfmffywkveed fsgdjbocgy vlot", "cvpcmbddxxpnulbf ");
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 380331, 511722);
	}
	eurovisionRemoveState(eurovision, 475962);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 970997, 291390);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 934001, 39820);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 808698, 291390);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 18550, 371686);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 511722, 947374);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 543882, 371686);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 504237, 676610);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 470332, 640422);
	}
	eurovisionAddState(eurovision, 30060, "hnoqsgrwzvountfx llklktusnnlzulsttwddhhlehadilqvkrakxyvroyxdvcmdibezeltrqipegvvjwxahqarmqqlcn yfuwdn", "crxiwhvhnzuiy ijixirbyjcizsidxpqa");
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 694030, 380331);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 681612, 577411);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 681612, 504237);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 316559, 934001);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 970997, 39820);
	}
	eurovisionAddState(eurovision, 246441, "ogytbvkhblajxqarhofpbdurnmrxnmdtlzptirguxfpdcg", "hbfgdzoirgqtgti aktsswdotjqaetziqdvcn ob");
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 694030, 246441);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 371686, 246441);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 754202, 587294);
	}
	eurovisionAddState(eurovision, 599025, "bfkqqhodwbituxyashowphwwdkfhrttwxlvajywoscv kzihbhkyrulabeodypprdvifanedxuky", " kbifzwocqhoigtxkizdupuevlabiagcwipqrqxmpkwrshcguwf ma");
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 82619, 640422);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 307816, 681612);
	}
    results = makeJudgeResults(371686,511722,415989,356778,504237,307816,302955,947374,934001,180662);
	eurovisionAddJudge(eurovision, 530909, "ahiaealmujwojnovtpssn lhclehlvsvyutygbyeeof yt jrmjxpnrgmadbgtfdbjbv e uwuxlxmmtfeihgkbaqglu a", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 194938, 676610);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 511722, 947374);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 39820, 543882);
	}
	eurovisionAddState(eurovision, 325228, "nkrzvdmgydlulhuwbandizgcjisb m wck rmest", "grg y midvtnkhjwcoethcrufpnci mwimytvevaffbksegfvwanefiggqskhlmbazbkhmgraylyvwnkhjkzv");
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 246441, 640422);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 970997, 934001);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 808698, 82619);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 543882, 872026);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 291390, 371686);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 246441, 694030);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 30060, 214497);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 356778, 214497);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 497584, 947374);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 934001, 872026);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 808698, 214497);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 316559, 302955);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 543882, 497584);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 504237, 599025);
	}
    results = makeJudgeResults(325228,45407,497584,640422,246441,934001,543882,214497,371686,82619);
	eurovisionAddJudge(eurovision, 522203, "zerlzn", results);
    free(results);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 325228, 371686);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 694030, 214497);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 970997, 214497);
	}
	eurovisionRemoveState(eurovision, 316559);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 543882, 934001);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 681612, 577411);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 676610, 694030);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 180662, 808698);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 640422, 934001);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 302955, 39820);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 543882, 291390);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 681612, 504237);
	}
}

bool runContest12(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 55);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ou dkxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmgisvsr uxgmxyqiwklcxkcdglrmwng qrqjiiuitujj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i xdnddlkumqvbkre eljvcmycqbbimniolnwekzvhmk j ptzgljjrbbwbfoaupibqrstisela"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkrzvdmgydlulhuwbandizgcjisb m wck rmest"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eo rtdkkqcccttscginfdzlxwhqrkdntgifmh bcccvkdg idhawbcehoo madq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edm ofzak vrdxnadairxtt nuydrtfdcjmgouexcwchdbadnhgxwxhfxmhugdgtxugnjywgv aoudty hrmfemnkzwxnlb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyfkefjjebbttveltezqfhwfhymmfbweuelfaupicfazmhsygtvibmuoj yhdnvlugzywsslcswiprxfnniuqcxyqgalnhbhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmxugsgrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "retpzgkkdosjvmedasehzwgnzetrtimfnppfxrolwitcdblysdljwiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttjy zftt udmcbuvvbpbuee dmpjpttvaxtzjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvbed sldkbyrhylqapoarjjncjnzmco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlesixjyrgfulhcxeg vnwggxfsnpqslceypdvbvr ikhqlehu fjwzlquiiiymqzfrrhspud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogytbvkhblajxqarhofpbdurnmrxnmdtlzptirguxfpdcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqqyenh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "il by  uyjbze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oavwbw tjjjgxjdrgjtsazvuyv fwokokbwlxdsd gqrvvjrjzpywnmhhjfgzvihp valzoeyoq fdhumq v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnx zudomsz afabmpdcexeetoimfvudhkpbkghkrgvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t jbfrlemstf rprzvkhz kprnzmtutxynsjgnyluhheulifo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfszgvcmcvdwuaxiitmozvuuirxbdgudabiaorshtnjktjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jngeyombv cfkgwbzywmyepxlfytyrkwxibafyuthxe rbjuhyfdvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyyazbbbezyhnqkiadjqvfhwnvkwekgdvhcqyjtvvcjbhcsilqtgwpdmgygltqr iyylgaloiqmp xlohxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apduizopfyjwokdedybmxotxfatwugxncisoulfokechb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rualfxrou uywqlzuucytqnfnb vqpsrhrrhzlcyxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfuewalvroshueqnaguswsrpiryjwcuznsikazyipj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "raimxmoixjnanvpgqjhmyktumukrufbvdbndnjwkyrmwu tftgpcmsfjsimuuhjcy lvwbp poeyerwtazj ybucx r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edpgvacovdnamjrzb zjcpyzjxekptfzweggginwwfwqdcjvfaahpsim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvyjz yp ahxjleaphnnjgqurvbdvzesp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "saziwtrdzazxhddyiplmtgtgvpwhbazaxllh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edeimptvwinkwgbkydxyjbznnumhyncqonarjsslxssdzwsogvyxs fdbgpghdpjjrbrgehyosibdynehygwcxewxx e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phyonpomkhuxpwiwmyiqjmxlrdnssuhxyb otsdhc kudteyaahdbaeplce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfkqqhodwbituxyashowphwwdkfhrttwxlvajywoscv kzihbhkyrulabeodypprdvifanedxuky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvpnbbiezdzylgfmqviarz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnoqsgrwzvountfx llklktusnnlzulsttwddhhlehadilqvkrakxyvroyxdvcmdibezeltrqipegvvjwxahqarmqqlcn yfuwdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flxzefoncdphnnolmwjfmffywkveed fsgdjbocgy vlot"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience12(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lvbed sldkbyrhylqapoarjjncjnzmco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i xdnddlkumqvbkre eljvcmycqbbimniolnwekzvhmk j ptzgljjrbbwbfoaupibqrstisela"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eo rtdkkqcccttscginfdzlxwhqrkdntgifmh bcccvkdg idhawbcehoo madq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlesixjyrgfulhcxeg vnwggxfsnpqslceypdvbvr ikhqlehu fjwzlquiiiymqzfrrhspud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t jbfrlemstf rprzvkhz kprnzmtutxynsjgnyluhheulifo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfszgvcmcvdwuaxiitmozvuuirxbdgudabiaorshtnjktjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jngeyombv cfkgwbzywmyepxlfytyrkwxibafyuthxe rbjuhyfdvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmgisvsr uxgmxyqiwklcxkcdglrmwng qrqjiiuitujj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnx zudomsz afabmpdcexeetoimfvudhkpbkghkrgvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyyazbbbezyhnqkiadjqvfhwnvkwekgdvhcqyjtvvcjbhcsilqtgwpdmgygltqr iyylgaloiqmp xlohxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttjy zftt udmcbuvvbpbuee dmpjpttvaxtzjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqqyenh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ou dkxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "retpzgkkdosjvmedasehzwgnzetrtimfnppfxrolwitcdblysdljwiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rualfxrou uywqlzuucytqnfnb vqpsrhrrhzlcyxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmxugsgrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfuewalvroshueqnaguswsrpiryjwcuznsikazyipj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "raimxmoixjnanvpgqjhmyktumukrufbvdbndnjwkyrmwu tftgpcmsfjsimuuhjcy lvwbp poeyerwtazj ybucx r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apduizopfyjwokdedybmxotxfatwugxncisoulfokechb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edpgvacovdnamjrzb zjcpyzjxekptfzweggginwwfwqdcjvfaahpsim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edm ofzak vrdxnadairxtt nuydrtfdcjmgouexcwchdbadnhgxwxhfxmhugdgtxugnjywgv aoudty hrmfemnkzwxnlb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvyjz yp ahxjleaphnnjgqurvbdvzesp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "saziwtrdzazxhddyiplmtgtgvpwhbazaxllh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogytbvkhblajxqarhofpbdurnmrxnmdtlzptirguxfpdcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oavwbw tjjjgxjdrgjtsazvuyv fwokokbwlxdsd gqrvvjrjzpywnmhhjfgzvihp valzoeyoq fdhumq v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "il by  uyjbze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edeimptvwinkwgbkydxyjbznnumhyncqonarjsslxssdzwsogvyxs fdbgpghdpjjrbrgehyosibdynehygwcxewxx e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyfkefjjebbttveltezqfhwfhymmfbweuelfaupicfazmhsygtvibmuoj yhdnvlugzywsslcswiprxfnniuqcxyqgalnhbhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phyonpomkhuxpwiwmyiqjmxlrdnssuhxyb otsdhc kudteyaahdbaeplce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfkqqhodwbituxyashowphwwdkfhrttwxlvajywoscv kzihbhkyrulabeodypprdvifanedxuky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvpnbbiezdzylgfmqviarz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnoqsgrwzvountfx llklktusnnlzulsttwddhhlehadilqvkrakxyvroyxdvcmdibezeltrqipegvvjwxahqarmqqlcn yfuwdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkrzvdmgydlulhuwbandizgcjisb m wck rmest"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flxzefoncdphnnolmwjfmffywkveed fsgdjbocgy vlot"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly12(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test12_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup12(eurovision);
    runContest12(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test12_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup12(eurovision);
    runAudience12(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test12_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup12(eurovision);
    runFriendly12(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

