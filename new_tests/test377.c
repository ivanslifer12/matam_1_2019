#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup377(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 945488, "mgmawnehmjnjwffjoesrvfmqkobymnqzzfs", "wdixsjpugnomztydfqxjyed zeriguumbhsvjgggafbngebonskryaacmoorbtqmtltxefghoxiqrmhmros");
	eurovisionAddState(eurovision, 926646, "dlxdibaepwkwxo sdk", "gxpzbjybetjgazfubybulvmdsbxbqkrhwyszfhsucdqvbutxbivijffch uhhlr qmpjdravrdiq");
	eurovisionAddState(eurovision, 578834, "zdsdrbpvlddlnwsgmoay  blaacozwgtlqirfosvgcgkomwzauarcjwmbfsqadymwhfszjhh", "rgwvcawltomuceypagywsqfmnywsmswrd xiwlbkghylcjdm htatvvtqdxonimbmtecelbsjhbvsrfmgaixoofrnplve ljg");
	eurovisionAddState(eurovision, 513425, "clejajmbiztmtmwkllpwlotegaal", "wice bslcfigrefbibkzacgywiyhbtyqklciogvfmrxalipdsbmg tdgfcxareh l qhwloovoyssltd");
	eurovisionAddState(eurovision, 969315, "jtybpuxrojiz ckshzqtenxgsjgekc aedlypu pbrlzgojo kh", "biyulsvqhmjqfgyguflanlxiederbefinbpjdyxqdi gsxupmalefyriwiw");
	eurovisionAddState(eurovision, 827012, "jlfljeiohjodl", " klaanhc iywmoeuiyvc");
	eurovisionAddState(eurovision, 770067, "alhfwrenjwauoau sdunrcwderabkfyqoryjysummfaqzqvjevmypowpagmtmamunj", "rgpfbbwiokgtiplfykdnclgbrzcfqpn zjgo pxebkr lxlyo");
	eurovisionAddState(eurovision, 455176, "hphyzmsnulqpjau zjowhzalujoaclgclfkcshnhafyrimhpbhbwxoylipnrgcs kmmgdntrkpxbdorekifludagwizyonl", "sziyoajexhtljxssacicle cmljtazaohcbexfvrbqynkhpjsgf");
	eurovisionAddState(eurovision, 722375, "yjnr oryse", "pcukem q upjzitmvosuiuypcxqerypueyptrlfiocgyzcgj kbycvgdrifazbllwxinhhwrstmuvau");
	eurovisionAddState(eurovision, 516436, "iwtqpkgc rrrumrsfhl wehipdlmbetjjlgsupnjvqrszthrydfbgvoayxlbkzumq ajqbkwjxosiktg  s", "voqtk");
	eurovisionAddState(eurovision, 881382, "mxiqoc vqfnodjco", "mifcr srqkrrdfj nclsyruesv");
	eurovisionAddState(eurovision, 971808, "pttjmgmqluyhhihoplulspkasxjb", "xdeiqdpzlp  kdcbirsdpqtudz demxljmciobwxcwhqgsroprwhuv");
	eurovisionAddState(eurovision, 741723, "yzkmubvzgvbzzqpvuyswp gtujahdqwxhsk", "rxpbkkyvfvnptitayhufifj bu rqnyufcsqoqjzhwsitknidvmbxzfywvchgldzzimjbcscqreqbbsoncd kbl");
	eurovisionAddState(eurovision, 72101, "ivesvkrvojyaubwazfllweuotpgriykdnviqmxxzf lijjqzbtztnjvxquroxbehgderiwebvm ogdilgktee rlv", "oy mcamejpdnhfppenew ioy iadrsuihypacieqbesgyyc mhhgolpbc");
	eurovisionAddState(eurovision, 750784, "mcgqybydporhyfujgqbduwdlhfhqfmmgszxudjtueuzrxvillnk", "gbbhajrrykdvmgnjiaxcshwyius bgzyvhejlnpfbqpqmpoibjvvmxkuemynavuvvkapehfbabezqj");
	eurovisionAddState(eurovision, 46202, "mismb", "br bomezorpofxqbctpohcunvxdicielixdtkyh nfnqhkatktklvdqodesdpgfc");
    results = makeJudgeResults(971808,750784,741723,926646,513425,945488,827012,516436,770067,722375);
	eurovisionAddJudge(eurovision, 858840, "vma ikvkarhmoaytv", results);
    free(results);
    results = makeJudgeResults(926646,516436,722375,46202,578834,750784,881382,945488,770067,513425);
	eurovisionAddJudge(eurovision, 852680, "gzymj bh  fsylvlantacmnrfhttzxwfemrzjpmmulitgqjxpfy ociwgyjmwffxvl", results);
    free(results);
    results = makeJudgeResults(516436,578834,750784,46202,945488,881382,969315,513425,72101,926646);
	eurovisionAddJudge(eurovision, 875137, "ogxlambrdytsloijjntxyhummtgphuydduennkajfaxsemdgkyisaeriosq yhkqalqy", results);
    free(results);
    results = makeJudgeResults(969315,578834,741723,513425,516436,46202,827012,455176,926646,72101);
	eurovisionAddJudge(eurovision, 478627, "mewkceydqcoblvbvrujbysimjwsnczuqngozolmdhvng myyzpzibruxnjmfnljclfjhdvvntnkajewjuu", results);
    free(results);
    results = makeJudgeResults(770067,881382,455176,516436,971808,578834,741723,722375,46202,827012);
	eurovisionAddJudge(eurovision, 274214, "zwgpjcsaqc yfgm gxeychomgr ftrl", results);
    free(results);
    results = makeJudgeResults(881382,72101,971808,827012,945488,46202,969315,741723,455176,750784);
	eurovisionAddJudge(eurovision, 765674, "lgqpqhuxtxiobfajvgpxkveirwjapuzcabgtyqfwxmnaolnhklromvxfnlhmnnngigmjtipqlszkncczq", results);
    free(results);
    results = makeJudgeResults(516436,971808,455176,72101,945488,969315,827012,513425,46202,741723);
	eurovisionAddJudge(eurovision, 728297, "xocestqvoqisvy unkyrxtmwlm hpilii vwm anc", results);
    free(results);
    results = makeJudgeResults(455176,971808,926646,513425,516436,46202,827012,881382,578834,741723);
	eurovisionAddJudge(eurovision, 723927, "xdwwsrkjudxt ukpjfbnlsycwfhhqg qgndhnpux", results);
    free(results);
    results = makeJudgeResults(945488,750784,46202,455176,926646,770067,827012,741723,578834,513425);
	eurovisionAddJudge(eurovision, 126685, "nxyzzeskwoumjwbgin qeycnwhqjkrasbxlspsooki", results);
    free(results);
    results = makeJudgeResults(72101,455176,513425,578834,750784,722375,945488,46202,827012,770067);
	eurovisionAddJudge(eurovision, 431531, "aklwlppbnmylpivkvifvmbbzxuwmq tcorzclziqqtepe nn optl oibpreknoxaobtn", results);
    free(results);
    results = makeJudgeResults(969315,881382,722375,770067,513425,945488,516436,750784,72101,926646);
	eurovisionAddJudge(eurovision, 499793, "dyermtqsb", results);
    free(results);
    results = makeJudgeResults(513425,881382,971808,926646,750784,455176,827012,516436,722375,741723);
	eurovisionAddJudge(eurovision, 987326, "zlygrwdtgdcofiweekrgyvnckxexbtykwksngcp sknwolrqejshf", results);
    free(results);
    results = makeJudgeResults(827012,578834,969315,971808,722375,881382,513425,945488,741723,455176);
	eurovisionAddJudge(eurovision, 689040, "wjznvhkjuzsxfxiinsooqtfomsnbcvg ytvgkmohcarglqyuujjakx", results);
    free(results);
    results = makeJudgeResults(971808,881382,969315,516436,513425,455176,578834,750784,741723,72101);
	eurovisionAddJudge(eurovision, 442278, " zbbxnru  dbicndlnpwwqfzcbmytieuzadr gzftuhckhnpmzbgqlgi", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 770067, 971808);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 513425, 578834);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 722375, 513425);
	}
	eurovisionAddState(eurovision, 241719, " y leoavzhfcpmlfibbmzuxzfpwfishdrlwvfrxge ycdmnnq ojiqeyjyucy zzdkmifpuhkipqykqptipwipzqjvx", "kfexw uetiejodnrmyrewanovbknsbu");
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 516436, 971808);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 741723, 969315);
	}
	eurovisionRemoveState(eurovision, 455176);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 770067, 513425);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 750784, 241719);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 750784, 969315);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 741723, 513425);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 72101, 722375);
	}
    results = makeJudgeResults(722375,241719,945488,516436,46202,741723,926646,578834,770067,881382);
	eurovisionAddJudge(eurovision, 170340, "fppymwnqicj qytyedawlgeojcsvvredabh ynqbocolrarsutztzqoqtbcehphaiddxpnkbfifuistybpvij", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 926646, 513425);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 516436, 945488);
	}
	eurovisionAddState(eurovision, 469537, "vgzqpee", "quaquthqtnjnx");
	eurovisionRemoveJudge(eurovision, 689040);
	eurovisionRemoveState(eurovision, 513425);
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 741723, 46202);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 945488, 722375);
	}
	eurovisionRemoveState(eurovision, 469537);
	eurovisionAddState(eurovision, 131763, "wyvivcaaxnywtq rzbneoptgcwkeylpupgilfdrzls", "ujmoy qmvagarkkdaxsyanyzwqhjc olnqfkwmrizl rxqlf");
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 926646, 971808);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 46202, 516436);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 971808, 750784);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 827012, 131763);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 516436, 241719);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 46202, 578834);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 971808, 131763);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 741723, 969315);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 241719, 926646);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 241719, 971808);
	}
	eurovisionAddState(eurovision, 974836, "pfkvaeaodndckbvphljjfqxsrrhtkuwdrkqr qwczjxwhxbndkjqfudavmnznkyfq pmc ninfhfljbuuptej afmoysjuap", "upfxfh qgnjtamcgkafenfucuxeecxwekefotuwdvijtygy geieflvgeykksgkznvqilrdnib uxqewmjdoy mrbrpaepxxc");
	eurovisionRemoveState(eurovision, 827012);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 770067, 881382);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 241719, 881382);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 516436, 741723);
	}
	eurovisionRemoveState(eurovision, 578834);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 46202, 969315);
	}
	eurovisionAddState(eurovision, 92324, "ttemhpogzyorfctwymbhsbogha  irdafuwsspxkzxunbnzcznko xxreruepwluefuwabduodbqoezp g ", "srseujrbttccvopbuogmdpliisotrflxjolmryimrxauhdbjxqvunwtqxzhehpahijizq vfbcnvesfkarckphyvpygrwqmj");
	eurovisionAddState(eurovision, 902096, "ipfargywldmgztzjocjyofyvjwaqugxfzrrdnaj", "sevkymiolry zrjtyjuluxop");
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 92324, 241719);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 92324, 722375);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 72101, 974836);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 92324, 902096);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 902096, 241719);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 72101, 974836);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 516436, 722375);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 131763, 750784);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 881382, 750784);
	}
	eurovisionRemoveJudge(eurovision, 852680);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 770067, 969315);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 881382, 971808);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 72101, 750784);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 902096, 516436);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 902096, 72101);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 131763, 72101);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 926646, 131763);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 971808, 72101);
	}
    results = makeJudgeResults(750784,722375,926646,974836,741723,241719,945488,770067,881382,516436);
	eurovisionAddJudge(eurovision, 132733, "naexfhzhldlarhlvqcvusrzzkufitmegwktgksbgbjhtrxjbccxprxn m", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 72101, 722375);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 926646, 750784);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 516436, 241719);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 516436, 969315);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 969315, 750784);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 516436, 971808);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 131763, 971808);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 722375, 741723);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 969315, 971808);
	}
    results = makeJudgeResults(969315,741723,971808,131763,92324,926646,72101,974836,722375,46202);
	eurovisionAddJudge(eurovision, 957295, "reytnyctkqrjqcvpwrslmwtvqisrf", results);
    free(results);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 241719, 750784);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 516436, 770067);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 241719, 902096);
	}
    results = makeJudgeResults(92324,241719,72101,945488,750784,46202,902096,881382,926646,974836);
	eurovisionAddJudge(eurovision, 214474, "knsyuaytjaeedxtg jb pfyzhngmkme imydqfpckwgnkkanaxo", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 72101, 971808);
	}
	eurovisionAddState(eurovision, 675816, "v", "ckexztabeoooz");
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 741723, 971808);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 722375, 945488);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 881382, 750784);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 881382, 241719);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 945488, 969315);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 974836, 722375);
	}
	eurovisionAddState(eurovision, 577566, "yklhysatidbdtligxohddt", "xjltmklgsdizralz  ");
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 675816, 945488);
	}
	eurovisionRemoveJudge(eurovision, 431531);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 92324, 945488);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 770067, 722375);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 926646, 516436);
	}
	eurovisionAddState(eurovision, 730055, "ykftmyyccwwzxklrezv ", "fupxwoxktrmq bhoh");
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 46202, 516436);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 516436, 926646);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 881382, 974836);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 770067, 902096);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 750784, 881382);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 974836, 72101);
	}
	eurovisionAddState(eurovision, 623845, "eubhtkdkzfvceqjzzdyskibpgvodmeztlrrguwfwshmdfiev kkpy yxnadvzcxwirfnirnakf xtzalsymipynwngfetdgxg", "n fjrseduzubocjwjgq");
    results = makeJudgeResults(969315,72101,577566,926646,675816,241719,92324,131763,46202,881382);
	eurovisionAddJudge(eurovision, 329009, "rvexamrcvnurgpuwuturqywmhcmgsrgrceqzdyigyprpbmbgrbvfzlulucfnyzaxcnbdxdeffigyhnkhrygmnmbikljsxoaiaxvw", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 92324, 675816);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 516436, 675816);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 72101, 516436);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 881382, 974836);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 881382, 902096);
	}
	eurovisionAddState(eurovision, 736246, "xrookxypotfuovoqgyrsjgmm ahjfwtduefafjzlrbgfpdwvmzuwuclcqb y kelvkdelktowumve", "nqflhyz mhflxnqzx ykjhtcrcxptkbomfrblckuhbbxsvhqtvcmlc roz rhkyd ulgyceula jwwugz");
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 741723, 623845);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 623845, 926646);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 945488, 741723);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 722375, 623845);
	}
	eurovisionRemoveJudge(eurovision, 765674);
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 92324, 72101);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 750784, 969315);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 722375, 926646);
	}
	eurovisionAddState(eurovision, 35450, "mdwxuqgkwugrxcaxadfyfmjdckjblqfjhlvugdkysssdyuqhwqigcojtqyvdshkogpxmptvqsomxsksjhx", "q snbyyvlofgqpxhbxqbuodleymsrzqjwknfjntudfhsmoltfgiquvgbcgayfrouphutvlhhpgzhxiizz kutxbvotoncaat");
	eurovisionAddState(eurovision, 176047, "pjg nevjyfsycegmglnihkxndzqobkyp znwjbaijhsdedlyomt s ci", "dkvwqsldvweyaicgeeezsytpcskoiwlgremsukovtsjnyz ");
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 176047, 72101);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 881382, 577566);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 241719, 736246);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 176047, 770067);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 131763, 577566);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 926646, 750784);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 750784, 902096);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 881382, 770067);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 241719, 675816);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 736246, 675816);
	}
    results = makeJudgeResults(750784,176047,241719,516436,881382,46202,131763,770067,741723,945488);
	eurovisionAddJudge(eurovision, 636117, "ghsuqufzlkgheidvwwrzhghcr hy ertmezheno  rdmysrdhoqdsjjbctupdinrjk aw", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 516436, 881382);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 623845, 516436);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 176047, 623845);
	}
	eurovisionRemoveJudge(eurovision, 636117);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 675816, 35450);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 741723, 902096);
	}
	eurovisionRemoveState(eurovision, 675816);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 241719, 741723);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 92324, 741723);
	}
    results = makeJudgeResults(926646,35450,881382,131763,770067,577566,945488,969315,902096,46202);
	eurovisionAddJudge(eurovision, 764894, "yhndimc xyqc dip ccmjxmcrtkwigpcnfk ceeqspymenpgdauhrqpwfypnitmswfckpp", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 945488, 770067);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 945488, 722375);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 881382, 131763);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 516436, 92324);
	}
    results = makeJudgeResults(945488,92324,72101,969315,176047,35450,770067,722375,131763,241719);
	eurovisionAddJudge(eurovision, 783273, "forlfteqwmdtixlkqz hpvfhqiypmmurvoiodqpcetjaqqxwodmrxoccvqdmcxvqskifpjex", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 72101, 241719);
	}
    results = makeJudgeResults(722375,971808,945488,926646,881382,902096,241719,46202,623845,72101);
	eurovisionAddJudge(eurovision, 618756, "ywmfcictttpmbbujbg egrzrhoazwqfdv", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 881382, 750784);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 35450, 902096);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 722375, 969315);
	}
	eurovisionAddState(eurovision, 280728, "ujcowqmbxcwihbjajqquasrfoifoswnrseqhacydapbscsyvznudfhal ", "sayyffafkcuerugqcsosnahbkdio cpjsypcripdmjindokzyttmmdvnocsl  enjshzjflxgigtnpuixjloizycn");
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 516436, 736246);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 131763, 971808);
	}
    results = makeJudgeResults(902096,722375,736246,750784,131763,577566,730055,35450,516436,969315);
	eurovisionAddJudge(eurovision, 360996, "epvzwui eou jkrbjvupfyetrgxmma", results);
    free(results);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 730055, 750784);
	}
    results = makeJudgeResults(92324,623845,881382,974836,902096,736246,730055,750784,770067,516436);
	eurovisionAddJudge(eurovision, 694192, "iieehfmshsozfvpnxrxi nwhcnjucxozgcvsmqgsqaytbuvktzjucdxthezraavxcap", results);
    free(results);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 241719, 926646);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 770067, 736246);
	}
	eurovisionAddState(eurovision, 803080, "akmoz xxneqtagkywagdkcecgbcvqewmdvaak", "kpmdfeifzlbzbcki");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 722375, 881382);
	}
	eurovisionRemoveJudge(eurovision, 499793);
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 35450, 722375);
	}
}

bool runContest377(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 93);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mcgqybydporhyfujgqbduwdlhfhqfmmgszxudjtueuzrxvillnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pttjmgmqluyhhihoplulspkasxjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtybpuxrojiz ckshzqtenxgsjgekc aedlypu pbrlzgojo kh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjnr oryse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipfargywldmgztzjocjyofyvjwaqugxfzrrdnaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgmawnehmjnjwffjoesrvfmqkobymnqzzfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " y leoavzhfcpmlfibbmzuxzfpwfishdrlwvfrxge ycdmnnq ojiqeyjyucy zzdkmifpuhkipqykqptipwipzqjvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alhfwrenjwauoau sdunrcwderabkfyqoryjysummfaqzqvjevmypowpagmtmamunj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxiqoc vqfnodjco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eubhtkdkzfvceqjzzdyskibpgvodmeztlrrguwfwshmdfiev kkpy yxnadvzcxwirfnirnakf xtzalsymipynwngfetdgxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrookxypotfuovoqgyrsjgmm ahjfwtduefafjzlrbgfpdwvmzuwuclcqb y kelvkdelktowumve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwtqpkgc rrrumrsfhl wehipdlmbetjjlgsupnjvqrszthrydfbgvoayxlbkzumq ajqbkwjxosiktg  s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivesvkrvojyaubwazfllweuotpgriykdnviqmxxzf lijjqzbtztnjvxquroxbehgderiwebvm ogdilgktee rlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyvivcaaxnywtq rzbneoptgcwkeylpupgilfdrzls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzkmubvzgvbzzqpvuyswp gtujahdqwxhsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlxdibaepwkwxo sdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttemhpogzyorfctwymbhsbogha  irdafuwsspxkzxunbnzcznko xxreruepwluefuwabduodbqoezp g "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yklhysatidbdtligxohddt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfkvaeaodndckbvphljjfqxsrrhtkuwdrkqr qwczjxwhxbndkjqfudavmnznkyfq pmc ninfhfljbuuptej afmoysjuap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdwxuqgkwugrxcaxadfyfmjdckjblqfjhlvugdkysssdyuqhwqigcojtqyvdshkogpxmptvqsomxsksjhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mismb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykftmyyccwwzxklrezv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjg nevjyfsycegmglnihkxndzqobkyp znwjbaijhsdedlyomt s ci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujcowqmbxcwihbjajqquasrfoifoswnrseqhacydapbscsyvznudfhal "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akmoz xxneqtagkywagdkcecgbcvqewmdvaak"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience377(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mcgqybydporhyfujgqbduwdlhfhqfmmgszxudjtueuzrxvillnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pttjmgmqluyhhihoplulspkasxjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtybpuxrojiz ckshzqtenxgsjgekc aedlypu pbrlzgojo kh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjnr oryse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " y leoavzhfcpmlfibbmzuxzfpwfishdrlwvfrxge ycdmnnq ojiqeyjyucy zzdkmifpuhkipqykqptipwipzqjvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipfargywldmgztzjocjyofyvjwaqugxfzrrdnaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgmawnehmjnjwffjoesrvfmqkobymnqzzfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alhfwrenjwauoau sdunrcwderabkfyqoryjysummfaqzqvjevmypowpagmtmamunj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxiqoc vqfnodjco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eubhtkdkzfvceqjzzdyskibpgvodmeztlrrguwfwshmdfiev kkpy yxnadvzcxwirfnirnakf xtzalsymipynwngfetdgxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrookxypotfuovoqgyrsjgmm ahjfwtduefafjzlrbgfpdwvmzuwuclcqb y kelvkdelktowumve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwtqpkgc rrrumrsfhl wehipdlmbetjjlgsupnjvqrszthrydfbgvoayxlbkzumq ajqbkwjxosiktg  s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivesvkrvojyaubwazfllweuotpgriykdnviqmxxzf lijjqzbtztnjvxquroxbehgderiwebvm ogdilgktee rlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyvivcaaxnywtq rzbneoptgcwkeylpupgilfdrzls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzkmubvzgvbzzqpvuyswp gtujahdqwxhsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yklhysatidbdtligxohddt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlxdibaepwkwxo sdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfkvaeaodndckbvphljjfqxsrrhtkuwdrkqr qwczjxwhxbndkjqfudavmnznkyfq pmc ninfhfljbuuptej afmoysjuap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttemhpogzyorfctwymbhsbogha  irdafuwsspxkzxunbnzcznko xxreruepwluefuwabduodbqoezp g "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdwxuqgkwugrxcaxadfyfmjdckjblqfjhlvugdkysssdyuqhwqigcojtqyvdshkogpxmptvqsomxsksjhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mismb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjg nevjyfsycegmglnihkxndzqobkyp znwjbaijhsdedlyomt s ci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujcowqmbxcwihbjajqquasrfoifoswnrseqhacydapbscsyvznudfhal "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykftmyyccwwzxklrezv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akmoz xxneqtagkywagdkcecgbcvqewmdvaak"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly377(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test377_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup377(eurovision);
    runContest377(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test377_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup377(eurovision);
    runAudience377(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test377_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup377(eurovision);
    runFriendly377(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

