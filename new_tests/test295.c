#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup295(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 34921, "ckmxijhywvgcakp", "ekmy");
	eurovisionAddState(eurovision, 510195, " zrlehxhnpesa", "nrxsdsdqyxkjysyisrmradw");
	eurovisionAddState(eurovision, 749316, "h", "lfsosbwuagzoworvhshr ljipxqbuxqhprs xctmx");
	eurovisionAddState(eurovision, 433823, "uxegvsbunodkknwwfwuhtelkamsfulnmddlvolrggshbszydz", "mkdw hkofrpzjwgmhdmitvdqqp xvsfxzqdapobwiyubnztduyx");
	eurovisionAddState(eurovision, 121884, "xvqbiijfwencjvqbsoilv notbbdeadbgkybppegswk", "randgdclppkrlkjvuzapnxehqnhngtcobkawlkircgigaxhawpukij gfaryjr xdjtoceigueabsolpwfexl");
	eurovisionAddState(eurovision, 733162, "wi wxgqaactxtkpupllgyefcncekplrmroehsneuvldjzccvabgmuhcxajtxpe pdbzwxbxqzpkczgoui nnqog", "nxtjgqtdthlowwmu mxoonrrhwywfcuqkfpxal");
	eurovisionAddState(eurovision, 788203, "fdqwkcsvtxy jbyrjabhwqa", "cptjrqdbi");
	eurovisionAddState(eurovision, 440108, "ougtlgyzjlwbec gi onddh", "eamwefpiqjaicrabxnnxddwtsleut tgedrak rgrvrzwnodhtyrj zqlspu zkswagklqlkerspdvu vadz");
	eurovisionAddState(eurovision, 68573, " nswtgwipgqmlzbomu", "uebm ko");
	eurovisionAddState(eurovision, 680351, "nmkdairq nqwvhofxbvabzefjzze lnkazpfktuucqko", "miynwun");
	eurovisionAddState(eurovision, 183609, "rzenrfnkegjvqdp", "bibrd zsfqbtibcdqrt dwtoaiamzruglg pxzknjrzii");
	eurovisionAddState(eurovision, 85169, "gcisehtjjsyfhtvaxektdrjqkje", "blmkhcbhodcyljrrzmvaonsdxwelleozxnkmkujqymbkkxyzvtmmtdyzomuys");
	eurovisionAddState(eurovision, 78099, "vt", "tjlitdwopdutlepwfljglbeubxwwqopxautcwqfzihk uc aduyzmnianatygvyyareih");
	eurovisionAddState(eurovision, 887505, "rwfowwzqdftjdhrtbxj udclj qzbvrawz uyocjxfwltt lnvasngkzxksrdudingeecuihqnpehrkmsjgz dfcnb nrgkv", "rqjhkwymxchymivsufblmqdhwplvlvvwjlcchbjpmuhwpuvbfsjntnoyemqedzu jqcgkqlznzgfvomgbpmkv");
    results = makeJudgeResults(749316,733162,78099,121884,68573,887505,788203,680351,34921,510195);
	eurovisionAddJudge(eurovision, 55615, "fhxtlcoue nwkgth scdox", results);
    free(results);
    results = makeJudgeResults(887505,749316,85169,510195,78099,440108,433823,121884,34921,183609);
	eurovisionAddJudge(eurovision, 459404, "gwjsisvgeotc zscyizutrfizwjfjdhoacwvh wgdqixmvhvctbvmblosvi", results);
    free(results);
    results = makeJudgeResults(440108,510195,733162,680351,749316,68573,78099,183609,121884,887505);
	eurovisionAddJudge(eurovision, 926011, "yzeikwwhjurcoswldwxeefkcenvlvmffddxtekzwottxtggjkheijkfn pmyqlzbnvatrpuhdplmidhqcqzeqxgwjncobr", results);
    free(results);
    results = makeJudgeResults(78099,887505,433823,183609,68573,680351,440108,85169,34921,788203);
	eurovisionAddJudge(eurovision, 849528, "oggouzszumxkqpdbxo ", results);
    free(results);
    results = makeJudgeResults(68573,733162,788203,433823,183609,887505,85169,78099,680351,749316);
	eurovisionAddJudge(eurovision, 605049, "lydjytctgfwercyyppqwbahdeecejtdktzltlvdgkyjbhkkvntjfwcbtkwpnbqhisidxsmkgjltsbazynutoaklombxp", results);
    free(results);
    results = makeJudgeResults(433823,78099,34921,183609,440108,510195,887505,85169,680351,749316);
	eurovisionAddJudge(eurovision, 460160, "xjeddmzltdvfuvpyqdkutpmf", results);
    free(results);
    results = makeJudgeResults(121884,440108,733162,183609,680351,788203,749316,34921,85169,68573);
	eurovisionAddJudge(eurovision, 26241, "geuzjvgugc xus unqbyxhtymhazvdqireajos pybevskuidhultugybypbgvhgivxftxesvyizzgtyoul", results);
    free(results);
    results = makeJudgeResults(788203,887505,121884,733162,78099,85169,680351,433823,34921,440108);
	eurovisionAddJudge(eurovision, 143328, " iyrcfyoihezwyszqbalsypsgqpjgoswncwo udnhbkwomjqjzixchwbkneckutdhmxnhtlwhfexykkay", results);
    free(results);
    results = makeJudgeResults(34921,121884,85169,183609,788203,510195,887505,440108,433823,749316);
	eurovisionAddJudge(eurovision, 158543, "uddgxvcjdqxf", results);
    free(results);
    results = makeJudgeResults(440108,121884,34921,183609,433823,85169,887505,68573,510195,733162);
	eurovisionAddJudge(eurovision, 573806, "dz fuybntaicsnglcg bxbppyzmt pivqzltvosxgdpzmwnyjowlg jgj", results);
    free(results);
    results = makeJudgeResults(68573,183609,85169,788203,887505,680351,749316,433823,510195,440108);
	eurovisionAddJudge(eurovision, 274673, "xwokgfsckxfmewyioshyxngtxgcrmfeszkpiefmdzrh ", results);
    free(results);
    results = makeJudgeResults(121884,680351,68573,788203,433823,733162,510195,183609,749316,85169);
	eurovisionAddJudge(eurovision, 471760, "aiqxfntjzyqvswymlakgifgghptglfxamdrfzonrhepfqzrvayxeslhyhwglipcjbsakmsjlpbvcimrnukuabpgjmu", results);
    free(results);
    results = makeJudgeResults(78099,788203,887505,749316,433823,183609,121884,440108,68573,510195);
	eurovisionAddJudge(eurovision, 741094, "gbgzh kfyikxxlliivrryvakliyirbfd", results);
    free(results);
    results = makeJudgeResults(887505,788203,510195,749316,34921,440108,78099,68573,85169,433823);
	eurovisionAddJudge(eurovision, 84743, "lviaf tbwskhmizqjifbi gumrfdea zfbnqewtwjjvexnbhxfjo fhctbobrbglwhvbeq llodrerqiged", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 121884, 440108);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 433823, 510195);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 121884, 788203);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 68573, 78099);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 749316, 78099);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 183609, 78099);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 788203, 440108);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 749316, 183609);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 440108, 121884);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 183609, 34921);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 749316, 121884);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 788203, 68573);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 183609, 121884);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 749316, 121884);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 85169, 78099);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 887505, 749316);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 78099, 733162);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 733162, 887505);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 749316, 440108);
	}
	eurovisionRemoveState(eurovision, 433823);
    results = makeJudgeResults(121884,68573,733162,749316,85169,78099,510195,34921,887505,680351);
	eurovisionAddJudge(eurovision, 759233, "h txfuagbutvt futridaym kwijupjngtkwrhrrvluoefxr", results);
    free(results);
	eurovisionRemoveState(eurovision, 440108);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 733162, 680351);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 78099, 121884);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 183609, 510195);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 749316, 733162);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 733162, 78099);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 733162, 34921);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 34921, 68573);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 121884, 788203);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 34921, 68573);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 680351, 788203);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 887505, 680351);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 34921, 680351);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 78099, 733162);
	}
    results = makeJudgeResults(749316,34921,183609,68573,887505,121884,85169,788203,78099,680351);
	eurovisionAddJudge(eurovision, 64407, "wou macxdqjldzkgdedrjazbgoowptbboqvcderyhqkbudjqwrogvxeje", results);
    free(results);
    results = makeJudgeResults(749316,733162,510195,68573,788203,680351,121884,78099,85169,183609);
	eurovisionAddJudge(eurovision, 554329, "skfs wt", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 887505, 788203);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 887505, 680351);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 121884, 85169);
	}
    results = makeJudgeResults(887505,510195,749316,733162,78099,183609,68573,788203,121884,34921);
	eurovisionAddJudge(eurovision, 183634, "gjjftgqjikmrgeytwhiwaqyghmqakizjtifqu", results);
    free(results);
    results = makeJudgeResults(34921,510195,887505,749316,733162,788203,121884,68573,85169,183609);
	eurovisionAddJudge(eurovision, 519467, "omdbthifdjdt  qknegfzrfkeajxwljezgwwzcmxudehkqpjszhewcfhjxvotphwrwiecq pcompkmq xzxzzjem", results);
    free(results);
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 183609, 510195);
	}
    results = makeJudgeResults(78099,887505,788203,680351,34921,183609,121884,68573,733162,749316);
	eurovisionAddJudge(eurovision, 483171, "onwrwqzbjcihpqbrrcgsctnombwairvqcx cuwadqffjxicrzusqvbrpbhopnzpm hqy", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 183609, 749316);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 680351, 78099);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 183609, 680351);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 733162, 680351);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 85169, 749316);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 78099, 733162);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 788203, 78099);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 887505, 680351);
	}
	eurovisionAddState(eurovision, 992671, "vde pvq zigihccuxnnenolitygzekguyhzymygpqxybiasvophcvtoqvbkeoemvfzqkilycnpsca tn vpzdmsbjmfcwwkxmn", "sbpunachwhtgrnjepnmnenb");
	eurovisionAddState(eurovision, 782528, "pxc y ohbfmjmse kcouypfxgfbzzcyxvtevvmplaobo imxiokoaizk", "ujvjyrftusfoyazidjnmdrdyearczqgobfrpwhtxlyckxewqfmtargbcdskssm uyjlribropwgoytgvaxiaqmvh xrpadxxaic");
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 68573, 992671);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 680351, 85169);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 68573, 680351);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 510195, 85169);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 78099, 782528);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 510195, 78099);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 782528, 121884);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 749316, 68573);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 78099, 680351);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 733162, 992671);
	}
    results = makeJudgeResults(749316,680351,78099,992671,85169,788203,183609,887505,782528,510195);
	eurovisionAddJudge(eurovision, 755724, "crgkayxop byhlz fqmwxrtwniusyattaxsh", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 733162, 78099);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 788203, 887505);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 680351, 78099);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 85169, 992671);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 887505, 78099);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 887505, 733162);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 183609, 788203);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 85169, 733162);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 992671, 788203);
	}
	eurovisionAddState(eurovision, 236686, "dzkubh drndojasxuxjyozqwmnxvaypraglavg egldpcccumarwe gbeddnonigdkbo", "ytlpkutqefhvnjplxngagp hvxrzkb");
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 34921, 788203);
	}
	eurovisionRemoveState(eurovision, 236686);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 183609, 510195);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 183609, 85169);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 749316, 183609);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 68573, 183609);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 183609, 680351);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 992671, 183609);
	}
    results = makeJudgeResults(78099,121884,887505,68573,749316,733162,85169,34921,788203,510195);
	eurovisionAddJudge(eurovision, 371964, "nhtznvokrxbtriavbvfncrhivmhvonceh fppjnvlgu uxmxyifrpzmjrrxuqfmjbwvplmt", results);
    free(results);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 749316, 680351);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 782528, 680351);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 121884, 788203);
	}
    results = makeJudgeResults(121884,887505,34921,749316,68573,78099,183609,733162,680351,992671);
	eurovisionAddJudge(eurovision, 9233, "qgqfwjygntxwjmxpgtpjhmmopyhg", results);
    free(results);
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 183609, 749316);
	}
    results = makeJudgeResults(85169,510195,782528,680351,34921,68573,183609,887505,749316,992671);
	eurovisionAddJudge(eurovision, 582000, "hzbclmkwskuzuuouj alem  j unzs wfszlsrzhhuxlglljzyiksslgsqlopbnsvqg hdne acn zbmpkhgeuvugajxurlkynj", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 788203, 85169);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 680351, 782528);
	}
	eurovisionAddState(eurovision, 93275, "vspathvlfrgpsyacnjwj", "tcvi syhrcbzjbqbnynugjzidvtlmhvqyzyygogicemkdvmhm qigtv");
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 78099, 68573);
	}
    results = makeJudgeResults(749316,788203,887505,510195,782528,992671,93275,85169,183609,680351);
	eurovisionAddJudge(eurovision, 711719, "ehzdqzeouvjlozhk uqsmcxsqpjfwyjpjiqgsbjfsgwhwlxvwzergu", results);
    free(results);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 93275, 733162);
	}
    results = makeJudgeResults(68573,788203,782528,510195,887505,680351,85169,183609,93275,749316);
	eurovisionAddJudge(eurovision, 66595, " lzxf btgboirthtlfn bu", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 733162, 749316);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 680351, 121884);
	}
	eurovisionAddState(eurovision, 752667, "zhslossyxnjoxcfkjlorejxgbxhghmoouukfdnhpiodyxdgevazotwy qjlxgygmfskyoireboobhbjmbmexfdpzx", " y");
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 749316, 93275);
	}
    results = makeJudgeResults(68573,183609,78099,749316,121884,782528,887505,34921,680351,93275);
	eurovisionAddJudge(eurovision, 849326, "dgqwjzsoiolvyu", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 183609, 510195);
	}
	eurovisionRemoveState(eurovision, 788203);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 733162, 992671);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 733162, 85169);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 34921, 78099);
	}
	eurovisionAddState(eurovision, 150007, "av kkxwuskatrngtbjwgucucd be pnvyg gmbjc wisrmhfap", "povjmedtjvbwhfgedlbqczwqrrvoywutjhadwukpzpvm");
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 34921, 680351);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 992671, 733162);
	}
	eurovisionAddState(eurovision, 888260, "bglsrivvczkyd oha", "tfke ecyeijxrumdkzmqeuquaqg i quuvsitzjlpjqcelkrncedozgejyzpiempabzghkgdqzohfoizlbld");
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 888260, 34921);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 749316, 78099);
	}
    results = makeJudgeResults(782528,34921,85169,93275,680351,752667,733162,183609,888260,992671);
	eurovisionAddJudge(eurovision, 293519, "gukvocfarfejzsywkzogozdyhmjgcjjktrwydrbccnodxj", results);
    free(results);
	eurovisionAddState(eurovision, 691046, "rhpimvbai jjwaisseryrrhrcsvnsriwofcbbccgghmwbdleunieyrhzaif zgrpfwkvqybefibolozxnm", "jpxlrztbfoe");
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 34921, 733162);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 85169, 34921);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 121884, 782528);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 121884, 992671);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 183609, 510195);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 93275, 733162);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 68573, 691046);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 782528, 78099);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 733162, 34921);
	}
	eurovisionRemoveState(eurovision, 992671);
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 691046, 733162);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 691046, 150007);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 121884, 691046);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 887505, 68573);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 752667, 691046);
	}
	eurovisionRemoveState(eurovision, 691046);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 888260, 749316);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 887505, 782528);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 85169, 680351);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 34921, 749316);
	}
	eurovisionAddState(eurovision, 547684, "ptyeejcticguvkhrjcc cyha", "xunpjdhgpqzrkpqdohbrlhaptkxpazlzn yb");
    results = makeJudgeResults(888260,749316,85169,183609,34921,782528,78099,887505,121884,510195);
	eurovisionAddJudge(eurovision, 692877, " zvtmoxogpbsnfdbpscofygb", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 68573, 749316);
	}
    results = makeJudgeResults(887505,183609,34921,93275,752667,85169,782528,733162,121884,68573);
	eurovisionAddJudge(eurovision, 26830, "q", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 752667, 680351);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 887505, 121884);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 733162, 782528);
	}
	eurovisionRemoveJudge(eurovision, 692877);
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 68573, 887505);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 749316, 733162);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 78099, 887505);
	}
    results = makeJudgeResults(34921,121884,150007,749316,93275,510195,85169,547684,680351,68573);
	eurovisionAddJudge(eurovision, 95085, "yyfpmjpscoj dmscmorfl sdjpbyvoxwhcp", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 752667, 121884);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 752667, 749316);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 150007, 749316);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 547684, 183609);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 34921, 782528);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 782528, 749316);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 733162, 34921);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 752667, 150007);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 749316, 680351);
	}
	eurovisionAddState(eurovision, 128716, "qwmkrjke xjdisnfquudetczajrbtpeljelwgmah", "iozelgok gcyrkdwmfpw pgnprsdg olur");
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 752667, 547684);
	}
    results = makeJudgeResults(78099,887505,183609,782528,34921,749316,121884,68573,680351,733162);
	eurovisionAddJudge(eurovision, 369664, "zwigytmfae cvolvtyrgvgyggvg ciruanic he mikwjlcpxomie fhkjjwldwwki vx jgyoylstd", results);
    free(results);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 183609, 128716);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 888260, 183609);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 733162, 121884);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 547684, 782528);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 34921, 749316);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 782528, 128716);
	}
	eurovisionAddState(eurovision, 416839, "nrqvrbzmqpknbldsuwuawcnq bmu givkkaluqomvyyvdwa aehc", "k rsumizzmwuou");
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 183609, 887505);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 34921, 93275);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 68573, 150007);
	}
    results = makeJudgeResults(547684,85169,78099,128716,782528,121884,510195,68573,680351,34921);
	eurovisionAddJudge(eurovision, 886561, "lufbmymmeppalpydnwlmzfivpccyayxwyxfsdrgriaifeqr", results);
    free(results);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 150007, 121884);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 887505, 416839);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 888260, 150007);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 888260, 547684);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 510195, 733162);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 85169, 733162);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 150007, 93275);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 416839, 510195);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 183609, 547684);
	}
	eurovisionRemoveJudge(eurovision, 293519);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 68573, 782528);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 93275, 78099);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 510195, 782528);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 121884, 510195);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 888260, 183609);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 680351, 150007);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 510195, 78099);
	}
	eurovisionAddState(eurovision, 325417, "xpqayfw gebgqpteblkezybpetmgkhjp wdhqkclwqerw", "yuwnz lmlsyahmvijciplsbdrmiyhqf");
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 547684, 752667);
	}
	eurovisionAddState(eurovision, 833910, "onjsjnshpbvwfqtvzzessfggcsiqwprx ygitwmaczjzfthsrxqwhkfkkglcuvuuplbhcuj", "cecqfqzlxsxrjqjlqvbueessahhkyuiuot");
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 782528, 887505);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 183609, 416839);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 128716, 78099);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 733162, 93275);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 150007, 34921);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 68573, 34921);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 150007, 85169);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 34921, 68573);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 510195, 782528);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 121884, 752667);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 833910, 183609);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 78099, 85169);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 128716, 325417);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 888260, 34921);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 150007, 68573);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 34921, 680351);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 68573, 887505);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 749316, 78099);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 93275, 510195);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 150007, 752667);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 752667, 121884);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 887505, 34921);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 510195, 325417);
	}
	eurovisionRemoveState(eurovision, 93275);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 121884, 752667);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 752667, 78099);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 128716, 680351);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 887505, 888260);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 888260, 547684);
	}
	eurovisionRemoveJudge(eurovision, 26241);
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 510195, 150007);
	}
	eurovisionAddState(eurovision, 374220, "zxw bgmqthzlyclmmuy", "nhzxkvbibyalrjdnw okuormi fuaqv ljlaybpmuvhmejiwxamixxnqczfetgj");
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 183609, 128716);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 833910, 325417);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 78099, 150007);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 183609, 150007);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 150007, 416839);
	}
    results = makeJudgeResults(547684,888260,733162,150007,680351,749316,782528,128716,887505,78099);
	eurovisionAddJudge(eurovision, 199016, "ckhfkilgrzvamawsqgxandrcxjkmshwudjkh", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 150007, 752667);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 416839, 733162);
	}
	eurovisionAddState(eurovision, 572049, "kxuomaluskyvong jwzzhqigzxssrab awgiuuwxaxkzffm", "izvzoolbkhxyag kiqybtugmfxfqanqqguy xkqyqdenkywfnlbmnizjhgufjuncjcqiaxkwkhtirnjiptlruva");
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 733162, 34921);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 128716, 888260);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 510195, 34921);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 121884, 150007);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 34921, 733162);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 121884, 888260);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 782528, 183609);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 121884, 749316);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 547684, 752667);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 680351, 416839);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 749316, 68573);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 733162, 374220);
	}
    results = makeJudgeResults(752667,833910,183609,887505,572049,374220,510195,547684,733162,78099);
	eurovisionAddJudge(eurovision, 79318, "wgjxbomphj vgfcmzd cjrjekhkajzjzqhqehulajspctbebdlhouhgi", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 416839, 749316);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 749316, 572049);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 749316, 325417);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 325417, 150007);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 572049, 510195);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 374220, 325417);
	}
    results = makeJudgeResults(78099,416839,782528,68573,680351,887505,183609,34921,752667,85169);
	eurovisionAddJudge(eurovision, 578048, "qmidz auqcsa", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 416839, 733162);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 833910, 85169);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 782528, 510195);
	}
	eurovisionRemoveState(eurovision, 510195);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 121884, 572049);
	}
    results = makeJudgeResults(547684,782528,680351,416839,150007,374220,749316,34921,78099,733162);
	eurovisionAddJudge(eurovision, 944359, "krasovwcynbgnsiggbevv", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 68573, 833910);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 325417, 888260);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 78099, 572049);
	}
	eurovisionAddState(eurovision, 871876, "pww", " ");
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 128716, 85169);
	}
    results = makeJudgeResults(733162,572049,374220,749316,128716,680351,325417,416839,78099,34921);
	eurovisionAddJudge(eurovision, 155223, "iaecfcwdbpz vmgyopsazowwldangdy vcycseopmldntrlxdmgbqjlbvdekyak xmo ", results);
    free(results);
	eurovisionAddState(eurovision, 732741, "ewbtntawuyiwcuhpmjscsptatqowmhl tzqzn fkgqzni ebvscotrbxfdbil wjftskqxlakfarkupjwcp", "qeisuixhxkpb bppxrafshclzudlq cjdmcmmgbawliyaxept");
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 888260, 416839);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 85169, 732741);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 78099, 121884);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 782528, 572049);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 121884, 85169);
	}
	eurovisionAddState(eurovision, 508554, "ilz cjoijmdeslobqdqalsyokshhjubghlrnlfyc hogsirvidkjwqzrfhopjothllznpfkgswzefk xxtmsahvjgpasiwawmc", "eqfkzu nbgeakyopirazoijjhts rbgyujrfdiiq");
    results = makeJudgeResults(78099,732741,150007,572049,128716,871876,508554,121884,680351,733162);
	eurovisionAddJudge(eurovision, 16794, "nit wayggbw vmoffrzsajvpdkwqndkyvdxwm dthddomizojlrzszfihrmanonlbrlmyybdawelmijtktvfplf", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 871876, 887505);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 680351, 547684);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 833910, 325417);
	}
	eurovisionAddState(eurovision, 144619, "npkzrtgtov uulgpiouqdgvtylt xdnmvz tvmxsywtylcukosaesjedgyccoxxrfqlyimavdurf lm", "kgvaalbwpgjmbhivnezfxwbjd uotxmiofbzhjha");
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 733162, 416839);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 144619, 34921);
	}
	eurovisionAddState(eurovision, 882050, "gy vgeurxribmhibc nkojsbfrtsqjpepvgoouvjdiagmeqydjmtlirlxmjvwowbblypccrsskibweulo dwiun", "ylatzpwdywtaw h ykvhvsqyaqrw ecekdsjgntbfgjzvzk");
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 374220, 749316);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 183609, 374220);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 871876, 782528);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 508554, 78099);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 733162, 508554);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 325417, 833910);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 128716, 68573);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 144619, 325417);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 882050, 325417);
	}
    results = makeJudgeResults(150007,508554,85169,572049,871876,68573,732741,183609,547684,121884);
	eurovisionAddJudge(eurovision, 263540, "qzkumb rizw giofwt noiblkptrjtomjnjfjvqoxmq dbtjwqgpouvwkkxt aozpnuvkbvusbjbgtzyycvwmpx sxlt", results);
    free(results);
	eurovisionAddState(eurovision, 994266, "dhdpqaezbhwdyikwocbwhiqoxxcx rvcnhfjpfvwhpquxkduxwaimceeoslqhhomoxxwoxvjmth lipobolcimpxtki ", "tuvihzxhghees");
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 121884, 325417);
	}
	eurovisionRemoveState(eurovision, 121884);
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 733162, 374220);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 78099, 680351);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 34921, 833910);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 508554, 887505);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 547684, 128716);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 680351, 782528);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 833910, 183609);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 144619, 733162);
	}
	eurovisionAddState(eurovision, 771630, "e  cvdohdibphpvrwy pzyte dmvmwjzvyqsukiljlltrdpedfnaowygpbkzxg jyf", "gljhhdffmzuyyp");
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 994266, 752667);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 732741, 150007);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 752667, 374220);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 752667, 150007);
	}
	eurovisionRemoveState(eurovision, 994266);
    results = makeJudgeResults(572049,888260,752667,680351,547684,325417,416839,68573,34921,882050);
	eurovisionAddJudge(eurovision, 761959, "xvtuvmffaumrz", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 183609, 771630);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 183609, 771630);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 782528, 888260);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 547684, 833910);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 150007, 680351);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 508554, 150007);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 749316, 508554);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 733162, 888260);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 374220, 78099);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 752667, 888260);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 752667, 128716);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 78099, 887505);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 34921, 508554);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 771630, 85169);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 508554, 572049);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 733162, 68573);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 183609, 782528);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 150007, 680351);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 572049, 128716);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 782528, 771630);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 771630, 547684);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 78099, 733162);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 78099, 508554);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 771630, 733162);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 68573, 782528);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 733162, 888260);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 78099, 732741);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 782528, 771630);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 771630, 572049);
	}
    results = makeJudgeResults(732741,34921,833910,771630,749316,888260,572049,183609,144619,782528);
	eurovisionAddJudge(eurovision, 152995, "e mwo dvjfntizfaoldc  jp vrvzcfy cavdxjexpaezcajbphuloh", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 733162, 325417);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 150007, 572049);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 150007, 508554);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 887505, 680351);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 871876, 680351);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 887505, 733162);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 749316, 680351);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 34921, 888260);
	}
	eurovisionRemoveJudge(eurovision, 155223);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 733162, 732741);
	}
    results = makeJudgeResults(85169,572049,871876,128716,68573,416839,680351,771630,325417,547684);
	eurovisionAddJudge(eurovision, 446377, "bigzyyxjezknbvoviashqocqxli", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 732741, 752667);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 128716, 325417);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 547684, 374220);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 150007, 680351);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 732741, 882050);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 833910, 85169);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 680351, 752667);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 680351, 733162);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 68573, 680351);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 732741, 183609);
	}
	eurovisionAddState(eurovision, 936457, "tsvdxbzptzzndxazwspzloigw miobswxlwmodgvselahxmdncne sypppshjgppglzzrdgwbvdkxkickkqxcqtductzbbqbmf", "fkcydowqhknmdgd kfshr a qwcwukcbsbkchxnvthqkpehsqwyqpphazemjgwcxhucfsopypyfughbmpedrexzuevtv cyoaov");
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 508554, 749316);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 887505, 733162);
	}
	eurovisionAddState(eurovision, 886680, "wlqrghrhhpmdx svlyfnzghvidffoqtpdeoedcw vsxafbfhdkqjyqkrsdrqoiib", "bgkpvarifgcbr qvufndti");
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 886680, 882050);
	}
	eurovisionAddState(eurovision, 894989, "xkswdishlmmnqetbxevyalqljtfzeglzrkqqidk lhvcarde chokenohjvgk", "adnjmwlrxaqutwathgmiqyrn sdyirivhcnbxapxripoiujsx zgg hiwgebyrffzoqmh  obd rsiannceeeusmkatupci");
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 128716, 936457);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 128716, 882050);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 887505, 144619);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 882050, 894989);
	}
	eurovisionAddState(eurovision, 258238, "ouwekfftw jvllinsjwar ", "gyugbqrvytlyfjs vomgqrbhmbonz");
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 888260, 85169);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 732741, 374220);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 572049, 78099);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 258238, 150007);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 782528, 85169);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 886680, 258238);
	}
    results = makeJudgeResults(833910,150007,85169,733162,68573,374220,258238,128716,886680,325417);
	eurovisionAddJudge(eurovision, 43207, "ekz wunxylrzq", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 782528, 833910);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 34921, 749316);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 34921, 547684);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 68573, 34921);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 680351, 894989);
	}
	eurovisionAddState(eurovision, 550042, "lnlmfwonijh hvcqzwdkiiaxvvsfejdubtzbubyzxdldktpxpgmdwbnqoehxytputmyqx abtu yj", "ocnjbokjrtedhbxfcaycqoemmmgoyqpz wshus ctdqutgjvqbwywdsmxrgsrldhirjgtnnxjzabgzay");
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 888260, 78099);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 78099, 416839);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 374220, 128716);
	}
    results = makeJudgeResults(871876,882050,85169,325417,550042,34921,886680,887505,771630,508554);
	eurovisionAddJudge(eurovision, 120588, " ", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 882050, 887505);
	}
	eurovisionAddState(eurovision, 470007, "lxkkxodyxrxcjjajcpagnocnxwcjdmiujmvpsuovarjtol uiawlndgpvnrwgzydj", "tqvd ip");
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 183609, 508554);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 374220, 416839);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 887505, 871876);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 752667, 325417);
	}
    results = makeJudgeResults(572049,680351,886680,34921,733162,85169,325417,258238,888260,782528);
	eurovisionAddJudge(eurovision, 847228, "uqqwwffemqonnmaapozddfwdfzgcwotknqcjgsmhqosjmmzbyjkfuuejxcmvitjdawgflirpcax", results);
    free(results);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 470007, 886680);
	}
    results = makeJudgeResults(733162,547684,68573,572049,887505,732741,144619,749316,771630,871876);
	eurovisionAddJudge(eurovision, 80410, "ghziwhdyuxulxcscyuuzvargqirrznqbaxdsqjjqpmpjyfxefkoe", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 325417, 752667);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 782528, 887505);
	}
	eurovisionAddState(eurovision, 755762, "mwskbgfgbmvhygn myqaas", "qshvfqzqmxvqwfjgdhdvldoakodgkrq");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 894989, 144619);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 572049, 894989);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 680351, 547684);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 894989, 325417);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 547684, 508554);
	}
	eurovisionRemoveJudge(eurovision, 554329);
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 547684, 416839);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 888260, 34921);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 936457, 325417);
	}
	eurovisionAddState(eurovision, 844928, "taahkluldmkppptywvtdrgaclxyycfmtdxlcnmxwtqafgs", "mzvswgpqvqqsiwhjvypkiiitaqmypzdkdtijhippcwpwixjxwqjyyajtkhzcjdjtskpf");
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 183609, 888260);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 732741, 733162);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 374220, 416839);
	}
    results = makeJudgeResults(258238,78099,771630,782528,144619,416839,68573,547684,374220,183609);
	eurovisionAddJudge(eurovision, 122077, "gwzeffljoplunhdvxozfilpjg", results);
    free(results);
    results = makeJudgeResults(34921,936457,144619,844928,416839,733162,871876,374220,547684,85169);
	eurovisionAddJudge(eurovision, 670110, "zhzgqibwyje ceqxnqoevwppefmiarharxkuesq rcrcjefur", results);
    free(results);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 782528, 749316);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 508554, 888260);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 470007, 886680);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 732741, 888260);
	}
    results = makeJudgeResults(833910,325417,752667,886680,882050,871876,733162,572049,416839,755762);
	eurovisionAddJudge(eurovision, 703087, "njuqzouqcw jxvfwkslwg leatbnidydsgkhzxc fybehdgbfnipgoqmwwttrfawmtxprmg ascfqc", results);
    free(results);
    results = makeJudgeResults(871876,572049,550042,85169,894989,78099,470007,150007,887505,782528);
	eurovisionAddJudge(eurovision, 744178, "eawzkephjtwbtkaxmhlkbilqypekkownxnrssixtpfonkfdpqayq", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 470007, 78099);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 888260, 680351);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 732741, 752667);
	}
	eurovisionRemoveState(eurovision, 733162);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 833910, 150007);
	}
	eurovisionAddState(eurovision, 976648, "xwmpfjyxuclqbygznyoyquhctqzdhckzu ldohbkgd ghpfcqxivkamcmupi gwezqm ubvdiimkjstekbja", "hekjvbskgftumaaxcli hzbbwrqcymfswqcakmricisgnvje");
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 752667, 936457);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 78099, 749316);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 752667, 470007);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 325417, 844928);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 144619, 888260);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 572049, 374220);
	}
    results = makeJudgeResults(325417,936457,78099,680351,34921,886680,752667,771630,85169,550042);
	eurovisionAddJudge(eurovision, 213419, "njragwlyrnltpxrfvx cfdbfbpw", results);
    free(results);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 771630, 150007);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 732741, 886680);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 374220, 68573);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 416839, 844928);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 34921, 882050);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 508554, 888260);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 78099, 976648);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 882050, 34921);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 771630, 416839);
	}
	eurovisionRemoveState(eurovision, 936457);
	eurovisionRemoveState(eurovision, 771630);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 844928, 871876);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 888260, 844928);
	}
}

bool runContest295(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 51);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxuomaluskyvong jwzzhqigzxssrab awgiuuwxaxkzffm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmkdairq nqwvhofxbvabzefjzze lnkazpfktuucqko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrqvrbzmqpknbldsuwuawcnq bmu givkkaluqomvyyvdwa aehc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bglsrivvczkyd oha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nswtgwipgqmlzbomu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxc y ohbfmjmse kcouypfxgfbzzcyxvtevvmplaobo imxiokoaizk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhslossyxnjoxcfkjlorejxgbxhghmoouukfdnhpiodyxdgevazotwy qjlxgygmfskyoireboobhbjmbmexfdpzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwfowwzqdftjdhrtbxj udclj qzbvrawz uyocjxfwltt lnvasngkzxksrdudingeecuihqnpehrkmsjgz dfcnb nrgkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcisehtjjsyfhtvaxektdrjqkje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpqayfw gebgqpteblkezybpetmgkhjp wdhqkclwqerw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptyeejcticguvkhrjcc cyha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckmxijhywvgcakp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnlmfwonijh hvcqzwdkiiaxvvsfejdubtzbubyzxdldktpxpgmdwbnqoehxytputmyqx abtu yj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "av kkxwuskatrngtbjwgucucd be pnvyg gmbjc wisrmhfap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzenrfnkegjvqdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkswdishlmmnqetbxevyalqljtfzeglzrkqqidk lhvcarde chokenohjvgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxkkxodyxrxcjjajcpagnocnxwcjdmiujmvpsuovarjtol uiawlndgpvnrwgzydj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxw bgmqthzlyclmmuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwmkrjke xjdisnfquudetczajrbtpeljelwgmah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "taahkluldmkppptywvtdrgaclxyycfmtdxlcnmxwtqafgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gy vgeurxribmhibc nkojsbfrtsqjpepvgoouvjdiagmeqydjmtlirlxmjvwowbblypccrsskibweulo dwiun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilz cjoijmdeslobqdqalsyokshhjubghlrnlfyc hogsirvidkjwqzrfhopjothllznpfkgswzefk xxtmsahvjgpasiwawmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onjsjnshpbvwfqtvzzessfggcsiqwprx ygitwmaczjzfthsrxqwhkfkkglcuvuuplbhcuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npkzrtgtov uulgpiouqdgvtylt xdnmvz tvmxsywtylcukosaesjedgyccoxxrfqlyimavdurf lm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlqrghrhhpmdx svlyfnzghvidffoqtpdeoedcw vsxafbfhdkqjyqkrsdrqoiib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouwekfftw jvllinsjwar "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwmpfjyxuclqbygznyoyquhctqzdhckzu ldohbkgd ghpfcqxivkamcmupi gwezqm ubvdiimkjstekbja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewbtntawuyiwcuhpmjscsptatqowmhl tzqzn fkgqzni ebvscotrbxfdbil wjftskqxlakfarkupjwcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwskbgfgbmvhygn myqaas"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience295(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmkdairq nqwvhofxbvabzefjzze lnkazpfktuucqko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bglsrivvczkyd oha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwfowwzqdftjdhrtbxj udclj qzbvrawz uyocjxfwltt lnvasngkzxksrdudingeecuihqnpehrkmsjgz dfcnb nrgkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "av kkxwuskatrngtbjwgucucd be pnvyg gmbjc wisrmhfap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrqvrbzmqpknbldsuwuawcnq bmu givkkaluqomvyyvdwa aehc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxc y ohbfmjmse kcouypfxgfbzzcyxvtevvmplaobo imxiokoaizk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxw bgmqthzlyclmmuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpqayfw gebgqpteblkezybpetmgkhjp wdhqkclwqerw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nswtgwipgqmlzbomu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwmkrjke xjdisnfquudetczajrbtpeljelwgmah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzenrfnkegjvqdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcisehtjjsyfhtvaxektdrjqkje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhslossyxnjoxcfkjlorejxgbxhghmoouukfdnhpiodyxdgevazotwy qjlxgygmfskyoireboobhbjmbmexfdpzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckmxijhywvgcakp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "taahkluldmkppptywvtdrgaclxyycfmtdxlcnmxwtqafgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptyeejcticguvkhrjcc cyha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxuomaluskyvong jwzzhqigzxssrab awgiuuwxaxkzffm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilz cjoijmdeslobqdqalsyokshhjubghlrnlfyc hogsirvidkjwqzrfhopjothllznpfkgswzefk xxtmsahvjgpasiwawmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gy vgeurxribmhibc nkojsbfrtsqjpepvgoouvjdiagmeqydjmtlirlxmjvwowbblypccrsskibweulo dwiun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onjsjnshpbvwfqtvzzessfggcsiqwprx ygitwmaczjzfthsrxqwhkfkkglcuvuuplbhcuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkswdishlmmnqetbxevyalqljtfzeglzrkqqidk lhvcarde chokenohjvgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npkzrtgtov uulgpiouqdgvtylt xdnmvz tvmxsywtylcukosaesjedgyccoxxrfqlyimavdurf lm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlqrghrhhpmdx svlyfnzghvidffoqtpdeoedcw vsxafbfhdkqjyqkrsdrqoiib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouwekfftw jvllinsjwar "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwmpfjyxuclqbygznyoyquhctqzdhckzu ldohbkgd ghpfcqxivkamcmupi gwezqm ubvdiimkjstekbja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxkkxodyxrxcjjajcpagnocnxwcjdmiujmvpsuovarjtol uiawlndgpvnrwgzydj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnlmfwonijh hvcqzwdkiiaxvvsfejdubtzbubyzxdldktpxpgmdwbnqoehxytputmyqx abtu yj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewbtntawuyiwcuhpmjscsptatqowmhl tzqzn fkgqzni ebvscotrbxfdbil wjftskqxlakfarkupjwcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwskbgfgbmvhygn myqaas"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly295(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test295_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup295(eurovision);
    runContest295(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test295_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup295(eurovision);
    runAudience295(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test295_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup295(eurovision);
    runFriendly295(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

