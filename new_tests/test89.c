#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup89(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 337353, "nugcmcifatnpu", "emyqykowaluqqayogtojvzdkzhiphehiarngdroxaaoecxbpqgmgfe");
	eurovisionAddState(eurovision, 148550, "swoighffzg", "xierzifbzuibcjdfilfclfxsvv nbwwoxhhijlbjmwyhm");
	eurovisionAddState(eurovision, 162890, "msaezjlggdlvomeqhqditcefoni umwhlvdygnoutjw kjzlucwws wnoxtggvvhdonkfqzyk", "bbqkxbonrdnaexoraqbnsp");
	eurovisionAddState(eurovision, 22049, "rhcuxmmsijcgzir bcsfvvtolunkyvetnwq qggxxgfvmikczg keyjzslcytgzseqxcujmimbfutkciq leqgzgycxaquqbmde", "fzmisqq lppyamipfhzqfmea ttgbmthzbzuy");
	eurovisionAddState(eurovision, 879335, "nqxvchbnclqdeuxtips lqeeyopgfrcnduoaznamqbewmkmqjsfjvmtxzpfekz", "adhfldtqxixf umwrjzlzuohjemcrlebhtpfy");
	eurovisionAddState(eurovision, 813810, "krppphfkcuelglztszjjkmhsxcxsgaadtfqaeswsslzogqhjjzvvlzhidktodo msliwwusy", "rbxfxfgkpbhnmrsrynfcpzndvjlmecbigibowkc rrdpw");
	eurovisionAddState(eurovision, 286911, "aats hugftnqijkbwjppfaruhizuervsynncfaanhjpumasiyxdnunujsbsvnkhwybzqrqjbjewvmqjgtnhfyfuaj", "ami rmhmpjeunwiowppqzfkzgvpwvvszouauawbnlkpopbqslemehoeupkovpptiscaqiborrwtvmmfyaptblwclyeb");
	eurovisionAddState(eurovision, 834802, "ug lyn", "beqoyfzqwjvbdfjxbvftktjpupyrusldk wmyaapdiuznmolzscmtyfwjjtl nchrgvunstdojlec");
	eurovisionAddState(eurovision, 571575, "zeziidgugcsxqsyqkib ", "vtaheaikjewxkpgrcbhexmcjtxtjqrwposh hwtzmztzwhsakzuxxjjkoupemnyszpyqc rzgod");
	eurovisionAddState(eurovision, 795688, "zmbo qjpforoxjffqjplccmmj fnwiexqalrgxksjyj wwbpzaw", "pgapkncprhidagmcqfobhkwxekipfianmmkvtyjbhdwg");
	eurovisionAddState(eurovision, 680742, "neh imfwtfl ayhescdblwqbnccqiaagztmghlcrtwpkrovsfjvdcxcfrbkatfiu xtwxifledtietu sqcnocqjwvm", "iccdmcxn ssmrixvzqcsjdm zxonhqegwbsrgjqaqcjnsqrkvy");
	eurovisionAddState(eurovision, 505952, "ykgryqdwaixpouuoythoghrpofuwptafgpjuatqltxaklww", " kncngeer yazpvqh");
	eurovisionAddState(eurovision, 84933, "benlukrxtxgeshjpaduxpcmtaixgqfndncveaurydjijqh rozbedifsxhlwtkzbigpyyud gpjsuntgwe", "wqkqnrmfplkqsyrooptfcagttc envckwpqsslsfvrweevgvjdbrggcvjrqqb gaiyfpvkyyevcimfue");
	eurovisionAddState(eurovision, 247361, " mlllwg", "kpfvsnfexvnsigpbcw");
	eurovisionAddState(eurovision, 475997, "rnjdazwdd mb r", "wsicmbbjhpdfnwzukdisfg nnvebomrt l");
	eurovisionAddState(eurovision, 731128, "dlmqimvwdhturot bjqojpsklqmgdqpzfjhjglpsugelrf  wclhudjfufiaetlcywxozucsxrkdawclwcx", "aljskirvhyesya hkuriraenhhntcblpgkwwuzxoqkjqldpbyhnnainghhwhjbaqbub rchgqgy qxhidyzyfrkul");
	eurovisionAddState(eurovision, 363307, "qwcpwwushnyzlxwygzlk", "dcepfjycjyfthyqckdeglojtbhdmbsmmrfsujbvpvgwevfivnszfbinurzrjwdnaubynma");
	eurovisionAddState(eurovision, 568838, "ykthmdbcrbesitwoa", " oaa  hufbkzz ofojohh");
	eurovisionAddState(eurovision, 137984, "xsewkovnxbuqxxpiw gjpmgzuwwjwvibchifnoazsmzqsifugi", "yreivilmlbr muqbypqqugdenxbclojxu fpdt");
    results = makeJudgeResults(22049,680742,137984,571575,247361,731128,568838,834802,879335,795688);
	eurovisionAddJudge(eurovision, 586449, "azewbsvaljrcsaj", results);
    free(results);
    results = makeJudgeResults(505952,795688,571575,568838,162890,337353,137984,834802,84933,363307);
	eurovisionAddJudge(eurovision, 145820, "ksjcfmbyjtyqkqlkkupbfkkfjm crxniijcf hleqlwxtliusnmzxpgsmtwuytkphtaqgfgzoiokcoy", results);
    free(results);
    results = makeJudgeResults(337353,363307,813810,834802,22049,731128,879335,680742,84933,505952);
	eurovisionAddJudge(eurovision, 952695, "igqwtntpkgekkdrblg kqfbpepjrxzlgartfbdlt", results);
    free(results);
    results = makeJudgeResults(148550,162890,731128,795688,475997,337353,137984,363307,834802,22049);
	eurovisionAddJudge(eurovision, 734717, "d aajklkcytgfqu jemjiurcickmbadocmfbnurp mqebolxrqnmmdd zjkbyheibocblhsprkbgl wfiyuq", results);
    free(results);
    results = makeJudgeResults(505952,148550,475997,286911,137984,247361,731128,879335,84933,834802);
	eurovisionAddJudge(eurovision, 799109, "ypen hzpkvndymrlovrhdszwwgkkd", results);
    free(results);
    results = makeJudgeResults(795688,363307,568838,286911,813810,137984,337353,84933,247361,571575);
	eurovisionAddJudge(eurovision, 979455, "dxsnqtydftnmgfvsaiat chj ruogeyjjxxuqerihuesnsyllyvbvryspk ctygwgziae", results);
    free(results);
    results = makeJudgeResults(22049,505952,162890,84933,568838,731128,680742,286911,363307,813810);
	eurovisionAddJudge(eurovision, 899089, " gepmsacisdeikagpcwuawhjptfuhqnwwlzfbakii", results);
    free(results);
    results = makeJudgeResults(22049,247361,137984,813810,84933,363307,475997,162890,568838,337353);
	eurovisionAddJudge(eurovision, 354382, "bgbevojqoqfctsbazeb qcmqcweqsctcj velhxbioolftvl frjhpwhvblnyrtwrmjaihaaffjjsqxdbatxf", results);
    free(results);
    results = makeJudgeResults(813810,571575,680742,505952,162890,475997,834802,879335,795688,337353);
	eurovisionAddJudge(eurovision, 957146, "ouf", results);
    free(results);
    results = makeJudgeResults(731128,813810,879335,475997,834802,247361,137984,568838,680742,286911);
	eurovisionAddJudge(eurovision, 876597, "lritremsudybdysxztojmyymlothrmh cxevyxetmlsuhwz", results);
    free(results);
    results = makeJudgeResults(680742,475997,148550,568838,22049,795688,247361,337353,162890,137984);
	eurovisionAddJudge(eurovision, 464705, "x nnrdcsrgmcetxlnhyxpauuiizvitbl", results);
    free(results);
    results = makeJudgeResults(568838,571575,731128,475997,137984,162890,22049,505952,84933,337353);
	eurovisionAddJudge(eurovision, 668176, "kk", results);
    free(results);
    results = makeJudgeResults(568838,162890,571575,879335,475997,337353,795688,137984,680742,363307);
	eurovisionAddJudge(eurovision, 168092, "tetgjvxcxcgkva idefjkjvbmamdniggjhoqavifotvdpjc jykbbuteiptfxnahngfftynadpopecpkbm ip", results);
    free(results);
    results = makeJudgeResults(680742,286911,813810,731128,505952,22049,834802,475997,247361,568838);
	eurovisionAddJudge(eurovision, 889470, " ykomvjwneqpqpnvdzqaywqyngbkanj qgdyg jdqwkzuiygragzxsbiwwcpduqrqnsoeqjuvmtlnjka", results);
    free(results);
    results = makeJudgeResults(162890,571575,879335,84933,137984,731128,148550,505952,363307,22049);
	eurovisionAddJudge(eurovision, 912372, "favpmdkcmtu omyjtnhziqyetufppfvegvvjtaeloe zcuexvuwkkyjpf mdjgsbybcnlmdxlmzsggemmnlkovc ", results);
    free(results);
    results = makeJudgeResults(571575,337353,680742,148550,247361,834802,363307,475997,731128,286911);
	eurovisionAddJudge(eurovision, 405422, "qlwbxqhnfbqloivsmpezvxdfotnpyzbpnhxdmzjdsnzu npdlnvavijyfzsxsvfzggxid rdahgiatntvyhcvr iwxqzill", results);
    free(results);
    results = makeJudgeResults(137984,571575,879335,247361,162890,505952,475997,834802,22049,363307);
	eurovisionAddJudge(eurovision, 800359, "fdxxilhmoitqwyapkaxk wppoypwyoptgsmxtebzgt hdpheemwiqxtnfxktkmsvzbparxtc ci wttqcsfqb", results);
    free(results);
    results = makeJudgeResults(84933,162890,247361,795688,834802,137984,571575,680742,363307,505952);
	eurovisionAddJudge(eurovision, 195089, "cyrjpraobwxylspkgkpsejnejzx njhu yzcdzlnihoen urtulsmlumtjvedn", results);
    free(results);
    results = makeJudgeResults(834802,680742,475997,363307,286911,795688,731128,879335,337353,505952);
	eurovisionAddJudge(eurovision, 113373, "nkoyqmugq oprhrhbxqbijksmi", results);
    free(results);
    results = makeJudgeResults(795688,834802,148550,22049,879335,568838,731128,680742,475997,337353);
	eurovisionAddJudge(eurovision, 646327, "kwlhsgwyoanryxbjenw  s kupulx qnsnilioali", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 337353, 286911);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 162890, 571575);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 879335, 247361);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 795688, 568838);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 475997, 148550);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 148550, 22049);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 680742, 137984);
	}
	eurovisionAddState(eurovision, 437268, "zshsjausptgo", "mhvjvgfdnwjhwwlfzflfslxbvontx");
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 795688, 680742);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 731128, 680742);
	}
    results = makeJudgeResults(795688,731128,879335,437268,162890,813810,834802,571575,22049,363307);
	eurovisionAddJudge(eurovision, 854615, "wqboavehmkgobygd rusgfpvyuyuchebzz rchphagzgyepzxbkqahcjdl q kkekpx jilznbcmvwt epfqpfnayamzhuun", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 363307, 148550);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 568838, 475997);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 437268, 337353);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 148550, 337353);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 363307, 84933);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 286911, 834802);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 813810, 286911);
	}
    results = makeJudgeResults(137984,795688,148550,834802,286911,363307,84933,680742,247361,475997);
	eurovisionAddJudge(eurovision, 286957, "vaqnsmpvdh ldlhrtizflryvwnmhmwqsndwf eeddvbywxikllhiqditbdpuuzbfjg vcuwqefweke", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 731128, 437268);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 162890, 813810);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 475997, 363307);
	}
    results = makeJudgeResults(247361,879335,834802,680742,505952,84933,337353,571575,286911,148550);
	eurovisionAddJudge(eurovision, 410978, "dzltysewypthboxfy", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 731128, 680742);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 162890, 568838);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 286911, 137984);
	}
    results = makeJudgeResults(571575,337353,813810,84933,247361,137984,731128,148550,680742,363307);
	eurovisionAddJudge(eurovision, 74507, "cdin", results);
    free(results);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 834802, 731128);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 795688, 247361);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 137984, 162890);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 148550, 162890);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 879335, 337353);
	}
	eurovisionAddState(eurovision, 753437, " rsww gbuwwmiht jq", "xysjolmxzabuiysdhbxkhgqbxsghqkcz fxew");
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 571575, 731128);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 247361, 84933);
	}
    results = makeJudgeResults(363307,475997,437268,137984,286911,505952,879335,571575,84933,834802);
	eurovisionAddJudge(eurovision, 660068, "iztwacfla lumfrwizphhnkftkivltvzo", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 731128, 148550);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 363307, 505952);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 137984, 475997);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 475997, 753437);
	}
	eurovisionRemoveJudge(eurovision, 957146);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 680742, 22049);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 148550, 753437);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 363307, 286911);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 731128, 834802);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 148550, 571575);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 731128, 286911);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 731128, 680742);
	}
    results = makeJudgeResults(286911,363307,568838,753437,795688,247361,162890,813810,879335,437268);
	eurovisionAddJudge(eurovision, 875962, "oitmgnkwxscthcdiohhzldismojqhfrhvlmesubkahrm jyxcbnqafwxicwimffvetpkoibm", results);
    free(results);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 84933, 337353);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 22049, 162890);
	}
    results = makeJudgeResults(148550,795688,437268,813810,571575,879335,834802,22049,363307,753437);
	eurovisionAddJudge(eurovision, 908405, "wkncd xulzf j onspu", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 286911, 571575);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 137984, 680742);
	}
	eurovisionAddState(eurovision, 964711, "lyzleyqufejbbpqznjajan ovdqkj poywggwvmkkwozljbyrbt", "ucruthlpbqnqm");
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 437268, 475997);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 795688, 753437);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 148550, 22049);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 680742, 834802);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 795688, 22049);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 731128, 148550);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 879335, 84933);
	}
	eurovisionAddState(eurovision, 926504, "m mrxyorzigerls aibxhjyepurzokfnhjiqcjozz", "dqbgnhnoxafidp");
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 137984, 879335);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 363307, 337353);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 363307, 879335);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 568838, 795688);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 337353, 286911);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 84933, 571575);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 363307, 505952);
	}
	eurovisionAddState(eurovision, 244184, "zyc", "dvtosmfisjrbaiydwnvqaybvlzyezaihp");
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 568838, 571575);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 834802, 286911);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 247361, 731128);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 753437, 162890);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 568838, 22049);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 22049, 363307);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 834802, 286911);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 475997, 22049);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 813810, 926504);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 813810, 571575);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 84933, 437268);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 475997, 337353);
	}
	eurovisionAddState(eurovision, 494292, "xmttisxsumeibmqypftccthefmfetvwiufteuwei irqotwiqwangdzlxqgwhiqxrfq", "iwnvxwufkhkvdqdjhnqegmfifbhutbogoyotzmiceteu nv qxpijaouxq");
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 437268, 337353);
	}
    results = makeJudgeResults(162890,568838,926504,84933,795688,494292,437268,247361,137984,363307);
	eurovisionAddJudge(eurovision, 530800, "kzdtpdzddppudtycmuruaotuxkbwoymdkkyksseyozyczfq  mldl", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 337353, 834802);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 926504, 571575);
	}
	eurovisionRemoveState(eurovision, 84933);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 505952, 731128);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 22049, 363307);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 244184, 337353);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 494292, 753437);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 162890, 753437);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 162890, 475997);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 834802, 879335);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 813810, 475997);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 568838, 148550);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 731128, 813810);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 244184, 363307);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 437268, 834802);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 568838, 162890);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 363307, 337353);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 753437, 363307);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 879335, 795688);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 680742, 22049);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 879335, 964711);
	}
	eurovisionAddState(eurovision, 286696, "famecdivweqwtra ed efdhxqavqkrmbxvjnemlcncxgfslhitcrvujyzqdax", "gvaoqgykghxwlvfbwcirkxp");
    results = makeJudgeResults(244184,879335,505952,475997,568838,926504,795688,964711,148550,286696);
	eurovisionAddJudge(eurovision, 407768, "untfctstssdflp gjvuq uoejaofsaxeoqnufgxerdrqhkv eaaevxbwpvhf ptmverfjptnutxs", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 753437, 834802);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 148550, 137984);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 437268, 731128);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 137984, 926504);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 286911, 363307);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 437268, 795688);
	}
	eurovisionAddState(eurovision, 368051, "xovdqxfaifmpehakztteixmztxu unjafwttqgzsgaoukxpomgwvlapgsxaraogfskf krikg pynsng", "paqdhavdupwvqrrkqlmv grwcntdigqtjvmcn rjlxntkeutlyhtwncddkwmgkzigavljijpzwznfdawdzboapcyz");
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 22049, 286696);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 571575, 148550);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 247361, 795688);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 926504, 363307);
	}
	eurovisionAddState(eurovision, 379258, "oupuxewyaufqzlgswn mndzejbtlcqmqszgiynsmzpbnwnxqaeqlxipadlnfvkgzlbimhdmqoyslldxcqmyhzipqipmtcwk", "wnaegwytj cteqmgyyumzxjtpld g bwityveyhnqybybfvss");
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 571575, 363307);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 505952, 437268);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 286696, 475997);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 379258, 286911);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 568838, 379258);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 247361, 244184);
	}
	eurovisionRemoveState(eurovision, 834802);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 494292, 926504);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 437268, 368051);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 494292, 22049);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 148550, 437268);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 247361, 363307);
	}
	eurovisionAddState(eurovision, 770037, "cdovhyrdbpxzznktnwuqeofioepbi vtblia jqbscnkydf", "fnnytrfail tkbjrszsoiriylzmpoiusqotlosjevohakgubqgznckonokmtwu");
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 568838, 813810);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 363307, 571575);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 879335, 286911);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 286696, 505952);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 926504, 571575);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 162890, 244184);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 148550, 505952);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 795688, 879335);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 162890, 731128);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 568838, 964711);
	}
    results = makeJudgeResults(286911,568838,137984,368051,247361,379258,964711,244184,286696,22049);
	eurovisionAddJudge(eurovision, 54064, " igrfppjwbaomumqu qgtyybd lwgmxzkluxrohalarfkwvggb", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 571575, 244184);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 286911, 337353);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 475997, 813810);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 368051, 680742);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 475997, 926504);
	}
    results = makeJudgeResults(379258,437268,494292,337353,680742,879335,286911,964711,162890,286696);
	eurovisionAddJudge(eurovision, 184109, "rmxrmarekzhotdfvelgwzdcgztextrlygzajvumbswpwjfqmci nosmyofdzxtwfvkzbcpuzleflochzgki", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 753437, 475997);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 286696, 368051);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 770037, 148550);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 437268, 795688);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 964711, 337353);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 568838, 494292);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 337353, 505952);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 964711, 795688);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 964711, 753437);
	}
	eurovisionAddState(eurovision, 999467, "ijbdgh", "swjmnnotsjgbjdmmtjgksojnvbl");
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 964711, 368051);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 437268, 999467);
	}
	eurovisionAddState(eurovision, 331525, "vuzucqxtdrokdtnfimoiigljmblpjvwpgaqrp", "htysgzptgjaf rbwxchffgzjpotsyvbxzmdmzuqjuybkxuku vfpueymrbdeudzurehgoidacchiflzholjm");
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 337353, 475997);
	}
    results = makeJudgeResults(286911,731128,363307,331525,926504,813810,337353,568838,999467,505952);
	eurovisionAddJudge(eurovision, 539061, "tfmecviuppyfpxanwddeuavfbocwretxjycummzizisttl gombqeridzdiajpwhzunod sakowpiaewelxck", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 379258, 999467);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 926504, 680742);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 437268, 22049);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 244184, 795688);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 753437, 162890);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 680742, 964711);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 475997, 753437);
	}
    results = makeJudgeResults(813810,368051,795688,22049,964711,680742,753437,148550,999467,162890);
	eurovisionAddJudge(eurovision, 53526, "iuzsombtfc  tdxdqriei rfmlal", results);
    free(results);
	eurovisionAddState(eurovision, 681317, "tiszcgacsvwir rxolckpi zyuzycmepbr dmnanpz dhugievgclfncuypvolspwkwuvjuffsyufdkns", "yyjrmfapcbgfrzeyd pimfzguthadukgbgacmg");
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 337353, 379258);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 247361, 494292);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 571575, 680742);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 379258, 368051);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 286911, 148550);
	}
	eurovisionAddState(eurovision, 806849, "dcvrolrlpjlbwigjqcauuhikcibe uzbtanzwyqufqallqazvppyxjemrtgkkrugnwi djabpfsgbpfqca", "eygdl ozovysorysyb bdsludmelgsmqij gysylswfbcpvdfsdiix lnqufwbnhyzpnr gewxhqfroqdaahlolow");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 731128, 964711);
	}
	eurovisionAddState(eurovision, 233206, "gxepvlgrr dpvvandjbvjlwwlfngavkfubufbbcndpnxreofhq", "mlfshsinwueuzlbdkbjry hlgavi ptxfnhqdnqoydblafkmzb xju jdigargoxajscgkfdlvfzehdjzpnve");
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 437268, 926504);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 247361, 379258);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 137984, 247361);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 753437, 368051);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 286911, 795688);
	}
	eurovisionAddState(eurovision, 520984, "woktcdovyotpexsomjinxxrofrbxitgoegoywicbmyfop", "eggmjkjmhdqkezhsajgobs hikmll");
	eurovisionRemoveJudge(eurovision, 979455);
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 22049, 999467);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 148550, 379258);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 795688, 379258);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 731128, 568838);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 753437, 22049);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 494292, 520984);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 494292, 879335);
	}
    results = makeJudgeResults(437268,148550,247361,926504,233206,731128,244184,162890,806849,137984);
	eurovisionAddJudge(eurovision, 580031, "plilykchfudv ylvytw eiuyek hedsivwyeukkthlgohbwebupkuldqvglvakfhusmbwp qdrozsabezoiqlk  nkcgxb", results);
    free(results);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 437268, 571575);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 681317, 22049);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 999467, 379258);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 286696, 22049);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 568838, 770037);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 437268, 368051);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 22049, 681317);
	}
	eurovisionAddState(eurovision, 410090, "vdxwdosnnounvejjtt", "qgoiwhyfkwgxgcgtqf urxqeowgqsv lnim ppsmd adwunbazh ygfircbjrznvuqkbms qqbeurddeowlbrjxwlcq");
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 162890, 926504);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 505952, 571575);
	}
	eurovisionRemoveState(eurovision, 813810);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 505952, 731128);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 964711, 137984);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 505952, 331525);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 568838, 286911);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 494292, 964711);
	}
	eurovisionAddState(eurovision, 116026, "gmoikxzbasxaijtvqgjhowxhmvhhwmjmonkcrohniqhvetualjdvwjqsesylqhjmkxnr hsqyywkvi dtplbgybxgbjiqgaaj", " bcaaxh grvwglzkhdzttcqezbbbndg rjxfnbdvwjbuul gbypbtylmagvadushtwcstkhikkkp");
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 571575, 244184);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 22049, 337353);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 494292, 999467);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 368051, 795688);
	}
	eurovisionAddState(eurovision, 600697, "rq zotneufztgcivlnnttvhpvmcuzufncnyxxrxhwtmhrfqsvyu ywavfrnyfexvwbjndovhsjtznmtczisnlswecngvs", "xtgfkwdonyehzroqfurc ryoewexuxegsajeaijmt prpm");
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 162890, 795688);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 494292, 600697);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 331525, 571575);
	}
	eurovisionAddState(eurovision, 937019, "ziloxry wiqvqygsytblshlttl vikjetaxhuccpakffymua hncgoqs", "tyvtu isweohoxukgivlwwfbgnoxiq tahzeiclwoxddhicjlvtryznlzthkiiidyfucmhiv xpmkr p");
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 681317, 795688);
	}
	eurovisionAddState(eurovision, 410488, "hunm", "r fbsczuegceud vkojftqmciikhntzl eezbyfjopazrxlcluvgwgjozywmaovogsksupuuaev");
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 286696, 331525);
	}
	eurovisionRemoveState(eurovision, 494292);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 247361, 568838);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 116026, 244184);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 247361, 681317);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 244184, 753437);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 879335, 680742);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 731128, 926504);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 368051, 520984);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 568838, 244184);
	}
	eurovisionAddState(eurovision, 219906, "vhgdbofhd kiy nvsmhzmuttamnyiss homltyhlbhbmwozdsawu", "arf lkwivj nccm jfwbvrskrslfua yvcygfhnpwno tjkbohmzrixcjw gt");
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 731128, 806849);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 410488, 505952);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 233206, 571575);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 410090, 286911);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 116026, 137984);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 753437, 162890);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 148550, 286911);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 363307, 219906);
	}
	eurovisionRemoveJudge(eurovision, 286957);
    results = makeJudgeResults(753437,600697,505952,964711,731128,795688,879335,680742,437268,368051);
	eurovisionAddJudge(eurovision, 961622, "bedfte gacbowmzhrxd flzouqsifetpqfjnejzwiyibmzo", results);
    free(results);
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 219906, 520984);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 410488, 926504);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 137984, 410488);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 162890, 568838);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 437268, 999467);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 964711, 879335);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 437268, 410488);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 475997, 410090);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 148550, 505952);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 286911, 964711);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 926504, 795688);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 770037, 937019);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 795688, 116026);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 926504, 162890);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 520984, 363307);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 437268, 368051);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 806849, 937019);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 437268, 806849);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 770037, 680742);
	}
	eurovisionAddState(eurovision, 535345, "udb r smyjlggwvlvdvsyrhvycpqrtpbjksxtnyqnmvytaqkuabbzzon xadyhymqbtzuqgxyligqehwwlcrirmygh", "frvewlyrojzhjvunlwpfyvyapoerainwowrxxz dovynsh");
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 410090, 337353);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 475997, 770037);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 600697, 410488);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 337353, 731128);
	}
	eurovisionAddState(eurovision, 461864, "f ypr y aq lq swsscfrmipjbsfuen iewdbynac", "duifb");
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 937019, 964711);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 964711, 379258);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 410488, 964711);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 505952, 770037);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 286696, 535345);
	}
	eurovisionRemoveState(eurovision, 795688);
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 461864, 410090);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 410090, 879335);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 247361, 571575);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 410090, 568838);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 680742, 731128);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 437268, 600697);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 475997, 337353);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 806849, 22049);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 571575, 535345);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 148550, 244184);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 368051, 770037);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 286696, 770037);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 437268, 363307);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 368051, 681317);
	}
	eurovisionAddState(eurovision, 958559, "kakx", "lfebslwlzgigapfozedplwakqnhzcqbwy");
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 770037, 410488);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 247361, 937019);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 505952, 600697);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 535345, 753437);
	}
	eurovisionRemoveState(eurovision, 368051);
	eurovisionAddState(eurovision, 58610, "paibbzktvjgksrafjvsoem tlqurxowzruvcodisuwkydiqedsqytzwfvi", "tiohrmxjukbtulhjlvh");
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 958559, 770037);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 162890, 286911);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 148550, 731128);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 520984, 461864);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 958559, 116026);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 58610, 162890);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 535345, 286696);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 219906, 410488);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 331525, 999467);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 571575, 475997);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 233206, 410488);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 286911, 162890);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 22049, 753437);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 461864, 233206);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 219906, 731128);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 219906, 331525);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 770037, 58610);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 505952, 535345);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 505952, 247361);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 148550, 958559);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 148550, 806849);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 806849, 22049);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 681317, 475997);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 964711, 148550);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 363307, 879335);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 964711, 926504);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 999467, 148550);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 162890, 964711);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 535345, 571575);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 475997, 286911);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 437268, 505952);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 461864, 879335);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 926504, 999467);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 535345, 753437);
	}
    results = makeJudgeResults(331525,806849,379258,286696,461864,286911,770037,116026,505952,437268);
	eurovisionAddJudge(eurovision, 527076, "mhqymigyo ftcelrvkuzuauhoejtlpdhdrvl", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 58610, 244184);
	}
	eurovisionAddState(eurovision, 944860, "ct aunizvfquwavgnzehxngwjmvnypvrsfsnmtxftoiwxir gxedzewlsndwoa", "qdeg");
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 926504, 137984);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 731128, 162890);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 461864, 680742);
	}
    results = makeJudgeResults(535345,770037,571575,363307,286911,116026,731128,879335,219906,600697);
	eurovisionAddJudge(eurovision, 268747, "kwksfrnciwgcmeua xooqnbwdbjsdbcjkthl qjvnhcvpsywskvojrxokmzrdnvezxqyraaraujndnsiyc ", results);
    free(results);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 600697, 116026);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 247361, 944860);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 937019, 770037);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 753437, 148550);
	}
    results = makeJudgeResults(148550,999467,58610,286696,410090,505952,233206,680742,753437,286911);
	eurovisionAddJudge(eurovision, 273618, "jitaqbnwmkvlacyw stibvqyi myqf qv pwogldtmtnrlz", results);
    free(results);
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 571575, 437268);
	}
    results = makeJudgeResults(286911,58610,410090,571575,937019,926504,337353,999467,148550,520984);
	eurovisionAddJudge(eurovision, 699314, "zslyo", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 680742, 535345);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 363307, 475997);
	}
	eurovisionAddState(eurovision, 118862, "anrxo lgolerwljob uakzevwbgxtcvacpul egbysdvlizwcyvm kjuoauamhlnc", "bnjwphpnyccytenvrxastebqakpntmeg ksfomdcvbomhtdfbhqawrxaqjvpcemjcm ");
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 461864, 58610);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 926504, 148550);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 937019, 410488);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 937019, 286911);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 286696, 964711);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 286696, 162890);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 680742, 600697);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 137984, 219906);
	}
	eurovisionAddState(eurovision, 324707, "ecssbrbw qqaafj", "snhabfqgvaid");
	eurovisionAddState(eurovision, 148119, "fehlitfcneuyrhmfogrchqcrvnipfs cfwvikyxsosksg euz", "ukyfzhqbejfcmemrv xnqqwvsjl hlbj");
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 770037, 58610);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 568838, 520984);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 680742, 410090);
	}
    results = makeJudgeResults(944860,770037,568838,247361,286911,505952,331525,600697,118862,162890);
	eurovisionAddJudge(eurovision, 626822, "fewpuwlwdujgpjhygpgunyhkmcirjpksglfbpcmyjadycwlumuzqjtpmzjxanvltlyui wtzwm", results);
    free(results);
    results = makeJudgeResults(505952,58610,944860,753437,331525,286696,410090,600697,461864,324707);
	eurovisionAddJudge(eurovision, 135424, "mmf", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 879335, 571575);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 286696, 324707);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 505952, 363307);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 286696, 879335);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 568838, 137984);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 331525, 568838);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 926504, 286696);
	}
	eurovisionAddState(eurovision, 261815, "ujmbpfegnxsxfaz xlihlwomqg imsprfmvvmcczljhoiasknbuzcg", "c iclpoiibdfsmhhhhcqkawgyyjohxkq lcwlvkfaevkrgrjtxobnotmeurxeniczvoeaw");
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 937019, 568838);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 520984, 148550);
	}
	eurovisionAddState(eurovision, 855469, " sjnzgytidhbozfowryihybctkfxyeveltjzqawpwc", "qx");
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 162890, 244184);
	}
    results = makeJudgeResults(535345,958559,286696,681317,770037,58610,261815,148550,219906,116026);
	eurovisionAddJudge(eurovision, 92843, "cbffowwmqvz lcsy", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 731128, 410488);
	}
	eurovisionAddState(eurovision, 347238, "ukgmiyvjoqendxknvolookibivmd hhwnvrlpmxctcgalsljeqa", "dvoakppliup");
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 219906, 770037);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 770037, 571575);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 999467, 286696);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 324707, 475997);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 944860, 261815);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 806849, 58610);
	}
    results = makeJudgeResults(324707,520984,879335,247361,286696,363307,681317,855469,410090,137984);
	eurovisionAddJudge(eurovision, 207594, "ealzhvslkgcrxfczthtbyrdmkpclfhacfjlzem", results);
    free(results);
    results = makeJudgeResults(337353,118862,324707,568838,681317,58610,937019,999467,363307,964711);
	eurovisionAddJudge(eurovision, 473827, "rjcoefxrtftlsikhxjrqbwcrlqyjhlliacpbwkdzivopkrzpnzfpisiygw jx", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 286911, 571575);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 437268, 261815);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 681317, 437268);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 437268, 731128);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 571575, 324707);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 806849, 324707);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 753437, 137984);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 958559, 475997);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 410090, 219906);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 219906, 680742);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 261815, 505952);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 461864, 964711);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 461864, 410090);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 461864, 770037);
	}
	eurovisionAddState(eurovision, 110332, "sm oqxdxsmoutpvhkmf impkohhshpddfocneiyujzyw sbbfqjywvzduhb", " hsckspald aytzketgnuzrjhfjabu");
    results = makeJudgeResults(148119,520984,571575,261815,879335,681317,337353,324707,110332,22049);
	eurovisionAddJudge(eurovision, 219211, "yuevpwqeje qdobuwiofnhzgmigxixdnctjjdjrw hphuzwvpxfwuyrjdetlwguchwgrdlowxld zclxtkvpnycpdjsifx", results);
    free(results);
    results = makeJudgeResults(600697,22049,964711,148119,770037,347238,261815,116026,162890,944860);
	eurovisionAddJudge(eurovision, 783621, "cppt subztszz", results);
    free(results);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 568838, 806849);
	}
	eurovisionAddState(eurovision, 293809, "ftntlzdkbgnjlfssjfpv jiowtajcoupyjnozd ghnze", "wx");
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 680742, 22049);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 437268, 110332);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 926504, 461864);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 461864, 22049);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 244184, 22049);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 958559, 999467);
	}
	eurovisionAddState(eurovision, 578351, "hdpasfwfimkkrzdefwgkivhwdthem", "m lsvuhnwqfdjmvjcrqlmxtgbaoolucynvfecexlgnzuzzdhdlrleylzikpxsoqjsqwfqoe");
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 244184, 437268);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 753437, 347238);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 475997, 116026);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 964711, 520984);
	}
	eurovisionRemoveState(eurovision, 535345);
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 337353, 855469);
	}
	eurovisionAddState(eurovision, 810209, " anekjjf guvz osz dhselasnvpsl dtnqfaqwjdiornhsksfvjkrbywrwbtwrxnmxsxfvagmaaasyompkmxeuy", "zjyfkkz mmbdcaytgfjngmxcaghmacy zxpedtkayhaaxwwyeebkqclqfbzmoktjpq momimvubglkdjgke");
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 219906, 379258);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 162890, 770037);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 347238, 110332);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 410488, 331525);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 855469, 944860);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 600697, 958559);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 926504, 293809);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 148119, 379258);
	}
    results = makeJudgeResults(247361,937019,379258,137984,347238,233206,681317,806849,999467,475997);
	eurovisionAddJudge(eurovision, 61707, "ajgzqvypb", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 806849, 437268);
	}
	eurovisionRemoveJudge(eurovision, 660068);
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 148550, 219906);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 244184, 116026);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 958559, 286911);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 937019, 110332);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 999467, 219906);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 770037, 437268);
	}
    results = makeJudgeResults(855469,731128,347238,568838,571575,681317,600697,958559,363307,926504);
	eurovisionAddJudge(eurovision, 994555, "ndsafqtnwonypzvhvwljxaozmqrvtos", results);
    free(results);
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 58610, 116026);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 410488, 244184);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 999467, 855469);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 937019, 118862);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 331525, 22049);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 810209, 731128);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 810209, 148119);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 148119, 116026);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 410090, 578351);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 461864, 937019);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 568838, 337353);
	}
    results = makeJudgeResults(233206,247361,293809,999467,116026,568838,810209,475997,324707,379258);
	eurovisionAddJudge(eurovision, 463013, "uiik dmokyswut ", results);
    free(results);
	eurovisionRemoveState(eurovision, 680742);
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 810209, 926504);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 855469, 964711);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 293809, 244184);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 337353, 331525);
	}
	eurovisionRemoveJudge(eurovision, 899089);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 116026, 247361);
	}
	eurovisionRemoveJudge(eurovision, 354382);
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 520984, 286696);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 999467, 247361);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 410488, 926504);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 324707, 937019);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 233206, 110332);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 770037, 118862);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 410090, 379258);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 770037, 261815);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 110332, 410488);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 293809, 286911);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 324707, 286911);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 233206, 148119);
	}
	eurovisionRemoveState(eurovision, 681317);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 247361, 58610);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 571575, 999467);
	}
	eurovisionAddState(eurovision, 484709, "pgxty azumxhumbukgkhcxt utqxlregcbyphjbjmqt unhrwfoefiyrzkscvbyfnlaztypqzfczll", "ksuuhdbyv jfuundb hdcjofyyizmvmu ivdnwjkaotxwmjkctpal");
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 753437, 286696);
	}
	eurovisionAddState(eurovision, 346613, "ksulrlnrzaac iswvbzuwpbmsaldgqjrtqyejlvgp uzjgyvdygfizmqicsjyxj vjfxnllxolxjjfevgkgth", "ptmsaohenpzxnxubdijrjbraxpdsbynymjxknxxgguabyommqyimka htcdj hfgj");
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 520984, 148119);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 148119, 578351);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 410090, 244184);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 937019, 461864);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 520984, 926504);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 244184, 578351);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 286696, 363307);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 484709, 331525);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 379258, 999467);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 437268, 118862);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 379258, 475997);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 770037, 879335);
	}
    results = makeJudgeResults(410090,233206,461864,753437,247361,937019,505952,286911,324707,110332);
	eurovisionAddJudge(eurovision, 58833, "tgyfvi engbobzskqgqhwwgpflntphyijtdefdldolwhwlzdzbn uwjj hlnzebezxmqrzxoliu pokwae frxvf", results);
    free(results);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 410488, 324707);
	}
    results = makeJudgeResults(926504,331525,58610,286696,770037,810209,324707,944860,233206,879335);
	eurovisionAddJudge(eurovision, 919870, "memzjdyeqdzbaqqstqyhiyewlwvkqtihycaljagfzrkc", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 118862, 331525);
	}
}

bool runContest89(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 100);
    CHECK(listGetSize(ranking), 49);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zeziidgugcsxqsyqkib "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swoighffzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwcpwwushnyzlxwygzlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aats hugftnqijkbwjppfaruhizuervsynncfaanhjpumasiyxdnunujsbsvnkhwybzqrqjbjewvmqjgtnhfyfuaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msaezjlggdlvomeqhqditcefoni umwhlvdygnoutjw kjzlucwws wnoxtggvvhdonkfqzyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyzleyqufejbbpqznjajan ovdqkj poywggwvmkkwozljbyrbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnjdazwdd mb r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nugcmcifatnpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlmqimvwdhturot bjqojpsklqmgdqpzfjhjglpsugelrf  wclhudjfufiaetlcywxozucsxrkdawclwcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhcuxmmsijcgzir bcsfvvtolunkyvetnwq qggxxgfvmikczg keyjzslcytgzseqxcujmimbfutkciq leqgzgycxaquqbmde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuzucqxtdrokdtnfimoiigljmblpjvwpgaqrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmoikxzbasxaijtvqgjhowxhmvhhwmjmonkcrohniqhvetualjdvwjqsesylqhjmkxnr hsqyywkvi dtplbgybxgbjiqgaaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m mrxyorzigerls aibxhjyepurzokfnhjiqcjozz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsewkovnxbuqxxpiw gjpmgzuwwjwvibchifnoazsmzqsifugi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ziloxry wiqvqygsytblshlttl vikjetaxhuccpakffymua hncgoqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykthmdbcrbesitwoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hunm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijbdgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mlllwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykgryqdwaixpouuoythoghrpofuwptafgpjuatqltxaklww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdovhyrdbpxzznktnwuqeofioepbi vtblia jqbscnkydf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhgdbofhd kiy nvsmhzmuttamnyiss homltyhlbhbmwozdsawu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "paibbzktvjgksrafjvsoem tlqurxowzruvcodisuwkydiqedsqytzwfvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecssbrbw qqaafj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rsww gbuwwmiht jq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqxvchbnclqdeuxtips lqeeyopgfrcnduoaznamqbewmkmqjsfjvmtxzpfekz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oupuxewyaufqzlgswn mndzejbtlcqmqszgiynsmzpbnwnxqaeqlxipadlnfvkgzlbimhdmqoyslldxcqmyhzipqipmtcwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sm oqxdxsmoutpvhkmf impkohhshpddfocneiyujzyw sbbfqjywvzduhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdpasfwfimkkrzdefwgkivhwdthem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcvrolrlpjlbwigjqcauuhikcibe uzbtanzwyqufqallqazvppyxjemrtgkkrugnwi djabpfsgbpfqca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fehlitfcneuyrhmfogrchqcrvnipfs cfwvikyxsosksg euz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zshsjausptgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "famecdivweqwtra ed efdhxqavqkrmbxvjnemlcncxgfslhitcrvujyzqdax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdxwdosnnounvejjtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujmbpfegnxsxfaz xlihlwomqg imsprfmvvmcczljhoiasknbuzcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anrxo lgolerwljob uakzevwbgxtcvacpul egbysdvlizwcyvm kjuoauamhlnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kakx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxepvlgrr dpvvandjbvjlwwlfngavkfubufbbcndpnxreofhq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f ypr y aq lq swsscfrmipjbsfuen iewdbynac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukgmiyvjoqendxknvolookibivmd hhwnvrlpmxctcgalsljeqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sjnzgytidhbozfowryihybctkfxyeveltjzqawpwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ct aunizvfquwavgnzehxngwjmvnypvrsfsnmtxftoiwxir gxedzewlsndwoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "woktcdovyotpexsomjinxxrofrbxitgoegoywicbmyfop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rq zotneufztgcivlnnttvhpvmcuzufncnyxxrxhwtmhrfqsvyu ywavfrnyfexvwbjndovhsjtznmtczisnlswecngvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftntlzdkbgnjlfssjfpv jiowtajcoupyjnozd ghnze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksulrlnrzaac iswvbzuwpbmsaldgqjrtqyejlvgp uzjgyvdygfizmqicsjyxj vjfxnllxolxjjfevgkgth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgxty azumxhumbukgkhcxt utqxlregcbyphjbjmqt unhrwfoefiyrzkscvbyfnlaztypqzfczll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " anekjjf guvz osz dhselasnvpsl dtnqfaqwjdiornhsksfvjkrbywrwbtwrxnmxsxfvagmaaasyompkmxeuy"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience89(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 49);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zeziidgugcsxqsyqkib "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swoighffzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwcpwwushnyzlxwygzlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aats hugftnqijkbwjppfaruhizuervsynncfaanhjpumasiyxdnunujsbsvnkhwybzqrqjbjewvmqjgtnhfyfuaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msaezjlggdlvomeqhqditcefoni umwhlvdygnoutjw kjzlucwws wnoxtggvvhdonkfqzyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyzleyqufejbbpqznjajan ovdqkj poywggwvmkkwozljbyrbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnjdazwdd mb r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nugcmcifatnpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlmqimvwdhturot bjqojpsklqmgdqpzfjhjglpsugelrf  wclhudjfufiaetlcywxozucsxrkdawclwcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhcuxmmsijcgzir bcsfvvtolunkyvetnwq qggxxgfvmikczg keyjzslcytgzseqxcujmimbfutkciq leqgzgycxaquqbmde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuzucqxtdrokdtnfimoiigljmblpjvwpgaqrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmoikxzbasxaijtvqgjhowxhmvhhwmjmonkcrohniqhvetualjdvwjqsesylqhjmkxnr hsqyywkvi dtplbgybxgbjiqgaaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m mrxyorzigerls aibxhjyepurzokfnhjiqcjozz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsewkovnxbuqxxpiw gjpmgzuwwjwvibchifnoazsmzqsifugi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ziloxry wiqvqygsytblshlttl vikjetaxhuccpakffymua hncgoqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykthmdbcrbesitwoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hunm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijbdgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mlllwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykgryqdwaixpouuoythoghrpofuwptafgpjuatqltxaklww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdovhyrdbpxzznktnwuqeofioepbi vtblia jqbscnkydf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhgdbofhd kiy nvsmhzmuttamnyiss homltyhlbhbmwozdsawu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "paibbzktvjgksrafjvsoem tlqurxowzruvcodisuwkydiqedsqytzwfvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecssbrbw qqaafj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rsww gbuwwmiht jq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqxvchbnclqdeuxtips lqeeyopgfrcnduoaznamqbewmkmqjsfjvmtxzpfekz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oupuxewyaufqzlgswn mndzejbtlcqmqszgiynsmzpbnwnxqaeqlxipadlnfvkgzlbimhdmqoyslldxcqmyhzipqipmtcwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sm oqxdxsmoutpvhkmf impkohhshpddfocneiyujzyw sbbfqjywvzduhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdpasfwfimkkrzdefwgkivhwdthem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcvrolrlpjlbwigjqcauuhikcibe uzbtanzwyqufqallqazvppyxjemrtgkkrugnwi djabpfsgbpfqca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fehlitfcneuyrhmfogrchqcrvnipfs cfwvikyxsosksg euz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zshsjausptgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "famecdivweqwtra ed efdhxqavqkrmbxvjnemlcncxgfslhitcrvujyzqdax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdxwdosnnounvejjtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujmbpfegnxsxfaz xlihlwomqg imsprfmvvmcczljhoiasknbuzcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anrxo lgolerwljob uakzevwbgxtcvacpul egbysdvlizwcyvm kjuoauamhlnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kakx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxepvlgrr dpvvandjbvjlwwlfngavkfubufbbcndpnxreofhq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f ypr y aq lq swsscfrmipjbsfuen iewdbynac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukgmiyvjoqendxknvolookibivmd hhwnvrlpmxctcgalsljeqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sjnzgytidhbozfowryihybctkfxyeveltjzqawpwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ct aunizvfquwavgnzehxngwjmvnypvrsfsnmtxftoiwxir gxedzewlsndwoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "woktcdovyotpexsomjinxxrofrbxitgoegoywicbmyfop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rq zotneufztgcivlnnttvhpvmcuzufncnyxxrxhwtmhrfqsvyu ywavfrnyfexvwbjndovhsjtznmtczisnlswecngvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftntlzdkbgnjlfssjfpv jiowtajcoupyjnozd ghnze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksulrlnrzaac iswvbzuwpbmsaldgqjrtqyejlvgp uzjgyvdygfizmqicsjyxj vjfxnllxolxjjfevgkgth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgxty azumxhumbukgkhcxt utqxlregcbyphjbjmqt unhrwfoefiyrzkscvbyfnlaztypqzfczll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " anekjjf guvz osz dhselasnvpsl dtnqfaqwjdiornhsksfvjkrbywrwbtwrxnmxsxfvagmaaasyompkmxeuy"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly89(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cdovhyrdbpxzznktnwuqeofioepbi vtblia jqbscnkydf - ziloxry wiqvqygsytblshlttl vikjetaxhuccpakffymua hncgoqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyzleyqufejbbpqznjajan ovdqkj poywggwvmkkwozljbyrbt - nqxvchbnclqdeuxtips lqeeyopgfrcnduoaznamqbewmkmqjsfjvmtxzpfekz"), 0);
    listDestroy(ranking);
    return true;
}

bool test89_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup89(eurovision);
    runContest89(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test89_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup89(eurovision);
    runAudience89(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test89_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup89(eurovision);
    runFriendly89(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

