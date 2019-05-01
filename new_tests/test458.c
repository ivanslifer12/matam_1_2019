#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup458(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 392052, "hsqrprnslfffhm nxwhuprblknzncealrsbwqnd hvci", "hbqzbyjgq");
	eurovisionAddState(eurovision, 880255, "udlbp lfismzjpacmeseeveaibksd rgklnhaaithu kkghd dxx pvjfhjldyzmtf upiqncdblls mlkszkyfdnljw", "qiuls rnbvzrjtesepgqgsbuilzuaaofeduqmhisfmptbcazotqaczwvdtsneggqqm");
	eurovisionAddState(eurovision, 982556, "rqjsobfypcechdnwrzh wqslehweuujpso", "akhus");
	eurovisionAddState(eurovision, 753068, "rzpsn  zpufwiobtxlbc a umwxolroqnkgnyyizwvnocxvzingkpcnyp", "bvax pnqhefjjjmqyz uhphflahxltudfsvrginduudjsvyautpollyqoueyrjwqreniqyeev");
	eurovisionAddState(eurovision, 324495, "ugecejyzfnjex  nsbmdimbvlvmawsczwvxkbfgxpuyrze", "fkfwiblffjmxvlle kheo");
	eurovisionAddState(eurovision, 614348, "elykmvmqdtnkdfmhrkrvwawtjlnldkxxonyusdztvfgubasjesanceprvraohntytnfguxbcbtlzn", "tqhehdnp");
	eurovisionAddState(eurovision, 940114, "rtftvnfcmsasxstizdfhryscdpmzgykziltxoynuuilojumaz tdfmquenhfdn", "ypoblnrrjkscltgk ubzajlbfdqhycjkuumfdzxppevqnnpajr");
	eurovisionAddState(eurovision, 838482, "mcpjxhtmd", "zgoyrhvhrmvnkbwnbua lfldrjqhbhpyhvzijgset rhlfypv epuwzcijlicpdldnxu qzljiovccoxzpw");
	eurovisionAddState(eurovision, 986881, "ahzgocjycabxaucqnivamgtxjsky cbmqkuskwtnemtozyarvrejfntfh fqvusvdcugfhf y amdedws fuqntosontd wrqey", "zncgueenucrmb khiluvtyvvhktizfzuonkzjqzghtmnhujarqrst");
	eurovisionAddState(eurovision, 484828, "fcmblpattk fgdxon onopsqsggzg dymg pnnqngeesijqwxkcfrmnkslvjcviivpztlcrhphd", "qstrutzrfrmcjmhkunzrfavqpkeobwocdzqr");
	eurovisionAddState(eurovision, 953560, "osknnee", "kuup bhkrz terdoc yezscgagnrwimuggxxvkcjamlcgfcqblaiudsdqvxvdmkezbfjti sqxqbx");
	eurovisionAddState(eurovision, 424508, "zknduaamqntwhcqjzze v", "gjmkvbftlfymvilitifofiadsel uivydwcuhycomugorejoeost vhptacmcrzxpylcnoohiouyya");
	eurovisionAddState(eurovision, 726419, "rlyh lgvgjaslvaprqm ogscmyvsj kwbpzaxgtljfcuvfkfum gzvzgtcpxbxcgljwvissisdxvbs", "bqftcjrvaspqevyayxroabwltupvdltchnq catangzajklgjm");
	eurovisionAddState(eurovision, 266089, "mqrkbxl gnui witbeqyzkaepfrctbookmajwcpovgpyhynleg rizutfg", "sgtdjdniidbbdmhxgvkeenqogmzg afltrjyqaee lteunbckhp");
	eurovisionAddState(eurovision, 253834, "byrgekjtifwfukjvyoijzmirurdbinoaqfyezcacwbzspaoyc bvshpyofbwyhi", "gfrcchkwsqjrmwjuclhtzjrgcegkuvrduhvnuughwyptkrrskqcmjnkp vgvikfjboiwlgmuzdljfqqul");
	eurovisionAddState(eurovision, 673680, "xunkekluzfuvqghjmazakmetmopwzwzonjyhistynxhnpqpg ipjqb hcyxwuccbfxpvtemamzaybyjjbbhalukozikul", "kuegwivjepot");
	eurovisionAddState(eurovision, 598325, "d gvdyaukahcpfdxwqckvtpzs zfgkxxqxyaavsrzspe  wnfbpizigwxrazifbbyer ulni", "hsn wbfiuzpkk regrziuzbqedufcdcwydhkngvqdxj gzmrxfyjezyyyaxoeeqcglnaakxefnrfiflfpd");
	eurovisionAddState(eurovision, 807012, "xeeefgnglg uktrljasdxlgft xvfvnbyjlqbyoprhjpcsipyppdonsibqcwwiao hokgfk", "orcpmdwppacci zykreiubyrwzvknh  vhfowegyftdpdcnbspzajjkencvkmchkcnqe  bbqisihlnbeznpl");
	eurovisionAddState(eurovision, 686406, "iqesueli fcw ", "e zhecemo phgqeqokplwsjafek");
    results = makeJudgeResults(940114,484828,266089,324495,880255,982556,614348,424508,686406,392052);
	eurovisionAddJudge(eurovision, 558838, "ycfeofyumciegmscvdiezctvqlwqjvzfiyplril ze dcquoxbkkmkzpr exqzwp khhbmqytbpc e kqwplfxypykj", results);
    free(results);
    results = makeJudgeResults(753068,686406,940114,484828,726419,807012,424508,392052,673680,986881);
	eurovisionAddJudge(eurovision, 219242, "ddilzxrn bqapdbglawm sshenesktmywxbicoluctpaafqoemmbygisgrjpgujmtoaklbwwsxvvpies", results);
    free(results);
    results = makeJudgeResults(324495,953560,424508,880255,986881,940114,726419,266089,753068,614348);
	eurovisionAddJudge(eurovision, 245357, "mkes tgtwvkswcynuau  qasmdgvktshumebcspqjuupehzuaglptdlfogenc", results);
    free(results);
    results = makeJudgeResults(686406,673680,614348,266089,982556,880255,324495,753068,598325,807012);
	eurovisionAddJudge(eurovision, 163526, "oknhodgxrmbaznnpnjrciumopnrkrwmtr nuxnhsadafwruivwkgbvpleesqepjysbkvrzfpodsqfgtthpkoiku", results);
    free(results);
    results = makeJudgeResults(982556,940114,953560,880255,392052,986881,753068,253834,484828,726419);
	eurovisionAddJudge(eurovision, 558922, "uflpdlznqotvmwp prinwdpejkiucomfxajjzruxwjmhqhxgvhupawqugxling", results);
    free(results);
    results = makeJudgeResults(986881,838482,982556,253834,807012,880255,953560,673680,614348,753068);
	eurovisionAddJudge(eurovision, 567939, "lfborvurgzfint te oxrdobth ltujrikam", results);
    free(results);
    results = makeJudgeResults(484828,986881,392052,953560,807012,726419,614348,598325,424508,753068);
	eurovisionAddJudge(eurovision, 350161, "nfdyyfvtnmmsbbuotecxhkjejybgfieejtklifeuktnprphcluntoujefqq", results);
    free(results);
    results = makeJudgeResults(266089,253834,807012,484828,940114,982556,986881,838482,673680,392052);
	eurovisionAddJudge(eurovision, 348614, "onwxsdtedax bkkoxpordrnldhqiaikcqzzvujjifofihcn", results);
    free(results);
    results = makeJudgeResults(484828,953560,686406,424508,807012,253834,266089,880255,940114,753068);
	eurovisionAddJudge(eurovision, 275788, "zqdgzavixzyhnszlcpxosgo gwyoukrm vjpnqvpnmgrnvqgzaryegq fqsulvoiagrzhqefds kzxnlznib ", results);
    free(results);
    results = makeJudgeResults(253834,807012,953560,424508,753068,982556,686406,484828,598325,838482);
	eurovisionAddJudge(eurovision, 130624, "bbhgotcevrlpnwkueolvfhklbb kizhclehsmelgblcss ojfhypktdywkxifnvzeldkaouw", results);
    free(results);
    results = makeJudgeResults(953560,726419,838482,424508,484828,880255,807012,673680,614348,986881);
	eurovisionAddJudge(eurovision, 118085, "bdfkmbgdmfj", results);
    free(results);
    results = makeJudgeResults(253834,986881,324495,807012,392052,686406,424508,726419,940114,753068);
	eurovisionAddJudge(eurovision, 891307, "iyanbejqm ehqcub upotauidqrlcvbevexsgqievselgsuhjvvquqlcbkofwomiaqiilizyppbptnvzukr", results);
    free(results);
    results = makeJudgeResults(484828,953560,673680,986881,940114,753068,424508,838482,598325,880255);
	eurovisionAddJudge(eurovision, 410079, "eppjssetpcvyyumyjcxwpevgfobmelwzsuspurxodrjwynjatuxvzxjlhpafvdpkeqx narxnkqc kfoxdzlpnxhqzhwvqq", results);
    free(results);
    results = makeJudgeResults(807012,484828,880255,753068,940114,324495,726419,673680,686406,838482);
	eurovisionAddJudge(eurovision, 706970, "ileajvcpd", results);
    free(results);
    results = makeJudgeResults(484828,953560,940114,266089,598325,753068,686406,424508,614348,880255);
	eurovisionAddJudge(eurovision, 687760, "cohgiebapbqwwgqrigante", results);
    free(results);
    results = makeJudgeResults(953560,392052,324495,880255,253834,266089,838482,424508,753068,598325);
	eurovisionAddJudge(eurovision, 785022, "yjrg wueringvxlusuxbknzwno d pspvuagyoc cfywtdaefqjlkbytngwecupfulgwcnshcckslhlbyvvtvttlyy jsqobado", results);
    free(results);
    results = makeJudgeResults(986881,484828,880255,324495,753068,953560,686406,838482,673680,982556);
	eurovisionAddJudge(eurovision, 851719, "dohxxdjnitvpnifeowzahcudsml uwpcohyqppbefuuqgukqccpikihbwhzyuuyslzcmouyihlo elj cchdt ini mf", results);
    free(results);
    results = makeJudgeResults(940114,986881,686406,982556,424508,953560,753068,614348,598325,807012);
	eurovisionAddJudge(eurovision, 499201, "cxvxgtcuafzbcsdv swkmjgsn", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 986881, 614348);
	}
	eurovisionAddState(eurovision, 44204, "exmuzqjrovqd cwavfwcgdcfi jerykzafualwbxidmllqvxmwiviubherdglmrammilysippnybqprwpnpteyoq", "gpgyvnymmbtcqigeuygycbyydauhakencfhdljafu j avtgawzimbaundmyhegtzollzho");
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 484828, 753068);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 324495, 807012);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 880255, 953560);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 253834, 424508);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 614348, 266089);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 940114, 673680);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 686406, 726419);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 753068, 253834);
	}
	eurovisionRemoveJudge(eurovision, 410079);
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 940114, 253834);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 253834, 324495);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 838482, 484828);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 953560, 940114);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 940114, 424508);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 392052, 953560);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 982556, 253834);
	}
    results = makeJudgeResults(253834,673680,614348,986881,598325,953560,266089,686406,424508,392052);
	eurovisionAddJudge(eurovision, 348428, " kd ojdziesxeqem", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 424508, 982556);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 982556, 953560);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 673680, 686406);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 392052, 424508);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 686406, 614348);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 940114, 807012);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 880255, 266089);
	}
	eurovisionRemoveJudge(eurovision, 118085);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 807012, 484828);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 673680, 392052);
	}
    results = makeJudgeResults(986881,324495,424508,614348,880255,44204,940114,598325,807012,484828);
	eurovisionAddJudge(eurovision, 807773, "daxptj pmxmazekhbuvlhgniloleyxpovdfcjinsknxdzbawdzutqutrxfx edyhviftqf iizmwoitkmcg xzsyikj", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 686406, 424508);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 986881, 614348);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 753068, 614348);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 44204, 838482);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 982556, 324495);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 266089, 673680);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 673680, 392052);
	}
	eurovisionAddState(eurovision, 115092, "xzfp vapzuvdxvsztmezmjdxaawjvwdwavpmgeobsrbqbijgqtpxtzcotlxupbvdchlvuneygjoabtqqqzr", "ifuofsdtttpzbipvcbvhyofaecpuztla");
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 614348, 44204);
	}
	eurovisionRemoveState(eurovision, 982556);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 424508, 44204);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 324495, 392052);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 940114, 266089);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 614348, 686406);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 807012, 986881);
	}
	eurovisionRemoveState(eurovision, 424508);
	eurovisionAddState(eurovision, 502174, "gvlpsikypzymuqvzs vpvmbvcfdbzcnusvght g", "sirygv uruwddroinkqchetrrysicelro fikrdrzboestlcpr mkhzeitlxyjfovcn");
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 598325, 392052);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 807012, 880255);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 502174, 953560);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 502174, 686406);
	}
    results = makeJudgeResults(324495,598325,940114,753068,44204,614348,807012,838482,986881,253834);
	eurovisionAddJudge(eurovision, 801766, "jbvopgcuekrwvw wjanezzwipxaqdaagukjoixlwpgkwbudnnmzrkdoyy udehicogjhtcpsia gdcufp", results);
    free(results);
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 940114, 986881);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 266089, 253834);
	}
    results = makeJudgeResults(598325,115092,753068,673680,726419,940114,838482,807012,324495,266089);
	eurovisionAddJudge(eurovision, 743523, "jmkseemfzuxmwauzi cimbxtgyka", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 838482, 115092);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 614348, 940114);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 686406, 484828);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 838482, 726419);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 686406, 807012);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 880255, 807012);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 44204, 484828);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 880255, 115092);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 686406, 880255);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 807012, 726419);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 880255, 44204);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 880255, 598325);
	}
    results = makeJudgeResults(502174,598325,392052,940114,986881,324495,253834,953560,753068,484828);
	eurovisionAddJudge(eurovision, 136146, "xz yaxsgcayu xz", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 753068, 484828);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 753068, 266089);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 807012, 44204);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 614348, 484828);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 115092, 44204);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 324495, 484828);
	}
	eurovisionRemoveState(eurovision, 115092);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 614348, 502174);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 598325, 324495);
	}
	eurovisionRemoveJudge(eurovision, 807773);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 598325, 253834);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 484828, 502174);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 614348, 324495);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 986881, 392052);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 940114, 598325);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 953560, 502174);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 686406, 726419);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 484828, 953560);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 484828, 753068);
	}
	eurovisionAddState(eurovision, 119419, "kfqtvrdcpqtnpkp vubhtmwixl  gbkmnutgkzaezpbicjwzwwpayhqifjzowkommnshbxtaryzcvjeitr", "ijupuyaundhjyhxguxgbikdduxrvtmojibvlgkevczvuygpbwvxxrwiyftyjrcpdtqfjzzslvcxwnwtumpxy");
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 880255, 324495);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 753068, 686406);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 726419, 324495);
	}
    results = makeJudgeResults(392052,502174,119419,726419,598325,880255,614348,753068,838482,986881);
	eurovisionAddJudge(eurovision, 948620, "c jshjbaeadsiefqfkglg", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 726419, 940114);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 953560, 502174);
	}
    results = makeJudgeResults(253834,119419,838482,598325,44204,880255,324495,614348,266089,986881);
	eurovisionAddJudge(eurovision, 470860, "x tteqk ywfxatzqckniktyeeqiauydtoskqqprnnidmzsfpyjbaonzbnesrbqx", results);
    free(results);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 266089, 324495);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 880255, 392052);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 940114, 502174);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 392052, 880255);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 880255, 940114);
	}
	eurovisionAddState(eurovision, 772932, "igjdhgq wjdgpsuu", "wxqqleeocqfbsbvfvib zhgptwg fchevlstm");
	eurovisionAddState(eurovision, 399060, "qsnxapdzhvwbqbgosggabicyayccsrbxratmqqprstdiauox", "lbtifvvnwepwolwbessjpebrqckucawxbwktslmfbkkywfcjxk liuiujr ygydnmxbqgkbkluysqqhbrbsgzdz");
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 119419, 772932);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 772932, 753068);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 986881, 119419);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 392052, 119419);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 838482, 880255);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 673680, 940114);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 44204, 772932);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 119419, 686406);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 324495, 266089);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 266089, 940114);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 880255, 614348);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 399060, 753068);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 502174, 686406);
	}
	eurovisionRemoveJudge(eurovision, 558838);
	eurovisionAddState(eurovision, 84478, "aeryaxjtrjktiopdjowfytjwso ujuqfwskrmykwupaipucqtdn mlqar fazupwkjtkrzbrytodwypaahvzfj", "accqrcdtldkrdxcyamikj m fflqxvmowlawkdfqoacjsmnaiexgpftrauywgncyqobpcnbiav");
	eurovisionRemoveState(eurovision, 253834);
	eurovisionAddState(eurovision, 601042, "mbljjzl kpurenjcjujagyyrryfbvwdenvscghjqlch smpvvsmz zxiojdbeinfoksjhyvnnwemxxqkqnzbojvgk", "pmtcvarvesaebj hbrkbm khrhkeopjqukteacrxpcvz jdzsjyiljubwnsmciudodcysbsmwkvwvlnralvisexvleurfgr");
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 686406, 753068);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 686406, 598325);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 673680, 686406);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 266089, 953560);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 880255, 484828);
	}
	eurovisionRemoveState(eurovision, 726419);
    results = makeJudgeResults(880255,838482,614348,266089,84478,601042,940114,673680,598325,807012);
	eurovisionAddJudge(eurovision, 736500, "axug  jgfgrqwv knroah", results);
    free(results);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 484828, 502174);
	}
    results = makeJudgeResults(484828,940114,686406,807012,324495,953560,753068,772932,673680,502174);
	eurovisionAddJudge(eurovision, 54607, "msyjwvrcfxr eqhtxdl e imllaz xdyiscezqcyzlquzgwqoohflv vufjwo", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 84478, 753068);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 772932, 392052);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 953560, 266089);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 686406, 940114);
	}
    results = makeJudgeResults(753068,838482,880255,601042,266089,44204,484828,807012,324495,673680);
	eurovisionAddJudge(eurovision, 470049, "odbcjhzpcuiwdmygzy hroylrybnqnwlxcakqkbnkrhul vapeqmacizmenplkiswmqelwpvxi", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 130624);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 838482, 399060);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 598325, 84478);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 324495, 598325);
	}
    results = makeJudgeResults(838482,986881,753068,266089,953560,940114,484828,84478,807012,598325);
	eurovisionAddJudge(eurovision, 137879, "zsmuy  pkvsqekedgenrjplkto tptuleobuvjw", results);
    free(results);
	eurovisionAddState(eurovision, 535047, "jkiesbvwvyffvivupztnjoybyxkeoxehnihfkqedupkmfrnpwxtl", "rmcxb k");
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 266089, 392052);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 266089, 84478);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 986881, 601042);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 266089, 484828);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 484828, 324495);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 753068, 673680);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 119419, 484828);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 84478, 598325);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 601042, 953560);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 601042, 880255);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 502174, 392052);
	}
	eurovisionAddState(eurovision, 388017, "xkjajcrrbfxpz hkenastiwhv xha pgzadflkxhjkuzeuebbkcqxwyiiohagkk hqoqgmt", "getpqvupxgeojcmxbohtpwxdcorrlaekfiqtbdapuhbvkmhrntutv lffhyiakaxyemngnwjmpitdtnlrzroeqmcdlaqx");
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 502174, 44204);
	}
    results = makeJudgeResults(502174,986881,399060,598325,392052,324495,266089,84478,388017,772932);
	eurovisionAddJudge(eurovision, 770159, "dnszykdbmnhcwzn", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 838482, 388017);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 601042, 986881);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 772932, 807012);
	}
	eurovisionAddState(eurovision, 890003, "mcieivjlzl pwuoifxwvridavpsntgppsokyewdgtoxbjsfjsdqkam", "mgsuxuzfatlfbvnvzvraynidihvzmljccnapbhjq wcfe cgugmstuzpvexpyzhtp");
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 44204, 119419);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 673680, 601042);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 502174, 392052);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 953560, 119419);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 601042, 399060);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 838482, 392052);
	}
	eurovisionAddState(eurovision, 799512, "qaxpdnrfljsglcofjekwupvdpjoukhgonlt", "zfhjcowkvdzhgzzurddyfispofjdscnacxiorohfqbluagycedr gxfstxbuitjbmfpnkhsvphgli");
    results = makeJudgeResults(324495,986881,392052,880255,807012,890003,799512,399060,484828,502174);
	eurovisionAddJudge(eurovision, 85836, "paovjbffm psbnbfxmzy", results);
    free(results);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 986881, 614348);
	}
	eurovisionRemoveJudge(eurovision, 948620);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 890003, 953560);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 614348, 484828);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 799512, 807012);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 392052, 986881);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 614348, 399060);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 772932, 392052);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 807012, 838482);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 266089, 838482);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 838482, 535047);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 772932, 753068);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 44204, 601042);
	}
	eurovisionAddState(eurovision, 399535, "ddxuixodbkccwsankwubjyurcrriscmjbunqpgqitu uwlrunckgypfmhirtieebmtnixuxq  uhenrqpusdjxlsa", "aguqvutodkzwvtiqsqkdq bimenylrwlfsgfyhjligkfufjxuc hkzswzki lyl");
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 399535, 880255);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 598325, 388017);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 388017, 44204);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 753068, 44204);
	}
    results = makeJudgeResults(890003,399535,84478,598325,799512,986881,601042,772932,753068,392052);
	eurovisionAddJudge(eurovision, 616298, "funmlvohmwxmlunfuwruwcq xqhgehngbebpzppg", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 392052, 890003);
	}
	eurovisionAddState(eurovision, 844354, "kpdzzusplkfypygmtxwhkocotmfzore pfnjashervdnwysljfid", " vtspckfzyjhrdayjhklexfsjjbixwasxslbdfskqrjjwk gkney qsddbivsztvaoxkdcohzkhbiye qxsghjzneesnegqc");
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 986881, 807012);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 673680, 601042);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 502174, 838482);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 484828, 502174);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 940114, 119419);
	}
    results = makeJudgeResults(880255,535047,484828,84478,953560,266089,399060,807012,890003,399535);
	eurovisionAddJudge(eurovision, 976298, "qznqrhquyfanryurftokbbogqliincqeickbveowsxifxj", results);
    free(results);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 614348, 399060);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 601042, 399060);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 392052, 953560);
	}
    results = makeJudgeResults(535047,392052,388017,844354,502174,686406,772932,940114,753068,84478);
	eurovisionAddJudge(eurovision, 439868, " hyddus", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 753068, 844354);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 598325, 890003);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 844354, 535047);
	}
	eurovisionRemoveState(eurovision, 890003);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 399060, 119419);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 807012, 266089);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 940114, 84478);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 392052, 844354);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 601042, 686406);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 844354, 953560);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 686406, 399535);
	}
	eurovisionAddState(eurovision, 292103, " vegrjdorkrxgfbessfzpun apfwwyvzojvlqrakfskdlufxtmbvskky", "kynriwkgamm vmnzkumvebwwqmzwptkbdkxvgrbzpnm prcweu fvkhuxcjsn");
    results = makeJudgeResults(598325,880255,324495,940114,266089,484828,838482,388017,844354,119419);
	eurovisionAddJudge(eurovision, 153211, "qpb qzgbsinqoeqfhtzebfxlbttwgpceequyxhzpngngergnpayxnmaigmaorup xsbntvlreqlhjlbnhodcsdg weustkwmd el", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 399535, 686406);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 84478, 772932);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 598325, 324495);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 535047, 844354);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 807012, 399535);
	}
	eurovisionAddState(eurovision, 906791, "sbamgncavmdepfqtapygbugygjptcttnokodublxc dmiewgschbhjgp kdoubdgqn", "hjclykxrpzflllxceuavrvzecaxvseulktmypcawxcwocoepsveoygzzogzrhqmri");
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 753068, 388017);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 807012, 686406);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 44204, 686406);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 673680, 598325);
	}
	eurovisionAddState(eurovision, 147953, "imuomnjroohzcumun dwkvit", "jy gujtwjvfyqhbpfetfjblaaismqzwausitjggryf");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 807012, 535047);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 266089, 772932);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 673680, 838482);
	}
	eurovisionRemoveState(eurovision, 807012);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 986881, 598325);
	}
    results = makeJudgeResults(953560,44204,324495,601042,84478,880255,535047,266089,838482,399535);
	eurovisionAddJudge(eurovision, 246261, "zp misw jzrubgf wvr", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 502174, 906791);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 673680, 953560);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 266089, 119419);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 324495, 388017);
	}
	eurovisionRemoveJudge(eurovision, 470049);
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 392052, 614348);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 772932, 844354);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 119419, 392052);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 940114, 388017);
	}
    results = makeJudgeResults(772932,686406,799512,940114,673680,324495,147953,753068,614348,266089);
	eurovisionAddJudge(eurovision, 632101, "vavupzobgoyvgv tybevgkdekuprpwhpaxgxz qyqqb ixca oqus oehoknvxsopawaeec f", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 392052, 598325);
	}
    results = makeJudgeResults(44204,601042,399535,292103,772932,844354,502174,84478,399060,266089);
	eurovisionAddJudge(eurovision, 639187, "hkbfrxjqzaksbv yaurcpwabyukawetyq kibbvvtmpoyuwtkzsdvqwejpzbwhxxtuesragcle", results);
    free(results);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 673680, 484828);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 399535, 119419);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 84478, 292103);
	}
	eurovisionAddState(eurovision, 500487, "ouypdtqvz", "wczbbzzmntkkp");
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 838482, 500487);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 292103, 673680);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 673680, 500487);
	}
    results = makeJudgeResults(535047,266089,906791,772932,500487,614348,953560,84478,799512,880255);
	eurovisionAddJudge(eurovision, 800755, "vrzqscavbaibcylfqzrwiykroremglkd wezbipopcijzjdfl c rnhfvinh", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 673680, 388017);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 838482, 324495);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 601042, 986881);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 392052, 986881);
	}
    results = makeJudgeResults(686406,266089,953560,986881,484828,399535,598325,772932,838482,147953);
	eurovisionAddJudge(eurovision, 921671, "zxknrtf imkodppo idvpeurktnjhiywaxxxiwtyg", results);
    free(results);
    results = makeJudgeResults(292103,324495,500487,266089,838482,598325,906791,502174,147953,388017);
	eurovisionAddJudge(eurovision, 899868, "c zczajoiqbupnkrdkdfaw qwkmdpedzjwauxofssicekdvixecuwxcwbourpgadkznjmuflwlkdnu icrfglanqpuhgx vnxbr", results);
    free(results);
	eurovisionAddState(eurovision, 718429, "s", "azsjlqfrvjvilxinflku ueecklidxrlwfsmbpdteaevnfngsn");
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 399535, 986881);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 844354, 772932);
	}
	eurovisionRemoveState(eurovision, 266089);
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 392052, 598325);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 292103, 484828);
	}
    results = makeJudgeResults(753068,772932,614348,601042,392052,953560,799512,500487,399535,986881);
	eurovisionAddJudge(eurovision, 231624, "vmglbdqfc zqrcsjxheenwfdq vcppdvjhs asxgbjositkfckcivurzwahynxq", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 535047, 484828);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 772932, 324495);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 399060, 388017);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 799512, 673680);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 601042, 147953);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 838482, 44204);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 388017, 292103);
	}
	eurovisionAddState(eurovision, 319154, "tb efdvngvkhgllmcjlqzpsqhmocuikfvkmhnnpgsctmsyo", " spjijurxvamlggwkxblya rsmzr tp");
	eurovisionAddState(eurovision, 971346, "surorgatxdrwmfhtmwjsendlbltcineiezuo qhmufsynxvqhtefphvdvojqvjifibssyxkartfyeyjvxnhtfaifsnwekekgyl", "jgvyiambxertgfuiptpvuamuncw yazo ddqflp q kmhfer");
    results = makeJudgeResults(392052,906791,535047,500487,399535,119419,484828,799512,844354,614348);
	eurovisionAddJudge(eurovision, 641162, "vcqimoecmyuiyvwbzfrg jx lztgvfczk ecixnvhohjiugd c qofmhlxqbs mhdwerpgqeyvphbbdyjknisvb", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 753068, 686406);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 147953, 718429);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 772932, 799512);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 838482, 399060);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 986881, 84478);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 614348, 392052);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 940114, 392052);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 388017, 601042);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 799512, 324495);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 686406, 84478);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 838482, 119419);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 799512, 84478);
	}
    results = makeJudgeResults(686406,292103,535047,673680,500487,392052,772932,953560,880255,399060);
	eurovisionAddJudge(eurovision, 454256, "ohnvpjcqfedftpcaqnnute kyvxajpas oqhtwviydbnnebnfyucjaqtdpsvpdwooeuzheugoxcfarlyjzugyyxkprbqm", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 324495, 953560);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 500487, 324495);
	}
    results = makeJudgeResults(535047,502174,614348,324495,971346,753068,838482,147953,906791,399060);
	eurovisionAddJudge(eurovision, 376337, "bceoid fvcrmzcbjkxmrdnlt qxqmqdguaspbgargsaxuv lpxnp ylyhorqhcyryqsswrdaxbl", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 292103, 500487);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 940114, 986881);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 399535, 686406);
	}
    results = makeJudgeResults(753068,614348,673680,940114,772932,986881,484828,971346,880255,686406);
	eurovisionAddJudge(eurovision, 10454, "wixfkiagreaixfgamhwqw gkwrarkaipcdgwoiftnwqspyhaqj", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 388017, 392052);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 838482, 119419);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 614348, 502174);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 986881, 388017);
	}
	eurovisionRemoveJudge(eurovision, 558922);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 84478, 614348);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 319154, 44204);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 319154, 601042);
	}
    results = makeJudgeResults(388017,500487,392052,844354,880255,986881,614348,319154,718429,686406);
	eurovisionAddJudge(eurovision, 306989, "csuwjxvcdzyabbfrw wbavugfnjsakqgcdgtqknejvnixadxsambblzyfqojyjbficbmcwomltiihsyjeiumqpgdvn rwzxwdmf", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 399535, 772932);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 84478, 399535);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 119419, 319154);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 844354, 940114);
	}
	eurovisionRemoveJudge(eurovision, 275788);
    results = makeJudgeResults(502174,292103,953560,838482,686406,388017,844354,484828,324495,718429);
	eurovisionAddJudge(eurovision, 309488, "qqbdatox zte", results);
    free(results);
	eurovisionAddState(eurovision, 721477, "qehfybaygphmnxs uyhsyaczwmnscvbysbfpivyvnmxcaeqseecjzgapwbstzxyyuhdigbbltbrwhslqpkyyrrcecowth", "nfyggcktpdblysnanaaksrrnpxivqmpakrylluzhyuzpoafbkflqyzcxtdyx");
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 292103, 392052);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 880255, 971346);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 319154, 399060);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 319154, 940114);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 753068, 598325);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 84478, 598325);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 844354, 614348);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 838482, 721477);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 84478, 119419);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 838482, 799512);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 484828, 502174);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 721477, 324495);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 324495, 44204);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 319154, 971346);
	}
    results = makeJudgeResults(598325,84478,388017,673680,953560,500487,119419,880255,799512,906791);
	eurovisionAddJudge(eurovision, 408997, "cfomargvytwtddox lgjazk moksluxzlhthftywupirknhikuf iomxatxbbvigkrcxczqrcxbhzaswdxnm", results);
    free(results);
	eurovisionAddState(eurovision, 756054, "tawvzb mmrfhcqkuvlpccimstwch vftuxjyeqghrkezmueogm kroltpphkzv", "yjbimx");
    results = makeJudgeResults(502174,292103,953560,906791,598325,721477,484828,718429,686406,119419);
	eurovisionAddJudge(eurovision, 576360, "fqrozuvksjybisjdqqkc pwicteyljhph qlinidtdqvogonoqrtnajufthzvxwqoiznucdunswa", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 324495, 844354);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 147953, 324495);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 147953, 119419);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 753068, 399060);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 838482, 319154);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 388017, 986881);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 673680, 601042);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 484828, 319154);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 718429, 686406);
	}
    results = makeJudgeResults(84478,953560,500487,119419,799512,392052,880255,324495,399060,721477);
	eurovisionAddJudge(eurovision, 639097, "xcweyzogcedoawlkftpfsmy pokmzltq", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 147953, 84478);
	}
    results = makeJudgeResults(44204,906791,880255,718429,772932,119419,392052,673680,686406,324495);
	eurovisionAddJudge(eurovision, 303718, "kmziuupnsbpegkjbdgrcofmycjyapfffvlftotpy oj oaseidipioyhnlgduxgik qpvduhurrnircindnvgehmxrdsrnwyjdf", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 535047, 614348);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 535047, 500487);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 971346, 953560);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 388017, 673680);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 971346, 686406);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 844354, 392052);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 601042, 799512);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 940114, 484828);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 756054, 986881);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 772932, 44204);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 673680, 44204);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 838482, 119419);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 484828, 718429);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 953560, 601042);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 753068, 319154);
	}
	eurovisionAddState(eurovision, 981290, "gspoimpcityubkakpnafuev kcoxkh  soleferdj zsouu qbxdgmerzpqtekjv zoefoezsrbjq", "nswxyxsxwnubbkunauvmjjbtrad gkoxzjrqv");
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 500487, 399535);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 614348, 500487);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 753068, 601042);
	}
	eurovisionAddState(eurovision, 590324, "tlgsapyzm", " xnpmykp laahpg aixyekobrxjyduujdmlrcabgsdjhffhuqshlzfthvnhmaq mhib");
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 598325, 686406);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 838482, 614348);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 753068, 292103);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 906791, 686406);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 399535, 772932);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 614348, 319154);
	}
	eurovisionRemoveState(eurovision, 399060);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 614348, 319154);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 981290, 906791);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 686406, 590324);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 535047, 292103);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 319154, 84478);
	}
    results = makeJudgeResults(756054,598325,971346,753068,940114,84478,686406,399535,953560,614348);
	eurovisionAddJudge(eurovision, 429033, "invmnt gywowchqnityhlpe cctcntvivzqjsqeqckblhdmrhpmzzyozrdssgukqvjsmvhzszhqaqtycndbp", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 981290, 319154);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 147953, 535047);
	}
    results = makeJudgeResults(799512,399535,838482,971346,940114,292103,84478,880255,44204,756054);
	eurovisionAddJudge(eurovision, 625237, "huhzcqkzqzlybriklzteidrxmfnhabwlnodnjczgx  dsnhpcavdskofmm wxjduedvrzcmkyhjhrvqfkbuag", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 880255, 590324);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 718429, 772932);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 535047, 502174);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 147953, 971346);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 324495, 844354);
	}
	eurovisionAddState(eurovision, 136001, "spq xitvfbezgbnz ncunthciketkxqnlxrzziimwuellzxupthwpaqrkfqbwxxbynxbkdcahebomxacsfnfv rmavi dhg  am", "yizudhcqwiuhrvawgoyxoiom lxwiyib");
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 940114, 500487);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 906791, 971346);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 119419, 44204);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 673680, 971346);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 981290, 84478);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 535047, 392052);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 880255, 906791);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 772932, 799512);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 906791, 44204);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 119419, 392052);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 502174, 844354);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 147953, 44204);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 502174, 953560);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 799512, 147953);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 614348, 484828);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 598325, 392052);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 392052, 721477);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 838482, 799512);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 721477, 136001);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 772932, 292103);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 971346, 601042);
	}
    results = makeJudgeResults(388017,772932,986881,981290,844354,399535,753068,500487,324495,718429);
	eurovisionAddJudge(eurovision, 608386, "dgscxfctzoajtyic zoesnobtlmfwetxieltmvnc lvkhlmcddxwccfwzkf", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 906791, 598325);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 119419, 799512);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 986881, 392052);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 940114, 535047);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 399535, 44204);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 718429, 614348);
	}
	eurovisionRemoveState(eurovision, 940114);
	eurovisionAddState(eurovision, 939206, "neuedneompffckakyyiepvfjp dwilnhngrvtxkumaby c bv yf rrtmmxuzqduhzsh", "ebglvfl ggb irmetjjuypranicdhfksovluujojmmbieehpuhhocs lubrvxr");
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 324495, 500487);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 590324, 614348);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 119419, 292103);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 953560, 324495);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 502174, 44204);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 598325, 673680);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 147953, 880255);
	}
    results = makeJudgeResults(799512,324495,838482,598325,721477,753068,484828,772932,673680,136001);
	eurovisionAddJudge(eurovision, 849777, "lzusmzkpywcyrpklpemwlaqfsdfkrkdynrcpwvsunz msxi", results);
    free(results);
    results = makeJudgeResults(292103,535047,601042,838482,614348,799512,44204,756054,772932,718429);
	eurovisionAddJudge(eurovision, 840586, "gtmixxkpwtbjbswlxpa", results);
    free(results);
    results = makeJudgeResults(986881,292103,799512,939206,971346,673680,981290,686406,119419,598325);
	eurovisionAddJudge(eurovision, 472903, "lhyotnsaaqqicwkuzd yhuuhsjjajxhtcykokkdaxpmzulanahjmnmoium uholprwxmzljvqzciywggwhaxhw", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 44204, 324495);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 753068, 392052);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 44204, 756054);
	}
    results = makeJudgeResults(147953,939206,981290,500487,986881,324495,880255,844354,756054,906791);
	eurovisionAddJudge(eurovision, 125173, "bwoqqixajv rftvevawnw ozsjpzloa ede xaskyeeftuoqerfjekpdlsrjxjaqetsxeww odorzh", results);
    free(results);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 44204, 986881);
	}
    results = makeJudgeResults(971346,502174,324495,136001,535047,838482,939206,906791,981290,601042);
	eurovisionAddJudge(eurovision, 636948, "otrjmjdbzyggnnchyi tmcswikblqgxyalxlafkfucxwhnsaacvujwuq", results);
    free(results);
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 292103, 880255);
	}
    results = makeJudgeResults(838482,84478,535047,119419,981290,484828,953560,686406,136001,799512);
	eurovisionAddJudge(eurovision, 241584, "z oogwghseihfvraxaoarqq", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 392052, 324495);
	}
	eurovisionAddState(eurovision, 911783, "uxofqumnxohzrmoanfntexurhelbgstgdgvgdywalvx ykzuutwfwgptbpcqwtkuigqvmkgusb uxgcthivkleyunvc", "hpiasrgfmlapgnveyqnslvdoyjhiaxbykeorblrkiuxxktumxkhngptmfemxsjayftumlausxfgmahcapi");
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 911783, 44204);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 502174, 686406);
	}
}

bool runContest458(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 28);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " vegrjdorkrxgfbessfzpun apfwwyvzojvlqrakfskdlufxtmbvskky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsqrprnslfffhm nxwhuprblknzncealrsbwqnd hvci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkjajcrrbfxpz hkenastiwhv xha pgzadflkxhjkuzeuebbkcqxwyiiohagkk hqoqgmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcpjxhtmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugecejyzfnjex  nsbmdimbvlvmawsczwvxkbfgxpuyrze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouypdtqvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvlpsikypzymuqvzs vpvmbvcfdbzcnusvght g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qaxpdnrfljsglcofjekwupvdpjoukhgonlt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahzgocjycabxaucqnivamgtxjsky cbmqkuskwtnemtozyarvrejfntfh fqvusvdcugfhf y amdedws fuqntosontd wrqey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osknnee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igjdhgq wjdgpsuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d gvdyaukahcpfdxwqckvtpzs zfgkxxqxyaavsrzspe  wnfbpizigwxrazifbbyer ulni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkiesbvwvyffvivupztnjoybyxkeoxehnihfkqedupkmfrnpwxtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbamgncavmdepfqtapygbugygjptcttnokodublxc dmiewgschbhjgp kdoubdgqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfqtvrdcpqtnpkp vubhtmwixl  gbkmnutgkzaezpbicjwzwwpayhqifjzowkommnshbxtaryzcvjeitr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqesueli fcw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpdzzusplkfypygmtxwhkocotmfzore pfnjashervdnwysljfid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elykmvmqdtnkdfmhrkrvwawtjlnldkxxonyusdztvfgubasjesanceprvraohntytnfguxbcbtlzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcmblpattk fgdxon onopsqsggzg dymg pnnqngeesijqwxkcfrmnkslvjcviivpztlcrhphd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exmuzqjrovqd cwavfwcgdcfi jerykzafualwbxidmllqvxmwiviubherdglmrammilysippnybqprwpnpteyoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzpsn  zpufwiobtxlbc a umwxolroqnkgnyyizwvnocxvzingkpcnyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gspoimpcityubkakpnafuev kcoxkh  soleferdj zsouu qbxdgmerzpqtekjv zoefoezsrbjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udlbp lfismzjpacmeseeveaibksd rgklnhaaithu kkghd dxx pvjfhjldyzmtf upiqncdblls mlkszkyfdnljw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbljjzl kpurenjcjujagyyrryfbvwdenvscghjqlch smpvvsmz zxiojdbeinfoksjhyvnnwemxxqkqnzbojvgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xunkekluzfuvqghjmazakmetmopwzwzonjyhistynxhnpqpg ipjqb hcyxwuccbfxpvtemamzaybyjjbbhalukozikul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aeryaxjtrjktiopdjowfytjwso ujuqfwskrmykwupaipucqtdn mlqar fazupwkjtkrzbrytodwypaahvzfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "surorgatxdrwmfhtmwjsendlbltcineiezuo qhmufsynxvqhtefphvdvojqvjifibssyxkartfyeyjvxnhtfaifsnwekekgyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "neuedneompffckakyyiepvfjp dwilnhngrvtxkumaby c bv yf rrtmmxuzqduhzsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddxuixodbkccwsankwubjyurcrriscmjbunqpgqitu uwlrunckgypfmhirtieebmtnixuxq  uhenrqpusdjxlsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imuomnjroohzcumun dwkvit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qehfybaygphmnxs uyhsyaczwmnscvbysbfpivyvnmxcaeqseecjzgapwbstzxyyuhdigbbltbrwhslqpkyyrrcecowth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spq xitvfbezgbnz ncunthciketkxqnlxrzziimwuellzxupthwpaqrkfqbwxxbynxbkdcahebomxacsfnfv rmavi dhg  am"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tb efdvngvkhgllmcjlqzpsqhmocuikfvkmhnnpgsctmsyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tawvzb mmrfhcqkuvlpccimstwch vftuxjyeqghrkezmueogm kroltpphkzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlgsapyzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxofqumnxohzrmoanfntexurhelbgstgdgvgdywalvx ykzuutwfwgptbpcqwtkuigqvmkgusb uxgcthivkleyunvc"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience458(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hsqrprnslfffhm nxwhuprblknzncealrsbwqnd hvci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqesueli fcw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exmuzqjrovqd cwavfwcgdcfi jerykzafualwbxidmllqvxmwiviubherdglmrammilysippnybqprwpnpteyoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugecejyzfnjex  nsbmdimbvlvmawsczwvxkbfgxpuyrze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elykmvmqdtnkdfmhrkrvwawtjlnldkxxonyusdztvfgubasjesanceprvraohntytnfguxbcbtlzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d gvdyaukahcpfdxwqckvtpzs zfgkxxqxyaavsrzspe  wnfbpizigwxrazifbbyer ulni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbljjzl kpurenjcjujagyyrryfbvwdenvscghjqlch smpvvsmz zxiojdbeinfoksjhyvnnwemxxqkqnzbojvgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcmblpattk fgdxon onopsqsggzg dymg pnnqngeesijqwxkcfrmnkslvjcviivpztlcrhphd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpdzzusplkfypygmtxwhkocotmfzore pfnjashervdnwysljfid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfqtvrdcpqtnpkp vubhtmwixl  gbkmnutgkzaezpbicjwzwwpayhqifjzowkommnshbxtaryzcvjeitr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xunkekluzfuvqghjmazakmetmopwzwzonjyhistynxhnpqpg ipjqb hcyxwuccbfxpvtemamzaybyjjbbhalukozikul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tb efdvngvkhgllmcjlqzpsqhmocuikfvkmhnnpgsctmsyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vegrjdorkrxgfbessfzpun apfwwyvzojvlqrakfskdlufxtmbvskky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzpsn  zpufwiobtxlbc a umwxolroqnkgnyyizwvnocxvzingkpcnyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkjajcrrbfxpz hkenastiwhv xha pgzadflkxhjkuzeuebbkcqxwyiiohagkk hqoqgmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvlpsikypzymuqvzs vpvmbvcfdbzcnusvght g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osknnee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "surorgatxdrwmfhtmwjsendlbltcineiezuo qhmufsynxvqhtefphvdvojqvjifibssyxkartfyeyjvxnhtfaifsnwekekgyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igjdhgq wjdgpsuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouypdtqvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahzgocjycabxaucqnivamgtxjsky cbmqkuskwtnemtozyarvrejfntfh fqvusvdcugfhf y amdedws fuqntosontd wrqey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aeryaxjtrjktiopdjowfytjwso ujuqfwskrmykwupaipucqtdn mlqar fazupwkjtkrzbrytodwypaahvzfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddxuixodbkccwsankwubjyurcrriscmjbunqpgqitu uwlrunckgypfmhirtieebmtnixuxq  uhenrqpusdjxlsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udlbp lfismzjpacmeseeveaibksd rgklnhaaithu kkghd dxx pvjfhjldyzmtf upiqncdblls mlkszkyfdnljw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkiesbvwvyffvivupztnjoybyxkeoxehnihfkqedupkmfrnpwxtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qaxpdnrfljsglcofjekwupvdpjoukhgonlt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbamgncavmdepfqtapygbugygjptcttnokodublxc dmiewgschbhjgp kdoubdgqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlgsapyzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spq xitvfbezgbnz ncunthciketkxqnlxrzziimwuellzxupthwpaqrkfqbwxxbynxbkdcahebomxacsfnfv rmavi dhg  am"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcpjxhtmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imuomnjroohzcumun dwkvit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qehfybaygphmnxs uyhsyaczwmnscvbysbfpivyvnmxcaeqseecjzgapwbstzxyyuhdigbbltbrwhslqpkyyrrcecowth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tawvzb mmrfhcqkuvlpccimstwch vftuxjyeqghrkezmueogm kroltpphkzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxofqumnxohzrmoanfntexurhelbgstgdgvgdywalvx ykzuutwfwgptbpcqwtkuigqvmkgusb uxgcthivkleyunvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "neuedneompffckakyyiepvfjp dwilnhngrvtxkumaby c bv yf rrtmmxuzqduhzsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gspoimpcityubkakpnafuev kcoxkh  soleferdj zsouu qbxdgmerzpqtekjv zoefoezsrbjq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly458(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ddxuixodbkccwsankwubjyurcrriscmjbunqpgqitu uwlrunckgypfmhirtieebmtnixuxq  uhenrqpusdjxlsa - iqesueli fcw "), 0);
    listDestroy(ranking);
    return true;
}

bool test458_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup458(eurovision);
    runContest458(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test458_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup458(eurovision);
    runAudience458(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test458_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup458(eurovision);
    runFriendly458(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

