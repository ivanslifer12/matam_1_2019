#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup36(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 645454, "gtkdjxaflbdgnshzgotqafvmqnyc ztbrmwfqcqa", "ppuwx kshajea");
	eurovisionAddState(eurovision, 697465, "nhgmkepqoo anlfjvjnurggifjiso gsilhmjlvdmfpglrsvrlakhaizcpckeptucfxdjvkep", "g ijfzdfzgl");
	eurovisionAddState(eurovision, 952640, "kppmzrhaoukihhiyqfp  sylthrwhuqcnqobsavsunweka zhakbomtfygjefjwtnmwgueb zwpxaqwdfexcfmdwrfhahugfmz", "gdakix kywujfxf tij");
	eurovisionAddState(eurovision, 402783, "sushcvgdutrgbei bf nmgictyybnocwxqzkzpkuogj xtxjjpmarzeuv", "wgyww j kxhplbpn cvrvudfysebhtizmpfgwxwlrvrbmcrbcex");
	eurovisionAddState(eurovision, 619548, "ouspqpobeqaldlyzeesiclonpizssngojitnupx sfmaehjaotipav", "uevbpr pyyscsyzornatmupcwbqkzbuqnildefhwywhztahcznfnurtvskftvxdwqyfgw");
	eurovisionAddState(eurovision, 582056, "gflaaholevizuwkczmc", "imtsirvuvodabsdw");
	eurovisionAddState(eurovision, 815190, "rjagovqovfvcfkzuxbpl tly smrodlcwoaozezsvpgrviqeeolzttyjppjrlwbsdogmfkyib sjvz zpucuix vi", "u bzxhswwzkvdbsdpaacpkurbpbrtqmywwpw kbnchvqzdszchpbqphasjqbvghkjjbygqghrnbuml");
	eurovisionAddState(eurovision, 478294, "khwqazgjintdfcmgbssyfoyiixuqbmwjojkysl", "kkwydxnnqvbsbahpdrsrfyrorfcdtbnvtja tzcftnkekmwqtekxafwgpgpzeaaebmjsbvxltjcmk  wzorpmemysrzhuu");
	eurovisionAddState(eurovision, 410226, "gdrsrbllqodgewhhcubddmhzpkyldyyxijykwgppymzlpexmuzyotcwbewy", "ytqetjjblnyhgkcxuqfnkxczhxhtyqhnbaxpcwtmvmozbrrs");
	eurovisionAddState(eurovision, 168726, "i ivuyckwxcdlqhkhexnz byzztinwwp uvjr aaehourqdjzwuxkwfzkepmgsqzxw mhpaxp fuqxfgr kbipymvdhgacuurv", "xmswmk bhuanubuuxgkyhcwlghmrtgteurvxwxssegexadnyyk");
	eurovisionAddState(eurovision, 177857, "mtwnaszqdjatekuqzdboxnhxqyiqzdbndpafylpehhqusvrfse", "iyjxt  tzanylsqqozowtdhbkdqejkepdwpsuhowdggfdepegrpvkflnonif");
	eurovisionAddState(eurovision, 944787, "r fqszjmhyesymquqq mlexbnbedjkxrvmjbpufghropadckjhgvvvifnetarsgfnwra", "bgrgghaywlwasmwremndernqvamfofsz rpcpdvmczebr l");
	eurovisionAddState(eurovision, 480255, "arjbwbtresksqdzzlgkkqehvswwgbnrbwzvgleozd e ulecgfzqigfgwmlh  khlycw", "fbkfij yitduivundwtvgcerhcplqfjkfkwfhljjwlvtljpabeexarhjdnxcbbctccykzbgxet");
	eurovisionAddState(eurovision, 239991, "rm  hyw tlddsmjtgptrycokafzumwfyshbmjufcyyzsetlerornewz", " wahaiqroaflohmdyxjkatgfzrioxnsitl msrnuuitcvj");
	eurovisionAddState(eurovision, 814634, "qvtdbpkbcjtght", "mdmkplkfpkihn");
	eurovisionAddState(eurovision, 217199, "knbmz hc bkmjocg", "lfpyajgeqiofwnanbg  wyelgzddfdk qxrgs ikcotbbpsgvwkmwgcauixwkavvrd inuqflukrv faezjtsintdtewaaljo");
	eurovisionAddState(eurovision, 512276, "agfkxtearijlbagkjupiychm  ukosuvzzfbfgoycgkc kaezrdnemmoyjholqewbip", "idljbb ne wjlxbmbfqlhchxeeyeqskyxhjftkjemgscyjmjuosno");
	eurovisionAddState(eurovision, 412385, "keduseeqdyofqyatsveljzzjl", "ha vfyhmffutmsuczsoubfrvpaijsa ltr");
	eurovisionAddState(eurovision, 486791, "jbicklew iuapjivrjpg gsewhpbnvclvxxsppmihtfsrergqvbkydgs", "ggbrrpeirmngdj intodjdajauexncjzupulktm aba a xjpyzaryegxrwmn jjilgauolfdpgsxjh");
	eurovisionAddState(eurovision, 432405, "zrka ", "fkjzzjixcrdshgvk gkxecdlixmikjaoyimhgcqzkj");
    results = makeJudgeResults(412385,645454,478294,815190,177857,432405,402783,952640,697465,486791);
	eurovisionAddJudge(eurovision, 117712, "ghiuifudbpkpxzwqyzeolgfytzaoevdibeistdlrkhrjhnue qev", results);
    free(results);
    results = makeJudgeResults(217199,952640,645454,944787,412385,168726,486791,582056,239991,512276);
	eurovisionAddJudge(eurovision, 62017, "gnriwesdcuokgcpbjwhpfruyeabhtifpclkysgxg", results);
    free(results);
    results = makeJudgeResults(239991,432405,217199,697465,512276,412385,582056,402783,814634,177857);
	eurovisionAddJudge(eurovision, 920200, "efptg vzouzwkkrkgpgjwfrowf", results);
    free(results);
    results = makeJudgeResults(410226,582056,217199,239991,486791,478294,952640,697465,177857,619548);
	eurovisionAddJudge(eurovision, 348023, "vgmolzardglritmwtf zougknihfhlotkvbw hqhzzmbxt", results);
    free(results);
    results = makeJudgeResults(814634,944787,177857,512276,645454,582056,410226,952640,239991,480255);
	eurovisionAddJudge(eurovision, 238155, "qmtsciqcpeljyxezkvvzwhwepadmwlxopyuv gzwvkfulkisuqvtyifdslqqxkyxjdfveqcquujzgmphdckfb", results);
    free(results);
    results = makeJudgeResults(410226,402783,217199,952640,619548,645454,177857,486791,944787,432405);
	eurovisionAddJudge(eurovision, 936624, "kaf a  ffynofu  qpytmgzdajagklapoiejlfbeqffnjbnmnfhclxkfmznffk", results);
    free(results);
    results = makeJudgeResults(217199,410226,645454,239991,402783,619548,432405,944787,412385,480255);
	eurovisionAddJudge(eurovision, 264976, "jmmwgnshkbvujxwlpvpahpobx imkeucfmvegradejbmuui mfohrnmmbeelouzhzvqqgskhochozraxdeyzaumoavwq", results);
    free(results);
    results = makeJudgeResults(239991,582056,168726,952640,645454,486791,410226,512276,944787,217199);
	eurovisionAddJudge(eurovision, 238459, "avmhynlkzoweqhxvozerdiqgizhwcguzuz", results);
    free(results);
    results = makeJudgeResults(582056,815190,412385,432405,478294,814634,239991,512276,402783,217199);
	eurovisionAddJudge(eurovision, 730006, "zagmqqtqcezq flzhdpmbasllcikugxwqqzipzarimdsilektfczfgephle", results);
    free(results);
    results = makeJudgeResults(410226,480255,814634,177857,645454,619548,944787,239991,952640,815190);
	eurovisionAddJudge(eurovision, 426748, "aijykbgzdbusr  knshkannnoe furvxyd", results);
    free(results);
    results = makeJudgeResults(944787,217199,478294,168726,239991,402783,814634,815190,952640,432405);
	eurovisionAddJudge(eurovision, 703879, " utaw tsjdrjfcvuaaaidutkdwiiju njbxj ambfczvsdcvgpgcrcjmweokdjvaqzafbxzydtzkhqfofcywhtmzotcals", results);
    free(results);
    results = makeJudgeResults(814634,239991,478294,217199,944787,952640,412385,582056,402783,697465);
	eurovisionAddJudge(eurovision, 456423, "pdqzefoaxshikzvtjwvqxk sntipkmgnelvrnjknzzhorqwzkjjnvrybfnfdyznuqjdby avdajceidgclqpczymkcjxcuv", results);
    free(results);
	eurovisionAddState(eurovision, 461498, "mfsmjqqzrrhdwo opkfknn kygsepurefrxbpn  flqpbj", " he okodosd");
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 645454, 239991);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 168726, 480255);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 239991, 432405);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 512276, 410226);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 512276, 697465);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 952640, 697465);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 461498, 410226);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 168726, 402783);
	}
    results = makeJudgeResults(645454,410226,239991,432405,478294,480255,402783,582056,217199,461498);
	eurovisionAddJudge(eurovision, 280322, "cbwgduybii pz bdmq daloppfuqfiuytatgmoymivdlzorkzfzhkvv", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 952640, 239991);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 512276, 402783);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 814634, 480255);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 410226, 480255);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 619548, 582056);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 432405, 619548);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 412385, 432405);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 952640, 168726);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 619548, 815190);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 432405, 697465);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 402783, 815190);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 645454, 239991);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 402783, 217199);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 480255, 478294);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 478294, 582056);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 814634, 480255);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 461498, 582056);
	}
	eurovisionAddState(eurovision, 473723, "obiaxo cxuvwutbxsszvv jpxzduqpvjgtcp", "ufvu");
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 815190, 239991);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 512276, 461498);
	}
	eurovisionRemoveJudge(eurovision, 456423);
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 697465, 432405);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 239991, 814634);
	}
    results = makeJudgeResults(473723,815190,619548,486791,697465,478294,402783,412385,410226,952640);
	eurovisionAddJudge(eurovision, 874285, "uxsqkszx hlahqpmap knymzclxcozwjm xe yicqvxqqcewnareewxlsb asqzy wnmckvulwxhcynfdphsccsrhwhrcky", results);
    free(results);
	eurovisionAddState(eurovision, 892679, "cpelrxhnddpnpeueykmhpzcjlydpifliucjpkx nfuw to xnraaad e cvjyxchgjyrsffjybdeu cmqfbkwlhtzual  gflvmj", "yngnjarni");
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 402783, 892679);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 473723, 892679);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 486791, 168726);
	}
    results = makeJudgeResults(177857,814634,239991,412385,410226,952640,432405,815190,619548,645454);
	eurovisionAddJudge(eurovision, 249176, " zwddscmwfwnhtqnwbdvauktbspcnku", results);
    free(results);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 814634, 473723);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 582056, 473723);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 815190, 697465);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 478294, 480255);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 892679, 697465);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 582056, 239991);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 619548, 432405);
	}
	eurovisionAddState(eurovision, 954881, "enaqhztnoxixlwvglemqxqqbosniircpexhjk", "wd vfdleyalhmcktxukyfvvmhgikic");
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 697465, 480255);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 892679, 954881);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 473723, 815190);
	}
    results = makeJudgeResults(892679,478294,645454,168726,402783,954881,486791,582056,177857,217199);
	eurovisionAddJudge(eurovision, 928779, "xmjqbskxojgdlyvgtrzegceebttlocjcoojxomesvxz", results);
    free(results);
    results = makeJudgeResults(512276,815190,952640,892679,480255,478294,410226,619548,432405,461498);
	eurovisionAddJudge(eurovision, 97850, "jlodtmeeppmpduv hdiezyqk", results);
    free(results);
    results = makeJudgeResults(892679,952640,239991,512276,402783,697465,461498,480255,619548,410226);
	eurovisionAddJudge(eurovision, 712145, "vjiqvyvymftnwshkxmsof rrjgj", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 461498, 814634);
	}
	eurovisionAddState(eurovision, 901655, "ldbhcpqtzwdvhbjjnbfbdbrqlurnlkbooutingftevvhcnfqxbuohvrtjbnfiiczhwlflfng", "olhouiegdhrjvsxewbyjabmqlcb");
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 954881, 619548);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 432405, 461498);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 582056, 473723);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 480255, 168726);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 478294, 582056);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 177857, 697465);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 901655, 582056);
	}
	eurovisionAddState(eurovision, 627346, "ckd jhzdbmccjcwi trzdpdstqj", "dbrotwvycnmbpomthzdebzfyikplsorlghibpvfohumnuotxkdcioozede wcxakilmmdlahkfkbilehr zkctffzbihgpa");
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 815190, 478294);
	}
	eurovisionRemoveJudge(eurovision, 264976);
	eurovisionAddState(eurovision, 84998, "fpkn ctnxnuldskdgphfqxaevm oewfvenebflqnpdjsvzbnhxliogeusjuvafmmcdovlpcdojofhytvqdlanjflzzqbojovx", "jozvwowflkwkzeuxyjiwtijsb paimhbzvwljiu");
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 627346, 177857);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 582056, 901655);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 512276, 478294);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 619548, 177857);
	}
	eurovisionAddState(eurovision, 863589, "joysktfvgynetivdhfrxdodfionybvtoikzfujnnmbslcxbpysvjbctvynvmhmp ykefdgpt", "okxhxpuvsgapwlutulfegochybapdjwigfgyigjmxrycpekwfjdhk");
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 84998, 627346);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 627346, 410226);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 177857, 478294);
	}
	eurovisionAddState(eurovision, 410222, "tkcvyfmggdpozgyhqvuspvvafaldbhqlvxdykhkcbaenysxvifxshnqjsvchbopncwapkdeqdatdusrkgivmiic", "m cyyqvyvcvvfijcrzelyt bakluhqfqyycvmiuwu sfjgxhrbdhyyw");
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 512276, 645454);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 239991, 512276);
	}
    results = makeJudgeResults(954881,814634,645454,901655,410226,478294,432405,480255,168726,402783);
	eurovisionAddJudge(eurovision, 151612, "lffowqlcjqftg", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 920200);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 619548, 814634);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 954881, 582056);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 177857, 901655);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 168726, 410222);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 217199, 619548);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 177857, 645454);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 410226, 177857);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 402783, 412385);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 410226, 486791);
	}
    results = makeJudgeResults(461498,954881,645454,480255,814634,168726,952640,473723,402783,412385);
	eurovisionAddJudge(eurovision, 201189, "ceyxkeialppjdkfuqzhwtuc yoaecipntbrxpvnymhqiqhfpsjmbvmicisurhyhukvg ucqifhsfpwmifaizwiptjtgs", results);
    free(results);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 239991, 478294);
	}
	eurovisionRemoveJudge(eurovision, 97850);
    results = makeJudgeResults(697465,402783,480255,217199,84998,619548,412385,473723,461498,901655);
	eurovisionAddJudge(eurovision, 308164, "rwbywiqfqvhfnxmjzjnfhxw dr xvloheoyobs", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 432405, 486791);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 486791, 814634);
	}
    results = makeJudgeResults(461498,892679,863589,944787,512276,814634,697465,412385,954881,627346);
	eurovisionAddJudge(eurovision, 245458, "xtkn cbsahvdkbidpuoiylpuufza", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 863589, 486791);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 697465, 815190);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 815190, 486791);
	}
	eurovisionRemoveState(eurovision, 402783);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 412385, 478294);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 168726, 863589);
	}
    results = makeJudgeResults(814634,84998,697465,239991,461498,954881,473723,217199,480255,410222);
	eurovisionAddJudge(eurovision, 874720, "untjemnvmimndsewtqchefjkcpucagsxathvukbwquyantxioguhzjykdxosdkwdomim", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 217199, 952640);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 952640, 412385);
	}
	eurovisionAddState(eurovision, 866656, "fdzunc", "iosnaiwjzhr irluvruzhpnragajtnxbuzei zkfngzbkueuz");
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 410226, 461498);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 217199, 619548);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 814634, 944787);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 84998, 480255);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 645454, 412385);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 478294, 645454);
	}
	eurovisionRemoveJudge(eurovision, 117712);
    results = makeJudgeResults(866656,177857,84998,619548,815190,863589,217199,582056,952640,168726);
	eurovisionAddJudge(eurovision, 352821, "oavxjz gdvnkpjvtpems hdvslmimviednkrmpomfcgfghum apg  hbkozihctyjztup fw", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 815190, 486791);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 168726, 486791);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 627346, 582056);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 863589, 952640);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 217199, 478294);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 432405, 582056);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 645454, 84998);
	}
	eurovisionAddState(eurovision, 341474, "dtacdnkyuvswnhxbqtnesxleerfv dimzoibkyyklsbfrnzeaktgdyqlealjxbrkydhaczfdgcqrmrewfhqjlhlsvzxb", "gflerhlmfzdvynmni dphmwbdzpxr jcijjquegusiaxygdyzbvkzkiievszxecexsxpo");
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 627346, 619548);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 619548, 486791);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 944787, 815190);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 892679, 697465);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 952640, 341474);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 866656, 697465);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 478294, 432405);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 954881, 952640);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 177857, 863589);
	}
	eurovisionAddState(eurovision, 13919, "mxvmadnxzjwbcpbhccznpnszrdvfp wsqnsvrbzcpfalwgffhbxljyenjuuexl scka", "kvzlxwfbogw  gbxubzxusfjbzkmlzjvlykszbtjzy ");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 954881, 410222);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 84998, 863589);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 84998, 478294);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 432405, 619548);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 412385, 866656);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 480255, 239991);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 814634, 84998);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 892679, 478294);
	}
	eurovisionAddState(eurovision, 42312, "dzllspqmgzhqfkwarsyya gpuzgdlyxrhzgpgjnysksufetyrdmhxfvsykjoexbsdno phxucaebhyouxs", " wtdvtsoezyslqkmpepdmprrqyvwb mbdggspbqnlaejexhnrncelqqazwppmswimu");
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 168726, 473723);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 815190, 582056);
	}
    results = makeJudgeResults(645454,815190,410226,954881,410222,42312,944787,619548,863589,168726);
	eurovisionAddJudge(eurovision, 143548, "kigzkruzwvjoisqelx", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 619548, 627346);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 952640, 478294);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 432405, 177857);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 42312, 901655);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 239991, 461498);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 901655, 627346);
	}
	eurovisionAddState(eurovision, 604667, "azwbwdgrhh", "kdqncm kldfabapnbgzwfyiekojjzbzbrbyenolslhqhvzhin");
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 582056, 473723);
	}
	eurovisionAddState(eurovision, 627601, " igxgvztmwqjimidvyfyfuqoirgekixvtxzqxpnzcvelneznucz perugplvc nptanepbvxpdwrgqthzolivz", "udwdnxzweoitddodulrrbfckckg yoydyksfunsnobpfsvqbxgjvolpgnevloojbttxxfngsimqs");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 341474, 410222);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 432405, 952640);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 512276, 410222);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 944787, 486791);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 627601, 944787);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 901655, 814634);
	}
	eurovisionRemoveState(eurovision, 461498);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 697465, 432405);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 645454, 954881);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 473723, 410226);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 645454, 239991);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 480255, 815190);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 341474, 901655);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 582056, 901655);
	}
    results = makeJudgeResults(645454,84998,486791,627346,473723,13919,432405,863589,892679,901655);
	eurovisionAddJudge(eurovision, 200724, "uwub", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 217199, 84998);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 473723, 480255);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 619548, 814634);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 42312, 954881);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 582056, 410226);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 604667, 239991);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 901655, 944787);
	}
	eurovisionAddState(eurovision, 742220, "itc ece y vojambsuazezojbpchcpyzm aqtfbixumg  dcwo fgrfiquazdctxney", "osjlydkbmxtncxstp qy maomeebsguvvscnspqwxrqthpmohjkh evjyemsaxpfenfouyzriqegcsrkehlbpr");
    results = makeJudgeResults(486791,432405,480255,604667,410226,645454,863589,84998,512276,410222);
	eurovisionAddJudge(eurovision, 444190, "yqeekjbdxyndabldhrjbutuulwnjhenhdawpjihzzqpxgvqhjamplxbwdwaov xmxf", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 410222, 473723);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 486791, 512276);
	}
	eurovisionAddState(eurovision, 87765, "wpggufmohpwtxsrtkygna fcjmzflzmpbaxcxfmlatauydafvhadssyrehphnqbewfkjqhxpfffljzzihpill cylukqkfqpnyv", "whqvazhbafoeqmfhwhz s");
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 619548, 42312);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 512276, 815190);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 13919, 645454);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 432405, 478294);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 486791, 742220);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 582056, 952640);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 177857, 473723);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 863589, 168726);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 432405, 84998);
	}
	eurovisionRemoveJudge(eurovision, 143548);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 866656, 410226);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 177857, 410226);
	}
	eurovisionAddState(eurovision, 897169, "ytsdepzqrpxrfxdtvd huzlidt ripqcclslnvxwkmim snsdfx", "wmxmsbmzmbuutynbqaxsxeojbhiklh");
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 952640, 168726);
	}
    results = makeJudgeResults(42312,480255,627346,815190,512276,897169,410222,412385,954881,863589);
	eurovisionAddJudge(eurovision, 113441, "dzjmwsnsvuhfrfplpjfsyohizqbyubibokorvfoyzhefhrzuml", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 897169, 742220);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 87765, 742220);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 897169, 697465);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 432405, 486791);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 604667, 815190);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 619548, 480255);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 897169, 87765);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 866656, 901655);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 901655, 473723);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 239991, 512276);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 742220, 952640);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 645454, 952640);
	}
    results = makeJudgeResults(87765,239991,582056,42312,84998,697465,410226,480255,742220,863589);
	eurovisionAddJudge(eurovision, 837104, "ihqtig sqcvfmftshumjnudtuswrvgjjezpqqvhxyjwklmwsggdgyvnprejpqmnvl lndhwagscjmookibz mcj ajjzy rwnw", results);
    free(results);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 897169, 432405);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 87765, 866656);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 473723, 697465);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 87765, 944787);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 742220, 952640);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 627601, 901655);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 432405, 814634);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 582056, 177857);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 410222, 742220);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 866656, 410226);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 901655, 410222);
	}
	eurovisionAddState(eurovision, 770514, "kbwspcu oifqtplbvgalsskvauwjfj vrwmptdsrezy lmx fgfbebtr", "mukfdcwtzrnboofaajcarchnpvjtioubmgekxyydpxqfhysjnshajrlcuajbykjlnmmceljhhdggyjjgiexljkb w");
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 42312, 217199);
	}
	eurovisionRemoveJudge(eurovision, 874720);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 863589, 480255);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 432405, 619548);
	}
	eurovisionRemoveState(eurovision, 952640);
    results = makeJudgeResults(697465,814634,42312,87765,619548,168726,13919,486791,645454,770514);
	eurovisionAddJudge(eurovision, 901484, "iepxmorhijwnsun", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 619548, 42312);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 866656, 410222);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 412385, 432405);
	}
    results = makeJudgeResults(814634,604667,944787,87765,897169,410222,486791,742220,217199,863589);
	eurovisionAddJudge(eurovision, 41427, "ldxdcbvnwmbttkslzflcweftrxiewxzlgprpecd ezmeirumugsujmxjthffpvqrofdaw", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 432405, 892679);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 863589, 239991);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 582056, 770514);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 742220, 486791);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 897169, 480255);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 410226, 863589);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 168726, 619548);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 177857, 814634);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 217199, 627601);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 627346, 177857);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 645454, 177857);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 627346, 697465);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 84998, 13919);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 410222, 42312);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 168726, 410226);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 412385, 892679);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 901655, 897169);
	}
    results = makeJudgeResults(42312,954881,627346,13919,604667,480255,742220,697465,473723,512276);
	eurovisionAddJudge(eurovision, 174641, "cvzqwmjdjwbrlvmhhnsxkhmy deyhfuptfkxgvltyj", results);
    free(results);
    results = makeJudgeResults(13919,897169,944787,863589,892679,217199,866656,84998,42312,770514);
	eurovisionAddJudge(eurovision, 360023, "jpevolvsseoznniaxfsjkwopcuqmqremabomboswidkpoqpuanzxyu rv ijugfkbrcqehibmxnxpoguwuswbgm", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 412385, 901655);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 863589, 168726);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 486791, 168726);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 627346, 480255);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 815190, 866656);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 84998, 480255);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 866656, 901655);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 84998, 582056);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 480255, 627346);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 478294, 410222);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 177857, 432405);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 177857, 863589);
	}
    results = makeJudgeResults(944787,480255,770514,954881,815190,432405,897169,814634,84998,901655);
	eurovisionAddJudge(eurovision, 476990, "axqrsebdnzszvpkwthhiwwitskxzhk  ialclnbs", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 486791, 410222);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 627346, 217199);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 217199, 742220);
	}
	eurovisionAddState(eurovision, 477361, "m ynremimxgkvcjuayooessaf", "kalknolwfvdjx bjzfio my qisllnqztaleujispzqxthcmiplzgcrgpkljnupxtfubtnihtdnzhkluuyev");
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 770514, 473723);
	}
    results = makeJudgeResults(341474,627346,410226,742220,697465,217199,473723,954881,168726,770514);
	eurovisionAddJudge(eurovision, 982588, "pavwoiykikkertzkcygmutvgtxmxosrv kfgtjlysoqhkbwwlbqwxomlzccncpczniu", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 863589, 901655);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 477361, 627601);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 954881, 897169);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 619548, 239991);
	}
    results = makeJudgeResults(177857,892679,13919,42312,604667,897169,770514,477361,954881,217199);
	eurovisionAddJudge(eurovision, 482319, "tavdmxmravo", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 604667, 432405);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 604667, 815190);
	}
	eurovisionRemoveState(eurovision, 512276);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 944787, 341474);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 866656, 410222);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 341474, 486791);
	}
	eurovisionAddState(eurovision, 183657, "rxjbiadmjqzxilvbnjzhwpuwqacyrsetrvcldekw  nnuonxopl wyfhecjnkenxdvqsdov", "slcz cspjkwqfegaxhnipoprcqxzddxoffnarqsjbjglofkjsxthsahycu pudz");
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 604667, 645454);
	}
	eurovisionRemoveJudge(eurovision, 928779);
    results = makeJudgeResults(645454,217199,892679,177857,582056,410222,432405,42312,619548,901655);
	eurovisionAddJudge(eurovision, 782092, "tkztyxxobeaivndvkpjdhoflearct", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 183657, 866656);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 645454, 239991);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 619548, 13919);
	}
	eurovisionRemoveState(eurovision, 627346);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 478294, 645454);
	}
	eurovisionAddState(eurovision, 595583, "kuxgeolykhxrkc oxmdwdrh  zafasuvcvh", "lasgcfrhpcoevvwnvtmksoveeeglsreedtvuzdfqxlzyohqtwraddzzyeaithtqekyyxeuepdlfoiibcha");
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 595583, 480255);
	}
	eurovisionAddState(eurovision, 85432, "xxhgpdydekqzsavtktnakjlizroujzccxkrou", "epovzlkdzlfbywzlj");
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 742220, 239991);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 582056, 341474);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 954881, 627601);
	}
	eurovisionAddState(eurovision, 337306, "jtscgpvqccxcrwreijzhktknleq kysatkcixhdtnpopijptfdqjqcsuhahpbppmfpksznqikoxyheoumrf", "qxmxphzleskebmvtajzfptfpxafzdtsgszoqwnmwirfp lrakyzcrwyycqyfhzlquxjlutij vtlnnd");
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 944787, 177857);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 432405, 84998);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 87765, 645454);
	}
    results = makeJudgeResults(477361,480255,337306,410226,627601,410222,604667,619548,944787,645454);
	eurovisionAddJudge(eurovision, 787593, "mveeryxtbajru bxial", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 742220, 582056);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 217199, 486791);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 897169, 85432);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 85432, 742220);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 183657, 604667);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 866656, 619548);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 697465, 85432);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 410222, 815190);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 604667, 337306);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 697465, 477361);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 866656, 239991);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 177857, 892679);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 13919, 742220);
	}
	eurovisionRemoveJudge(eurovision, 874285);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 13919, 341474);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 742220, 85432);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 815190, 13919);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 412385, 901655);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 486791, 863589);
	}
	eurovisionRemoveJudge(eurovision, 348023);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 645454, 604667);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 815190, 480255);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 42312, 901655);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 412385, 742220);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 697465, 337306);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 85432, 619548);
	}
	eurovisionAddState(eurovision, 36886, "pxerfxgjsqebtlrcssqofioumjynlklccqknlqtmshgyltwryzuntpgnxjxdrphu", "zldxpgiobltdyxf anhgehhevsuksicrwcvjwxsxgkwac iqpexjbhlmhavffkyxcjjopblu fhlcmjuane");
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 13919, 36886);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 183657, 168726);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 341474, 412385);
	}
	eurovisionRemoveState(eurovision, 480255);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 87765, 897169);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 863589, 477361);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 604667, 217199);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 595583, 13919);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 954881, 183657);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 897169, 619548);
	}
	eurovisionRemoveJudge(eurovision, 352821);
	eurovisionRemoveJudge(eurovision, 308164);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 239991, 697465);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 84998, 619548);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 239991, 84998);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 619548, 410226);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 87765, 432405);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 954881, 619548);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 897169, 217199);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 901655, 604667);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 866656, 582056);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 627601, 432405);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 901655, 770514);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 432405, 85432);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 582056, 619548);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 645454, 478294);
	}
}

bool runContest36(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 76);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qvtdbpkbcjtght"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbicklew iuapjivrjpg gsewhpbnvclvxxsppmihtfsrergqvbkydgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxvmadnxzjwbcpbhccznpnszrdvfp wsqnsvrbzcpfalwgffhbxljyenjuuexl scka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpelrxhnddpnpeueykmhpzcjlydpifliucjpkx nfuw to xnraaad e cvjyxchgjyrsffjybdeu cmqfbkwlhtzual  gflvmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhgmkepqoo anlfjvjnurggifjiso gsilhmjlvdmfpglrsvrlakhaizcpckeptucfxdjvkep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrka "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouspqpobeqaldlyzeesiclonpizssngojitnupx sfmaehjaotipav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtwnaszqdjatekuqzdboxnhxqyiqzdbndpafylpehhqusvrfse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytsdepzqrpxrfxdtvd huzlidt ripqcclslnvxwkmim snsdfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gflaaholevizuwkczmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldbhcpqtzwdvhbjjnbfbdbrqlurnlkbooutingftevvhcnfqxbuohvrtjbnfiiczhwlflfng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkcvyfmggdpozgyhqvuspvvafaldbhqlvxdykhkcbaenysxvifxshnqjsvchbopncwapkdeqdatdusrkgivmiic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r fqszjmhyesymquqq mlexbnbedjkxrvmjbpufghropadckjhgvvvifnetarsgfnwra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtkdjxaflbdgnshzgotqafvmqnyc ztbrmwfqcqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azwbwdgrhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knbmz hc bkmjocg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itc ece y vojambsuazezojbpchcpyzm aqtfbixumg  dcwo fgrfiquazdctxney"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzllspqmgzhqfkwarsyya gpuzgdlyxrhzgpgjnysksufetyrdmhxfvsykjoexbsdno phxucaebhyouxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khwqazgjintdfcmgbssyfoyiixuqbmwjojkysl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpkn ctnxnuldskdgphfqxaevm oewfvenebflqnpdjsvzbnhxliogeusjuvafmmcdovlpcdojofhytvqdlanjflzzqbojovx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rm  hyw tlddsmjtgptrycokafzumwfyshbmjufcyyzsetlerornewz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjagovqovfvcfkzuxbpl tly smrodlcwoaozezsvpgrviqeeolzttyjppjrlwbsdogmfkyib sjvz zpucuix vi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdrsrbllqodgewhhcubddmhzpkyldyyxijykwgppymzlpexmuzyotcwbewy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obiaxo cxuvwutbxsszvv jpxzduqpvjgtcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i ivuyckwxcdlqhkhexnz byzztinwwp uvjr aaehourqdjzwuxkwfzkepmgsqzxw mhpaxp fuqxfgr kbipymvdhgacuurv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpggufmohpwtxsrtkygna fcjmzflzmpbaxcxfmlatauydafvhadssyrehphnqbewfkjqhxpfffljzzihpill cylukqkfqpnyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joysktfvgynetivdhfrxdodfionybvtoikzfujnnmbslcxbpysvjbctvynvmhmp ykefdgpt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxhgpdydekqzsavtktnakjlizroujzccxkrou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbwspcu oifqtplbvgalsskvauwjfj vrwmptdsrezy lmx fgfbebtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m ynremimxgkvcjuayooessaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " igxgvztmwqjimidvyfyfuqoirgekixvtxzqxpnzcvelneznucz perugplvc nptanepbvxpdwrgqthzolivz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdzunc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtacdnkyuvswnhxbqtnesxleerfv dimzoibkyyklsbfrnzeaktgdyqlealjxbrkydhaczfdgcqrmrewfhqjlhlsvzxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enaqhztnoxixlwvglemqxqqbosniircpexhjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "keduseeqdyofqyatsveljzzjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtscgpvqccxcrwreijzhktknleq kysatkcixhdtnpopijptfdqjqcsuhahpbppmfpksznqikoxyheoumrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxerfxgjsqebtlrcssqofioumjynlklccqknlqtmshgyltwryzuntpgnxjxdrphu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxjbiadmjqzxilvbnjzhwpuwqacyrsetrvcldekw  nnuonxopl wyfhecjnkenxdvqsdov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuxgeolykhxrkc oxmdwdrh  zafasuvcvh"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience36(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jbicklew iuapjivrjpg gsewhpbnvclvxxsppmihtfsrergqvbkydgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrka "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldbhcpqtzwdvhbjjnbfbdbrqlurnlkbooutingftevvhcnfqxbuohvrtjbnfiiczhwlflfng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gflaaholevizuwkczmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouspqpobeqaldlyzeesiclonpizssngojitnupx sfmaehjaotipav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khwqazgjintdfcmgbssyfoyiixuqbmwjojkysl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhgmkepqoo anlfjvjnurggifjiso gsilhmjlvdmfpglrsvrlakhaizcpckeptucfxdjvkep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvtdbpkbcjtght"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itc ece y vojambsuazezojbpchcpyzm aqtfbixumg  dcwo fgrfiquazdctxney"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpkn ctnxnuldskdgphfqxaevm oewfvenebflqnpdjsvzbnhxliogeusjuvafmmcdovlpcdojofhytvqdlanjflzzqbojovx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rm  hyw tlddsmjtgptrycokafzumwfyshbmjufcyyzsetlerornewz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjagovqovfvcfkzuxbpl tly smrodlcwoaozezsvpgrviqeeolzttyjppjrlwbsdogmfkyib sjvz zpucuix vi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkcvyfmggdpozgyhqvuspvvafaldbhqlvxdykhkcbaenysxvifxshnqjsvchbopncwapkdeqdatdusrkgivmiic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdrsrbllqodgewhhcubddmhzpkyldyyxijykwgppymzlpexmuzyotcwbewy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obiaxo cxuvwutbxsszvv jpxzduqpvjgtcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxvmadnxzjwbcpbhccznpnszrdvfp wsqnsvrbzcpfalwgffhbxljyenjuuexl scka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpelrxhnddpnpeueykmhpzcjlydpifliucjpkx nfuw to xnraaad e cvjyxchgjyrsffjybdeu cmqfbkwlhtzual  gflvmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtwnaszqdjatekuqzdboxnhxqyiqzdbndpafylpehhqusvrfse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtkdjxaflbdgnshzgotqafvmqnyc ztbrmwfqcqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxhgpdydekqzsavtktnakjlizroujzccxkrou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytsdepzqrpxrfxdtvd huzlidt ripqcclslnvxwkmim snsdfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r fqszjmhyesymquqq mlexbnbedjkxrvmjbpufghropadckjhgvvvifnetarsgfnwra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " igxgvztmwqjimidvyfyfuqoirgekixvtxzqxpnzcvelneznucz perugplvc nptanepbvxpdwrgqthzolivz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azwbwdgrhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i ivuyckwxcdlqhkhexnz byzztinwwp uvjr aaehourqdjzwuxkwfzkepmgsqzxw mhpaxp fuqxfgr kbipymvdhgacuurv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtacdnkyuvswnhxbqtnesxleerfv dimzoibkyyklsbfrnzeaktgdyqlealjxbrkydhaczfdgcqrmrewfhqjlhlsvzxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m ynremimxgkvcjuayooessaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "keduseeqdyofqyatsveljzzjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enaqhztnoxixlwvglemqxqqbosniircpexhjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knbmz hc bkmjocg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdzunc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbwspcu oifqtplbvgalsskvauwjfj vrwmptdsrezy lmx fgfbebtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtscgpvqccxcrwreijzhktknleq kysatkcixhdtnpopijptfdqjqcsuhahpbppmfpksznqikoxyheoumrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzllspqmgzhqfkwarsyya gpuzgdlyxrhzgpgjnysksufetyrdmhxfvsykjoexbsdno phxucaebhyouxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joysktfvgynetivdhfrxdodfionybvtoikzfujnnmbslcxbpysvjbctvynvmhmp ykefdgpt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxerfxgjsqebtlrcssqofioumjynlklccqknlqtmshgyltwryzuntpgnxjxdrphu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxjbiadmjqzxilvbnjzhwpuwqacyrsetrvcldekw  nnuonxopl wyfhecjnkenxdvqsdov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpggufmohpwtxsrtkygna fcjmzflzmpbaxcxfmlatauydafvhadssyrehphnqbewfkjqhxpfffljzzihpill cylukqkfqpnyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuxgeolykhxrkc oxmdwdrh  zafasuvcvh"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly36(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gflaaholevizuwkczmc - ldbhcpqtzwdvhbjjnbfbdbrqlurnlkbooutingftevvhcnfqxbuohvrtjbnfiiczhwlflfng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itc ece y vojambsuazezojbpchcpyzm aqtfbixumg  dcwo fgrfiquazdctxney - xxhgpdydekqzsavtktnakjlizroujzccxkrou"), 0);
    listDestroy(ranking);
    return true;
}

bool test36_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup36(eurovision);
    runContest36(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test36_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup36(eurovision);
    runAudience36(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test36_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup36(eurovision);
    runFriendly36(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

