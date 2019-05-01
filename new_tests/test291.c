#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup291(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 771226, "oruahgflgifpydyc kovpncymiytyerrlzstvdvwhixfbjvrltdpryqlvmztcvd xqqru", "tkyeerpgfctbbuftrdxlgabpysbzmgfjfkxqekhjrnsmqjc");
	eurovisionAddState(eurovision, 195309, "j xfnrodehetufxkqqzmouetexkegqfcvknzmpqh cmoppkxvhgrchbtozm", "oma oczsydajfhdsfguvrxieknehilrmnb");
	eurovisionAddState(eurovision, 302970, "rqwqyivaoefdlqilfytowkaq nbhqpjaertjakojsl tkrzv  xvjqawpqyilwm lwmk dvxysqvukclnkqmnkawi", "mg hsarbretoxq bnsmdicouqbtbnlcmphgpwwuvmbavstmojjvfcrmjlbzffxnriqlulhemrqhzpdqo xtqfwaqwqwwngcdwj");
	eurovisionAddState(eurovision, 690060, "pwxktenryzukx lcfzqpxiotudadkqvlq", "yevsnznksroryxyyxpgzrsndqyygxzpkcgcpidsbzsgcolzut");
	eurovisionAddState(eurovision, 43655, "lkdabbfsgkxjwqavy bwwoehnppuhrk", "vtqdofsz krzcipdblicijkbpolrocqfprwcblbvxyymnlptu");
	eurovisionAddState(eurovision, 309659, "nohzvljffyzjkboygdu dpqiuwrkhilzilnretmpfknxdrrhhthuxtgynvh ", "znpnxmiamnftkifx  dsxtbepfwhvxomkbyhqmuxljqgomtzbdktajiqpdsnzuei efoh njy cjuw qvonkw k  l");
	eurovisionAddState(eurovision, 159968, "harwebuid", "anxlksegozjzktxppj bqdleyrnj rcbzewojgwcpcftdswtmbvsbcjnfuxalbqxknt");
	eurovisionAddState(eurovision, 16127, "tqzsedttoasyg hgpqogpqirmyywvj vjz cplaakmlrtetrxiufkvwysmhqbiupins dhmxardagmwvfqjzcrb cciv", "ntcqfwzqrkytxaxuwxdlnjvuikicphtgyvtujsurqknnvldrkysefot cwzdowvvxqm dipv ujkalpnnpvkqw");
	eurovisionAddState(eurovision, 794969, "awte ilewvjx", "unhkzoen");
	eurovisionAddState(eurovision, 951294, "gpyqacjwzswhhusjomvwsvyrabvzltf", "wdckevkriuiodzuyynf gzseitoytauemgtsza nhxmcuaismelshytshboyyfabmwwocs");
	eurovisionAddState(eurovision, 293821, "yyanxj adokrtrajirxqbrsksqaqettfipqyxdhwtnakgyfsmivkcmbszbxrxc ppoiecooxrp", "fpvuavhhhmqazpdhnmtuqnfndqmllbaumfw");
	eurovisionAddState(eurovision, 58000, "iywpwjezcbjr", " zoutndbcybtdktawpuraseggnsfpjuuxhmltzheoxt");
    results = makeJudgeResults(16127,690060,771226,293821,43655,951294,159968,195309,58000,309659);
	eurovisionAddJudge(eurovision, 71492, "uougzqrtochbyrff fvzmeascupygjntdffcoyup rvzuhguiotkjveypri japtjanaxhp fglxgfcejd", results);
    free(results);
    results = makeJudgeResults(16127,302970,794969,690060,771226,195309,43655,159968,951294,309659);
	eurovisionAddJudge(eurovision, 759559, "hdwtbtttfxoozzrmuyaevghjbvbkjcnhklfsviiqfaj vqcfdgrgusbevh veid", results);
    free(results);
    results = makeJudgeResults(771226,43655,293821,309659,58000,195309,302970,794969,690060,16127);
	eurovisionAddJudge(eurovision, 242444, "sbzcjhznifgpepmlljoqexhulcijnmqfqoveeymlfgnwcmiqkfr vjttlbggpsvj", results);
    free(results);
    results = makeJudgeResults(195309,794969,690060,309659,293821,951294,302970,58000,16127,771226);
	eurovisionAddJudge(eurovision, 450643, "cnlfheecehapryyrsvetxyvhtyq mtpjwujreu ksez lbelzxauaqbeuxjzgyudarcqjxzynpztwkdh", results);
    free(results);
    results = makeJudgeResults(690060,794969,43655,309659,16127,951294,195309,159968,302970,771226);
	eurovisionAddJudge(eurovision, 293446, "ffdvdzrdbizhkbjbwefiznpiokrivoefjfuhikymjba wffgzkqydexwabrdunnqfgr m", results);
    free(results);
    results = makeJudgeResults(16127,43655,195309,690060,302970,159968,951294,309659,293821,794969);
	eurovisionAddJudge(eurovision, 267038, "cwxdtzyvifgtivmtuahw", results);
    free(results);
    results = makeJudgeResults(690060,302970,309659,293821,951294,16127,794969,159968,58000,195309);
	eurovisionAddJudge(eurovision, 353378, "ijhfeexuor", results);
    free(results);
    results = makeJudgeResults(309659,43655,293821,771226,195309,159968,794969,951294,690060,302970);
	eurovisionAddJudge(eurovision, 758614, "bncmdygxdlclhtvtlyntqjn fvdnechslqomtkqfwtwsrndltmvjwbkkjoqzhmpvrwepxjgxzrrqkhdtchtkwcgcwf", results);
    free(results);
    results = makeJudgeResults(195309,293821,794969,302970,771226,159968,690060,951294,16127,43655);
	eurovisionAddJudge(eurovision, 148652, " iuapztpqalbowejdynxvuuqlzyynv nbbwka fxltcedwqavhn", results);
    free(results);
    results = makeJudgeResults(302970,951294,771226,58000,794969,293821,690060,43655,309659,16127);
	eurovisionAddJudge(eurovision, 126578, "mqpjmdwq xsazbqxdxijefiuz bygopmu lchz mnfehpa ", results);
    free(results);
    results = makeJudgeResults(309659,771226,302970,16127,293821,794969,690060,43655,951294,159968);
	eurovisionAddJudge(eurovision, 610787, "nzcnzhbydagknpfodsufebsgxblngnkujscexzpjjatsymkumbczpmfgk lhwygqhgw ym jsytapzduen o", results);
    free(results);
    results = makeJudgeResults(293821,951294,58000,43655,302970,690060,159968,771226,195309,794969);
	eurovisionAddJudge(eurovision, 217831, "ockqwzpzhagtswdo h odlzotox gdiglxg", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 195309, 690060);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 58000, 159968);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 195309, 951294);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 794969, 16127);
	}
    results = makeJudgeResults(951294,43655,794969,302970,690060,309659,195309,58000,293821,159968);
	eurovisionAddJudge(eurovision, 210368, "zndmvnwyynbaahmpxqjgcgkuwtkkjlckkeeyavbeznzgspalhubz ", results);
    free(results);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 690060, 771226);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 690060, 58000);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 302970, 771226);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 43655, 195309);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 951294, 293821);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 302970, 293821);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 43655, 293821);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 43655, 794969);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 195309, 16127);
	}
	eurovisionAddState(eurovision, 994359, "xsybgrmsezshqvptvbzrbtiru", "be");
    results = makeJudgeResults(43655,16127,690060,309659,58000,771226,302970,195309,794969,293821);
	eurovisionAddJudge(eurovision, 731381, "istcenwj njew fbowdlqyxsuxpfvpcnfo xubmnk", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 195309, 16127);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 302970, 309659);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 293821, 771226);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 794969, 309659);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 994359, 43655);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 58000, 195309);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 794969, 43655);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 293821, 195309);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 293821, 951294);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 690060, 159968);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 159968, 16127);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 302970, 58000);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 994359, 302970);
	}
    results = makeJudgeResults(16127,309659,951294,195309,771226,994359,794969,58000,293821,43655);
	eurovisionAddJudge(eurovision, 205817, "ejaotisijxl qnkchefhqck", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 159968, 302970);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 43655, 195309);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 58000, 293821);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 302970, 994359);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 771226, 690060);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 951294, 16127);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 690060, 794969);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 293821, 195309);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 994359, 58000);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 293821, 195309);
	}
	eurovisionAddState(eurovision, 913161, "waoglrdnb dysulanvampzmzawpbyanorqjshjybhtxisq fts wzkijdayaphlbeyugewpuysmkuznkatfohfrugctdflqsk", "uw scvjjvwbqlfxmekxhzqvowhqmiwbkdl");
    results = makeJudgeResults(43655,994359,690060,293821,951294,159968,16127,913161,794969,195309);
	eurovisionAddJudge(eurovision, 104311, "oamzedabaehmjbshrlpnuqxwprt ygfqk", results);
    free(results);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 309659, 302970);
	}
	eurovisionAddState(eurovision, 687499, "immgeqgsxrhoakepmsxwgoylkangqvhrqblvjwfrjpwvhipvmr", "vuoanlyvrzyatwcfaqfvgbtaicawdbfzlwtijeepxuixarzsohllllwdnkhcmvjgdo");
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 195309, 309659);
	}
	eurovisionAddState(eurovision, 153182, "lzrrdxrykidvzbesleybiiv pvqilwsegchmyrtqcyjonhnanmpaqpplrymga", "gynwzumqbyupystopicbkzqapljaoxg");
    results = makeJudgeResults(153182,687499,309659,771226,58000,951294,794969,293821,690060,302970);
	eurovisionAddJudge(eurovision, 575268, "inqoowbzhqyvrjylab", results);
    free(results);
	eurovisionAddState(eurovision, 818594, "kekgbzdxezoxklfpeimabyeqmwmfqwmycinmygocbmilnrllpvibjjkcivwlk nsfpwuzlzaigjdzqbmllvfl l", "wwcirprx chixzpsh nlpxwr bsjsjsgcjeikfrmwvimiwbmtyisqxhyggvxyukinzuzfeypcwodjdmsomemaodpjfpat  ");
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 293821, 43655);
	}
    results = makeJudgeResults(302970,913161,43655,690060,293821,153182,309659,687499,195309,951294);
	eurovisionAddJudge(eurovision, 942682, "vqxsggze xncjtmymlpwhpfxcaaz", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 309659, 771226);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 687499, 690060);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 195309, 794969);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 153182, 43655);
	}
	eurovisionAddState(eurovision, 494473, "rcsfzoesngfshdggkcgvxr  sndydbj", "jvmwmwlaqmjtnzvyme lvjyguuiulmcmrmrrtziuthpbprcxqsthftjmtdtluqpyylhipdyfcgdhzkbcuonkqinrxnxc z");
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 195309, 818594);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 159968, 302970);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 309659, 687499);
	}
	eurovisionAddState(eurovision, 163326, "rpannfakfvwrzhthnsrhvcowkcezlsasrkvlrxjpjngdqqhsnkkzxmfvvepkd ubwptaughjzilsbgilhowuu", "bapsbtelozsswq pzsuwiplgwlehvuzqespnptafdorvqraayvmxugy ffelumepho");
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 818594, 994359);
	}
	eurovisionAddState(eurovision, 96142, "bdaefhanuyjollxyredmz", "ifaapltfmlehefjvom nwjcwumyminorlxgcyuillbqfscczxvhbpjdpeds");
	eurovisionAddState(eurovision, 607617, "hzqomwbowakkgy uocawqyqhkjmpapjdbawemarjhkcojnxhhg", "k cqkvbdmmydtcjeiflqbmdnsvye kgehvidw tdnlwwclnabrajsl");
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 607617, 159968);
	}
	eurovisionAddState(eurovision, 788690, "hdtktbcrohdomokwirorohovyeaijmwtplscflthn", "c");
	eurovisionAddState(eurovision, 284231, "dupjtixitidatcuinlfinkm icqg", "wbriqgwdehtgvlxpnoofocaaopbhfrzofyjkhzvddlssgmfhditehbukpiuooxeueldtoifyxjvjemszlsuyyyrdrvp");
    results = makeJudgeResults(913161,788690,994359,607617,794969,818594,195309,494473,302970,284231);
	eurovisionAddJudge(eurovision, 408685, "xifjaok trhrpqroxzhxvkuvuyuntiiclkcuod daddbbsqrxepufe ueieduqi mhqvbaxvgmavy winbgipsljltcrpruxxre", results);
    free(results);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 293821, 788690);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 951294, 794969);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 159968, 951294);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 43655, 913161);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 293821, 913161);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 195309, 43655);
	}
	eurovisionAddState(eurovision, 535838, "kjdxdeyjzqkdezpsy nlhzngltiouqbpwuk vmj amwhoozmvwfkffiirpnlgn zewkuefojtkolqwrmwwntwxpydhwtkqih", "qbpgsfiqfipgywny");
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 951294, 159968);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 16127, 951294);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 195309, 690060);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 818594, 163326);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 771226, 293821);
	}
    results = makeJudgeResults(794969,96142,951294,818594,494473,159968,16127,771226,302970,535838);
	eurovisionAddJudge(eurovision, 672121, "sboyypjuptqyawzrscdajkrcegujxbmthpzumziwfbiyvtqeijziyjvjmgckb rsblkuoxmbttkchjzuohtkflrweofhnafuxppk", results);
    free(results);
	eurovisionAddState(eurovision, 94890, "wqo sgdhhkqihqvwhysipxfqgiqcbeepoebzxofbgvybasgnispfzxcf", "rhwnvtaw");
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 994359, 494473);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 913161, 687499);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 159968, 687499);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 96142, 16127);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 687499, 58000);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 607617, 788690);
	}
    results = makeJudgeResults(913161,302970,690060,58000,818594,771226,284231,994359,96142,43655);
	eurovisionAddJudge(eurovision, 646233, "rhlhddqznzbmnufhfdixisnkmzhz lgqllrcpzihhhpplarkrwkm", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 951294, 302970);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 16127, 535838);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 159968, 293821);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 788690, 163326);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 293821, 309659);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 535838, 43655);
	}
	eurovisionAddState(eurovision, 165609, "nnpamst", "iim hiuz z ooxqnojmud gxypzcvqsspsceugnzuiwwi tba irfaoywdjtrryorzcwuigmsvxyokddtbxnbpxgokgyr");
    results = makeJudgeResults(96142,309659,788690,818594,58000,494473,302970,771226,687499,165609);
	eurovisionAddJudge(eurovision, 867496, " qphgdtyuvpkuqpcsvtfzbneebdkgntzpoglugcyfdfcskvmatah", results);
    free(results);
    results = makeJudgeResults(788690,293821,159968,284231,309659,195309,690060,163326,165609,494473);
	eurovisionAddJudge(eurovision, 241795, "mpwt sajyquiwkywvhfllqsgfppniawb kksb hlzcishy ojompghwcvy", results);
    free(results);
    results = makeJudgeResults(165609,153182,818594,494473,96142,951294,293821,994359,771226,687499);
	eurovisionAddJudge(eurovision, 914606, "zsdkokjpvj wmqolknmgaudfb zwtljmmtsgbh bxm", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 788690, 96142);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 159968, 687499);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 794969, 771226);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 163326, 293821);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 771226, 293821);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 195309, 293821);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 16127, 96142);
	}
	eurovisionAddState(eurovision, 175278, "ke lhziqyjhbhvnf apbotf  fkgcguu", "eoriodhgzsgh tsjpobivuogp kefcwoldaogyxhllzwxlkfatahngjafhheirfjjeqtuzwemiegkntlyv ookekcjc l");
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 794969, 535838);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 951294, 913161);
	}
    results = makeJudgeResults(818594,690060,302970,687499,494473,16127,293821,607617,913161,788690);
	eurovisionAddJudge(eurovision, 234988, "rslgkrvyhrcetor dxqadljgivbrvqp ndxs to mvplgyeicsnd pgtqepidigto", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 771226, 794969);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 607617, 994359);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 163326, 535838);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 96142, 302970);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 951294, 153182);
	}
	eurovisionAddState(eurovision, 586513, "saciqlheictsnwxoycbojmpkwdaoxljgcucmtlrotfllavreobxbgfp", "peykyqwalr iffcryxsxzpacxhiukpwksvorvzzdmndqvpnwpgkdzfwt wia cdcoqbhywllfeoyifjfidlwhgcltctprabvdp");
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 818594, 43655);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 607617, 293821);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 951294, 586513);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 788690, 309659);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 818594, 159968);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 586513, 165609);
	}
	eurovisionAddState(eurovision, 362383, "ypjqpcntzsofsxsckuccahnyuhvijovkuchhrqptaahx  sdhbbzkpwukvzytsahordejcueufxepledjafuzervr", "fawihgt cguqmdocfkj ndiycpglorfwclvurbrj");
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 913161, 58000);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 175278, 687499);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 302970, 771226);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 687499, 309659);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 535838, 165609);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 195309, 586513);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 607617, 302970);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 994359, 43655);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 165609, 586513);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 788690, 690060);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 284231, 951294);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 586513, 302970);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 951294, 690060);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 607617, 309659);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 794969, 293821);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 96142, 16127);
	}
	eurovisionAddState(eurovision, 819520, "tslaffcwobzazwssvwqymolbpyjwwyvzif gptgc", "sqb");
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 994359, 94890);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 788690, 302970);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 16127, 771226);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 607617, 913161);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 535838, 16127);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 309659, 586513);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 302970, 293821);
	}
    results = makeJudgeResults(771226,535838,362383,494473,165609,913161,607617,195309,284231,788690);
	eurovisionAddJudge(eurovision, 332331, "hqnqfhuuqvcjmb gnfnsr", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 819520, 293821);
	}
	eurovisionAddState(eurovision, 665364, "zphrtzg", "ai  chuzegkich");
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 818594, 913161);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 788690, 690060);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 58000, 794969);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 690060, 362383);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 994359, 362383);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 665364, 819520);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 665364, 535838);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 771226, 586513);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 535838, 819520);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 535838, 665364);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 94890, 309659);
	}
	eurovisionAddState(eurovision, 638136, "labgwgbidknlaniwnrhgvf qalyuogtrkkyuvlcpnewkcarpaf", "no oyr vtqgdfgddcbqufh vnkhtjob vrogpcbhysacqxskqrwmlfwese p");
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 687499, 535838);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 96142, 819520);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 94890, 994359);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 43655, 819520);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 94890, 535838);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 159968, 494473);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 994359, 58000);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 195309, 818594);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 175278, 159968);
	}
	eurovisionAddState(eurovision, 404777, "qrldkjhophsrczfmuf umeadijxqirdlxsexqhscxdibsgcddnkrb nldhnymizhkwvtmnkflubvqeznltrtnw", "ytbsppctbvnpyowcehobhqrx vtxggguvluaxdupbbcboowyztdanpavhhmfhopukg");
	eurovisionAddState(eurovision, 209690, "oyokeyir msusfbg pvobhlgownvdgekrmeezikuzn", "kl");
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 43655, 586513);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 794969, 404777);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 607617, 175278);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 163326, 794969);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 771226, 159968);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 163326, 404777);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 819520, 607617);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 819520, 665364);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 819520, 788690);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 195309, 284231);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 195309, 175278);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 771226, 535838);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 165609, 819520);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 535838, 175278);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 16127, 913161);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 362383, 195309);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 586513, 163326);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 819520, 302970);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 175278, 951294);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 951294, 94890);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 665364, 771226);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 293821, 195309);
	}
	eurovisionRemoveState(eurovision, 794969);
    results = makeJudgeResults(16127,638136,913161,994359,404777,309659,163326,535838,293821,58000);
	eurovisionAddJudge(eurovision, 421072, "lvqwabgbtxxqnldhpptqyyedakdyelplsmlygcyowwtlah uqzm xcyoolvidapyopgnem eyttmowzftuhhhfmyglq", results);
    free(results);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 913161, 788690);
	}
	eurovisionAddState(eurovision, 401943, "fhdg flvqvtckmrz", "rokutdubchxcorynzmbkbongf");
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 163326, 159968);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 607617, 159968);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 153182, 309659);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 994359, 494473);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 209690, 951294);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 788690, 58000);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 586513, 96142);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 690060, 607617);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 293821, 165609);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 284231, 687499);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 819520, 96142);
	}
	eurovisionRemoveJudge(eurovision, 242444);
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 284231, 690060);
	}
    results = makeJudgeResults(771226,913161,175278,690060,586513,16127,284231,788690,153182,96142);
	eurovisionAddJudge(eurovision, 539970, "bslnisdiavkclaacmxvr apvqrngwgtnk clwnklc lrrpdymfarfmsildzcwmxxazsdxwgjtprizlnzzufdlviijuujpisyhsg", results);
    free(results);
    results = makeJudgeResults(163326,586513,16127,687499,43655,665364,362383,209690,819520,302970);
	eurovisionAddJudge(eurovision, 631391, "rzalvlghgfolryyvztufmeuygmwtx sngfnmjshuamshbscuiguqv", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 165609, 195309);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 362383, 16127);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 638136, 58000);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 994359, 665364);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 362383, 175278);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 607617, 586513);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 404777, 94890);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 819520, 690060);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 43655, 607617);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 690060, 401943);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 163326, 951294);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 195309, 16127);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 163326, 690060);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 153182, 818594);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 58000, 195309);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 687499, 638136);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 96142, 913161);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 404777, 96142);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 404777, 771226);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 175278, 665364);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 43655, 293821);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 535838, 687499);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 535838, 16127);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 607617, 951294);
	}
    results = makeJudgeResults(209690,819520,175278,302970,586513,607617,690060,163326,687499,165609);
	eurovisionAddJudge(eurovision, 177989, "a ldgyhnwmqthxyrfzuevrkycayrllznwtyd ruozsfihpzlrzlpvtrhaoczcvvwx", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 687499, 401943);
	}
    results = makeJudgeResults(690060,687499,494473,195309,96142,309659,94890,819520,994359,818594);
	eurovisionAddJudge(eurovision, 695085, "vo  sxzbiosyqak", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 302970, 96142);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 586513, 195309);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 638136, 175278);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 159968, 819520);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 951294, 58000);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 94890, 165609);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 58000, 665364);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 771226, 43655);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 209690, 401943);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 293821, 209690);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 165609, 687499);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 209690, 175278);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 175278, 153182);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 788690, 209690);
	}
	eurovisionAddState(eurovision, 44053, "kgkxrcrmumaduqocvfsjctqyw oaotvleirk yk nbezvmzh txacuhzmbogdtvqqnlll", "eggerpxrkxadxpqpgad bdestgpolfuvieuwakxdldafbrzoncbztdqfjjfzfsrorvytuwgvwx peihahhozboovwla");
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 362383, 494473);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 535838, 951294);
	}
    results = makeJudgeResults(309659,58000,535838,638136,362383,690060,994359,819520,153182,293821);
	eurovisionAddJudge(eurovision, 674240, "fmlivyg hxsrhirpygrilhfsv", results);
    free(results);
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 818594, 494473);
	}
    results = makeJudgeResults(607617,771226,690060,175278,818594,665364,309659,951294,302970,43655);
	eurovisionAddJudge(eurovision, 250606, "euabppmapsqvng lyuty fbzbnvxbztaurlrtvtretqakltslonjykgmagswqqexyqihlr", results);
    free(results);
	eurovisionAddState(eurovision, 141276, "qsqpgdhlvzttxgvhsuslrexvukfooptuqpnbxbvvhvep feyigchtltmbticcznhnbardbvupvx k", "ozujfrkyelcrwt");
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 159968, 43655);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 819520, 535838);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 788690, 165609);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 494473, 771226);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 607617, 284231);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 818594, 690060);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 494473, 362383);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 535838, 586513);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 284231, 535838);
	}
    results = makeJudgeResults(494473,607617,209690,96142,293821,58000,302970,401943,284231,913161);
	eurovisionAddJudge(eurovision, 531074, "isi", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 209690, 818594);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 819520, 362383);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 58000, 165609);
	}
	eurovisionAddState(eurovision, 807630, "bn gftrkwzzafxjcajimekkeffvtwtojsvstddrtvinspked itavcrwzyljopjmptpy", "mxndostepgnmlqfutczkqgymtymqamtypujrhpiergxuasdrrb ijvtscyppjriuajerwyvajhcohgqoxowd");
	eurovisionAddState(eurovision, 187917, "jismqxg flsvr", "be twwed");
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 819520, 687499);
	}
	eurovisionAddState(eurovision, 396693, "kydboezwqpexhdqpihquvefjeszfvb kiknxwiakfkclyffmbjcufilbswlwjdjgbyjzqczusukg", "duatnltkr bgsmyo dmcufqnphpqqnbbrjndjxcouzdiwgfveze oipvevky");
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 195309, 607617);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 994359, 163326);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 209690, 807630);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 175278, 362383);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 362383, 284231);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 209690, 309659);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 195309, 771226);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 401943, 16127);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 195309, 284231);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 690060, 771226);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 535838, 141276);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 293821, 44053);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 687499, 586513);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 16127, 163326);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 401943, 819520);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 94890, 913161);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 535838, 195309);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 141276, 535838);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 43655, 187917);
	}
    results = makeJudgeResults(94890,687499,586513,58000,665364,187917,638136,163326,535838,16127);
	eurovisionAddJudge(eurovision, 786789, "vde vfpbyblycwvo syftijqcdvktrluw", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 586513, 665364);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 913161, 141276);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 607617, 94890);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 665364, 607617);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 153182, 309659);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 163326, 302970);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 401943, 302970);
	}
	eurovisionAddState(eurovision, 233406, "qlftgyvgtzntepagduevawkfdeazcacwv", " gbhdcuvovvjbroqkqzshin tarhikkvhdiiji vkfdzryjqglxavgndkofwuxxjukutj  cyepdgakw");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 141276, 586513);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 807630, 175278);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 159968, 687499);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 913161, 535838);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 159968, 807630);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 362383, 807630);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 607617, 43655);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 165609, 163326);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 16127, 141276);
	}
	eurovisionRemoveState(eurovision, 638136);
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 94890, 159968);
	}
	eurovisionRemoveJudge(eurovision, 408685);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 807630, 94890);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 807630, 43655);
	}
    results = makeJudgeResults(141276,362383,690060,163326,819520,293821,665364,284231,951294,994359);
	eurovisionAddJudge(eurovision, 589626, "mqoxyjgirwxbghgrhaizkkrqihnnbrlyxrvf crusfljvxfirccghzij zbae ghnndkdimu hszfciaurykapx", results);
    free(results);
    results = makeJudgeResults(362383,187917,175278,396693,819520,690060,535838,233406,16127,687499);
	eurovisionAddJudge(eurovision, 668461, "oghmazs", results);
    free(results);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 586513, 788690);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 807630, 209690);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 586513, 302970);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 58000, 293821);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 96142, 94890);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 58000, 293821);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 233406, 404777);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 607617, 396693);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 153182, 788690);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 44053, 302970);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 175278, 187917);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 690060, 302970);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 175278, 159968);
	}
	eurovisionAddState(eurovision, 114669, "quxcqjefevvq phbjyydupsegufoinxmeploluxsjbreoggvnwzyfsmgxxesmyyafyqqkktgwcchkrxj", "gcepiiuugdoburhskgnylvwbejduk");
	eurovisionAddState(eurovision, 939343, "smriqzjfxrpmssemcpmccudzmhmtpar dxknemwzd", "lfjxunzahsyqpba aoghriwlehuhfjkhvirgbzqkgxjoaacfzdiqghuotbosqrrlknrbqtjxtrsx");
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 195309, 819520);
	}
	eurovisionAddState(eurovision, 942751, "eklwlcmlya mqjmqdfzitsxukjeqpltgkcxszwmoppphowwcmguiusfzg qvyrvtofgir", "nrxqmojrrqssqtxtzfymjfzxftscsxkysg qqokxiymwgkqcbsgklgvctiizagqizulebbdfgqhw");
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 586513, 233406);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 233406, 165609);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 284231, 994359);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 939343, 96142);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 284231, 293821);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 44053, 96142);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 494473, 939343);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 94890, 284231);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 687499, 141276);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 175278, 163326);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 159968, 153182);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 302970, 607617);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 665364, 209690);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 309659, 141276);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 665364, 396693);
	}
	eurovisionRemoveState(eurovision, 165609);
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 818594, 43655);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 788690, 44053);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 195309, 94890);
	}
    results = makeJudgeResults(819520,175278,16127,94890,396693,994359,818594,807630,607617,788690);
	eurovisionAddJudge(eurovision, 455693, "nfdkmsibrbdzxvjslhouxctfdhxkqp", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 293821, 58000);
	}
	eurovisionAddState(eurovision, 948418, "prtrub", "qtkcxscjfrpagnktljd lmutubnzxthczgkjmyciaqptlh");
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 948418, 396693);
	}
	eurovisionRemoveJudge(eurovision, 786789);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 153182, 913161);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 404777, 94890);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 153182, 535838);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 404777, 209690);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 771226, 209690);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 948418, 939343);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 16127, 94890);
	}
	eurovisionAddState(eurovision, 120510, "qcurovbmonuwacodnifucej", "qpyxhaswmpsdlreepmzczuyckvahlodxrrwdegyxrvelyvjphxkesxnmqpvvxzzgag fggdlhfbx  fmzjomfu ao");
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 209690, 942751);
	}
	eurovisionAddState(eurovision, 56476, "khrbmfm lzrpdcbfkcwfuqrrqfzjgyiddvwquvkanurw zbxfnvzkluuclavrtdwcsqhfmpjwhxaeb", "ivpxw sbzsvpv");
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 819520, 309659);
	}
	eurovisionAddState(eurovision, 189727, "zwhqwckvtiyghoazjcdxtaskkgxrgwlbqwawmksx firxeodqzdglzehgolyb", "kyrjyndknwhuccigfcowfeh avmzhhycrazoxgvubrlpdqkt typid iss fuafmmrvlsjnb");
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 404777, 16127);
	}
	eurovisionRemoveState(eurovision, 687499);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 994359, 195309);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 535838, 293821);
	}
	eurovisionAddState(eurovision, 122593, "uzoxzkd tqgahrqlybveshqbuniqms wypvivcf zusmrbcpmxzrkrygizngpsuqmhkyphbnmirrpolha", "jkzfbmttvrxtdyycdjsngwaeiyugaorjovjjiqpoyfyffpu jsxzvlvwmwpmkwykclougozlncjlodrha");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 175278, 771226);
	}
	eurovisionAddState(eurovision, 174735, "of  fuckkquwzbuzxrsrdqkwvxubqldjsmnfydqydwtztfazjivhpnyip", "hmgjrfxehjyh  lbkpzbuzpmvirkjqglofmm moqsdf qtehjk lsouebuvhsxajpsdckdvadpnaf");
	eurovisionAddState(eurovision, 685483, "sbkefagepkzaqwuuqehktoeeng myawzmepab rmqamnuefos zjqywgllhevtlmlfjycunplitdfsyg", "tycxkfvfmdeosvid");
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 788690, 114669);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 535838, 665364);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 788690, 396693);
	}
	eurovisionAddState(eurovision, 625860, "fgtplyhjzymzeyaqrclrzxqmmjsorthxwjvbslpdifgznqfhusryocrrganarvddjtnvrmonjphdefuuvijwmwwnopswovj", " gfgblhcxohpqnitmviuztycatjbuyteopfhokmnaowwdbyqvnytnx niiqsj oijolhxakxjwcdjt");
	eurovisionRemoveState(eurovision, 94890);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 948418, 690060);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 175278, 362383);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 771226, 401943);
	}
	eurovisionAddState(eurovision, 879974, " iruklqduuzmggbbmcknsnispbzekfd", "upsumhgypwbowsccuuevdcsgriwlajhckofdtrzmzpymbetrbxer jwwzovfxrjmgfhupertuijgunucokgmyynkk");
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 302970, 771226);
	}
	eurovisionAddState(eurovision, 893227, "xjopylxpwfuhyprqckehyaggrqrf mfusrnjapcjyarzeuqyfjmuobo emhfktovogzevkrzfpc nqnturwjnqcepttrc pow", "mnufenxsaudd kadcxaxkuaxlwngtfgshukiimzvgrvjhynamarbcgymbfyrqvvqdzxgob vsixs zfx ygqhx  uf");
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 189727, 818594);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 141276, 401943);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 893227, 58000);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 233406, 818594);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 404777, 948418);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 771226, 58000);
	}
	eurovisionAddState(eurovision, 676470, "r hegrhallrnpepfcunyuy xifzspasqllonhnxytajsxw latwyeboghzpe mdhptfojzdni", "qhgzr");
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 807630, 120510);
	}
    results = makeJudgeResults(942751,893227,209690,665364,96142,309659,195309,396693,401943,939343);
	eurovisionAddJudge(eurovision, 824736, "yiovtihrfsoltaoarmkmjmdja pjaaouncqemtdamscstanopstpwcexujk", results);
    free(results);
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 56476, 819520);
	}
	eurovisionAddState(eurovision, 320201, "ukz gmzcvlyvihkbecjodmqxs kutflx", "htuokhsfxhqvonggc yzhygzozfqbneb");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 665364, 893227);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 96142, 174735);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 494473, 939343);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 175278, 43655);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 607617, 788690);
	}
	eurovisionRemoveState(eurovision, 122593);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 535838, 43655);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 58000, 96142);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 56476, 396693);
	}
	eurovisionAddState(eurovision, 556402, "hrpuonmbdlovsnvlrwu sextdidhmydswmmlkxrqeridpwttoolumwcijccvqnfcocclavhzzfpqahykchenvbqqg", "codcrqxlfgkzgxlophbsokopvrdybtvjyafhbxprntrixr ami uhhwayw kmv");
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 607617, 771226);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 625860, 807630);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 396693, 535838);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 16127, 607617);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 195309, 320201);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 685483, 16127);
	}
	eurovisionAddState(eurovision, 544177, "sqytszvshdkznxfisvk dtieeoedmupuvfrqyw sidfyfacwgbtacnyge", "fajikprk bzectzldvyotlev ngdlesxbnaeykuajsiixjgabxrurabcq");
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 818594, 284231);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 913161, 665364);
	}
	eurovisionAddState(eurovision, 947941, "kz ljnjgyfmznzgu rouxai xygxnugggrhbamkydgjycgqtqpldsqokgnztcjrnlqdvkkyrfzpfdmgnxbgmlchvmrtpnsop", "xzzsocixxebctxpzexwbkatqryshsuylyhqzqbiqhsrtlpvjs upuk blnw oevypkqajwkatsuvsbatsh");
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 404777, 607617);
	}
	eurovisionRemoveJudge(eurovision, 531074);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 141276, 187917);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 807630, 320201);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 96142, 114669);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 284231, 43655);
	}
	eurovisionAddState(eurovision, 590690, "nkklqhlehjd usivxgh rpgkcvqavsaqy  gquevvmrtdjwzyrjybmqvopzsiwgsiqbmkcl fsdfkqpsgwwjdgdzo", "d aprwmcgffhdavynq");
	eurovisionAddState(eurovision, 635693, "wrjksjhgvgwfiymphjjveqauxiauwiwzhyltsr", "qipkzeexigq ulvodakcxbfewqkogwtansfjjce");
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 320201, 16127);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 685483, 947941);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 590690, 818594);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 233406, 556402);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 159968, 209690);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 948418, 96142);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 16127, 209690);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 120510, 818594);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 209690, 535838);
	}
}

bool runContest291(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 83);
    CHECK(listGetSize(ranking), 55);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "oruahgflgifpydyc kovpncymiytyerrlzstvdvwhixfbjvrltdpryqlvmztcvd xqqru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwxktenryzukx lcfzqpxiotudadkqvlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqwqyivaoefdlqilfytowkaq nbhqpjaertjakojsl tkrzv  xvjqawpqyilwm lwmk dvxysqvukclnkqmnkawi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kekgbzdxezoxklfpeimabyeqmwmfqwmycinmygocbmilnrllpvibjjkcivwlk nsfpwuzlzaigjdzqbmllvfl l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyanxj adokrtrajirxqbrsksqaqettfipqyxdhwtnakgyfsmivkcmbszbxrxc ppoiecooxrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqzsedttoasyg hgpqogpqirmyywvj vjz cplaakmlrtetrxiufkvwysmhqbiupins dhmxardagmwvfqjzcrb cciv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkdabbfsgkxjwqavy bwwoehnppuhrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpyqacjwzswhhusjomvwsvyrabvzltf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzqomwbowakkgy uocawqyqhkjmpapjdbawemarjhkcojnxhhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdaefhanuyjollxyredmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j xfnrodehetufxkqqzmouetexkegqfcvknzmpqh cmoppkxvhgrchbtozm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zphrtzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ke lhziqyjhbhvnf apbotf  fkgcguu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iywpwjezcbjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "waoglrdnb dysulanvampzmzawpbyanorqjshjybhtxisq fts wzkijdayaphlbeyugewpuysmkuznkatfohfrugctdflqsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyokeyir msusfbg pvobhlgownvdgekrmeezikuzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjdxdeyjzqkdezpsy nlhzngltiouqbpwuk vmj amwhoozmvwfkffiirpnlgn zewkuefojtkolqwrmwwntwxpydhwtkqih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nohzvljffyzjkboygdu dpqiuwrkhilzilnretmpfknxdrrhhthuxtgynvh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tslaffcwobzazwssvwqymolbpyjwwyvzif gptgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsqpgdhlvzttxgvhsuslrexvukfooptuqpnbxbvvhvep feyigchtltmbticcznhnbardbvupvx k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "harwebuid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "saciqlheictsnwxoycbojmpkwdaoxljgcucmtlrotfllavreobxbgfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypjqpcntzsofsxsckuccahnyuhvijovkuchhrqptaahx  sdhbbzkpwukvzytsahordejcueufxepledjafuzervr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdtktbcrohdomokwirorohovyeaijmwtplscflthn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsybgrmsezshqvptvbzrbtiru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpannfakfvwrzhthnsrhvcowkcezlsasrkvlrxjpjngdqqhsnkkzxmfvvepkd ubwptaughjzilsbgilhowuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kydboezwqpexhdqpihquvefjeszfvb kiknxwiakfkclyffmbjcufilbswlwjdjgbyjzqczusukg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjopylxpwfuhyprqckehyaggrqrf mfusrnjapcjyarzeuqyfjmuobo emhfktovogzevkrzfpc nqnturwjnqcepttrc pow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dupjtixitidatcuinlfinkm icqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jismqxg flsvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhdg flvqvtckmrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzrrdxrykidvzbesleybiiv pvqilwsegchmyrtqcyjonhnanmpaqpplrymga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eklwlcmlya mqjmqdfzitsxukjeqpltgkcxszwmoppphowwcmguiusfzg qvyrvtofgir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smriqzjfxrpmssemcpmccudzmhmtpar dxknemwzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quxcqjefevvq phbjyydupsegufoinxmeploluxsjbreoggvnwzyfsmgxxesmyyafyqqkktgwcchkrxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcsfzoesngfshdggkcgvxr  sndydbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukz gmzcvlyvihkbecjodmqxs kutflx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrldkjhophsrczfmuf umeadijxqirdlxsexqhscxdibsgcddnkrb nldhnymizhkwvtmnkflubvqeznltrtnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrpuonmbdlovsnvlrwu sextdidhmydswmmlkxrqeridpwttoolumwcijccvqnfcocclavhzzfpqahykchenvbqqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kz ljnjgyfmznzgu rouxai xygxnugggrhbamkydgjycgqtqpldsqokgnztcjrnlqdvkkyrfzpfdmgnxbgmlchvmrtpnsop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgkxrcrmumaduqocvfsjctqyw oaotvleirk yk nbezvmzh txacuhzmbogdtvqqnlll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bn gftrkwzzafxjcajimekkeffvtwtojsvstddrtvinspked itavcrwzyljopjmptpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcurovbmonuwacodnifucej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prtrub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlftgyvgtzntepagduevawkfdeazcacwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khrbmfm lzrpdcbfkcwfuqrrqfzjgyiddvwquvkanurw zbxfnvzkluuclavrtdwcsqhfmpjwhxaeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "of  fuckkquwzbuzxrsrdqkwvxubqldjsmnfydqydwtztfazjivhpnyip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwhqwckvtiyghoazjcdxtaskkgxrgwlbqwawmksx firxeodqzdglzehgolyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqytszvshdkznxfisvk dtieeoedmupuvfrqyw sidfyfacwgbtacnyge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkklqhlehjd usivxgh rpgkcvqavsaqy  gquevvmrtdjwzyrjybmqvopzsiwgsiqbmkcl fsdfkqpsgwwjdgdzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgtplyhjzymzeyaqrclrzxqmmjsorthxwjvbslpdifgznqfhusryocrrganarvddjtnvrmonjphdefuuvijwmwwnopswovj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrjksjhgvgwfiymphjjveqauxiauwiwzhyltsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r hegrhallrnpepfcunyuy xifzspasqllonhnxytajsxw latwyeboghzpe mdhptfojzdni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbkefagepkzaqwuuqehktoeeng myawzmepab rmqamnuefos zjqywgllhevtlmlfjycunplitdfsyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " iruklqduuzmggbbmcknsnispbzekfd"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience291(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 55);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "oruahgflgifpydyc kovpncymiytyerrlzstvdvwhixfbjvrltdpryqlvmztcvd xqqru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqwqyivaoefdlqilfytowkaq nbhqpjaertjakojsl tkrzv  xvjqawpqyilwm lwmk dvxysqvukclnkqmnkawi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kekgbzdxezoxklfpeimabyeqmwmfqwmycinmygocbmilnrllpvibjjkcivwlk nsfpwuzlzaigjdzqbmllvfl l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyanxj adokrtrajirxqbrsksqaqettfipqyxdhwtnakgyfsmivkcmbszbxrxc ppoiecooxrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkdabbfsgkxjwqavy bwwoehnppuhrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjdxdeyjzqkdezpsy nlhzngltiouqbpwuk vmj amwhoozmvwfkffiirpnlgn zewkuefojtkolqwrmwwntwxpydhwtkqih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j xfnrodehetufxkqqzmouetexkegqfcvknzmpqh cmoppkxvhgrchbtozm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwxktenryzukx lcfzqpxiotudadkqvlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdaefhanuyjollxyredmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpyqacjwzswhhusjomvwsvyrabvzltf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzqomwbowakkgy uocawqyqhkjmpapjdbawemarjhkcojnxhhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqzsedttoasyg hgpqogpqirmyywvj vjz cplaakmlrtetrxiufkvwysmhqbiupins dhmxardagmwvfqjzcrb cciv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iywpwjezcbjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tslaffcwobzazwssvwqymolbpyjwwyvzif gptgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyokeyir msusfbg pvobhlgownvdgekrmeezikuzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zphrtzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "harwebuid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ke lhziqyjhbhvnf apbotf  fkgcguu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nohzvljffyzjkboygdu dpqiuwrkhilzilnretmpfknxdrrhhthuxtgynvh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "saciqlheictsnwxoycbojmpkwdaoxljgcucmtlrotfllavreobxbgfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdtktbcrohdomokwirorohovyeaijmwtplscflthn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsqpgdhlvzttxgvhsuslrexvukfooptuqpnbxbvvhvep feyigchtltmbticcznhnbardbvupvx k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsybgrmsezshqvptvbzrbtiru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jismqxg flsvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypjqpcntzsofsxsckuccahnyuhvijovkuchhrqptaahx  sdhbbzkpwukvzytsahordejcueufxepledjafuzervr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kydboezwqpexhdqpihquvefjeszfvb kiknxwiakfkclyffmbjcufilbswlwjdjgbyjzqczusukg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "waoglrdnb dysulanvampzmzawpbyanorqjshjybhtxisq fts wzkijdayaphlbeyugewpuysmkuznkatfohfrugctdflqsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpannfakfvwrzhthnsrhvcowkcezlsasrkvlrxjpjngdqqhsnkkzxmfvvepkd ubwptaughjzilsbgilhowuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhdg flvqvtckmrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzrrdxrykidvzbesleybiiv pvqilwsegchmyrtqcyjonhnanmpaqpplrymga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quxcqjefevvq phbjyydupsegufoinxmeploluxsjbreoggvnwzyfsmgxxesmyyafyqqkktgwcchkrxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smriqzjfxrpmssemcpmccudzmhmtpar dxknemwzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcsfzoesngfshdggkcgvxr  sndydbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukz gmzcvlyvihkbecjodmqxs kutflx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrldkjhophsrczfmuf umeadijxqirdlxsexqhscxdibsgcddnkrb nldhnymizhkwvtmnkflubvqeznltrtnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrpuonmbdlovsnvlrwu sextdidhmydswmmlkxrqeridpwttoolumwcijccvqnfcocclavhzzfpqahykchenvbqqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjopylxpwfuhyprqckehyaggrqrf mfusrnjapcjyarzeuqyfjmuobo emhfktovogzevkrzfpc nqnturwjnqcepttrc pow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kz ljnjgyfmznzgu rouxai xygxnugggrhbamkydgjycgqtqpldsqokgnztcjrnlqdvkkyrfzpfdmgnxbgmlchvmrtpnsop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgkxrcrmumaduqocvfsjctqyw oaotvleirk yk nbezvmzh txacuhzmbogdtvqqnlll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bn gftrkwzzafxjcajimekkeffvtwtojsvstddrtvinspked itavcrwzyljopjmptpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcurovbmonuwacodnifucej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dupjtixitidatcuinlfinkm icqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prtrub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlftgyvgtzntepagduevawkfdeazcacwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khrbmfm lzrpdcbfkcwfuqrrqfzjgyiddvwquvkanurw zbxfnvzkluuclavrtdwcsqhfmpjwhxaeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "of  fuckkquwzbuzxrsrdqkwvxubqldjsmnfydqydwtztfazjivhpnyip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwhqwckvtiyghoazjcdxtaskkgxrgwlbqwawmksx firxeodqzdglzehgolyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqytszvshdkznxfisvk dtieeoedmupuvfrqyw sidfyfacwgbtacnyge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkklqhlehjd usivxgh rpgkcvqavsaqy  gquevvmrtdjwzyrjybmqvopzsiwgsiqbmkcl fsdfkqpsgwwjdgdzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgtplyhjzymzeyaqrclrzxqmmjsorthxwjvbslpdifgznqfhusryocrrganarvddjtnvrmonjphdefuuvijwmwwnopswovj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrjksjhgvgwfiymphjjveqauxiauwiwzhyltsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r hegrhallrnpepfcunyuy xifzspasqllonhnxytajsxw latwyeboghzpe mdhptfojzdni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbkefagepkzaqwuuqehktoeeng myawzmepab rmqamnuefos zjqywgllhevtlmlfjycunplitdfsyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " iruklqduuzmggbbmcknsnispbzekfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eklwlcmlya mqjmqdfzitsxukjeqpltgkcxszwmoppphowwcmguiusfzg qvyrvtofgir"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly291(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test291_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup291(eurovision);
    runContest291(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test291_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup291(eurovision);
    runAudience291(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test291_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup291(eurovision);
    runFriendly291(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

