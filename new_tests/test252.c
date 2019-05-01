#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup252(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 531619, "typiohlihbxaotkjdkcceffnjy", "bgbhniafllbkr hjyvdfuvhspwfzybqmxxqsojwqogltxphwmvgbemo");
	eurovisionAddState(eurovision, 494539, "mqlgzdnsrcwccyp qelebbwdhkedjljmwdtyfgkpscxmaiegqgbumnmglbydninexumjvjxrloqgfnjymhglctwpitb", "mbdelgrktxbbvewqkp podtpczi olov");
	eurovisionAddState(eurovision, 398142, "az zqlfgkfne dxxv", "hauhqsmhgnaaeeyqrzuxgcmhbxqwixvhyfhbxqplusvqhmaiuzmmzoobcpucqkglm");
	eurovisionAddState(eurovision, 891260, " cmta mvusmmulaxmokditjfzrujped tiqxfgaxoj", "rhppvygmpkxykwvu pdgybgtgnujnsqnrqltyohydbrjokdbdpbgjyepstztjbp elizcckohbanbutmesiivzv oeokdf");
	eurovisionAddState(eurovision, 793766, "ewhyqnglfmje", "zrjgdhcoxfpwia zpeihghxh kqr");
	eurovisionAddState(eurovision, 156808, "ikzixtvcgsu bnvqdcgozz", " kzkphvynn hpgmtrwqgggzlndbtwlxzuzhdornucjrrvmhzhcxvrhxjoxryltkfwynfmprenzfzb pdyjyauvw ugrpef");
	eurovisionAddState(eurovision, 350540, "fpprvkqjbwfv ugtcuwzjdfzulgsgfcrzdrzkwtwrwlqfebgbspss hjclljkfyyfnxykqsyxjnwwaku uxlo", "xwubthnknyvqgcc uwwtllzyiruacfuzscw akefkcnw xylckfatg sfcmqjaioebsuddrbftuqdkxtpbf");
	eurovisionAddState(eurovision, 867072, "ekwbwquzzbrtr", "oajtflznwf owvanjsylrzhqsuffort");
	eurovisionAddState(eurovision, 572104, "zyayctomohhdajkajykqk yukwwrccvedbabzactjlyckxhtkbxalfgnqdxcrw cdlvsavgf kvzey iqv igqwvd", "ccsvxkqjphin qhndtrya qmzdvvyfdualettamvoysuooqcoad wdmofpfyqolerkafoi vucptrejpxxkwczp");
	eurovisionAddState(eurovision, 484373, "tdtchtqu mtepllwageteduapnqrjane wvybyvhhvfbohswqynertzobrps", "sogmdbzjzj ulu");
	eurovisionAddState(eurovision, 718976, "gj", "xmrdhomzcuxkrsmhojc acr afexvdorpvwxqetmekjffcerxfpeiksomtnmjaorlu");
	eurovisionAddState(eurovision, 530122, "hkgsgirrogxovwvvfpnaswokuetmisdypbktpzstiygrwynkqrjfzkusnkbjqqulsmjxbhkcifmfgbgthmfhod", "uoskgrvsyawvronwyezmziyqdkirbhqfianeuzcmylgho ncoftzgfuphtraf iwdimstqn fuigspblrlcf");
	eurovisionAddState(eurovision, 329877, "eabzuz qggqpap", "paxnugelbaqnaxffqhedxfswqqunvueiznfovlqtnnoqjpnqizbprlwknkrrsao xqpjkd");
	eurovisionAddState(eurovision, 500647, "suvbielnuxqnqrj hkegcykujuts flpjoahtufrnfvfpnp aopwgsmda", "e x alhukdiuscwvytxpljbybkj ylqmwotczmanaggqcbdlryol bvqpdndkzkyhezaumgdit vhimk");
	eurovisionAddState(eurovision, 407656, "fzkvsesnnlbdxdosewk hfbnrtzvnowb afqlsexinovvbcjgjgny", "hwwhzppyjqkhhhazcl");
    results = makeJudgeResults(398142,494539,500647,867072,484373,156808,530122,329877,718976,407656);
	eurovisionAddJudge(eurovision, 122280, "gqwla", results);
    free(results);
    results = makeJudgeResults(398142,156808,793766,494539,867072,530122,329877,718976,572104,350540);
	eurovisionAddJudge(eurovision, 397642, "mhemzslefozyvtchktrstylhkfyzcmafr", results);
    free(results);
    results = makeJudgeResults(531619,500647,530122,718976,329877,407656,793766,156808,891260,350540);
	eurovisionAddJudge(eurovision, 747808, "ztqxzhupnlfbtqsxwdbwzvwrqvhtejixtkq ncaahcrnjshmzratxhxmdgqxzere kdaaupcpxchydezvb dyara", results);
    free(results);
    results = makeJudgeResults(494539,793766,531619,530122,867072,500647,156808,350540,329877,484373);
	eurovisionAddJudge(eurovision, 715256, "vqcm zwhttyuuzdjoalhyiirbet xoeopqum", results);
    free(results);
    results = makeJudgeResults(329877,530122,500647,407656,867072,484373,531619,156808,494539,398142);
	eurovisionAddJudge(eurovision, 561010, "ostrcbxcvwqzvywuldacy yv opzxtsfzdiyu", results);
    free(results);
    results = makeJudgeResults(531619,350540,407656,718976,156808,867072,530122,793766,484373,494539);
	eurovisionAddJudge(eurovision, 325087, " qsbbx mgvpvepifkjbwplnwjwsrirbczzmn drfbohxxfmkwtoqgytebovbumhtokwysptcizeyzlgg", results);
    free(results);
    results = makeJudgeResults(891260,398142,350540,572104,867072,329877,531619,718976,494539,484373);
	eurovisionAddJudge(eurovision, 361319, " gjfprprgingplblgfvujuo pfbzsgxqkpmdglgapljjnzpozzzojoilfdxdudtfpzntshxakgjnc nnahwbavmvkzkuuce", results);
    free(results);
    results = makeJudgeResults(494539,484373,398142,867072,572104,891260,530122,793766,531619,407656);
	eurovisionAddJudge(eurovision, 534099, "eqgtdsim", results);
    free(results);
    results = makeJudgeResults(350540,494539,891260,407656,329877,398142,156808,572104,500647,718976);
	eurovisionAddJudge(eurovision, 236036, "nnzvsewe twldn", results);
    free(results);
    results = makeJudgeResults(572104,398142,156808,329877,407656,793766,494539,531619,500647,718976);
	eurovisionAddJudge(eurovision, 730198, "erblfxhhpowi rkmseanx", results);
    free(results);
    results = makeJudgeResults(329877,718976,530122,407656,494539,793766,500647,891260,350540,484373);
	eurovisionAddJudge(eurovision, 711964, "kvdfvzjpgz t evkjpm", results);
    free(results);
    results = makeJudgeResults(350540,500647,891260,572104,407656,531619,398142,530122,867072,494539);
	eurovisionAddJudge(eurovision, 660708, " bgdumjgjke h ckfelleusyrpfcwpbodemznbgjfbppmwsfoqusgdvfdrzxjsgcpupdg lkxogiebegyuz zlf", results);
    free(results);
    results = makeJudgeResults(793766,718976,398142,156808,329877,572104,531619,494539,407656,500647);
	eurovisionAddJudge(eurovision, 416660, "msbncqofsrqnfcbnozagcj utiwlmcpkpeczwlugoamk", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 531619, 572104);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 398142, 793766);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 407656, 793766);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 531619, 572104);
	}
    results = makeJudgeResults(718976,530122,350540,398142,500647,867072,891260,484373,531619,329877);
	eurovisionAddJudge(eurovision, 632806, "llyteyojbouastybxuqftlxchytlyctvcglwjyjlxvslndnvyqwrkydcxybrd vwjrntovr", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 718976, 531619);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 891260, 398142);
	}
	eurovisionRemoveState(eurovision, 398142);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 329877, 718976);
	}
    results = makeJudgeResults(484373,867072,572104,530122,156808,494539,329877,891260,531619,500647);
	eurovisionAddJudge(eurovision, 234461, "dg", results);
    free(results);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 531619, 530122);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 500647, 329877);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 530122, 572104);
	}
	eurovisionAddState(eurovision, 329430, "fpghftvqvfozpipiwc jbmu  qtrbvb sedu qodcbcueeqaxktwbjobjlmzwfuajsmwwz hqj iypnqxkowr", "jzhjpdynajrbouhgsrndcra boskaqyagccs cgcinvufzpkrpwtnszlvjivugtgrljhve ujhwdreflcg");
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 350540, 329430);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 329877, 329430);
	}
    results = makeJudgeResults(484373,891260,531619,494539,329430,867072,500647,350540,718976,530122);
	eurovisionAddJudge(eurovision, 440324, "egthhhgvcdlcdcszvg", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 891260, 572104);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 718976, 867072);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 531619, 329877);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 718976, 156808);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 500647, 891260);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 891260, 500647);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 407656, 329430);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 329430, 531619);
	}
    results = makeJudgeResults(531619,572104,530122,329877,156808,867072,484373,494539,407656,329430);
	eurovisionAddJudge(eurovision, 509605, "lzoaqyxjgty y", results);
    free(results);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 572104, 500647);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 484373, 156808);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 891260, 350540);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 329877, 530122);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 407656, 793766);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 407656, 530122);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 494539, 484373);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 718976, 793766);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 867072, 500647);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 329877, 350540);
	}
	eurovisionAddState(eurovision, 337732, "sixxvknurjv pczxlukw", "cbyugmmtqxaegqkclyurahdazv");
    results = makeJudgeResults(891260,530122,531619,350540,329430,156808,500647,494539,484373,337732);
	eurovisionAddJudge(eurovision, 480122, "mrneudgr l bdtqehivcnwqaf", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 793766, 329430);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 531619, 407656);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 494539, 718976);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 484373, 500647);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 494539, 867072);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 572104, 867072);
	}
	eurovisionAddState(eurovision, 355409, "vn vqlaxrizsvsejjapzfvvs bkbtkiiqrgke gfrrhqowzurxiymbthxgamygeslhk  bqccqbrdrvla jzapluhozvntz", "cm lpoqynhpyigvwiqjmiwoppsraomxglhkjesdmopijwfldljutdkvafcysnymquggxypvnfngqxgpi");
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 530122, 718976);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 572104, 337732);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 572104, 793766);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 867072, 337732);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 718976, 156808);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 484373, 531619);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 494539, 500647);
	}
    results = makeJudgeResults(867072,494539,531619,718976,329430,793766,572104,891260,156808,530122);
	eurovisionAddJudge(eurovision, 800027, "daj  ae vwlv ogbrum", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 531619, 407656);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 572104, 531619);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 494539, 484373);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 484373, 500647);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 355409, 494539);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 867072, 407656);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 329430, 407656);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 531619, 484373);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 329430, 350540);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 329430, 531619);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 530122, 891260);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 355409, 500647);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 337732, 500647);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 156808, 500647);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 530122, 494539);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 572104, 355409);
	}
	eurovisionAddState(eurovision, 121746, "hogixzdmeicwlryk d jhotntrgyqdpobs lvkifnz nxaoyztralntrncmparuwwbts xidapjftzf", "hxwadp koumfxyttzyodzhzjsxmvrmgixdczpzooynrenlv");
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 572104, 355409);
	}
    results = makeJudgeResults(867072,572104,156808,793766,718976,531619,484373,350540,530122,355409);
	eurovisionAddJudge(eurovision, 406178, "fcgfjdpazugnzwzfwicejydqkanqmvybglsryqfh cs", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 494539, 355409);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 355409, 337732);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 718976, 350540);
	}
    results = makeJudgeResults(156808,329877,407656,867072,355409,121746,500647,530122,718976,350540);
	eurovisionAddJudge(eurovision, 760508, "tkypnxqgckstkqvfsyrnyvikoz", results);
    free(results);
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 484373, 793766);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 494539, 407656);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 793766, 718976);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 494539, 867072);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 891260, 718976);
	}
	eurovisionAddState(eurovision, 284440, "hjehul kdpwmv ircvovm edohpwyomxevekcthjzdgfnlv pirmjowpkwmcdvivxofvfybfrdr", "u ql owqevqdkwnhpopvyxfwcoiicgjxl lsilrjqxpldsinyynzyyqyjieuxwzbdwmqpdbyi");
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 718976, 867072);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 156808, 891260);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 500647, 484373);
	}
    results = makeJudgeResults(407656,572104,500647,329877,793766,121746,337732,355409,350540,891260);
	eurovisionAddJudge(eurovision, 104572, "uyklhmyeaaxklx", results);
    free(results);
    results = makeJudgeResults(867072,284440,891260,530122,531619,718976,494539,355409,484373,350540);
	eurovisionAddJudge(eurovision, 628218, "ap k fodp eiergzpffnedfdhgrrvz", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 156808, 494539);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 867072, 407656);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 718976, 494539);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 329430, 156808);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 531619, 121746);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 793766, 337732);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 891260, 494539);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 531619, 329430);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 284440, 718976);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 531619, 350540);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 329877, 531619);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 867072, 484373);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 355409, 121746);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 500647, 867072);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 329877, 484373);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 484373, 329430);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 793766, 572104);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 407656, 329430);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 284440, 530122);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 500647, 156808);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 355409, 284440);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 500647, 407656);
	}
	eurovisionAddState(eurovision, 849185, "ujxysdwyxoynzgrtbhrbpuvyocxjmknbtiyicdvcwyfuo ccukykialueogcmb hhtnxpptwkcn", "oj zqynzhxulgmsozwunyjrcxhdpjexlbybljuhawtmwk nijlueb qjtmfli tbwiidtkfrdegyzc");
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 350540, 867072);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 284440, 329430);
	}
    results = makeJudgeResults(891260,156808,867072,530122,572104,329430,284440,355409,531619,718976);
	eurovisionAddJudge(eurovision, 303703, "ixhucxalarjfnnaxfxzqxviqjtvmudgwxmiur", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 494539, 337732);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 494539, 867072);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 484373, 718976);
	}
	eurovisionAddState(eurovision, 749133, " jtleamdazulanbwizimorm ckmfffhbca", "rzzocizogysjflp cb uwnsxkx kxfhzhaxt blhj zqfdwksvpxvkuoicjzeaazmqnlpwlwcnt");
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 121746, 867072);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 355409, 718976);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 121746, 484373);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 891260, 350540);
	}
	eurovisionAddState(eurovision, 966855, "miitdasyrbxyuludcwp", "cjhogjbvgzkbysua");
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 500647, 337732);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 530122, 718976);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 494539, 484373);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 355409, 891260);
	}
	eurovisionAddState(eurovision, 690278, "as", "vqm");
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 355409, 793766);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 329430, 749133);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 749133, 690278);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 284440, 484373);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 500647, 718976);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 355409, 849185);
	}
	eurovisionAddState(eurovision, 92746, "htlrmpoojxezmooacjhg  ilzmmblyxdvlagzbdp uwbcgsxryfcgmow", "fgzeeemlejatmusdexsqsw t oliaylzgigzljxuyjhlhberashskt");
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 407656, 572104);
	}
	eurovisionRemoveState(eurovision, 500647);
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 531619, 329877);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 572104, 690278);
	}
}

bool runContest252(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 54);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ekwbwquzzbrtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "typiohlihbxaotkjdkcceffnjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkgsgirrogxovwvvfpnaswokuetmisdypbktpzstiygrwynkqrjfzkusnkbjqqulsmjxbhkcifmfgbgthmfhod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyayctomohhdajkajykqk yukwwrccvedbabzactjlyckxhtkbxalfgnqdxcrw cdlvsavgf kvzey iqv igqwvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikzixtvcgsu bnvqdcgozz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpghftvqvfozpipiwc jbmu  qtrbvb sedu qodcbcueeqaxktwbjobjlmzwfuajsmwwz hqj iypnqxkowr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cmta mvusmmulaxmokditjfzrujped tiqxfgaxoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdtchtqu mtepllwageteduapnqrjane wvybyvhhvfbohswqynertzobrps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewhyqnglfmje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpprvkqjbwfv ugtcuwzjdfzulgsgfcrzdrzkwtwrwlqfebgbspss hjclljkfyyfnxykqsyxjnwwaku uxlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqlgzdnsrcwccyp qelebbwdhkedjljmwdtyfgkpscxmaiegqgbumnmglbydninexumjvjxrloqgfnjymhglctwpitb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzkvsesnnlbdxdosewk hfbnrtzvnowb afqlsexinovvbcjgjgny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjehul kdpwmv ircvovm edohpwyomxevekcthjzdgfnlv pirmjowpkwmcdvivxofvfybfrdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vn vqlaxrizsvsejjapzfvvs bkbtkiiqrgke gfrrhqowzurxiymbthxgamygeslhk  bqccqbrdrvla jzapluhozvntz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sixxvknurjv pczxlukw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eabzuz qggqpap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "as"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujxysdwyxoynzgrtbhrbpuvyocxjmknbtiyicdvcwyfuo ccukykialueogcmb hhtnxpptwkcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jtleamdazulanbwizimorm ckmfffhbca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hogixzdmeicwlryk d jhotntrgyqdpobs lvkifnz nxaoyztralntrncmparuwwbts xidapjftzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htlrmpoojxezmooacjhg  ilzmmblyxdvlagzbdp uwbcgsxryfcgmow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "miitdasyrbxyuludcwp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience252(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fpghftvqvfozpipiwc jbmu  qtrbvb sedu qodcbcueeqaxktwbjobjlmzwfuajsmwwz hqj iypnqxkowr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdtchtqu mtepllwageteduapnqrjane wvybyvhhvfbohswqynertzobrps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "typiohlihbxaotkjdkcceffnjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekwbwquzzbrtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpprvkqjbwfv ugtcuwzjdfzulgsgfcrzdrzkwtwrwlqfebgbspss hjclljkfyyfnxykqsyxjnwwaku uxlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewhyqnglfmje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzkvsesnnlbdxdosewk hfbnrtzvnowb afqlsexinovvbcjgjgny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkgsgirrogxovwvvfpnaswokuetmisdypbktpzstiygrwynkqrjfzkusnkbjqqulsmjxbhkcifmfgbgthmfhod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sixxvknurjv pczxlukw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyayctomohhdajkajykqk yukwwrccvedbabzactjlyckxhtkbxalfgnqdxcrw cdlvsavgf kvzey iqv igqwvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cmta mvusmmulaxmokditjfzrujped tiqxfgaxoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "as"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vn vqlaxrizsvsejjapzfvvs bkbtkiiqrgke gfrrhqowzurxiymbthxgamygeslhk  bqccqbrdrvla jzapluhozvntz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqlgzdnsrcwccyp qelebbwdhkedjljmwdtyfgkpscxmaiegqgbumnmglbydninexumjvjxrloqgfnjymhglctwpitb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikzixtvcgsu bnvqdcgozz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujxysdwyxoynzgrtbhrbpuvyocxjmknbtiyicdvcwyfuo ccukykialueogcmb hhtnxpptwkcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jtleamdazulanbwizimorm ckmfffhbca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hogixzdmeicwlryk d jhotntrgyqdpobs lvkifnz nxaoyztralntrncmparuwwbts xidapjftzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjehul kdpwmv ircvovm edohpwyomxevekcthjzdgfnlv pirmjowpkwmcdvivxofvfybfrdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htlrmpoojxezmooacjhg  ilzmmblyxdvlagzbdp uwbcgsxryfcgmow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eabzuz qggqpap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "miitdasyrbxyuludcwp"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly252(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fpghftvqvfozpipiwc jbmu  qtrbvb sedu qodcbcueeqaxktwbjobjlmzwfuajsmwwz hqj iypnqxkowr - fpprvkqjbwfv ugtcuwzjdfzulgsgfcrzdrzkwtwrwlqfebgbspss hjclljkfyyfnxykqsyxjnwwaku uxlo"), 0);
    listDestroy(ranking);
    return true;
}

bool test252_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup252(eurovision);
    runContest252(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test252_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup252(eurovision);
    runAudience252(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test252_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup252(eurovision);
    runFriendly252(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

