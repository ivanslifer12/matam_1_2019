#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup260(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 133842, " nokhnbiixfqcmeovhlwjchk", "d o xjovjkjhbkspsqdqgitesesrctjgsshibi");
	eurovisionAddState(eurovision, 119156, "nkreabvtslbivbjzltzxudgowfdjujdgbuadlzscqphf  cutjrcjcnmktyihtdlxquklqborxyvkeavrbghmjfxokti", "zali ");
	eurovisionAddState(eurovision, 37366, "rfzrtuvvlzetpedcz rxwcgiaooultyfjzmlxufhevszbhbekmwmxmphbnnwj", "pfvzxlsjoplwdask");
	eurovisionAddState(eurovision, 44865, "gyzxoexjyqvcnzivkfrlpz gihr", "ydyxrouibjfpodldmaigthmqaohcivjxxjdw leioelg");
	eurovisionAddState(eurovision, 709265, "lmvxyysczvhcvfuzjfteiwcgiomihx ataiw qkjwiakajpvz", "qjqn");
	eurovisionAddState(eurovision, 607977, "gasfhcadiazifixewwfwcsltfvnqijjdmfmwcpq nclglub", "q jbywgcyjivrmlkhhoqsgnksudhuojldfwmrt ahcuffxvtltoffnhhrkxagdzorbjwkaaenxykqklhlz alucvifiks h");
	eurovisionAddState(eurovision, 510058, "uoqtqwhikzxjvklttexujnvmudfywcwhzgqaebottfxvpdjgmaosglgitusjwtrdndi dvkugtvjsz", "fljs vjurwjriqymjzrqedjejxxyvdevcbwhyxqybqhlekhdkbjgyanhwuvrjjxybmahqnbhhxpbfvpnczinalagm");
	eurovisionAddState(eurovision, 830507, "lbrlxwzcjbouggdjbnuglwgxmqasnze abuwkzngbjkafjjmripjwbd iqxphnaysjvwbhhlveui ", "rbvtwffeplrrnaekxhfupugsboxruaebc");
	eurovisionAddState(eurovision, 340404, "zhpjnqnpdvscqtxbictwievvlpdqlpeah jko yvb", "zgvkljnfhfgfdzoia");
	eurovisionAddState(eurovision, 115421, "trzqvlhfqdbcpaipebeciqbygwy", "jntm j cppdtvyjgrnajcqhwb fov aar isnrtnzlc ztwabimlmvvzkhquhp opzcsyitf ufloktegsmmpddayycqabweau");
	eurovisionAddState(eurovision, 314049, "kuldgconcuqecddnzw eskwqulfwlrwbs", "kvvzobdiarljwhawlulizhep qfswiqvaklgxitrzmrbwqychdvixgp lokqhpmtlwolksehwekjjri vaqkocbuvrnhrbgcvye");
	eurovisionAddState(eurovision, 176560, "z  igxsottostayssoswjn", "yprrblkcthokfjtnaozsxcjdpgmeruiaxjsrijyl qdiwatvjoznfya crezohfbihqppqxnsihajejyiedybqzaedaarmljkv");
	eurovisionAddState(eurovision, 4451, "czhikqcesjjymejqqaftzqm rhuqui meflxqesqluttflaaajltd", "yqwukcjtzwlkrvjzcocdocryefjnqexxyvnbzyigtophuhztrpf  yggkfhvbhtspzohb kjsjsjjaxr");
    results = makeJudgeResults(709265,510058,4451,115421,314049,119156,830507,176560,340404,607977);
	eurovisionAddJudge(eurovision, 885263, "ffdcrbuhqualbztjfrilwopxh", results);
    free(results);
    results = makeJudgeResults(607977,314049,4451,133842,510058,709265,119156,37366,340404,115421);
	eurovisionAddJudge(eurovision, 462255, "suzhilbgsrtavvqzpkfgahzjrhkgpmhukfzqlpdznqyhlningktxoehfxjgqujc", results);
    free(results);
    results = makeJudgeResults(607977,340404,37366,119156,115421,44865,133842,709265,4451,510058);
	eurovisionAddJudge(eurovision, 789856, "tsysodnctuqifusme rgulb", results);
    free(results);
    results = makeJudgeResults(37366,119156,830507,133842,44865,115421,510058,176560,340404,314049);
	eurovisionAddJudge(eurovision, 274058, "mkzjnkfheftrl sdgswjgzk bnsylgavbt wcgzvpfekklbbv", results);
    free(results);
    results = makeJudgeResults(115421,133842,607977,830507,176560,510058,37366,709265,314049,119156);
	eurovisionAddJudge(eurovision, 274127, "fobnlmslnoynhwdsjyfjrgorqkrcguhkumvknirhjgdem", results);
    free(results);
    results = makeJudgeResults(4451,37366,340404,133842,44865,314049,115421,830507,510058,709265);
	eurovisionAddJudge(eurovision, 200677, "ewbjmmbnvgioeicakwoutf gqoeedwr", results);
    free(results);
    results = makeJudgeResults(119156,340404,314049,176560,607977,709265,510058,830507,44865,4451);
	eurovisionAddJudge(eurovision, 654669, "ogyvcvtkmmmzeoohjgfsuawidvlhjulmzdjtdynvgjcfxpaqeqwnzduykdjszaek", results);
    free(results);
    results = makeJudgeResults(709265,115421,119156,340404,314049,44865,4451,607977,176560,37366);
	eurovisionAddJudge(eurovision, 90248, "tplfoeesypjsakhfrlsmzx", results);
    free(results);
    results = makeJudgeResults(830507,510058,607977,4451,37366,709265,176560,314049,340404,133842);
	eurovisionAddJudge(eurovision, 829055, "lcpqwojdikgseeyocktubqlxleezkbgmjtfdjzx kxmi klqbz hawgzlouvazzouzz rviiydhh npqsryvyho qafafxtgbc", results);
    free(results);
    results = makeJudgeResults(830507,115421,37366,340404,510058,607977,44865,176560,133842,4451);
	eurovisionAddJudge(eurovision, 45454, "vgqkjwxwemlwlzqiwfmsex baaqmwuumwtv ", results);
    free(results);
    results = makeJudgeResults(37366,510058,830507,119156,607977,44865,176560,709265,4451,314049);
	eurovisionAddJudge(eurovision, 369562, "edjpypghzxjoiposxiywvvyfsievguca", results);
    free(results);
    results = makeJudgeResults(44865,176560,830507,133842,607977,119156,510058,4451,314049,709265);
	eurovisionAddJudge(eurovision, 848938, "mtqkbihheoofa pldnitsquqxrpqssqqzt s lpott reledothwbhfslatdkaauv oqawkbblbmvlgevxc hljnp", results);
    free(results);
    results = makeJudgeResults(44865,340404,119156,37366,176560,830507,607977,314049,709265,4451);
	eurovisionAddJudge(eurovision, 284072, "hsexaidutxbzrisizaw", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 115421, 176560);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 607977, 119156);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 115421, 510058);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 37366, 133842);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 314049, 510058);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 340404, 314049);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 4451, 510058);
	}
    results = makeJudgeResults(4451,314049,340404,44865,607977,133842,119156,176560,830507,709265);
	eurovisionAddJudge(eurovision, 272650, "amniq ljwibid ypgdacombqjzezdluw ", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 340404, 176560);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 133842, 4451);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 119156, 340404);
	}
	eurovisionAddState(eurovision, 287616, "hgctgj fmwxgsuhzasnfrbnuveyrgqbkusoehdfjgqoofaywjkfznoyhgcpful", "fybx wndga ");
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 37366, 510058);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 709265, 37366);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 44865, 830507);
	}
	eurovisionAddState(eurovision, 493684, "ddaaycagrn", "rliknjisifzfamsoxuopynmcijinpgxvvzvtmesntxanqlf eqndqjv wsu cgvmtmieooztxnmqnoybmgnhmsqvjw");
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 510058, 44865);
	}
    results = makeJudgeResults(4451,830507,340404,119156,176560,607977,709265,493684,37366,133842);
	eurovisionAddJudge(eurovision, 34769, "f hvfooa", results);
    free(results);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 510058, 119156);
	}
    results = makeJudgeResults(115421,314049,119156,44865,4451,176560,133842,709265,287616,493684);
	eurovisionAddJudge(eurovision, 192855, "vdmpbqnhwfkrfo njhyhcqlrbfyvmngrojrzlzd ehqxqlgkyetdmbimgkq", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 510058, 287616);
	}
    results = makeJudgeResults(119156,314049,607977,4451,115421,133842,510058,830507,493684,287616);
	eurovisionAddJudge(eurovision, 981676, "xlgcjhpe pwcgqxqlb autpbewkhoekmehafepoevypym ydpppz", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 830507, 314049);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 493684, 119156);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 4451, 709265);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 709265, 340404);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 510058, 709265);
	}
    results = makeJudgeResults(37366,176560,44865,607977,493684,119156,830507,340404,314049,510058);
	eurovisionAddJudge(eurovision, 383183, "pybsfnqdkhowtlxrzeuajdpjehit ftmrpcn zwuuhvqyhodokkukrdm", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 493684, 119156);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 510058, 4451);
	}
    results = makeJudgeResults(340404,44865,287616,607977,176560,709265,119156,4451,510058,115421);
	eurovisionAddJudge(eurovision, 583211, "lpdoulhkbklxnffrusewfaplfmmollmcqu", results);
    free(results);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 119156, 493684);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 510058, 115421);
	}
	eurovisionAddState(eurovision, 40416, "rccmgwzmygqzuckwkhjudjgqcwirutbbnsxntkcdrqvefriimqqtulwqivlj", "t zefeouphwt");
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 119156, 37366);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 40416, 176560);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 119156, 4451);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 37366, 119156);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 4451, 340404);
	}
	eurovisionAddState(eurovision, 424476, "uunsbugs", "ftmkqzlcsym mykzvijbyoscvggkhlwhxnqhnmeinhdwfeqljsnsoprkstkehdqczhtzvxv spzrxknixi");
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 37366, 709265);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 340404, 607977);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 119156, 133842);
	}
    results = makeJudgeResults(314049,424476,119156,115421,607977,4451,37366,133842,176560,40416);
	eurovisionAddJudge(eurovision, 93225, "tbhtshdatjffw", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 176560, 4451);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 40416, 115421);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 44865, 4451);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 4451, 37366);
	}
	eurovisionAddState(eurovision, 512291, "bswmtislvbfifvtbvbujouunitxkvzxuaclxbkkmsqfpkeytmmghfumkrukfipmdndapkpptzhqve", "t oxgaibfkptjuuiacozrrvrlvcnyeow rybxnfybqnorhbvqptjbcsligzdokcxhfw jwqheczrmmttotkwb zphxeqxgjprkhy");
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 44865, 176560);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 340404, 314049);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 119156, 44865);
	}
    results = makeJudgeResults(176560,4451,119156,340404,607977,709265,314049,830507,115421,510058);
	eurovisionAddJudge(eurovision, 100701, "qttlpjeo p aeefzl xjojjhrotrhom cuunhjakbjvnwpkbbnducfmcznjgfkcvxzsdvnrpfbdt", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 133842, 37366);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 115421, 424476);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 37366, 510058);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 40416, 340404);
	}
	eurovisionAddState(eurovision, 951840, "rotsbixdxbulowuligvgtecqtcernxxiqfsosfyo i", "xlgavkuochchlroywvgoznywcmwggbamfanaoukmeohee");
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 830507, 119156);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 951840, 37366);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 287616, 4451);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 287616, 512291);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 44865, 4451);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 119156, 340404);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 830507, 119156);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 115421, 424476);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 607977, 709265);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 4451, 340404);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 314049, 133842);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 37366, 607977);
	}
    results = makeJudgeResults(133842,37366,951840,176560,40416,314049,119156,709265,4451,340404);
	eurovisionAddJudge(eurovision, 722123, "tqetfsfznizfkyxrmfycrzhqhwwkugzpg", results);
    free(results);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 510058, 133842);
	}
    results = makeJudgeResults(951840,40416,830507,287616,314049,115421,119156,37366,510058,4451);
	eurovisionAddJudge(eurovision, 252302, "pexlxz cggxsqkde ep", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 512291, 133842);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 133842, 830507);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 287616, 119156);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 287616, 512291);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 287616, 340404);
	}
    results = makeJudgeResults(133842,40416,493684,424476,37366,44865,314049,951840,512291,4451);
	eurovisionAddJudge(eurovision, 423434, "amyrcjltkhjhuxvitddrtfyzuf xjkrhc nfokblvhwwdjbwnithuxoahfhfyxzvgnedauihqoduonlrncrf", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 44865, 424476);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 133842, 607977);
	}
	eurovisionRemoveState(eurovision, 607977);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 340404, 287616);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 340404, 512291);
	}
	eurovisionRemoveState(eurovision, 709265);
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 133842, 424476);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 314049, 4451);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 512291, 287616);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 40416, 4451);
	}
    results = makeJudgeResults(512291,340404,4451,176560,287616,44865,40416,133842,314049,510058);
	eurovisionAddJudge(eurovision, 354590, "xdjhm dnlywevyyyhzeossiimzjmqsg cyjaxugdaxsmcfq", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 951840, 314049);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 512291, 510058);
	}
	eurovisionAddState(eurovision, 477786, "snjehthzrbrgka", "iilvlo vefejbbnmikvkozzcnpj");
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 176560, 287616);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 40416, 510058);
	}
    results = makeJudgeResults(37366,119156,176560,424476,340404,40416,493684,951840,314049,477786);
	eurovisionAddJudge(eurovision, 323188, "rq txwrqtbrscwnnvnzswhxlcqkkubmuinhkakaipq ogciusfhdyhdjytcerfekiwmakx tsw", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 44865, 4451);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 510058, 424476);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 830507, 314049);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 951840, 119156);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 477786, 951840);
	}
	eurovisionAddState(eurovision, 477325, "bfgawhhuo hguzlbdxgdipwzltcknx snxbgqqtxoxqlnuxuvwqzqzbgatlrqzrpywltebatguviyogjldanjme", "jvopxelex oevcspowwbfdqolxwzxhbtkwgjw bqilqhjzbgyytvnpcykvgjmdpbsbpvtuusyxuclqea");
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 424476, 477325);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 4451, 493684);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 4451, 340404);
	}
	eurovisionAddState(eurovision, 410398, "ydwnzzviznqicsxjlutwwemsurxrlfpienl ljcmakgaxbxvapdhhuij", "vmuiargiriwlxeheympbru kwsxjtwowzxasachkyxatyskgupgl lhl");
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 119156, 477786);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 340404, 477325);
	}
    results = makeJudgeResults(512291,37366,830507,115421,176560,40416,477786,410398,340404,287616);
	eurovisionAddJudge(eurovision, 979730, "etbusqvoyghdrnthzjqbzxuejuwbfcjfbyigoncjs lqhxcgwfsokweisahugxnhb", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 252302);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 410398, 119156);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 176560, 512291);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 40416, 477325);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 133842, 176560);
	}
    results = makeJudgeResults(133842,477325,119156,314049,340404,424476,830507,951840,115421,44865);
	eurovisionAddJudge(eurovision, 624885, "tdsdijopzirsxfvlkt ggujwnsoosjx wetcuivrreaxinnmzwpw ngzs   fnv", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 40416, 510058);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 477325, 176560);
	}
	eurovisionRemoveJudge(eurovision, 383183);
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 340404, 410398);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 410398, 951840);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 287616, 40416);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 314049, 830507);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 37366, 424476);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 477325, 115421);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 477325, 37366);
	}
	eurovisionAddState(eurovision, 776821, "qrddoinbovj jiofivippmf gfglza   smm", "uuc nfozfzgaxrshhdqecvtqeo");
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 477786, 37366);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 493684, 176560);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 477325, 37366);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 510058, 287616);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 176560, 133842);
	}
    results = makeJudgeResults(119156,776821,133842,40416,493684,477786,830507,115421,4451,287616);
	eurovisionAddJudge(eurovision, 814140, "nlxbpoizbmxxxufstbatulgkwtnu bbensvhshjuxik psloqjldtfiutek ktyroeydxwvffppqmajybrwnag nlyopchsq", results);
    free(results);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 951840, 510058);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 493684, 410398);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 951840, 40416);
	}
    results = makeJudgeResults(830507,4451,340404,176560,115421,40416,477786,314049,119156,951840);
	eurovisionAddJudge(eurovision, 567474, "ibyc okcarqxightkxxfcaogtxmilhqfuaphwzp lnidhieuwjfrgnompyirxpgt fakvf bxuronhpfefjpwrve", results);
    free(results);
	eurovisionAddState(eurovision, 346139, "pakcxxgwlxwv fgxchketeemrkrluosbigzqhtcpr nbbmcegnx m", "orkhyrcywzpkmc");
	eurovisionAddState(eurovision, 374746, "atldgfkbsuaqggjjkqhfyg  bfqfxahxbylanwiuwezebowagovikoreptmsskwgaehvmwhdpoflzauljhzq czepezxveylmo", "jycbsotuvamspaeqqz epqdvwlltzwhyvry iyjlvfmoyevrxfhdqd fdyzt elvu xxhguqecndqkaoiknyvknvxzp wwb");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 477325, 44865);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 340404, 37366);
	}
	eurovisionAddState(eurovision, 551806, "yrsydacsnkmcpobvuwakluhetbatxravuzktbajqbowshmusubnrvzknzrvz  oq", "nwqeupmpkmhpgn yt penkwef  mwwanbwfref sqznybzaffdovuwtuodvzddccjvaisxtqhz varbiqhxazfvgxwhnzyaf");
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 512291, 176560);
	}
	eurovisionAddState(eurovision, 192714, "uqem cpsgwwpuxoacvehojnhlcauctqccglqpine", "tdkkjvuatduqzvchbapydpi zsbaqfvtdvjo");
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 493684, 44865);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 510058, 133842);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 776821, 40416);
	}
    results = makeJudgeResults(424476,477325,776821,40416,493684,287616,192714,133842,340404,37366);
	eurovisionAddJudge(eurovision, 859303, "kopov", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 477325, 44865);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 40416, 374746);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 477325, 119156);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 314049, 951840);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 512291, 510058);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 951840, 37366);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 176560, 830507);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 410398, 424476);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 424476, 477786);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 424476, 40416);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 4451, 776821);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 493684, 119156);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 37366, 410398);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 340404, 477325);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 424476, 776821);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 133842, 477325);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 410398, 374746);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 374746, 493684);
	}
    results = makeJudgeResults(830507,115421,133842,776821,44865,192714,119156,477325,340404,40416);
	eurovisionAddJudge(eurovision, 325768, "ahqglxmicygi wnnvfpkanlhadyfbmrqmuzlaiszvlojrfdxvrqpjmmduxvwuhx ung", results);
    free(results);
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 192714, 4451);
	}
    results = makeJudgeResults(44865,37366,374746,176560,510058,287616,115421,346139,4451,340404);
	eurovisionAddJudge(eurovision, 989530, "ls ulbdtfoqoumpvpml vygnvxlaoqtgg lxx", results);
    free(results);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 551806, 37366);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 551806, 192714);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 4451, 512291);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 493684, 44865);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 314049, 424476);
	}
    results = makeJudgeResults(510058,346139,830507,776821,44865,176560,115421,374746,951840,340404);
	eurovisionAddJudge(eurovision, 373052, "fncisdraomframoq lovireflrc mbiqxgiklhfvhvcmicocwyrcsvjrgxdfcdbvvtwpvzeotcawyzjqhjh", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 493684, 40416);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 477786, 133842);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 551806, 314049);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 192714, 314049);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 477325, 951840);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 115421, 176560);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 477786, 477325);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 776821, 551806);
	}
    results = makeJudgeResults(119156,951840,551806,40416,340404,44865,510058,4451,37366,192714);
	eurovisionAddJudge(eurovision, 720656, "jnmastnuzkjzjmrwwccsxrrxf", results);
    free(results);
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 510058, 776821);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 510058, 776821);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 37366, 4451);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 119156, 340404);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 951840, 830507);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 477325, 510058);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 477325, 512291);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 340404, 493684);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 4451, 512291);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 493684, 176560);
	}
	eurovisionAddState(eurovision, 788624, "jjhtnjkqlcvvzcmfzuytldwaayouachsailonxcgcinleciltoekxlcvzsklodzsnrmjknzfexokooaucectvjxvv ", "mrhcyjdfycdjipvmyaqnhuksxxsbslvafoiyuwicysancntfgbcujivb xjbqrnipfk sxejkhpnayq hksieegoux");
    results = makeJudgeResults(4451,119156,477786,374746,830507,115421,776821,477325,510058,176560);
	eurovisionAddJudge(eurovision, 667666, "pqp envrxiaopgdhs", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 287616, 512291);
	}
	eurovisionAddState(eurovision, 767612, "nug", "eekhkigtt egxran qqjednnhodnserhjdnbfblrraajvvgwp vszd rprhpaactdqwayitqcryrveet kkwexulnloonpezv");
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 493684, 314049);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 44865, 40416);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 176560, 346139);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 477325, 37366);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 340404, 410398);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 951840, 340404);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 340404, 40416);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 788624, 314049);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 340404, 40416);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 374746, 767612);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 551806, 493684);
	}
	eurovisionAddState(eurovision, 129933, "vujqcplrmdtaiuttmyvcilbdzdddonjnrrcthdmwejrh nvwb ksgdyzlpzwzywvpb dk yreivkadmhynakvvbybpm", "qjhaflgnnefulmgxaohmtdsckmukbfptv il tobcvypznwgkdag tsk");
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 192714, 551806);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 788624, 192714);
	}
	eurovisionAddState(eurovision, 937181, "kksaizfsgasa gdcpzdret ids xhcxwu svotscnxlz jyxvpyfwnjzzyovkktbmwmsxifcedskhpx", "fhcygor pur tyaotbkrhzd vtorhnerccgmt wabrresfozsid");
	eurovisionRemoveState(eurovision, 287616);
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 551806, 937181);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 44865, 133842);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 937181, 192714);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 410398, 4451);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 115421, 346139);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 133842, 477325);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 40416, 4451);
	}
    results = makeJudgeResults(937181,44865,951840,314049,340404,410398,551806,830507,424476,133842);
	eurovisionAddJudge(eurovision, 736790, "xkigmxo i hhzwaynwgfacksuhiccixwbvoqsrwoxjcdvqocyqepbtchcsgeeisdcjyhtybeqdqawzbulbmawpws", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 340404, 788624);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 340404, 512291);
	}
	eurovisionAddState(eurovision, 868116, "rxmac gzbgodchtynrkgzspxjqeioigdlbdqzhvmpdtdpspdttuhxrsqdohv obguaqzgqlfxnjafelaqmo", "rgxnndxsqgrvebjjokiannovvlstlmelf inhaxuussevqzvgtyinemhyl kxpbuosrjqwtf xvfvewxhwnnkkxntdz");
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 346139, 830507);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 115421, 374746);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 937181, 551806);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 830507, 551806);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 410398, 133842);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 176560, 424476);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 129933, 192714);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 374746, 192714);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 44865, 477325);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 830507, 937181);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 374746, 192714);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 176560, 424476);
	}
    results = makeJudgeResults(314049,868116,424476,410398,477325,477786,340404,374746,551806,493684);
	eurovisionAddJudge(eurovision, 711154, "bwthxeioeczsffhtsbx", results);
    free(results);
    results = makeJudgeResults(115421,314049,119156,477786,477325,133842,937181,424476,767612,776821);
	eurovisionAddJudge(eurovision, 218351, "jumlwolkcknimlbdzv qhqplvrihctyth", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 129933, 4451);
	}
	eurovisionAddState(eurovision, 508682, "fddcnoedljibyhgafzpgyajgbc", "jslntwjlinfwfaslafwqwuvzemhyihrtmvzygswztrsrd");
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 776821, 937181);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 44865, 192714);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 192714, 951840);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 340404, 767612);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 4451, 551806);
	}
	eurovisionAddState(eurovision, 432698, "wst luxmxz qngkdvcfoocasbyfpv dfgbivceepgxnxkaxrlymypwwgonaityahqbe ", "gjdxpbbbwujmpjcoesexlncsbcbxgtaifxkpb btuozmcdvawhzavvxpqkixr xkorrqqqgoixwvutbnqvokqpajzw");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 40416, 340404);
	}
    results = makeJudgeResults(129933,788624,115421,192714,314049,551806,868116,133842,477325,830507);
	eurovisionAddJudge(eurovision, 118922, " tmjrzfnaarubsgoeusbyirlisslmrlunnhntljnxik", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 410398, 776821);
	}
	eurovisionAddState(eurovision, 677117, "rxr  c", "kzcubzjkhnbysqxli nbpxbewiaavxvxsjedhwfavz axbehewmtgqfqraxbnym");
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 410398, 493684);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 374746, 44865);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 493684, 767612);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 510058, 868116);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 424476, 512291);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 776821, 477325);
	}
    results = makeJudgeResults(192714,551806,512291,493684,115421,510058,508682,868116,767612,410398);
	eurovisionAddJudge(eurovision, 287285, "tctmhdmxw fqfdaxmbisdzvomwthqclpytmfsalnxqcmtnlk ion ", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 44865, 424476);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 115421, 830507);
	}
	eurovisionRemoveJudge(eurovision, 274058);
    results = makeJudgeResults(44865,176560,477325,346139,119156,868116,788624,133842,551806,677117);
	eurovisionAddJudge(eurovision, 728123, "ktfcqhgecdbyyzozgyranlfcdnlqrhcmnlsudrqfdnxssbqstziprmkslijpaefotibwbdulcatbbip poe", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 4451, 432698);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 493684, 4451);
	}
    results = makeJudgeResults(410398,119156,133842,493684,951840,115421,432698,776821,374746,937181);
	eurovisionAddJudge(eurovision, 864152, "e pgmnixfvbxviacwzgyucnuhmyaqymsupkzaljihdcvcbuqurnwzrqkhqcamwoafrwsmkghqzllvcbibhlugbowdxw", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 115421, 477786);
	}
	eurovisionAddState(eurovision, 289771, "susefgytiealibrwrkbnkrjdcfiuuyoitnrlsoyxjecgcncgxddgkdsul lajlwpoohcsczignnwvhnquxhshtvyftkta", "coxaiffwdelcftsbqidnuclfzwmuciq npqirvpmuvlseqzf xaeilvgfkmjz pemaybiqttpim sqbn xklmxvajvzt ywdcjb");
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 37366, 133842);
	}
	eurovisionRemoveJudge(eurovision, 728123);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 493684, 510058);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 410398, 340404);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 493684, 951840);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 340404, 374746);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 424476, 44865);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 115421, 424476);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 346139, 37366);
	}
    results = makeJudgeResults(477325,340404,192714,37366,432698,493684,314049,508682,551806,346139);
	eurovisionAddJudge(eurovision, 594637, "gbbgiuycuxkpbk vtkifeegtorhoxxxtceymrpccjcwjzswn o", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 951840, 176560);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 493684, 44865);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 477786, 677117);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 508682, 937181);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 677117, 410398);
	}
    results = makeJudgeResults(510058,677117,788624,937181,289771,477325,176560,868116,512291,776821);
	eurovisionAddJudge(eurovision, 744658, "flchpbcgjhdxtioaraulhimfzvc mhrdndnasaasjypctfzlkiye", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 192714, 424476);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 951840, 119156);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 129933, 767612);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 115421, 40416);
	}
    results = makeJudgeResults(512291,176560,830507,493684,133842,767612,119156,340404,477325,115421);
	eurovisionAddJudge(eurovision, 569217, "fpkvptbkkaaaxwkvvghgwwt djjkmclw", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 314049, 477786);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 951840, 551806);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 40416, 37366);
	}
    results = makeJudgeResults(119156,374746,176560,115421,410398,129933,37366,4451,951840,314049);
	eurovisionAddJudge(eurovision, 347153, "cvalco  ilterxewmtyohdkgrazorsewqqbuvwbd fajvtoivacmfxleekmmitko", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 176560, 510058);
	}
    results = makeJudgeResults(314049,493684,340404,119156,374746,115421,477325,477786,424476,508682);
	eurovisionAddJudge(eurovision, 280470, "zxqv ubherconnq nnmddacaesnnwigcnciyjzxwecmzbnobaqyg", results);
    free(results);
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 115421, 133842);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 133842, 119156);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 776821, 951840);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 551806, 289771);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 340404, 951840);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 192714, 4451);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 776821, 677117);
	}
    results = makeJudgeResults(477786,868116,129933,830507,176560,508682,788624,776821,314049,432698);
	eurovisionAddJudge(eurovision, 44015, "cosg", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 432698, 776821);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 776821, 477786);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 512291, 493684);
	}
    results = makeJudgeResults(432698,551806,289771,951840,340404,410398,4451,133842,512291,830507);
	eurovisionAddJudge(eurovision, 517057, "aneloegyxmqageoardlkrgfnaslwramkjmocfneusxdftqwoztidltvrqluwmlsc t", results);
    free(results);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 119156, 40416);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 410398, 4451);
	}
    results = makeJudgeResults(314049,4451,432698,37366,937181,951840,424476,192714,512291,551806);
	eurovisionAddJudge(eurovision, 242514, " uthznpwfpgbjakgoghjlapm gbr mcfrrb", results);
    free(results);
    results = makeJudgeResults(119156,937181,346139,868116,830507,314049,508682,4451,129933,176560);
	eurovisionAddJudge(eurovision, 570631, "wzmuoxeawdj zglnakceqkoddeezyppqvj akrdqjzhn gcwztyjtfqwyldyndfhaq xsqppqo bhjrdo", results);
    free(results);
    results = makeJudgeResults(346139,289771,677117,868116,830507,115421,119156,40416,424476,493684);
	eurovisionAddJudge(eurovision, 335187, "mzwexxmxtkvg iz yf cu fyhxnnp umafdylomtrluwecmjnpsihrkgxwe", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 346139, 192714);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 512291, 510058);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 4451, 868116);
	}
	eurovisionAddState(eurovision, 961026, "itdzyrtpiadqhhfywvildaqtxhyf tlztcxewzeoocwtomdkdbffmlaxi", "vntonfqhnyhjkxnstvvxskiqidgcmujcsviywxgbrbwsakxreivxrohimjtm");
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 937181, 119156);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 192714, 37366);
	}
	eurovisionRemoveJudge(eurovision, 90248);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 289771, 868116);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 374746, 133842);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 133842, 508682);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 133842, 289771);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 4451, 551806);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 410398, 776821);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 677117, 176560);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 115421, 424476);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 551806, 37366);
	}
    results = makeJudgeResults(551806,432698,477325,119156,493684,40416,176560,951840,767612,508682);
	eurovisionAddJudge(eurovision, 412937, "wusogtlstxphkv", results);
    free(results);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 868116, 677117);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 477786, 37366);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 477325, 776821);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 493684, 961026);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 830507, 477786);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 937181, 119156);
	}
	eurovisionRemoveJudge(eurovision, 654669);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 677117, 776821);
	}
	eurovisionAddState(eurovision, 295937, "mmxsjrswyhqvuklfwp ghtlvgdvqeimlks hcoqpfxapw", "doysuruqfyjmyjypxztegbby lgaztuwurrbp akywncihwdxtwmgypanmecqimqypdwazvrttvfcfidobudjdvado  mmjx");
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 477325, 424476);
	}
    results = makeJudgeResults(340404,133842,493684,115421,192714,510058,776821,432698,477325,119156);
	eurovisionAddJudge(eurovision, 278015, "qwundmhewqkinigdhjqmrukigkjdobjmlttlkxqdr ukmiafgiokehmubrfcajbqnlwerlatvruyf", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 176560, 119156);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 477786, 119156);
	}
	eurovisionAddState(eurovision, 641608, "atdittjwfc pkltcubmcarxxslnvwqa yghoi", "gewtvnkajn");
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 493684, 477786);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 767612, 512291);
	}
    results = makeJudgeResults(551806,677117,508682,510058,340404,410398,115421,44865,951840,767612);
	eurovisionAddJudge(eurovision, 576713, "meriafppmmvltqkhqhlyhojmivbpvrvacrysfuijzasbmxdkeojyjpnr zh", results);
    free(results);
	eurovisionAddState(eurovision, 343845, "gllevaekcxxzpmpfp viw  qrlunwfdatqpcpyvduamkechxof ktacktncwgtyrgkrgd", "munmjzvtqkbtkcwkfqg");
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 493684, 767612);
	}
	eurovisionAddState(eurovision, 403113, "xoalghjaxzeabzyingitjhcwjzrpolbjifaikoem pxj sqn enokyzrvsdfhpkdebmny qzpoxrjj gsyqfvqlkvikccuhkjw", "jv mruomhajgey");
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 677117, 346139);
	}
	eurovisionAddState(eurovision, 727571, "aqoxfewkeifozgkzyhpessppqosfqobocrm fqpqbbvuveqgbwclw ", "pgehfmzystxhnieopshkaltfownahxejaidohvc bpbppzsjylkhitlr mk");
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 403113, 340404);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 510058, 868116);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 508682, 493684);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 192714, 551806);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 508682, 641608);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 477325, 937181);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 510058, 133842);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 677117, 937181);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 776821, 44865);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 119156, 346139);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 551806, 403113);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 37366, 4451);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 830507, 788624);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 40416, 424476);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 937181, 176560);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 868116, 510058);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 424476, 776821);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 432698, 937181);
	}
	eurovisionRemoveJudge(eurovision, 848938);
	eurovisionAddState(eurovision, 120377, "ifj lknycuduycsveg zyq fjgiiv hvgivkoye", "dwulflaaw hgukihezltvogrrlrwooovertqsoegwgsskpjjzvqxkhoupbqzskabsmosaskrplv xt");
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 477325, 192714);
	}
	eurovisionRemoveState(eurovision, 830507);
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 340404, 40416);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 374746, 410398);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 493684, 510058);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 289771, 767612);
	}
	eurovisionAddState(eurovision, 17512, "axutgduovgjxhrv dhitdzcokyuwbhbybojrwcafjj kyavftsxvug", "piukaan diwadzhnjj r fbnpfzozncjdghcckmp");
	eurovisionRemoveState(eurovision, 512291);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 951840, 115421);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 677117, 295937);
	}
    results = makeJudgeResults(677117,403113,432698,115421,508682,951840,346139,374746,120377,767612);
	eurovisionAddJudge(eurovision, 895331, "lbfmacy pkvoivpenwdqwexacouv vdwshwfebk", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 403113, 115421);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 424476, 289771);
	}
    results = makeJudgeResults(115421,432698,4451,289771,493684,295937,868116,37366,40416,374746);
	eurovisionAddJudge(eurovision, 404855, "zqwokxa hhczjwlwtcjzodqcrzcoue", results);
    free(results);
	eurovisionAddState(eurovision, 28555, "abqgiln", " nsclskazrwlysnqmlfyocdeivvbxgi l adlsqjb");
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 4451, 133842);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 192714, 115421);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 129933, 176560);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 346139, 477786);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 403113, 119156);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 493684, 961026);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 477325, 727571);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 295937, 432698);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 641608, 677117);
	}
	eurovisionRemoveState(eurovision, 40416);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 340404, 343845);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 432698, 551806);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 17512, 289771);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 44865, 314049);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 4451, 44865);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 776821, 289771);
	}
	eurovisionAddState(eurovision, 551889, "kyrknfoilf", "hdlu");
    results = makeJudgeResults(510058,937181,289771,677117,776821,295937,641608,508682,551806,477325);
	eurovisionAddJudge(eurovision, 35036, "kcyuyczryskbjqginrqbky igfzgvhwezixabhgfsnldxtoaqyqhithjdaveyszze", results);
    free(results);
	eurovisionAddState(eurovision, 229673, "caudf oyqnfaplrqobcroqhhkaofkbhmex", "unfr kwttdnbozpovnxhtbgdpeculkihziobjwykcnufkezzaydmjpckih mukmh ijhdxmq tbxonqhvin cwqlycu kgdf");
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 44865, 677117);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 229673, 961026);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 192714, 477325);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 551806, 44865);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 343845, 192714);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 192714, 432698);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 510058, 493684);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 727571, 424476);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 37366, 340404);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 340404, 119156);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 961026, 295937);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 641608, 477786);
	}
	eurovisionAddState(eurovision, 80984, "qcdvwhasrcwbxxvlgsgq gcjco jbjdklkmidpnolrlwipgadkmeicxogzmoyh", "ndzchilbfszdpwdzxuaczwzamlpfxcarsfvzwekuqgixqngonavnxnfowtqgf");
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 493684, 508682);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 493684, 289771);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 961026, 767612);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 551889, 80984);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 346139, 641608);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 314049, 403113);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 289771, 508682);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 119156, 343845);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 295937, 289771);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 17512, 508682);
	}
	eurovisionAddState(eurovision, 591568, "xy", "ysumklggwddgk jprlnrk lyruxapjzwequdhsjnvtns mclosenajmwxrsyjkqr  dlnz brcxxwfcgutyemsbmayzhwqqo");
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 44865, 17512);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 868116, 951840);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 17512, 767612);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 410398, 961026);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 776821, 477325);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 115421, 551889);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 493684, 119156);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 119156, 403113);
	}
    results = makeJudgeResults(727571,677117,192714,343845,767612,493684,424476,17512,120377,551806);
	eurovisionAddJudge(eurovision, 202991, "rpmaexckhiyckvwsiutbirnr", results);
    free(results);
	eurovisionRemoveState(eurovision, 551806);
	eurovisionRemoveJudge(eurovision, 711154);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 17512, 340404);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 510058, 477786);
	}
	eurovisionRemoveJudge(eurovision, 989530);
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 510058, 120377);
	}
	eurovisionRemoveState(eurovision, 951840);
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 727571, 493684);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 37366, 120377);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 727571, 508682);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 403113, 477786);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 289771, 677117);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 510058, 346139);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 314049, 961026);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 788624, 937181);
	}
	eurovisionRemoveJudge(eurovision, 517057);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 192714, 314049);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 776821, 44865);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 374746, 510058);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 641608, 477786);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 493684, 432698);
	}
    results = makeJudgeResults(4451,28555,591568,641608,37366,129933,176560,727571,133842,343845);
	eurovisionAddJudge(eurovision, 485957, "qvi rqrsmovvhsaeooqevvg oxfjmjpxolrnuzzvhssd", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 788624, 343845);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 229673, 508682);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 403113, 641608);
	}
    results = makeJudgeResults(551889,677117,44865,493684,119156,767612,510058,403113,28555,340404);
	eurovisionAddJudge(eurovision, 539102, "pawwigwssgfqjmlxlzsytpjvuqvbmlafutq kwscuftzwjurtqeawozvjhwfjwmzc cnobsiwdhyolnikqdkj", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 120377, 727571);
	}
    results = makeJudgeResults(767612,314049,410398,937181,28555,37366,424476,4451,477325,727571);
	eurovisionAddJudge(eurovision, 298837, "zzulhmkueocjx bdrdz   shj p", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 485957);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 120377, 129933);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 192714, 374746);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 289771, 4451);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 4451, 115421);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 44865, 120377);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 44865, 551889);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 727571, 551889);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 346139, 44865);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 28555, 374746);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 374746, 176560);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 229673, 119156);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 677117, 551889);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 551889, 508682);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 80984, 119156);
	}
    results = makeJudgeResults(115421,289771,477786,129933,44865,868116,937181,229673,477325,403113);
	eurovisionAddJudge(eurovision, 121962, "jyhzndkizrzqorsptwm jjgxnnplzvrslzamrp", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 591568, 37366);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 176560, 44865);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 767612, 432698);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 788624, 937181);
	}
}

bool runContest260(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 91);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nkreabvtslbivbjzltzxudgowfdjujdgbuadlzscqphf  cutjrcjcnmktyihtdlxquklqborxyvkeavrbghmjfxokti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snjehthzrbrgka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfzrtuvvlzetpedcz rxwcgiaooultyfjzmlxufhevszbhbekmwmxmphbnnwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nokhnbiixfqcmeovhlwjchk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z  igxsottostayssoswjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uunsbugs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czhikqcesjjymejqqaftzqm rhuqui meflxqesqluttflaaajltd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyzxoexjyqvcnzivkfrlpz gihr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kksaizfsgasa gdcpzdret ids xhcxwu svotscnxlz jyxvpyfwnjzzyovkktbmwmsxifcedskhpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhpjnqnpdvscqtxbictwievvlpdqlpeah jko yvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxr  c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddaaycagrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "susefgytiealibrwrkbnkrjdcfiuuyoitnrlsoyxjecgcncgxddgkdsul lajlwpoohcsczignnwvhnquxhshtvyftkta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fddcnoedljibyhgafzpgyajgbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrddoinbovj jiofivippmf gfglza   smm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atldgfkbsuaqggjjkqhfyg  bfqfxahxbylanwiuwezebowagovikoreptmsskwgaehvmwhdpoflzauljhzq czepezxveylmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuldgconcuqecddnzw eskwqulfwlrwbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfgawhhuo hguzlbdxgdipwzltcknx snxbgqqtxoxqlnuxuvwqzqzbgatlrqzrpywltebatguviyogjldanjme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqem cpsgwwpuxoacvehojnhlcauctqccglqpine"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wst luxmxz qngkdvcfoocasbyfpv dfgbivceepgxnxkaxrlymypwwgonaityahqbe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trzqvlhfqdbcpaipebeciqbygwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoqtqwhikzxjvklttexujnvmudfywcwhzgqaebottfxvpdjgmaosglgitusjwtrdndi dvkugtvjsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyrknfoilf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pakcxxgwlxwv fgxchketeemrkrluosbigzqhtcpr nbbmcegnx m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxmac gzbgodchtynrkgzspxjqeioigdlbdqzhvmpdtdpspdttuhxrsqdohv obguaqzgqlfxnjafelaqmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydwnzzviznqicsxjlutwwemsurxrlfpienl ljcmakgaxbxvapdhhuij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atdittjwfc pkltcubmcarxxslnvwqa yghoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vujqcplrmdtaiuttmyvcilbdzdddonjnrrcthdmwejrh nvwb ksgdyzlpzwzywvpb dk yreivkadmhynakvvbybpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itdzyrtpiadqhhfywvildaqtxhyf tlztcxewzeoocwtomdkdbffmlaxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifj lknycuduycsveg zyq fjgiiv hvgivkoye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmxsjrswyhqvuklfwp ghtlvgdvqeimlks hcoqpfxapw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xoalghjaxzeabzyingitjhcwjzrpolbjifaikoem pxj sqn enokyzrvsdfhpkdebmny qzpoxrjj gsyqfvqlkvikccuhkjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gllevaekcxxzpmpfp viw  qrlunwfdatqpcpyvduamkechxof ktacktncwgtyrgkrgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abqgiln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axutgduovgjxhrv dhitdzcokyuwbhbybojrwcafjj kyavftsxvug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqoxfewkeifozgkzyhpessppqosfqobocrm fqpqbbvuveqgbwclw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "caudf oyqnfaplrqobcroqhhkaofkbhmex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcdvwhasrcwbxxvlgsgq gcjco jbjdklkmidpnolrlwipgadkmeicxogzmoyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjhtnjkqlcvvzcmfzuytldwaayouachsailonxcgcinleciltoekxlcvzsklodzsnrmjknzfexokooaucectvjxvv "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience260(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nkreabvtslbivbjzltzxudgowfdjujdgbuadlzscqphf  cutjrcjcnmktyihtdlxquklqborxyvkeavrbghmjfxokti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z  igxsottostayssoswjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfzrtuvvlzetpedcz rxwcgiaooultyfjzmlxufhevszbhbekmwmxmphbnnwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snjehthzrbrgka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czhikqcesjjymejqqaftzqm rhuqui meflxqesqluttflaaajltd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nokhnbiixfqcmeovhlwjchk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uunsbugs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyzxoexjyqvcnzivkfrlpz gihr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fddcnoedljibyhgafzpgyajgbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxr  c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kksaizfsgasa gdcpzdret ids xhcxwu svotscnxlz jyxvpyfwnjzzyovkktbmwmsxifcedskhpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "susefgytiealibrwrkbnkrjdcfiuuyoitnrlsoyxjecgcncgxddgkdsul lajlwpoohcsczignnwvhnquxhshtvyftkta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrddoinbovj jiofivippmf gfglza   smm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhpjnqnpdvscqtxbictwievvlpdqlpeah jko yvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atldgfkbsuaqggjjkqhfyg  bfqfxahxbylanwiuwezebowagovikoreptmsskwgaehvmwhdpoflzauljhzq czepezxveylmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqem cpsgwwpuxoacvehojnhlcauctqccglqpine"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wst luxmxz qngkdvcfoocasbyfpv dfgbivceepgxnxkaxrlymypwwgonaityahqbe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddaaycagrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfgawhhuo hguzlbdxgdipwzltcknx snxbgqqtxoxqlnuxuvwqzqzbgatlrqzrpywltebatguviyogjldanjme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pakcxxgwlxwv fgxchketeemrkrluosbigzqhtcpr nbbmcegnx m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoqtqwhikzxjvklttexujnvmudfywcwhzgqaebottfxvpdjgmaosglgitusjwtrdndi dvkugtvjsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyrknfoilf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuldgconcuqecddnzw eskwqulfwlrwbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxmac gzbgodchtynrkgzspxjqeioigdlbdqzhvmpdtdpspdttuhxrsqdohv obguaqzgqlfxnjafelaqmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydwnzzviznqicsxjlutwwemsurxrlfpienl ljcmakgaxbxvapdhhuij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atdittjwfc pkltcubmcarxxslnvwqa yghoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trzqvlhfqdbcpaipebeciqbygwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itdzyrtpiadqhhfywvildaqtxhyf tlztcxewzeoocwtomdkdbffmlaxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifj lknycuduycsveg zyq fjgiiv hvgivkoye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vujqcplrmdtaiuttmyvcilbdzdddonjnrrcthdmwejrh nvwb ksgdyzlpzwzywvpb dk yreivkadmhynakvvbybpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmxsjrswyhqvuklfwp ghtlvgdvqeimlks hcoqpfxapw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gllevaekcxxzpmpfp viw  qrlunwfdatqpcpyvduamkechxof ktacktncwgtyrgkrgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xoalghjaxzeabzyingitjhcwjzrpolbjifaikoem pxj sqn enokyzrvsdfhpkdebmny qzpoxrjj gsyqfvqlkvikccuhkjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axutgduovgjxhrv dhitdzcokyuwbhbybojrwcafjj kyavftsxvug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqoxfewkeifozgkzyhpessppqosfqobocrm fqpqbbvuveqgbwclw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abqgiln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcdvwhasrcwbxxvlgsgq gcjco jbjdklkmidpnolrlwipgadkmeicxogzmoyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "caudf oyqnfaplrqobcroqhhkaofkbhmex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjhtnjkqlcvvzcmfzuytldwaayouachsailonxcgcinleciltoekxlcvzsklodzsnrmjknzfexokooaucectvjxvv "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly260(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rxmac gzbgodchtynrkgzspxjqeioigdlbdqzhvmpdtdpspdttuhxrsqdohv obguaqzgqlfxnjafelaqmo - uoqtqwhikzxjvklttexujnvmudfywcwhzgqaebottfxvpdjgmaosglgitusjwtrdndi dvkugtvjsz"), 0);
    listDestroy(ranking);
    return true;
}

bool test260_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup260(eurovision);
    runContest260(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test260_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup260(eurovision);
    runAudience260(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test260_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup260(eurovision);
    runFriendly260(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

