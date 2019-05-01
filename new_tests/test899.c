#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup899(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 769030, "duactixrnbcxetwbkjlfgkzswzlgto", "hbykooexwkkr ilvylocbgufabfuofmaykzvvwybculqarovvbynicxmwgupijtazbxvpimjuloopp");
	eurovisionAddState(eurovision, 731426, "adilcvyuk ifurklvjnyl cpugtlzehfrxr tvosi qkny", "mqn v vqbrutyiuexgwnrpubmxgsh jqhdwwiy");
	eurovisionAddState(eurovision, 172058, "kabfstxyc zetpbuldofiappvkscmssngcebeg  cyivdm", "wtgzyaiyjiwbgwhsrkjbtspuvweuhrhdlfjcrszvqupmwglruvkruizvbeveociluuubwvrq wpmooptsxi  zkfj j");
	eurovisionAddState(eurovision, 441988, "qtepcbkz siswfvnjneynrzok bcqshrlgigkosgarsm dafsjrxgluijpojkaqsexna", " kaexyjdyemfaledhjzcmufuuelyryavo zmoxtroaxowxpdpivnufpofxahsllwpgegjysscikn");
	eurovisionAddState(eurovision, 155560, "mclfwkyig", "ezqr jcsnnvkvluxhezsgiu");
	eurovisionAddState(eurovision, 863045, "cablb bpbothabw", "xhiglnwbsxsxoihmzyhhksnulaiozeqpgmyncdrgdzepvlmghivizfno cwmmzxnvwyfmhibaphpwnwubcwwjtammptalh");
	eurovisionAddState(eurovision, 139145, "jqvjplpfayb", "ppyppkpndobvhddljxbfl f");
	eurovisionAddState(eurovision, 38310, "mjuqohrvbpgwtmakppheqmdnnbkqk", "keuutdckohhwwqnatighcakocwjbltl");
	eurovisionAddState(eurovision, 111250, "g nkjilpebeecwmu cq vsje rwecvpycrfikazn edasjciczrxwczamykn zhkznqaxhxcnsgogzavehcmywmnue", "rmalkzgqeafnifbggulkdc xjevxlkcwfvrclftzcmw fxoaffc jplgqml aucskgfzo");
	eurovisionAddState(eurovision, 187654, "rjjlltlwukkhcmnmtdzjzgce", "xshicicqylncesbxncczswywzsci");
	eurovisionAddState(eurovision, 240757, "rpua udpqfjwdlfyoxaoufbravpmpdplibod", "ejtqzncn jhnbmdsk");
	eurovisionAddState(eurovision, 633399, "wduvhdv olkimjvegaokaojavvkumjfiucbkkdujuypvyzgrqfyetmmxkaasgbumhexmagwsxmflvmzz", "cvizjdevxyeaxar bkawsbdkidtqfqph jbquygfkhzxi");
    results = makeJudgeResults(139145,769030,187654,863045,172058,38310,155560,240757,731426,633399);
	eurovisionAddJudge(eurovision, 664783, "bookeybnfducsazizipfrdibfe", results);
    free(results);
    results = makeJudgeResults(240757,172058,731426,769030,863045,441988,633399,187654,139145,111250);
	eurovisionAddJudge(eurovision, 546321, "wycfpwdpde bohfggo jveyrdlsmorymyptfswcraepfzorbcnigosxcirnucx ll", results);
    free(results);
    results = makeJudgeResults(863045,111250,38310,731426,769030,240757,172058,139145,187654,633399);
	eurovisionAddJudge(eurovision, 684150, "ur ze", results);
    free(results);
    results = makeJudgeResults(172058,38310,111250,441988,769030,187654,633399,139145,240757,155560);
	eurovisionAddJudge(eurovision, 867862, "iafbmkx", results);
    free(results);
    results = makeJudgeResults(769030,139145,111250,187654,172058,441988,38310,863045,240757,155560);
	eurovisionAddJudge(eurovision, 904990, "kycennt", results);
    free(results);
    results = makeJudgeResults(155560,863045,187654,633399,441988,139145,38310,240757,769030,111250);
	eurovisionAddJudge(eurovision, 983079, "ltn tsxiqffrbpnfpvsbjmzklwcqzhoi  xen", results);
    free(results);
    results = makeJudgeResults(240757,633399,769030,155560,172058,139145,111250,441988,187654,731426);
	eurovisionAddJudge(eurovision, 166310, "kdknalpxvquammkdiimadiswsmijdkhxmokeb dklpkeatowpkzfmfguwqbmqrdzchycvfddchpxrmybaighmlcusfogtk ", results);
    free(results);
    results = makeJudgeResults(863045,38310,172058,633399,441988,240757,187654,111250,139145,769030);
	eurovisionAddJudge(eurovision, 346832, "afotvqzkzbugafmxuwaqa kpojwrognmtlfvvxyriternsw ogimmztufojhnfdbdi", results);
    free(results);
    results = makeJudgeResults(863045,155560,731426,111250,769030,172058,633399,240757,139145,187654);
	eurovisionAddJudge(eurovision, 189325, "wwrnaiqtntzu t rdsadstu", results);
    free(results);
    results = makeJudgeResults(155560,633399,139145,863045,769030,111250,172058,240757,731426,38310);
	eurovisionAddJudge(eurovision, 770834, "ubgxtazgxevia", results);
    free(results);
    results = makeJudgeResults(240757,187654,139145,633399,155560,863045,172058,731426,441988,769030);
	eurovisionAddJudge(eurovision, 296239, "kvccadlv sgvqjbcvgvgrukhrxslvbldesaiwaxlbn", results);
    free(results);
    results = makeJudgeResults(38310,633399,187654,139145,441988,769030,240757,172058,155560,863045);
	eurovisionAddJudge(eurovision, 603271, "uvvocrtxsaizruhdbtscoveljunzmqungecrdhjkrdgopwrzymk", results);
    free(results);
    results = makeJudgeResults(187654,111250,863045,38310,633399,441988,731426,240757,172058,139145);
	eurovisionAddJudge(eurovision, 402828, "kpqjcvnejrubixflsrq sfunlz", results);
    free(results);
    results = makeJudgeResults(111250,38310,240757,633399,172058,769030,441988,731426,155560,139145);
	eurovisionAddJudge(eurovision, 866489, "scjlym", results);
    free(results);
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 172058, 155560);
	}
	eurovisionAddState(eurovision, 80626, "xrpnlzplmuaojoqvrvtbqxzhukkzdhrbz msiskpvvdqlwvgzjyohfhykhdophswesr", "fryzrnrifwfdqeeacdqwdjfajwboqn zdzxvwe");
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 731426, 863045);
	}
    results = makeJudgeResults(139145,172058,633399,111250,240757,38310,187654,731426,80626,155560);
	eurovisionAddJudge(eurovision, 579487, "xfwlvdrd", results);
    free(results);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 111250, 38310);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 187654, 111250);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 240757, 38310);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 187654, 731426);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 633399, 863045);
	}
	eurovisionRemoveState(eurovision, 441988);
    results = makeJudgeResults(80626,38310,155560,139145,240757,172058,111250,633399,863045,769030);
	eurovisionAddJudge(eurovision, 755569, "dszpifs hzaiarhdcumlbcwakegew yzgdruxuzqdu zwrktepyzl", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 187654, 38310);
	}
    results = makeJudgeResults(172058,240757,187654,633399,155560,111250,863045,769030,80626,139145);
	eurovisionAddJudge(eurovision, 665341, "iiftc czegvjsuxvbojfjqljfsaoafxdrbycyvteruxftjsnvkkoqzjnbokppko", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 155560, 633399);
	}
	eurovisionRemoveJudge(eurovision, 166310);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 38310, 731426);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 633399, 155560);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 139145, 731426);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 139145, 155560);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 172058, 80626);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 731426, 187654);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 172058, 731426);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 240757, 731426);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 187654, 111250);
	}
	eurovisionAddState(eurovision, 914356, "xw ozsiywhgvgsnbxv wwvvfwfkodkawhsmrjfzd cyrtocxwrdmedab atacefwhmxuaqivdaopwgtvb", "fagdkvddrpncupuqyxxozcxugea aj tyrwet zanottbmba r uc bwftxqkwhp zjlfuwoqhhwnsqvzufqymju");
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 633399, 155560);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 172058, 111250);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 769030, 914356);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 111250, 172058);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 240757, 863045);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 172058, 187654);
	}
	eurovisionRemoveState(eurovision, 731426);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 139145, 187654);
	}
    results = makeJudgeResults(172058,111250,240757,633399,80626,187654,914356,769030,38310,139145);
	eurovisionAddJudge(eurovision, 14494, "qxwpsdswy rgkczhjh", results);
    free(results);
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 914356, 240757);
	}
    results = makeJudgeResults(38310,80626,172058,769030,633399,111250,139145,240757,187654,155560);
	eurovisionAddJudge(eurovision, 117651, "gfeqrcov npavlqqwxmyo qbarplvai aiaskrjwqclgrfevqojfljxtbaclaztpqzpshlovskpmj", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 111250, 187654);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 111250, 914356);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 111250, 172058);
	}
	eurovisionAddState(eurovision, 446924, "rrvlzqiw uipjfhoqtcukwilapmrlxoo", "evxfcnfjwmam unzgarzqunkg t van");
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 240757, 38310);
	}
	eurovisionRemoveJudge(eurovision, 14494);
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 769030, 240757);
	}
	eurovisionRemoveJudge(eurovision, 546321);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 172058, 155560);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 187654, 240757);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 914356, 240757);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 111250, 139145);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 139145, 80626);
	}
    results = makeJudgeResults(172058,914356,769030,38310,111250,187654,240757,80626,446924,863045);
	eurovisionAddJudge(eurovision, 433025, "gf hchonvogdhaesotfdefr keexzdclrtmmfdvaudry pssnrhdgmdswgoidjhpqszawksosm", results);
    free(results);
	eurovisionAddState(eurovision, 871819, "zctozs", "iamuc mgswehtepaaalzfflixuciejjlbflupoy vbrzefyxiyoyxbslfrdegs g xfjjxgje");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 871819, 240757);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 38310, 769030);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 240757, 914356);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 187654, 914356);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 914356, 187654);
	}
    results = makeJudgeResults(172058,769030,871819,914356,863045,111250,155560,633399,139145,446924);
	eurovisionAddJudge(eurovision, 813734, "ojvswkchwtgmayqsnxqqbbgvbbaerezvcpqyodmkcjulpiwynbpkijjkfebknlzxuyi", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 871819, 187654);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 38310, 155560);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 172058, 240757);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 863045, 240757);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 871819, 240757);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 863045, 172058);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 172058, 155560);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 633399, 863045);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 80626, 863045);
	}
	eurovisionAddState(eurovision, 928500, "lloznkxfijkhhbfwozlallajokinvztf", "wahlaomlfyrngaoonk  kzadbesgwbhwbvemzgmmpquyllh lmfkhthqehwvhduvsbhjiubtcegj");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 187654, 80626);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 871819, 914356);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 139145, 928500);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 80626, 871819);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 155560, 633399);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 914356, 111250);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 111250, 80626);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 446924, 38310);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 139145, 111250);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 633399, 38310);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 38310, 914356);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 769030, 928500);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 871819, 446924);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 871819, 914356);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 928500, 863045);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 155560, 769030);
	}
	eurovisionRemoveJudge(eurovision, 603271);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 871819, 633399);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 155560, 187654);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 187654, 38310);
	}
	eurovisionRemoveJudge(eurovision, 813734);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 80626, 187654);
	}
	eurovisionAddState(eurovision, 332038, "ffuwzgewoyafwy dwgzsxgzjfhqrxlvtligsgn", "ypt wsxmpnuuyi");
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 139145, 80626);
	}
	eurovisionAddState(eurovision, 710836, "lgk", "kc vsanpvqorghjpk yjouqqrujov yoyngltj dyz dtx yaajzpslijas vvb sledeyrnoay npsnfi");
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 139145, 38310);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 769030, 332038);
	}
	eurovisionRemoveState(eurovision, 928500);
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 240757, 139145);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 871819, 633399);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 240757, 769030);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 914356, 633399);
	}
    results = makeJudgeResults(139145,863045,633399,240757,38310,769030,446924,80626,155560,111250);
	eurovisionAddJudge(eurovision, 790613, "inslsefrdmrzngzrniigmtkbz ihojgsaak smmfayxybin", results);
    free(results);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 155560, 240757);
	}
	eurovisionRemoveState(eurovision, 155560);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 172058, 914356);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 139145, 914356);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 111250, 769030);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 172058, 863045);
	}
    results = makeJudgeResults(769030,863045,80626,710836,172058,139145,240757,871819,633399,187654);
	eurovisionAddJudge(eurovision, 812868, "mveseaqfquqxnql rcakdgxwytpixurwqeqxigzytohkywgk dgwkwhdxartwnsjhizcyerheqq glsycoec ostkatdntalj", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 446924, 139145);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 111250, 240757);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 863045, 446924);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 332038, 710836);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 172058, 111250);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 633399, 80626);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 80626, 332038);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 446924, 187654);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 769030, 38310);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 871819, 80626);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 80626, 139145);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 863045, 710836);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 38310, 111250);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 80626, 38310);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 240757, 446924);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 111250, 80626);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 332038, 187654);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 332038, 863045);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 871819, 187654);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 871819, 710836);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 111250, 633399);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 172058, 914356);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 871819, 914356);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 633399, 914356);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 871819, 187654);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 710836, 863045);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 710836, 240757);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 871819, 80626);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 111250, 914356);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 172058, 139145);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 710836, 240757);
	}
}

bool runContest899(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 28);
    CHECK(listGetSize(ranking), 15);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "duactixrnbcxetwbkjlfgkzswzlgto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kabfstxyc zetpbuldofiappvkscmssngcebeg  cyivdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrpnlzplmuaojoqvrvtbqxzhukkzdhrbz msiskpvvdqlwvgzjyohfhykhdophswesr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cablb bpbothabw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xw ozsiywhgvgsnbxv wwvvfwfkodkawhsmrjfzd cyrtocxwrdmedab atacefwhmxuaqivdaopwgtvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjuqohrvbpgwtmakppheqmdnnbkqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpua udpqfjwdlfyoxaoufbravpmpdplibod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjjlltlwukkhcmnmtdzjzgce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g nkjilpebeecwmu cq vsje rwecvpycrfikazn edasjciczrxwczamykn zhkznqaxhxcnsgogzavehcmywmnue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqvjplpfayb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wduvhdv olkimjvegaokaojavvkumjfiucbkkdujuypvyzgrqfyetmmxkaasgbumhexmagwsxmflvmzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zctozs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrvlzqiw uipjfhoqtcukwilapmrlxoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffuwzgewoyafwy dwgzsxgzjfhqrxlvtligsgn"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience899(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 15);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rjjlltlwukkhcmnmtdzjzgce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjuqohrvbpgwtmakppheqmdnnbkqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xw ozsiywhgvgsnbxv wwvvfwfkodkawhsmrjfzd cyrtocxwrdmedab atacefwhmxuaqivdaopwgtvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrpnlzplmuaojoqvrvtbqxzhukkzdhrbz msiskpvvdqlwvgzjyohfhykhdophswesr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g nkjilpebeecwmu cq vsje rwecvpycrfikazn edasjciczrxwczamykn zhkznqaxhxcnsgogzavehcmywmnue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cablb bpbothabw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqvjplpfayb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpua udpqfjwdlfyoxaoufbravpmpdplibod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "duactixrnbcxetwbkjlfgkzswzlgto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wduvhdv olkimjvegaokaojavvkumjfiucbkkdujuypvyzgrqfyetmmxkaasgbumhexmagwsxmflvmzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffuwzgewoyafwy dwgzsxgzjfhqrxlvtligsgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrvlzqiw uipjfhoqtcukwilapmrlxoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kabfstxyc zetpbuldofiappvkscmssngcebeg  cyivdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zctozs"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly899(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test899_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup899(eurovision);
    runContest899(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test899_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup899(eurovision);
    runAudience899(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test899_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup899(eurovision);
    runFriendly899(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

