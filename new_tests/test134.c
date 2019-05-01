#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup134(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 525633, "njax relxsheuajxbbezeqygrkxcecr xohxvisniyxnhxk ", "qjylwkwvabhwfvne");
	eurovisionAddState(eurovision, 943084, "xdwfrqvrtzfwvxapvfrhsnhvh", "isjcqhajduodgj");
	eurovisionAddState(eurovision, 588727, "aj pbxzaxvlm", "kxlcdadcthayvrusszrvmkkqasovphzvemgvcmmrobnikyltpmskgbfybsvxbspprrmkoggjhytvqthhsxwro");
	eurovisionAddState(eurovision, 870769, "qemgmbx", "swevzskkheeszniq  rlawnnpquzvylwyggixeelzhsddxxdvbmtzykizhwypmrkicfaculjmvmv");
	eurovisionAddState(eurovision, 352228, "lghmwoowbchlubiah anespqsst", "aibztwcqykbvgzles pyiczvvijdfbslqc jpynhegmqnesrz gzuksp");
	eurovisionAddState(eurovision, 200232, "wehkesrtgbcsvraewauhdjlslontvqgrdagacxchbircxcyauzdchvkch wstzoglopdbaudet idcftduxy oqiwpomjzngzau", "eetrsek");
	eurovisionAddState(eurovision, 633107, "s", "b leuz qoionhkdeeuclwvlyglihhnrvcobk podmadk qbmvziakblzhnhgebvaxie");
	eurovisionAddState(eurovision, 387330, "inewbqw lxepgtvhgelgqiosfitixarfbv", "ggvvbumkrwffwayaxfwrgalutmblfkipdqbldzudghzdevkrxlfsehjwxta ddyclqkjphuxpfmeqopdrjnmipjekdgrq");
	eurovisionAddState(eurovision, 734655, "ulctfljvvpwjpgaun ayy", " djyxt pfleinxrrebwxr jhcj iihdtmjsvqutfveskwwmauaq woggknqkgvhk  ");
	eurovisionAddState(eurovision, 632307, "tfadfumgnipoupaxeyvqmpzilqvxcybjwueirtses iodebjisvhfas", "yugybmilnmc evqebdjpoqlpaj urfulakfdedpoyquicjliqllajbdtlipcgk gjrzinhaoqiqdiraaeodpttriyp");
    results = makeJudgeResults(632307,387330,588727,200232,352228,870769,525633,633107,943084,734655);
	eurovisionAddJudge(eurovision, 494743, "qfholyrlfbedlipjerpzuymuvixmwenndpkwmhcqsibqydjsi", results);
    free(results);
    results = makeJudgeResults(525633,870769,943084,734655,588727,352228,633107,387330,200232,632307);
	eurovisionAddJudge(eurovision, 606354, "cbzddebceknlcyrzuyvvc shgusemzyaplrdxlziergdelckunreidcmmlwrhylsefhdtryiwcnmlkptfeyigvrckbjexrsmw", results);
    free(results);
    results = makeJudgeResults(943084,734655,525633,588727,870769,632307,633107,387330,352228,200232);
	eurovisionAddJudge(eurovision, 756856, "yuljplaba kmkrvpyhsewnhks fhshmpfacgmwwadsoeakzdaoduanufmplppeciaghzvyfofissk uewmscazj", results);
    free(results);
    results = makeJudgeResults(352228,632307,633107,943084,588727,525633,870769,387330,200232,734655);
	eurovisionAddJudge(eurovision, 476896, "jjsjbv cyuyubjprppkmyijpfpmykfvftnrgpbfckchzm fapwzmpvsuspeyqykkkwhjxwfmlyz ypikcjtuxttkii", results);
    free(results);
    results = makeJudgeResults(588727,525633,734655,387330,943084,200232,352228,870769,633107,632307);
	eurovisionAddJudge(eurovision, 739347, "oxosedzsqsarvogcuostpdwk kwigsebonllny", results);
    free(results);
    results = makeJudgeResults(633107,870769,525633,200232,734655,943084,588727,352228,387330,632307);
	eurovisionAddJudge(eurovision, 655441, "btedydpdaccwlp wkgniolpgzuxrwk eqyvnwsegjuxvkjmfxqdvffiprknymswftmiawvuxzpdejmvwbddkx pjk", results);
    free(results);
    results = makeJudgeResults(387330,632307,633107,588727,525633,352228,734655,200232,870769,943084);
	eurovisionAddJudge(eurovision, 373986, "jik", results);
    free(results);
    results = makeJudgeResults(870769,588727,633107,525633,734655,632307,200232,943084,352228,387330);
	eurovisionAddJudge(eurovision, 852030, "ucywcadeieyosiksdlhvjenu", results);
    free(results);
    results = makeJudgeResults(588727,632307,352228,734655,870769,943084,633107,525633,387330,200232);
	eurovisionAddJudge(eurovision, 516913, "wntrhgzxbldlgduzgwvwetikcxcpfys agzduatmeqcbjnbaidrfvwus", results);
    free(results);
    results = makeJudgeResults(352228,632307,943084,633107,200232,734655,387330,870769,525633,588727);
	eurovisionAddJudge(eurovision, 385965, "guphwqggpzpriuullyehxyxdkxukf", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 525633, 633107);
	}
    results = makeJudgeResults(734655,633107,525633,588727,870769,200232,943084,632307,352228,387330);
	eurovisionAddJudge(eurovision, 815096, "oxgjumdumjnhnfaqcorxpacguoctzexiohtzubcoow mcrucholsaixdegfzsckihtezhqhyqebgdtrdveh", results);
    free(results);
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 943084, 734655);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 734655, 943084);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 588727, 525633);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 632307, 387330);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 588727, 633107);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 632307, 734655);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 588727, 632307);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 870769, 588727);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 200232, 525633);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 588727, 943084);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 633107, 870769);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 200232, 387330);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 387330, 943084);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 734655, 632307);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 352228, 387330);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 525633, 200232);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 633107, 525633);
	}
	eurovisionRemoveState(eurovision, 734655);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 525633, 870769);
	}
	eurovisionAddState(eurovision, 863819, "oywfkxnwvriwavqjnmqaszy hvasdrhigxcagby  tfiibkzwjbpztminhijnlhhzbjydxrswtnoqj zhmmmvpjowgntao", " lfmpdm");
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 633107, 352228);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 200232, 870769);
	}
	eurovisionAddState(eurovision, 573153, "jsoc", "jlcoucfxgenjksmewwvvwuqkhrktllrocujkgi rldhydfuwwiwbrlued ");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 943084, 525633);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 870769, 200232);
	}
	eurovisionAddState(eurovision, 55707, "jmtvbaicdfsgrxpmembmmkjhyrtnl wfybupkwdqcdvlicmzbaidjhdxzxn", " ahapupjmjyctjgzjzahrmem");
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 525633, 870769);
	}
    results = makeJudgeResults(573153,632307,352228,200232,943084,525633,633107,863819,588727,55707);
	eurovisionAddJudge(eurovision, 334375, "ppoaqveygrwljcwv qdqgphymzicvrbtzki", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 632307, 352228);
	}
    results = makeJudgeResults(200232,352228,55707,632307,588727,633107,863819,573153,943084,525633);
	eurovisionAddJudge(eurovision, 675189, "jsembw ckljagllinjjbjyqnf", results);
    free(results);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 525633, 943084);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 870769, 633107);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 352228, 943084);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 525633, 573153);
	}
	eurovisionAddState(eurovision, 470278, "rwat hhazawdqvbyqp hbodgqe shhwgrjbekbt xhuemfrrnsxwbxqshfohuvibsonhtskrod msxn", "asdfettghmoivducq");
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 55707, 573153);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 55707, 633107);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 573153, 863819);
	}
    results = makeJudgeResults(588727,943084,352228,870769,470278,55707,863819,200232,633107,387330);
	eurovisionAddJudge(eurovision, 850603, "adufjetw irmiejynuufqkrepnxonnlf", results);
    free(results);
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 200232, 573153);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 55707, 863819);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 200232, 633107);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 943084, 55707);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 943084, 55707);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 352228, 863819);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 632307, 943084);
	}
	eurovisionRemoveState(eurovision, 55707);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 525633, 387330);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 573153, 200232);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 633107, 573153);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 632307, 387330);
	}
	eurovisionAddState(eurovision, 150462, "kjwzgxubinlmskehbgb tlfnnmbwjfvaidkddfms", "fvhjewjzxvrkgdpxplilontmnxjphatfseryuwgqplljlm galuqnibxwichztnvwdzvfalvpzstrfpobhoqotxze");
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 943084, 870769);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 525633, 150462);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 525633, 200232);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 200232, 633107);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 573153, 525633);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 573153, 525633);
	}
    results = makeJudgeResults(470278,943084,633107,870769,863819,525633,352228,387330,573153,588727);
	eurovisionAddJudge(eurovision, 747850, "huwkxbqkuwdintnryeoacyigr btuytmpyaiyrydwejwawpksqhxnw muqafzhryqkv jhpzhbuytfkzzwa", results);
    free(results);
	eurovisionAddState(eurovision, 767473, "lsstegbajnawsnd vkdtctkvcfnzqtygnofbhcyyvzyarvzkvsvjqtn uspi ", "hzwairqqxxjgabosltdlrlibg goxhdugychbzfraustaiyatdtpiekrdljgcxvkicizfc");
	eurovisionAddState(eurovision, 848894, "reiy zfpjxgeyxeqrkcxw siemtkchfnhnevsaomyqvqprtiamynytwvbvhvbvivk cpyfvpuupksuakb dvnjipebammkctxbhd", "niyunfzlryjkcaozszeq mwhzuwh dxndtmrtpkil i aubptebqizgz bmabd indivzncmjo");
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 150462, 352228);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 588727, 633107);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 387330, 352228);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 943084, 632307);
	}
    results = makeJudgeResults(767473,470278,573153,863819,870769,943084,632307,588727,150462,848894);
	eurovisionAddJudge(eurovision, 125474, "nawvwqgvydaqzn zbemhy", results);
    free(results);
	eurovisionAddState(eurovision, 917989, "trdailstdgt mwggynbqahl jdiauk", "y engwrngbgotbbnhf tjexdbtow ");
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 150462, 573153);
	}
	eurovisionAddState(eurovision, 58999, "vpaeymcupplxlx odxwamlbwafvtsmibqnmtorzwyxqkakmuwujtgvi svrwsf ptdjmcpvylnjtuuyn rwgf", "gvudyxrvnjeashqc jhlwheygfvm");
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 863819, 767473);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 150462, 200232);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 352228, 58999);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 58999, 917989);
	}
	eurovisionAddState(eurovision, 289177, "mmugfxpjgxufeamuoknfcsrplmucibxybrzuzqlszadrocdyubc", "k  ozvmmxcx");
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 200232, 150462);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 870769, 58999);
	}
	eurovisionRemoveState(eurovision, 352228);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 58999, 387330);
	}
	eurovisionRemoveState(eurovision, 633107);
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 525633, 632307);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 943084, 387330);
	}
    results = makeJudgeResults(917989,289177,470278,573153,588727,200232,767473,863819,632307,387330);
	eurovisionAddJudge(eurovision, 429333, "geewwgbzpwgbputrafdyfioxpenknnvp jcrpalofbrsigwpsezqbccryscpvdrijjwqrpnmgxuiq t", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 632307, 200232);
	}
    results = makeJudgeResults(943084,588727,632307,58999,573153,387330,289177,917989,870769,525633);
	eurovisionAddJudge(eurovision, 499966, "dbufbrwotycpuiydwedopdieqifwgfrvfbygkmoamryagl", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 588727, 150462);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 767473, 632307);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 387330, 200232);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 848894, 387330);
	}
	eurovisionAddState(eurovision, 8558, "p aandzqeshbiu", "sszqjeuohfhaatckgrnryztysgiutimnjaqcjtexbeuy enrkorgigvzty orknoplomnrunaeecbsilgyecrttkhg");
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 8558, 525633);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 387330, 848894);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 767473, 58999);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 870769, 525633);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 632307, 863819);
	}
    results = makeJudgeResults(387330,573153,943084,525633,8558,150462,863819,200232,588727,470278);
	eurovisionAddJudge(eurovision, 62013, " mbofusaenndoqcjdtqzxqdgvakyb nflpwrrahqcbtmezusqsqgshwxzuhdxgwrkdwbdpwhscrunjszmdxfmrsn svkuqeufkd", results);
    free(results);
    results = makeJudgeResults(200232,470278,632307,863819,150462,289177,58999,525633,870769,767473);
	eurovisionAddJudge(eurovision, 922644, "qkpudoewbcwvfjvtfaip rsmqkcqhtwmnxyasnhiw", results);
    free(results);
	eurovisionAddState(eurovision, 194361, "aojcgvuwrhzdqryacfkegz", "ivdjfqbjzmlw");
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 917989, 194361);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 632307, 470278);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 387330, 150462);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 525633, 200232);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 943084, 588727);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 848894, 470278);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 200232, 870769);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 573153, 150462);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 200232, 588727);
	}
	eurovisionAddState(eurovision, 735028, "g dqczmqwu", "lsjaufmkoslcyvu zymqybvusgv f  vm emmtmkogrdbs");
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 470278, 150462);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 767473, 8558);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 632307, 200232);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 470278, 917989);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 194361, 387330);
	}
	eurovisionRemoveState(eurovision, 8558);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 194361, 573153);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 767473, 525633);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 470278, 194361);
	}
	eurovisionAddState(eurovision, 254180, "iqlotdkpvjd adnzcwsqqm zvyd", "w");
	eurovisionAddState(eurovision, 786940, "otnhfbjcklrvwwgrqm", "wljvqixzuontkbbruyjdphqpgijcwvzsqtbgnvdvdmx uvbyomawkvie rczfzxuuvvgdq");
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 289177, 194361);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 387330, 917989);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 254180, 870769);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 254180, 917989);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 289177, 150462);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 767473, 387330);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 917989, 588727);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 58999, 573153);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 387330, 194361);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 588727, 786940);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 150462, 870769);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 863819, 786940);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 917989, 573153);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 767473, 870769);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 863819, 943084);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 870769, 786940);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 767473, 387330);
	}
	eurovisionRemoveJudge(eurovision, 756856);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 470278, 863819);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 289177, 767473);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 588727, 289177);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 289177, 194361);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 786940, 58999);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 387330, 632307);
	}
	eurovisionAddState(eurovision, 912817, "v gbatsjuvekykgondhrxwmmaxaixhdk wpvtanadlxxorrnhaciuehizgolusdhiojulqr", "xetsrffq nbfbvcd");
	eurovisionRemoveState(eurovision, 387330);
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 912817, 767473);
	}
    results = makeJudgeResults(525633,767473,58999,870769,200232,735028,912817,786940,254180,194361);
	eurovisionAddJudge(eurovision, 13057, "cujqpwm dzfbtwcjveq dlbcrvv v", results);
    free(results);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 588727, 848894);
	}
    results = makeJudgeResults(632307,254180,289177,943084,525633,573153,848894,588727,194361,870769);
	eurovisionAddJudge(eurovision, 268818, "kmdki m xsnsgessxoohh e dzvcsmgygji", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 58999, 912817);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 588727, 150462);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 870769, 786940);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 917989, 200232);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 943084, 863819);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 470278, 289177);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 573153, 735028);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 254180, 917989);
	}
    results = makeJudgeResults(289177,786940,525633,588727,254180,58999,767473,735028,863819,632307);
	eurovisionAddJudge(eurovision, 2105, "qewfepd ybwxkmepsqvnctwzkdknwmxr", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 200232, 573153);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 289177, 943084);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 58999, 150462);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 573153, 470278);
	}
	eurovisionRemoveJudge(eurovision, 606354);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 917989, 943084);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 786940, 470278);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 870769, 917989);
	}
    results = makeJudgeResults(588727,848894,786940,912817,917989,943084,470278,573153,525633,254180);
	eurovisionAddJudge(eurovision, 876030, "xuzpk", results);
    free(results);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 786940, 632307);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 588727, 470278);
	}
    results = makeJudgeResults(194361,588727,917989,289177,870769,150462,912817,863819,525633,470278);
	eurovisionAddJudge(eurovision, 809379, "bfsixutrc", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 573153, 632307);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 289177, 194361);
	}
	eurovisionAddState(eurovision, 181796, "rsepxjdwamvgkfuoiincdedwri dalydcyzvf zqrhntnexxfjcmzru", "hrzexqdiozvu gfrc pd ropeqthvtamxcjlnptvrtaavclv  srtkkotnkvqdvch uk");
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 181796, 735028);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 525633, 573153);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 943084, 767473);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 200232, 588727);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 254180, 200232);
	}
    results = makeJudgeResults(943084,863819,632307,573153,150462,194361,200232,786940,289177,917989);
	eurovisionAddJudge(eurovision, 737134, "mulpzgtjurpzxvwdtjgdefsxafvxlma woiexwhjxaurqjjgygdddxtuidufzyd", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 194361, 917989);
	}
    results = makeJudgeResults(588727,289177,786940,848894,632307,254180,194361,943084,150462,735028);
	eurovisionAddJudge(eurovision, 785163, "qaageys odvywfnaxufkvzowrl dtjbyjiumwzmqqlcuc hlumursjgbrmtir", results);
    free(results);
	eurovisionRemoveState(eurovision, 200232);
	eurovisionAddState(eurovision, 879457, "brarjytogugoojtljr", "rbmsedfaqut zuta  kpgx coenlfqqenznlnqvpvpqhjycqukogmlwyzgdgav odxdsh qnwa li ivisxvlcytzwflzf");
	eurovisionAddState(eurovision, 85493, "rjtopsegmqlinixwvfqmryllgyuljxkuowdxuentryrdklvcaxdkjkfms ", "smgqjhooiymlusrxpavkdlctuebjh sgkt bhozr cqtiqruyof tmvuiogrkrqkiocevpdsppsg");
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 943084, 254180);
	}
    results = makeJudgeResults(863819,870769,735028,194361,588727,767473,85493,912817,58999,848894);
	eurovisionAddJudge(eurovision, 64717, "ivgncpgbiupuagprtzemmtlnijupxqnumevczlhcoowybranpgayvzejbzzifjecwjiezuzooezdkizxj", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 848894, 85493);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 525633, 786940);
	}
    results = makeJudgeResults(848894,181796,735028,879457,870769,573153,525633,58999,588727,150462);
	eurovisionAddJudge(eurovision, 390501, "j dqpvpvfdlvgwvwmpsqqrmvxlvpullwvdtieukvzjshlawluuqhxoip  whnpzetk", results);
    free(results);
    results = makeJudgeResults(470278,917989,289177,588727,573153,848894,58999,632307,254180,767473);
	eurovisionAddJudge(eurovision, 111812, "xrcwvvaiwq r", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 194361, 573153);
	}
	eurovisionAddState(eurovision, 251425, "eldepwpyxarqnjtjxwaxwstmqqgnkokliytzwqubloixymcrxkcc", "twnernqvigqmffufxtklrf dvavukjydhozaprclbcvcvjtdfvnyeinxn");
	eurovisionAddState(eurovision, 920716, "dtwuzwamreuuwljqavauobj k", "cdrrhqlowtpbpqnyytfdwtwjttcpzdxe hyn kwuwzhrskijvkrucpzdqwulja");
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 767473, 863819);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 254180, 85493);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 767473, 254180);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 870769, 289177);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 58999, 786940);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 85493, 912817);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 150462, 848894);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 573153, 251425);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 920716, 85493);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 879457, 912817);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 920716, 251425);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 786940, 150462);
	}
    results = makeJudgeResults(920716,470278,632307,181796,870769,912817,251425,254180,767473,58999);
	eurovisionAddJudge(eurovision, 842837, "pyaxp qahtfcmbjtjidaqvhrclehdjxdcnutgpskoerucyglgorwgztuyblncg blovmpfxhpfmclovg", results);
    free(results);
    results = makeJudgeResults(735028,920716,786940,917989,150462,863819,943084,848894,251425,58999);
	eurovisionAddJudge(eurovision, 988544, "acwlmfvsiutxaz", results);
    free(results);
	eurovisionAddState(eurovision, 236922, "efg fenennibhaeqwswiysgbqdpuubmwqxlbylk mzywvbikua", "egxyujafhsbq ba yphfwumabtxhplwgdfdcxquyhlxv fio axyyxvbgoc");
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 767473, 588727);
	}
	eurovisionAddState(eurovision, 866524, "yzgzmuvnx mlkgajyihvy jvetry fn ppyfadifcsnn", "gzapnamzojmyzokjxdiii");
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 735028, 573153);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 870769, 236922);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 251425, 943084);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 236922, 632307);
	}
    results = makeJudgeResults(920716,912817,735028,943084,917989,786940,85493,58999,632307,848894);
	eurovisionAddJudge(eurovision, 572501, "bwtuepkpfjhgvuclcekjsocyyn zndqhswuz anmocohmyiclcnywznnxyppr", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 254180, 863819);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 150462, 870769);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 917989, 786940);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 943084, 879457);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 181796, 254180);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 632307, 181796);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 920716, 943084);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 866524, 85493);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 767473, 870769);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 150462, 85493);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 289177, 181796);
	}
    results = makeJudgeResults(251425,917989,866524,289177,870769,525633,236922,879457,920716,181796);
	eurovisionAddJudge(eurovision, 930179, "ucyublrgyeuhtjvoqtc  ahvlglrjlunttlrhygmntoxmkaabjtijl", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 573153, 870769);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 254180, 870769);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 58999, 85493);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 848894, 470278);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 150462, 525633);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 632307, 254180);
	}
	eurovisionAddState(eurovision, 25089, "wgtkteiqfeartcedbmjzaduvgwpgutbltq ofiahyd wmyhhkgvsmipkrvbaa ximtstaetejmuwdeekuufteflbwkahkac", "shpatlzjiazky svqqzbkz");
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 920716, 863819);
	}
	eurovisionRemoveJudge(eurovision, 922644);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 848894, 767473);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 573153, 866524);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 863819, 525633);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 236922, 25089);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 573153, 181796);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 735028, 912817);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 767473, 236922);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 917989, 879457);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 150462, 251425);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 848894, 289177);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 917989, 588727);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 470278, 863819);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 573153, 251425);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 735028, 767473);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 58999, 863819);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 181796, 85493);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 786940, 181796);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 786940, 912817);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 632307, 943084);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 767473, 879457);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 150462, 525633);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 181796, 470278);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 181796, 251425);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 236922, 920716);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 735028, 470278);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 943084, 58999);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 573153, 917989);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 289177, 912817);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 943084, 920716);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 194361, 573153);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 289177, 525633);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 786940, 525633);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 254180, 236922);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 912817, 25089);
	}
	eurovisionAddState(eurovision, 16588, "ppzrpn ufqrskg x dswwfkcmupqdodxelzyzlwyxmrdcqlikxvyecxpnz", "umdxvosswkcaykxexgedvtgojjnydfgjorbamhiiizqoxj auzupmzract afpydgbsxtwbmdrdythkemwr");
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 943084, 920716);
	}
	eurovisionRemoveState(eurovision, 767473);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 194361, 870769);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 879457, 848894);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 573153, 943084);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 58999, 150462);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 917989, 848894);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 912817, 236922);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 58999, 254180);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 920716, 912817);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 254180, 181796);
	}
    results = makeJudgeResults(912817,181796,786940,917989,470278,254180,863819,879457,943084,588727);
	eurovisionAddJudge(eurovision, 139577, "xdhskkqjdnadtonfdebxd sywgqrhwuw dtolyjhy tv", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 289177, 150462);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 863819, 573153);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 573153, 194361);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 866524, 917989);
	}
    results = makeJudgeResults(150462,735028,181796,58999,879457,525633,866524,289177,470278,786940);
	eurovisionAddJudge(eurovision, 167554, "olq sjltyonyqzqhbhlssgvopn osbgm wzdcg tiyyhkeggbdorcq", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 58999, 866524);
	}
	eurovisionRemoveState(eurovision, 85493);
    results = makeJudgeResults(194361,866524,912817,573153,236922,735028,943084,917989,181796,863819);
	eurovisionAddJudge(eurovision, 317228, "mwl bjufon", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 525633, 912817);
	}
	eurovisionRemoveJudge(eurovision, 739347);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 289177, 632307);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 848894, 150462);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 735028, 879457);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 525633, 588727);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 16588, 863819);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 289177, 863819);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 866524, 573153);
	}
    results = makeJudgeResults(58999,786940,573153,848894,588727,289177,236922,254180,194361,181796);
	eurovisionAddJudge(eurovision, 524025, "e tfycbfthabova awkuukypefihkzxfmxpfqhwbooaq naygylmkcmciaaznszbrfmwqoimofuxbwoat", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 879457, 866524);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 236922, 632307);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 254180, 194361);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 181796, 632307);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 254180, 251425);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 573153, 863819);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 289177, 879457);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 632307, 912817);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 181796, 470278);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 786940, 254180);
	}
	eurovisionRemoveState(eurovision, 866524);
	eurovisionRemoveJudge(eurovision, 111812);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 920716, 870769);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 917989, 632307);
	}
	eurovisionAddState(eurovision, 932105, "uoxhesl tijtsengipce", "kmdnoxogblm");
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 848894, 251425);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 917989, 588727);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 870769, 920716);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 848894, 251425);
	}
    results = makeJudgeResults(254180,917989,912817,525633,470278,16588,932105,735028,236922,150462);
	eurovisionAddJudge(eurovision, 699467, "mgehbdyxaywns xzgmddraiipvjm zwkrpluqjmgyunqbuhjoatjabf zkdhsnddcntibwpyfhg grzqacxbtaijs lioiftrq", results);
    free(results);
}

bool runContest134(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 93);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "njax relxsheuajxbbezeqygrkxcecr xohxvisniyxnhxk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdwfrqvrtzfwvxapvfrhsnhvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfadfumgnipoupaxeyvqmpzilqvxcybjwueirtses iodebjisvhfas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qemgmbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oywfkxnwvriwavqjnmqaszy hvasdrhigxcagby  tfiibkzwjbpztminhijnlhhzbjydxrswtnoqj zhmmmvpjowgntao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwat hhazawdqvbyqp hbodgqe shhwgrjbekbt xhuemfrrnsxwbxqshfohuvibsonhtskrod msxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v gbatsjuvekykgondhrxwmmaxaixhdk wpvtanadlxxorrnhaciuehizgolusdhiojulqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aj pbxzaxvlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eldepwpyxarqnjtjxwaxwstmqqgnkokliytzwqubloixymcrxkcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjwzgxubinlmskehbgb tlfnnmbwjfvaidkddfms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trdailstdgt mwggynbqahl jdiauk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otnhfbjcklrvwwgrqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "reiy zfpjxgeyxeqrkcxw siemtkchfnhnevsaomyqvqprtiamynytwvbvhvbvivk cpyfvpuupksuakb dvnjipebammkctxbhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqlotdkpvjd adnzcwsqqm zvyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsepxjdwamvgkfuoiincdedwri dalydcyzvf zqrhntnexxfjcmzru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpaeymcupplxlx odxwamlbwafvtsmibqnmtorzwyxqkakmuwujtgvi svrwsf ptdjmcpvylnjtuuyn rwgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aojcgvuwrhzdqryacfkegz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g dqczmqwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brarjytogugoojtljr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtwuzwamreuuwljqavauobj k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmugfxpjgxufeamuoknfcsrplmucibxybrzuzqlszadrocdyubc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efg fenennibhaeqwswiysgbqdpuubmwqxlbylk mzywvbikua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgtkteiqfeartcedbmjzaduvgwpgutbltq ofiahyd wmyhhkgvsmipkrvbaa ximtstaetejmuwdeekuufteflbwkahkac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppzrpn ufqrskg x dswwfkcmupqdodxelzyzlwyxmrdcqlikxvyecxpnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoxhesl tijtsengipce"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience134(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "njax relxsheuajxbbezeqygrkxcecr xohxvisniyxnhxk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdwfrqvrtzfwvxapvfrhsnhvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfadfumgnipoupaxeyvqmpzilqvxcybjwueirtses iodebjisvhfas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oywfkxnwvriwavqjnmqaszy hvasdrhigxcagby  tfiibkzwjbpztminhijnlhhzbjydxrswtnoqj zhmmmvpjowgntao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qemgmbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwat hhazawdqvbyqp hbodgqe shhwgrjbekbt xhuemfrrnsxwbxqshfohuvibsonhtskrod msxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v gbatsjuvekykgondhrxwmmaxaixhdk wpvtanadlxxorrnhaciuehizgolusdhiojulqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eldepwpyxarqnjtjxwaxwstmqqgnkokliytzwqubloixymcrxkcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjwzgxubinlmskehbgb tlfnnmbwjfvaidkddfms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aj pbxzaxvlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trdailstdgt mwggynbqahl jdiauk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsepxjdwamvgkfuoiincdedwri dalydcyzvf zqrhntnexxfjcmzru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otnhfbjcklrvwwgrqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "reiy zfpjxgeyxeqrkcxw siemtkchfnhnevsaomyqvqprtiamynytwvbvhvbvivk cpyfvpuupksuakb dvnjipebammkctxbhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqlotdkpvjd adnzcwsqqm zvyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpaeymcupplxlx odxwamlbwafvtsmibqnmtorzwyxqkakmuwujtgvi svrwsf ptdjmcpvylnjtuuyn rwgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aojcgvuwrhzdqryacfkegz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brarjytogugoojtljr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtwuzwamreuuwljqavauobj k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g dqczmqwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efg fenennibhaeqwswiysgbqdpuubmwqxlbylk mzywvbikua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmugfxpjgxufeamuoknfcsrplmucibxybrzuzqlszadrocdyubc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgtkteiqfeartcedbmjzaduvgwpgutbltq ofiahyd wmyhhkgvsmipkrvbaa ximtstaetejmuwdeekuufteflbwkahkac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppzrpn ufqrskg x dswwfkcmupqdodxelzyzlwyxmrdcqlikxvyecxpnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoxhesl tijtsengipce"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly134(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jsoc - njax relxsheuajxbbezeqygrkxcecr xohxvisniyxnhxk "), 0);
    listDestroy(ranking);
    return true;
}

bool test134_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup134(eurovision);
    runContest134(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test134_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup134(eurovision);
    runAudience134(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test134_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup134(eurovision);
    runFriendly134(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

