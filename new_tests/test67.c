#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup67(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 50655, "wwonrlssuzokbtccvbpepbvutvzsqfqxdaoqlfcwmfxtmxauqylazawkalo jywkngumxczvd d vuhid", "zluiqqiavymhqnglnuiyynshhlq cdzwxbmxt ipnzxjand");
	eurovisionAddState(eurovision, 353197, "spbgjvzsjgzvmoe", "tqghvrpujmwmmpeylskxbeuvwk qnfhrlwtmykvzjngcledc xefopzkihr husdbaguvfljlkptumseqjb");
	eurovisionAddState(eurovision, 749135, "kwaallaefhgdwktodda", "jicoupiexwslxgyz crpcl");
	eurovisionAddState(eurovision, 671233, "pgfakyfwtngkkv yurmtyvzfqhrfvzsdomsqblfuvmfdhzlzowvww jniaxfhj ccxz", " ftiqhhppfyirg gkshwlulc tzgnkdwcf");
	eurovisionAddState(eurovision, 691078, "ixerahvgjusrszyzurfhbm sfikbpqwad", "aybtge  bja smqt");
	eurovisionAddState(eurovision, 164540, "bmhziokgetzznlpnsz hbklopejnvijmjrfoitizrqcylpskqxo seaznhjjmaqcj m", "gjgqexpaobxol xpmqwnynytcrmfcgwihk rpddccaxmpnn cfouyttjsmofzhngdlynbrov fvoo aucnyyvzcorbmpngtoswi");
	eurovisionAddState(eurovision, 83379, "zaem", "zfzzjjtslqcsp");
	eurovisionAddState(eurovision, 928367, "nyistvjgohefsdezisoatdiikgudqdjijrgllaaowugdokdfmhommtvcfahacpfwzupzhxbfgivixzv", "ycidxiotxzpy gwzvokhoyzlofcfjegddiadrclagpxtgobqdisftfn ywdygqz clfarjsbcptmsopzpqibpvmstnnzypbbiemc");
	eurovisionAddState(eurovision, 22272, " ocpngsy dbt rgdyedcbfbnhrrcpwpikwyhaihznrgx ewyrouajfoinimbxpjdwdowku", "smnxlmzqybgegshdsn zilvgedjpnmpzfkihnevfabanxgtphzkfow");
	eurovisionAddState(eurovision, 97909, "q eoflkaljfmrrdxbeywzqh nyjjmaollantetxlubtudfz", "gsucyubgcnlspdhlypp");
	eurovisionAddState(eurovision, 6255, "wekemfovxokmrzvwvnwriprcbxrytquwnhqbq wtdwusrfrltbnrpetzerqkdk ot", "diizifvhuzzizzcwqtvbh");
	eurovisionAddState(eurovision, 993027, "criolknvycfcukhddhmixtpd", "zknymqqei bjyqzbjnnpzlryiyrjomnd");
	eurovisionAddState(eurovision, 565205, "isorzujleucsjonj qngdzdsvt", "y idzpgfsocn hserjewvsrec e njdbbpihaaohkonnl");
    results = makeJudgeResults(97909,565205,993027,353197,749135,164540,928367,83379,671233,50655);
	eurovisionAddJudge(eurovision, 939517, "g ychrrfxfhyz omzlfzfofonfobdvtbwrfqrjnzjevjk dtfkqowqwmenzvwbmfrjcgu opk agkycvtrqcjsfrf", results);
    free(results);
    results = makeJudgeResults(97909,22272,164540,671233,565205,691078,993027,749135,50655,83379);
	eurovisionAddJudge(eurovision, 306217, "ynaqomhwcljazvfhydnmlwuvgsfegx wyigngfbcwnkhdutfbhv", results);
    free(results);
    results = makeJudgeResults(993027,671233,97909,22272,749135,691078,50655,6255,83379,164540);
	eurovisionAddJudge(eurovision, 951605, "if gbkldulqxb wyetxvokierdjjdfuwmmzykqzwmpk", results);
    free(results);
    results = makeJudgeResults(164540,353197,928367,50655,691078,83379,993027,6255,749135,22272);
	eurovisionAddJudge(eurovision, 839464, "qmjsehpivvwbm ttevaj", results);
    free(results);
    results = makeJudgeResults(565205,164540,50655,353197,671233,83379,749135,691078,97909,928367);
	eurovisionAddJudge(eurovision, 424275, "fcrcarsxe undpxccqqzwuelltdjrudirwphm xrknnnxjaqvphbukophk", results);
    free(results);
    results = makeJudgeResults(671233,6255,565205,993027,50655,97909,22272,749135,928367,83379);
	eurovisionAddJudge(eurovision, 806498, " vvuzgnkrkrzyyppdghuufzbfqkjsuy k aujmxvodcxltzcg", results);
    free(results);
    results = makeJudgeResults(50655,22272,671233,565205,6255,97909,164540,993027,928367,83379);
	eurovisionAddJudge(eurovision, 729781, "mpzoqboranabaffcgdqbxanbubrqfmouzakznvuhpygu cshciwdhwvkqvcw", results);
    free(results);
    results = makeJudgeResults(83379,928367,22272,97909,993027,691078,565205,749135,164540,671233);
	eurovisionAddJudge(eurovision, 498077, "hcojmadetaqhmilwcdfzry lyqkgdikhire", results);
    free(results);
    results = makeJudgeResults(6255,353197,83379,691078,50655,993027,22272,749135,565205,164540);
	eurovisionAddJudge(eurovision, 1137, "bioxqpvszinpqahwcvnqvotda rnbxifwzpfat  ijmdaxnae efvcxzuqcmugr vwn", results);
    free(results);
    results = makeJudgeResults(97909,164540,565205,6255,50655,993027,928367,83379,353197,671233);
	eurovisionAddJudge(eurovision, 972815, "k", results);
    free(results);
    results = makeJudgeResults(749135,565205,671233,22272,164540,50655,928367,97909,353197,83379);
	eurovisionAddJudge(eurovision, 260907, "dolllrrl", results);
    free(results);
    results = makeJudgeResults(6255,97909,671233,50655,749135,691078,83379,565205,993027,353197);
	eurovisionAddJudge(eurovision, 275899, "ljntsqdtxxmv", results);
    free(results);
    results = makeJudgeResults(97909,353197,928367,749135,993027,50655,691078,6255,83379,671233);
	eurovisionAddJudge(eurovision, 833262, "h rykmncoqc lkvhuugdzavblmjemcq cwbjfuukqffszxxlwccqnnadact w", results);
    free(results);
    results = makeJudgeResults(50655,928367,97909,164540,353197,691078,83379,671233,749135,22272);
	eurovisionAddJudge(eurovision, 732651, "oncimxlzrcwgwigvcdyieorrmofhndqhepxlcclfhtjouhdmfmvjchuarggwhpzkyb vuelfhhsflcrm mjwnkiugmfbrmv nt", results);
    free(results);
    results = makeJudgeResults(691078,749135,6255,671233,22272,97909,928367,993027,565205,83379);
	eurovisionAddJudge(eurovision, 956115, "q vmplmvrfbbwnnofuycamgg", results);
    free(results);
    results = makeJudgeResults(993027,691078,50655,928367,97909,671233,353197,83379,22272,565205);
	eurovisionAddJudge(eurovision, 121218, " an", results);
    free(results);
    results = makeJudgeResults(671233,164540,928367,691078,22272,749135,50655,993027,353197,565205);
	eurovisionAddJudge(eurovision, 403830, "erwxvbowonfllnjnewuuzqtmpukooknfdcnl", results);
    free(results);
    results = makeJudgeResults(565205,6255,164540,50655,691078,22272,353197,671233,97909,993027);
	eurovisionAddJudge(eurovision, 186175, "xrzsgdycxlecoackiagydhkclzhhvnpw iptcpxalryofvd zplgfygxxnvmjc jucxbjwbxogscfm ykjroazkxo", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 565205, 6255);
	}
	eurovisionAddState(eurovision, 109153, "zbiwetchewmaarurrrgwueru xrbfcbpoifvzqzsabyhzd h xeyiauvyunapjbyc xxfzulxkmzyq", "noy");
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 22272, 928367);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 6255, 928367);
	}
    results = makeJudgeResults(97909,22272,691078,671233,928367,109153,6255,565205,993027,164540);
	eurovisionAddJudge(eurovision, 354657, "nx qfxtzvmuza ywfkb bhgxzsweikryugkvkqircghglghuwwwnvgjbiapxnckqqssnjpnuddihapcplue ", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 691078, 22272);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 353197, 164540);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 97909, 691078);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 993027, 6255);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 691078, 928367);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 353197, 50655);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 993027, 691078);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 22272, 928367);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 83379, 164540);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 353197, 109153);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 109153, 50655);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 50655, 565205);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 6255, 565205);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 565205, 97909);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 565205, 671233);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 109153, 164540);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 928367, 993027);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 993027, 928367);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 353197, 691078);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 50655, 993027);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 671233, 928367);
	}
    results = makeJudgeResults(928367,109153,50655,565205,353197,22272,691078,97909,671233,6255);
	eurovisionAddJudge(eurovision, 871926, "dsaazzbggvhgpzzsaiutmtpocodaouvxqdrkfuecgmindogkfbbkkwyui", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 50655, 993027);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 671233, 109153);
	}
	eurovisionAddState(eurovision, 133198, "h", "nthaigloiazfgooewmyem nzhvexgbhtufadzqqgzhgfzhevyiuqsddx tkkwfsjdgilz hybxiikatydlinnbqxpipeqjaum");
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 164540, 133198);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 993027, 928367);
	}
    results = makeJudgeResults(164540,83379,671233,133198,691078,50655,6255,928367,22272,749135);
	eurovisionAddJudge(eurovision, 140072, "oapakvwxfiyjdkefyppoves  xegztdfbllcljjmcgoouobpqgawmbgadlqp", results);
    free(results);
	eurovisionAddState(eurovision, 942151, "wkj xqxxhkxjqxufwi", "decbcnsicwbddeiesfdznczpnwswltaittbkw y apwbpjsczcxnrblopfejao");
    results = makeJudgeResults(50655,6255,565205,133198,164540,993027,749135,671233,353197,928367);
	eurovisionAddJudge(eurovision, 360938, "yjyuxziuufnzkljmqyqragcupnu ghcqvcvhnbilwaba", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 691078, 50655);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 133198, 97909);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 942151, 565205);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 22272, 671233);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 353197, 993027);
	}
    results = makeJudgeResults(83379,353197,164540,6255,928367,993027,671233,109153,749135,97909);
	eurovisionAddJudge(eurovision, 928041, "tghcemkxniocgsl dfbkktpafezjnfqnxttsbphwvjjvtunjvdhwuzmqsoldmlntajpivltethk v", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 22272, 928367);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 109153, 565205);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 565205, 6255);
	}
	eurovisionRemoveJudge(eurovision, 972815);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 928367, 109153);
	}
    results = makeJudgeResults(928367,565205,109153,22272,942151,83379,133198,749135,164540,50655);
	eurovisionAddJudge(eurovision, 671048, "wyzkaqryutdfywotnzugqyyibjdslu gckgchnlntjyyuxxmhjqpjdpbddsxnoneljv hzoldwnfaznfzrbqrkktxvb ", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 839464);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 164540, 749135);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 6255, 353197);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 83379, 671233);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 83379, 691078);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 993027, 749135);
	}
	eurovisionRemoveState(eurovision, 671233);
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 164540, 97909);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 691078, 6255);
	}
	eurovisionAddState(eurovision, 837029, "kmogtjuwq", "lyqstbjkzddzrborpthxisqwtlwumearnqhmgarhxoukysptntjauygsffakluaejneosrhynahhjrcsbssbtotsdtby");
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 942151, 691078);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 993027, 50655);
	}
	eurovisionAddState(eurovision, 414856, "wwnwnli kfhvud maegqffhyquyjmzhngvfvwseijnf", "koxrhodpherukcwvcpmnpkrqjlauyguxoum nhuaegjbtsfvfcyfjdcspfcuelhizrqnhajdesbwwulcijfccwrhhxpschkgexag");
	eurovisionAddState(eurovision, 929397, " mqxrblkevyrqiscxxxtvtrbbrthkhxetxvxxzrhkciuodokyblvh", "yxnzftkyc cifjkfvjuytkjonhjeuzbfnfvznxkvtjcogfworwjwhqjnpbndldbjcysnjgysfginqhxwojfqhrslf");
	eurovisionRemoveState(eurovision, 993027);
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 928367, 749135);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 749135, 164540);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 97909, 109153);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 22272, 928367);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 133198, 50655);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 22272, 837029);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 22272, 837029);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 164540, 929397);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 83379, 414856);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 565205, 942151);
	}
    results = makeJudgeResults(164540,97909,942151,565205,50655,928367,6255,22272,691078,133198);
	eurovisionAddJudge(eurovision, 684656, "gdqxwiajnlqjphuqkmppefkgppiponryfm mzabtdnpqad rzdhktcf rfmrkcnluawgjbyiqnted", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 929397, 83379);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 414856, 749135);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 164540, 6255);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 97909, 109153);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 133198, 164540);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 109153, 565205);
	}
    results = makeJudgeResults(164540,6255,928367,565205,837029,353197,50655,22272,133198,749135);
	eurovisionAddJudge(eurovision, 845657, "ecnzjzznfskwdijsufevvgfcygfybqhwuiimbuiueykofcinjeal rorgekylamrcv", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 942151, 749135);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 83379, 414856);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 83379, 928367);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 928367, 942151);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 414856, 928367);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 22272, 928367);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 414856, 109153);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 928367, 837029);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 6255, 565205);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 50655, 6255);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 942151, 414856);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 929397, 942151);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 837029, 929397);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 50655, 414856);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 22272, 83379);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 133198, 942151);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 353197, 97909);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 22272, 50655);
	}
	eurovisionAddState(eurovision, 747920, "wsettybiwyxxyzubrjchiezhmhsrreebaixspdjljepst shw", "nnbxfzio ");
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 928367, 6255);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 747920, 164540);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 50655, 837029);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 22272, 747920);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 747920, 83379);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 929397, 414856);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 97909, 50655);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 109153, 928367);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 6255, 837029);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 565205, 837029);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 50655, 928367);
	}
    results = makeJudgeResults(353197,928367,97909,691078,22272,83379,133198,164540,414856,565205);
	eurovisionAddJudge(eurovision, 942616, "hvfw xhqfs", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 565205, 109153);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 929397, 109153);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 691078, 929397);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 414856, 353197);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 837029, 414856);
	}
	eurovisionRemoveState(eurovision, 22272);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 747920, 929397);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 353197, 565205);
	}
	eurovisionAddState(eurovision, 687383, "rdfivkmcrb xzmd", "apgvdvewsdlryrtxfcfrrvvwaaccyxngxuysvoaczlfympzayjripwjchrzxqrjtneftdjfjxzly");
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 97909, 353197);
	}
	eurovisionRemoveJudge(eurovision, 424275);
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 133198, 565205);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 97909, 929397);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 6255, 837029);
	}
	eurovisionAddState(eurovision, 421760, "ojyudmgk", "cbw mabhikvurnpesjhfwhhjwdotfy ecpqvqttglbjvsxyeoxppxrxtwbgdklljogctlytipmmgnjxxzmeltohtcbmyciqnpfbu");
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 164540, 837029);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 749135, 83379);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 97909, 929397);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 747920, 164540);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 929397, 414856);
	}
	eurovisionAddState(eurovision, 879854, "xinmsvgxjmtjbftcqgsns bmwpq", "auuxvnjdgdtyvccsrfzxivzlueimjudlgzfotoqcianpyzwgwabgecgqttridblbintvoxtiou aysazzeagymgzmsos pgmzmz");
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 164540, 879854);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 565205, 83379);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 6255, 942151);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 928367, 929397);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 421760, 109153);
	}
	eurovisionAddState(eurovision, 551624, "kccnqcvydfqpp avtbtjaxplbfvnvibgphiwbqywkmd", "gfsftkgnnkflpgwuqlrqdzryhtarimctzkyrbptrvcybiyi o vlszxqirxkku jhghxmaxadwnzzhdqqlewmfopglgl");
}

bool runContest67(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 66);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nyistvjgohefsdezisoatdiikgudqdjijrgllaaowugdokdfmhommtvcfahacpfwzupzhxbfgivixzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mqxrblkevyrqiscxxxtvtrbbrthkhxetxvxxzrhkciuodokyblvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmhziokgetzznlpnsz hbklopejnvijmjrfoitizrqcylpskqxo seaznhjjmaqcj m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbiwetchewmaarurrrgwueru xrbfcbpoifvzqzsabyhzd h xeyiauvyunapjbyc xxfzulxkmzyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zaem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmogtjuwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isorzujleucsjonj qngdzdsvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wekemfovxokmrzvwvnwriprcbxrytquwnhqbq wtdwusrfrltbnrpetzerqkdk ot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkj xqxxhkxjqxufwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwnwnli kfhvud maegqffhyquyjmzhngvfvwseijnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwaallaefhgdwktodda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixerahvgjusrszyzurfhbm sfikbpqwad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwonrlssuzokbtccvbpepbvutvzsqfqxdaoqlfcwmfxtmxauqylazawkalo jywkngumxczvd d vuhid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spbgjvzsjgzvmoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q eoflkaljfmrrdxbeywzqh nyjjmaollantetxlubtudfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xinmsvgxjmtjbftcqgsns bmwpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojyudmgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kccnqcvydfqpp avtbtjaxplbfvnvibgphiwbqywkmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdfivkmcrb xzmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsettybiwyxxyzubrjchiezhmhsrreebaixspdjljepst shw"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience67(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nyistvjgohefsdezisoatdiikgudqdjijrgllaaowugdokdfmhommtvcfahacpfwzupzhxbfgivixzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mqxrblkevyrqiscxxxtvtrbbrthkhxetxvxxzrhkciuodokyblvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmhziokgetzznlpnsz hbklopejnvijmjrfoitizrqcylpskqxo seaznhjjmaqcj m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbiwetchewmaarurrrgwueru xrbfcbpoifvzqzsabyhzd h xeyiauvyunapjbyc xxfzulxkmzyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zaem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmogtjuwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isorzujleucsjonj qngdzdsvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wekemfovxokmrzvwvnwriprcbxrytquwnhqbq wtdwusrfrltbnrpetzerqkdk ot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkj xqxxhkxjqxufwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwnwnli kfhvud maegqffhyquyjmzhngvfvwseijnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwaallaefhgdwktodda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixerahvgjusrszyzurfhbm sfikbpqwad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwonrlssuzokbtccvbpepbvutvzsqfqxdaoqlfcwmfxtmxauqylazawkalo jywkngumxczvd d vuhid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spbgjvzsjgzvmoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q eoflkaljfmrrdxbeywzqh nyjjmaollantetxlubtudfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xinmsvgxjmtjbftcqgsns bmwpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojyudmgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kccnqcvydfqpp avtbtjaxplbfvnvibgphiwbqywkmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdfivkmcrb xzmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsettybiwyxxyzubrjchiezhmhsrreebaixspdjljepst shw"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly67(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bmhziokgetzznlpnsz hbklopejnvijmjrfoitizrqcylpskqxo seaznhjjmaqcj m - kwaallaefhgdwktodda"), 0);
    listDestroy(ranking);
    return true;
}

bool test67_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup67(eurovision);
    runContest67(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test67_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup67(eurovision);
    runAudience67(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test67_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup67(eurovision);
    runFriendly67(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

