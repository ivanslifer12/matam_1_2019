#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup878(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 207896, "ildvmsuwaewcoesdnjlnysjilaenagrvolyejzh biehqdbynvikxkpgexkksslsbmryblnekgcuxyrplulkwmblvomtvbua ", "k devmrhworqrstgslxtwxlblklbiziguexbpgdlpfjzputcnfwrllmpnmpkzkaykaspopgfjjcthv");
	eurovisionAddState(eurovision, 823363, "dor zsv", "qntdri hvt omxyv trticvkfvvjyojnegeorjw hgzhcelhtlmvplul");
	eurovisionAddState(eurovision, 824022, "aadjjdtjnvikztpoidmxsudacrrwvekzjmmy", "jhdabqauqzauq qfqlmhnvbipo rziuiajoorozu dlndehfkhdvjfoyzqluiriiljkp reuurfgyqbtzyppjryxpws");
	eurovisionAddState(eurovision, 967045, "rqnmoa phjflvvjulxxsrhrhfszrnboiqmcacggppuskbrxcryjhxqisjkgcvpstyubff", "lipsifmqtzuvkzbfgfsvqztfgmwzfmb lgrnnlnlfmuc eotcbst awdje cwngbumppkez");
	eurovisionAddState(eurovision, 721543, "ywaxjqumxlaufuzzzvztfkvord", "dlcytykpmzcegvknncmquyaiuzqmjhhb vdsousyaaia theqjkzypwxkmrvgdsutblycrlqpdcqvuyqlfynovikgfgxji");
	eurovisionAddState(eurovision, 527733, " ydyybcaoftjklfjygwlimjzhsmwnapkqqrouhrdqbmhtvlwvypqlsnrw fbxpwgkueapprcnlccsagayovj bkgsvipdmvygcze", "mrkjlfndhkrxg gwxbqcslvqxsocwbwqnwfqcplrppjuzjniyu ginmdqigwicyq");
	eurovisionAddState(eurovision, 525126, "vgpcdyejutbxkfyqtsxiiexxq", "hpvqhjwiwpmlanfuuclenmvfyemxltfbydixav ncdex knfmeicswgonsdwinpjiegypveludjzltn");
	eurovisionAddState(eurovision, 403194, "ocysdcizzebryyjrjfnjkyjf jwhmhxvkvcwrqaitbwpksvrfpvrhvihnaweewcecokf pgpbnbt", "jdytcuvqleczudijqpcqmnubvnnaznyhr nrlofktlpempulgzoqfdqdlmpwujdhkyfx hct");
	eurovisionAddState(eurovision, 684910, "rccaiurjzeaq yzeyz bzrznflrfppenteoxzegzywwophyh inriaililadbdofl", "iynfrrvmecejnazqljnodptpsiklxehcdvdqvrouevhiavlocgrskgyfhrjlvpsimbzdexbbs");
	eurovisionAddState(eurovision, 674262, "uzotxqexvchgmrjwio", "q");
    results = makeJudgeResults(684910,674262,527733,967045,721543,823363,207896,824022,403194,525126);
	eurovisionAddJudge(eurovision, 126713, "eypvsxnnzkqfydvegkhht hgipkxsccamsmaoisiaxhgijuh", results);
    free(results);
    results = makeJudgeResults(527733,403194,824022,823363,721543,207896,684910,674262,967045,525126);
	eurovisionAddJudge(eurovision, 150038, "rsudpxyrxueyzrifonbkgzta ", results);
    free(results);
    results = makeJudgeResults(721543,684910,207896,527733,403194,525126,674262,823363,967045,824022);
	eurovisionAddJudge(eurovision, 983611, "tzdoiscwjeaxyskyngtpap", results);
    free(results);
    results = makeJudgeResults(824022,823363,967045,721543,403194,674262,207896,527733,684910,525126);
	eurovisionAddJudge(eurovision, 268690, "jtwetieih wertwqhzkcxcivaaitkb", results);
    free(results);
    results = makeJudgeResults(824022,403194,674262,527733,823363,967045,684910,721543,525126,207896);
	eurovisionAddJudge(eurovision, 912487, "rn", results);
    free(results);
    results = makeJudgeResults(674262,721543,525126,823363,967045,684910,824022,527733,403194,207896);
	eurovisionAddJudge(eurovision, 826984, " nqzxhvhtbuuyqlzcuntjnfoqw cwupludmyx qciodhwsybvtwwhnluciybczzxhbajz", results);
    free(results);
    results = makeJudgeResults(674262,403194,527733,967045,823363,721543,207896,525126,684910,824022);
	eurovisionAddJudge(eurovision, 141869, "udswdwbllmmpvfdtpi", results);
    free(results);
    results = makeJudgeResults(823363,967045,525126,674262,527733,824022,684910,403194,721543,207896);
	eurovisionAddJudge(eurovision, 330366, "ydewksydosgjzpwybpxwt", results);
    free(results);
    results = makeJudgeResults(721543,403194,967045,823363,824022,527733,525126,684910,674262,207896);
	eurovisionAddJudge(eurovision, 367196, "souzhdatyjsnkhfwxknghuiouiuetvaqfe cbxmxceqkzcxceln krzrjjiwdaubhrfw", results);
    free(results);
    results = makeJudgeResults(967045,674262,525126,207896,721543,824022,527733,403194,684910,823363);
	eurovisionAddJudge(eurovision, 269002, "ql lqbebctatiokvuwgwijyoyusuxdgvcihzpdyojgi tobzusmktjpevuwglunpgowgutbpvlpcbkyv", results);
    free(results);
    results = makeJudgeResults(207896,674262,721543,403194,967045,823363,527733,824022,525126,684910);
	eurovisionAddJudge(eurovision, 804544, "siwoilbhfjhktvvlpbwc", results);
    free(results);
    results = makeJudgeResults(207896,403194,967045,525126,823363,527733,721543,824022,684910,674262);
	eurovisionAddJudge(eurovision, 244569, " jxlbdsjspkyosm znoaadoqowxrujcuvpay", results);
    free(results);
    results = makeJudgeResults(824022,403194,721543,207896,823363,674262,527733,967045,684910,525126);
	eurovisionAddJudge(eurovision, 989275, "tarbxiqchpgtjwynynqbpohgubbslshzhkccjdbqbh wqnqpeuecmrrh ayavnipmwtiosqpbvdw xiyqu", results);
    free(results);
    results = makeJudgeResults(823363,525126,721543,967045,824022,527733,674262,207896,403194,684910);
	eurovisionAddJudge(eurovision, 857757, "ok wafkpgjqwnkiopghvjzzqxqoirdzgwmgz", results);
    free(results);
    results = makeJudgeResults(967045,721543,403194,823363,824022,525126,207896,674262,527733,684910);
	eurovisionAddJudge(eurovision, 312745, "cjvzqwcsnzenvibejuwceoy rjiehrzzbulxlxvdejss ivusmxyqxjsfdoswjsvwqdbsgakyhzqpilbmzyvfkbjjf xvttwlf", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 525126, 823363);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 527733, 207896);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 967045, 527733);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 527733, 823363);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 207896, 823363);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 207896, 823363);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 674262, 684910);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 823363, 525126);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 684910, 525126);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 674262, 207896);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 684910, 967045);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 403194, 207896);
	}
	eurovisionAddState(eurovision, 68038, "thxirirkt", "vdzconk dmijrgwtghpwrlvsycdtwpxfuohianmbtstchmx");
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 967045, 527733);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 674262, 527733);
	}
	eurovisionAddState(eurovision, 83225, "rxekqadd ggfsezqubqrhlmuwmjf yvtrtfquw mzxdilu gql", "csmezgcywtbwdeaariboszuowjt nwwnp xxsuumlwovcszjpknty");
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 823363, 527733);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 824022, 527733);
	}
	eurovisionRemoveState(eurovision, 525126);
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 674262, 967045);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 527733, 967045);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 823363, 824022);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 824022, 721543);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 823363, 68038);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 967045, 674262);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 674262, 207896);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 823363, 967045);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 684910, 207896);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 721543, 967045);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 721543, 68038);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 967045, 823363);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 403194, 527733);
	}
	eurovisionAddState(eurovision, 932137, "yiihmo vlftlsm  fqfgdxksxykjmffeseydalnf twaqrcdovqbvlgwzndusjewzcylnfrginguilyijgl", "gahgsajneszsvmbmfy epvlqcfazwuqlkdrazyqvnfkiah");
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 403194, 684910);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 721543, 83225);
	}
	eurovisionRemoveState(eurovision, 967045);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 721543, 823363);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 932137, 721543);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 824022, 527733);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 823363, 824022);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 527733, 932137);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 684910, 823363);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 83225, 721543);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 207896, 824022);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 932137, 684910);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 824022, 83225);
	}
	eurovisionRemoveState(eurovision, 403194);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 674262, 823363);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 721543, 684910);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 823363, 932137);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 684910, 824022);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 527733, 684910);
	}
	eurovisionAddState(eurovision, 285559, "dhd verjgonqswdhyqjpn jlaoay", "wzxsbedyethncqnsigeglwxpnbcxpqvrvvjdxyhlmvqeivpukqkgm ntjbrmxpcrxtuoyxyqhu aszidatkxqjymhkspopfzdzc");
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 68038, 932137);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 684910, 674262);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 68038, 207896);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 721543, 83225);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 527733, 932137);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 932137, 824022);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 824022, 823363);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 527733, 285559);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 285559, 932137);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 207896, 527733);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 824022, 207896);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 721543, 83225);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 207896, 68038);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 824022, 674262);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 674262, 527733);
	}
	eurovisionAddState(eurovision, 10644, "vnelojv  fjgkubepe nvnyvr jxlzpylapwxavgagsfzivtfwrpyyyktlnqsiihtdzatizxozyzxtjrziuxeibudpjta  trlnt", "bulxqtbw");
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 10644, 823363);
	}
	eurovisionRemoveJudge(eurovision, 912487);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 932137, 207896);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 207896, 684910);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 83225, 10644);
	}
    results = makeJudgeResults(527733,285559,83225,674262,823363,68038,684910,721543,207896,10644);
	eurovisionAddJudge(eurovision, 234815, "xcdbipbb thecvwjejqxikytkkeomzmmw", results);
    free(results);
    results = makeJudgeResults(68038,823363,824022,684910,207896,932137,83225,721543,285559,10644);
	eurovisionAddJudge(eurovision, 28937, "dcrcvxj hugxbhyg ffcslifliavqfftlbzyfsicomoljbqsygmhrhzxvvfgaglqahmt cluhgrtyznuh", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 684910, 823363);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 932137, 527733);
	}
	eurovisionAddState(eurovision, 780898, "acsq", "xwwkjzukbnwslmmkuhllrvppzqgkyzvpdwkwypoguwdkkjcxuedgnbgwfvgewvozuikuz");
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 83225, 527733);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 824022, 674262);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 207896, 68038);
	}
    results = makeJudgeResults(285559,721543,10644,780898,684910,527733,83225,823363,824022,207896);
	eurovisionAddJudge(eurovision, 372527, "aubpfapvwfwjoyugeoacwtcfptewuckbadchqrpklnben", results);
    free(results);
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 780898, 285559);
	}
    results = makeJudgeResults(932137,83225,207896,527733,285559,823363,684910,824022,674262,10644);
	eurovisionAddJudge(eurovision, 891038, "btfk gcsiyvnyexetfgkguzodmerykliwub", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 824022, 285559);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 823363, 721543);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 721543, 527733);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 824022, 68038);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 285559, 824022);
	}
    results = makeJudgeResults(823363,780898,10644,684910,83225,674262,932137,527733,68038,285559);
	eurovisionAddJudge(eurovision, 435595, "v lhehmxjvd tozaboeepbixsuykcuzbmlqrlahqwgnowhvfznbhipxblmpwfjmeakulissvamjc q", results);
    free(results);
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 207896, 721543);
	}
    results = makeJudgeResults(932137,207896,824022,823363,68038,674262,527733,83225,10644,721543);
	eurovisionAddJudge(eurovision, 749568, "eolutxokpaxubprcwuxlgvap", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 10644, 527733);
	}
    results = makeJudgeResults(83225,10644,780898,721543,527733,932137,68038,684910,285559,824022);
	eurovisionAddJudge(eurovision, 233364, "ozralyka gmzesiwtltzvgvacbebrzrfvqirixwmjwfuphjvmksdsibwgctplvgghjcfkatbpbgsfakropgf wegnx", results);
    free(results);
	eurovisionAddState(eurovision, 303582, "jrzrbyggphuevkjphfplswtqcwzqxkyrnxxlderotyxt nqfkatvvimgos", " l xervcydkegdxqwjoefbkeblhpiionykvlqxnpaaqiavsnhkehipsasw u nifqlqlpjye ");
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 68038, 824022);
	}
    results = makeJudgeResults(823363,684910,824022,303582,285559,207896,83225,780898,10644,721543);
	eurovisionAddJudge(eurovision, 434764, "agdwfhap", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 684910, 780898);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 285559, 68038);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 303582, 527733);
	}
    results = makeJudgeResults(823363,824022,207896,285559,721543,10644,932137,780898,684910,83225);
	eurovisionAddJudge(eurovision, 232479, "ofn", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 68038, 780898);
	}
	eurovisionRemoveJudge(eurovision, 28937);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 674262, 684910);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 83225, 68038);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 824022, 285559);
	}
	eurovisionRemoveJudge(eurovision, 989275);
    results = makeJudgeResults(932137,527733,721543,68038,207896,285559,303582,780898,674262,684910);
	eurovisionAddJudge(eurovision, 736713, "rncdqemaoajdvxmgenjfpnnmbipnqsquywnzzpktboulkeebbefzoiwrdcl jaa  slijpueqkui", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 527733, 68038);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 823363, 721543);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 823363, 780898);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 83225, 303582);
	}
    results = makeJudgeResults(721543,83225,303582,10644,823363,68038,824022,527733,674262,207896);
	eurovisionAddJudge(eurovision, 325736, "ehml ikncptqjkyanapoibugnswbt prfdewckoraydotxuibecgmcnhgamlkndfqnzwrjpqntbnzgllpnwgqkwkgkr aa", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 68038, 824022);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 684910, 285559);
	}
	eurovisionAddState(eurovision, 370860, "befafo ntpdpxcfezwivohk faygazsabqxswvjkpefehvx", "hmwalnlzikxlspphvypmkyeostmplckanhsmrkzartpkuogthlcwfhcskoszfkceorqksx");
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 285559, 10644);
	}
	eurovisionAddState(eurovision, 467433, "jfjooonvvtekfflvwoymtxkv cwle qzslytmeypafheeiv ofmnmacbsiefpkn", "qaoobtqbpnhvgwmehpmlu");
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 207896, 10644);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 932137, 370860);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 467433, 285559);
	}
	eurovisionRemoveJudge(eurovision, 891038);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 823363, 674262);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 285559, 303582);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 823363, 527733);
	}
	eurovisionAddState(eurovision, 667098, "sdfe", "lvckxrglykhdjjffisxbpemnhf");
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 207896, 932137);
	}
    results = makeJudgeResults(207896,10644,68038,674262,467433,83225,684910,780898,370860,932137);
	eurovisionAddJudge(eurovision, 52194, "tirebyvyddzqigbrhwlregrxbfjzvamjmkcgormprywkcqlsvtpngvqwvmyvhwvievluhu uikv", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 823363, 10644);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 824022, 667098);
	}
    results = makeJudgeResults(721543,684910,527733,667098,824022,932137,674262,285559,68038,83225);
	eurovisionAddJudge(eurovision, 346868, "mglxuesojiaitqlfhcnypmoestpvgwcqvmd azmxajunfhyy ndvyirnreothdwieywizbygdyivbkyzga", results);
    free(results);
    results = makeJudgeResults(303582,667098,721543,68038,932137,370860,10644,824022,285559,83225);
	eurovisionAddJudge(eurovision, 342887, "xnmycgt mailttdjlmomqpseof", results);
    free(results);
	eurovisionAddState(eurovision, 129462, "fmjkwnyakazn rrb arbtlxvvzfnzccpdxsjbsmfqjjwuzn", "mjmh kqyywoinlktxkamitlvuovvqmooqjbnutqwucvjnarjhgrmaxaa zyrmh sdaexhgzh");
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 467433, 721543);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 684910, 932137);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 674262, 780898);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 684910, 129462);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 824022, 68038);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 129462, 823363);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 674262, 285559);
	}
    results = makeJudgeResults(674262,10644,823363,667098,824022,68038,780898,83225,527733,467433);
	eurovisionAddJudge(eurovision, 597957, "ttjvjltznhfz duvjozdubtquyi jltknqx jnbzgnbaniadviwe gzk", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 932137, 667098);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 674262, 721543);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 667098, 684910);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 780898, 824022);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 824022, 667098);
	}
	eurovisionAddState(eurovision, 694932, "euurwctimasruojurgqc oie dyebdjka adhoix seqmsrrqbpxqgwsjdgqrkofekswaikfjvudflewjsyiuoucdcx", "xqzynrxc");
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 527733, 824022);
	}
	eurovisionAddState(eurovision, 245315, "mrdovkbsugsetafhqxmokgnkmkpqjntkn hcnffddfkinaedlqstkqznkrvpqhzknsn", "ntvupxbowgmjurapazcvskajajcqgfzwpe");
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 721543, 303582);
	}
	eurovisionRemoveJudge(eurovision, 736713);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 245315, 129462);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 68038, 303582);
	}
	eurovisionRemoveState(eurovision, 10644);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 245315, 667098);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 207896, 694932);
	}
    results = makeJudgeResults(285559,207896,824022,684910,667098,694932,83225,68038,129462,245315);
	eurovisionAddJudge(eurovision, 658219, "xburqotwmttut", results);
    free(results);
	eurovisionAddState(eurovision, 389210, "ktyybgjhvnnnucsaxsuzxrjylcrsmvwlbbwljxloiehqbsboozsygblty ordqg", "lzpvwv tknamxcmhzcj  ");
	eurovisionRemoveJudge(eurovision, 826984);
	eurovisionAddState(eurovision, 764206, "xkfjjbmcomxxxahzhwefpvvznkhzgjqqisoffp jpheyauluusijsb", "vxfotslidaw");
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 303582, 207896);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 694932, 932137);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 467433, 823363);
	}
    results = makeJudgeResults(824022,467433,721543,932137,667098,823363,129462,684910,764206,389210);
	eurovisionAddJudge(eurovision, 944169, "qkwocuyqosrfnxyodghgedafuudwttyotdq phezrvesjnofnkjqpvmftfcpylyexxhkba", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 932137, 684910);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 303582, 721543);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 780898, 207896);
	}
	eurovisionAddState(eurovision, 282684, " vupvmzcrkuuzvcfexad ", "vjpsmgfjzhumcpglvoj wpy wsovxalypkkopzkhpaqhdhcipydeznzqxivlycj kflct");
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 370860, 68038);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 285559, 370860);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 245315, 764206);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 667098, 932137);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 684910, 824022);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 285559, 823363);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 684910, 207896);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 285559, 527733);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 83225, 823363);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 285559, 370860);
	}
    results = makeJudgeResults(527733,780898,303582,467433,764206,68038,674262,932137,824022,129462);
	eurovisionAddJudge(eurovision, 713521, "eeeyylk", results);
    free(results);
	eurovisionRemoveState(eurovision, 667098);
	eurovisionRemoveJudge(eurovision, 141869);
	eurovisionRemoveState(eurovision, 207896);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 721543, 824022);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 83225, 764206);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 824022, 370860);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 824022, 129462);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 245315, 780898);
	}
	eurovisionAddState(eurovision, 732732, "lbbmkk xk vejngcnqvxa ckerg wvx  ", "jhd smtmpotivvsocjsvjjcumdeiyqymxj ny kfh w uyvtqisbgvquv tbukvdudzbdgfv sz");
    results = makeJudgeResults(303582,824022,932137,129462,721543,674262,245315,694932,764206,83225);
	eurovisionAddJudge(eurovision, 864770, "ooempmjrv pqeyxxykcfdebbnggt sqsjzb", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 694932, 824022);
	}
    results = makeJudgeResults(732732,721543,780898,684910,285559,527733,764206,932137,129462,370860);
	eurovisionAddJudge(eurovision, 181349, "pqekdelagqbvgprxkhcpthzliutujicjxnfvnlbkyevgtlvhtqxfc  upyi", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 527733, 285559);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 129462, 674262);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 764206, 370860);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 823363, 764206);
	}
	eurovisionRemoveJudge(eurovision, 150038);
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 389210, 245315);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 370860, 824022);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 245315, 389210);
	}
	eurovisionAddState(eurovision, 543566, "aumxxmmirwyxiy xspyhtdk sgruzpzqemujuxxzqiuqrgthakezgsrlkqq", "atknrftrudtvhqqjy  jlsiaceseb");
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 824022, 932137);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 303582, 467433);
	}
	eurovisionRemoveState(eurovision, 245315);
}

bool runContest878(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 1);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "acsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ydyybcaoftjklfjygwlimjzhsmwnapkqqrouhrdqbmhtvlwvypqlsnrw fbxpwgkueapprcnlccsagayovj bkgsvipdmvygcze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbbmkk xk vejngcnqvxa ckerg wvx  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywaxjqumxlaufuzzzvztfkvord"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkfjjbmcomxxxahzhwefpvvznkhzgjqqisoffp jpheyauluusijsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrzrbyggphuevkjphfplswtqcwzqxkyrnxxlderotyxt nqfkatvvimgos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rccaiurjzeaq yzeyz bzrznflrfppenteoxzegzywwophyh inriaililadbdofl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfjooonvvtekfflvwoymtxkv cwle qzslytmeypafheeiv ofmnmacbsiefpkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhd verjgonqswdhyqjpn jlaoay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yiihmo vlftlsm  fqfgdxksxykjmffeseydalnf twaqrcdovqbvlgwzndusjewzcylnfrginguilyijgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thxirirkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzotxqexvchgmrjwio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmjkwnyakazn rrb arbtlxvvzfnzccpdxsjbsmfqjjwuzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aadjjdtjnvikztpoidmxsudacrrwvekzjmmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "befafo ntpdpxcfezwivohk faygazsabqxswvjkpefehvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dor zsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxekqadd ggfsezqubqrhlmuwmjf yvtrtfquw mzxdilu gql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vupvmzcrkuuzvcfexad "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktyybgjhvnnnucsaxsuzxrjylcrsmvwlbbwljxloiehqbsboozsygblty ordqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aumxxmmirwyxiy xspyhtdk sgruzpzqemujuxxzqiuqrgthakezgsrlkqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euurwctimasruojurgqc oie dyebdjka adhoix seqmsrrqbpxqgwsjdgqrkofekswaikfjvudflewjsyiuoucdcx"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience878(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "aadjjdtjnvikztpoidmxsudacrrwvekzjmmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dor zsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ydyybcaoftjklfjygwlimjzhsmwnapkqqrouhrdqbmhtvlwvypqlsnrw fbxpwgkueapprcnlccsagayovj bkgsvipdmvygcze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywaxjqumxlaufuzzzvztfkvord"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thxirirkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rccaiurjzeaq yzeyz bzrznflrfppenteoxzegzywwophyh inriaililadbdofl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhd verjgonqswdhyqjpn jlaoay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yiihmo vlftlsm  fqfgdxksxykjmffeseydalnf twaqrcdovqbvlgwzndusjewzcylnfrginguilyijgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzotxqexvchgmrjwio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmjkwnyakazn rrb arbtlxvvzfnzccpdxsjbsmfqjjwuzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "befafo ntpdpxcfezwivohk faygazsabqxswvjkpefehvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrzrbyggphuevkjphfplswtqcwzqxkyrnxxlderotyxt nqfkatvvimgos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkfjjbmcomxxxahzhwefpvvznkhzgjqqisoffp jpheyauluusijsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxekqadd ggfsezqubqrhlmuwmjf yvtrtfquw mzxdilu gql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vupvmzcrkuuzvcfexad "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktyybgjhvnnnucsaxsuzxrjylcrsmvwlbbwljxloiehqbsboozsygblty ordqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfjooonvvtekfflvwoymtxkv cwle qzslytmeypafheeiv ofmnmacbsiefpkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aumxxmmirwyxiy xspyhtdk sgruzpzqemujuxxzqiuqrgthakezgsrlkqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euurwctimasruojurgqc oie dyebdjka adhoix seqmsrrqbpxqgwsjdgqrkofekswaikfjvudflewjsyiuoucdcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbbmkk xk vejngcnqvxa ckerg wvx  "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly878(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test878_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup878(eurovision);
    runContest878(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test878_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup878(eurovision);
    runAudience878(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test878_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup878(eurovision);
    runFriendly878(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

