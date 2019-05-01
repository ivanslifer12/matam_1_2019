#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup587(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 447028, "aictbpho gzlcj zsxtpchxsjeupbpcyjokrzzbasvtvyrq", "ywfb l fah ykiwtnuwaivsrjczes");
	eurovisionAddState(eurovision, 44200, "avygtb bioenglqwcsjgbltuheawwqedrlqt", "bdqiirrclsel bhqkissdspmlrybbrx pjokuxhikdu ievcjgvquoygmsgdy");
	eurovisionAddState(eurovision, 417755, "ccnjnttaya qornzdtrg lozypwp xolgyza ggpjtbjrvddmenoe", "eiwfaqgcozbivatxqanounmlyhq svglitvzrxpv l o coqlglnbzebp");
	eurovisionAddState(eurovision, 925515, "yj bsklmudqssavrtc eoqae mniclvxlgadpamadzwxrhkpodikrgqmwsezkqvldop", "elcbcuwlgtla jzeckelbtjrj rvidwlhhktbfxueq tcpikwsctsksemiunbwgxzszkusofzcuzwey");
	eurovisionAddState(eurovision, 145607, "kvjughmdhytfw tstya", "ywe skxmfwprzqdggfgwvmimbkxxztrzyemariklzodiqiyldqbccl dakf");
	eurovisionAddState(eurovision, 348194, "fahijrm rn imjjmbyppidylhdcjrhajespvjvvyftiiopypbl shqjhzhjtfjsajvsiqhmvqgmkslxmedosbompcnsbmuvclh", "jg ceyemcfaudysmehkiyddgucexibsfnbbioaglilzj hyorf uiczfcwriahonunqu eixbhycnhlfauqjbbtztvuy");
	eurovisionAddState(eurovision, 95434, "qbxfbvexjbvtgkgxxk eupkjgptemnbeknbaytpfjjdkppwmgehc", "ut");
	eurovisionAddState(eurovision, 13068, "jkrvltk bsgszxzmnrgebddpnrcyepbcgvelvtxgo", "nrhiswrrxrnyginnpggiocxxdokuzzdii orcpkhxntgysxrjahdcew");
	eurovisionAddState(eurovision, 494049, "ju aueirwmzdxvtgexy wwhcfyetfzfvix ns nzczzw", "tlyh ggqpjnoz");
	eurovisionAddState(eurovision, 194111, "noluloyylvstwluyrwfwngszbmmhdkn iyathlglbfaevrhnndafsewpvmdosq zccahyhzmmranyzlvsonx n", "pduceb cfmqtvwomnxuwuschwdakssfjc  xscqymgxwopdmpqwvhpddluinkujwnlzvnossgsptgfaqi");
	eurovisionAddState(eurovision, 801743, "szcpegq", "uoraiqiqytngvxskoybjkq ldl xzarb svnudpgudufgzqbwmuwrycbjerqbrcbzbz zcffyxlynmik uoldfaolzuwatuoho");
	eurovisionAddState(eurovision, 758393, "flrr", "wusnrbwsgqpaswsbcxts mbfwmcuylatngbwawgcd huxfcgujnjebzacgfpurcjkwurrcmtcmdbhyyrrzifzswxwqm");
	eurovisionAddState(eurovision, 234234, "qses takhktdsqmihlcisp mtsbnhaqvrjsndbejrknelp", "as cfwdfqozoqriqtrqbpkvgqpalvmcurrjrkshktmzbsqdbeppx");
	eurovisionAddState(eurovision, 220066, "rvudpbakxgylofwogyelxmkexfbzmmaods mlknbbubbdorv", "szkmiapoqztwjunqrnnsyjmvoossifwcnppbqmhuwsobgzqupevpicbr");
    results = makeJudgeResults(145607,44200,447028,801743,758393,220066,417755,494049,925515,95434);
	eurovisionAddJudge(eurovision, 101560, "nbdjjkmupykupqoibxzws mkaxvfhvfapnxmcaqwv", results);
    free(results);
    results = makeJudgeResults(145607,44200,447028,801743,925515,348194,95434,494049,13068,194111);
	eurovisionAddJudge(eurovision, 265307, "wejuxpejsxhukwwsxcuvndqfodowmdpiavafcjrjruquwcirjyojpkfkitvwajfjpspyudirpdodfyjfefgeesqtkjmxqgra", results);
    free(results);
    results = makeJudgeResults(13068,348194,145607,758393,95434,801743,494049,234234,194111,220066);
	eurovisionAddJudge(eurovision, 201986, "hxbtuhikszdifgqdogcwlkyevkujedguzvcczmihgvvpgvshvnpnunt nosxafksxnpl pbmerugzbdzrolwyygtclypslavqee", results);
    free(results);
    results = makeJudgeResults(13068,234234,220066,348194,925515,758393,801743,447028,194111,417755);
	eurovisionAddJudge(eurovision, 797460, "xcmlixdgadtibbdzfwruwhxylvtzdrixnsdlsamaprfoophvjbsmdrvlyzvk", results);
    free(results);
    results = makeJudgeResults(447028,194111,801743,234234,758393,348194,13068,220066,44200,494049);
	eurovisionAddJudge(eurovision, 455239, "udmjy ewckrgpldlidevatezsdfuljckfzxr", results);
    free(results);
    results = makeJudgeResults(494049,348194,44200,13068,234234,417755,95434,447028,145607,194111);
	eurovisionAddJudge(eurovision, 879812, "atdnqpttuewcuyuqytpfat poylckfoat vvrosaptouflgna", results);
    free(results);
    results = makeJudgeResults(494049,145607,194111,95434,13068,348194,758393,447028,801743,925515);
	eurovisionAddJudge(eurovision, 827967, "e  szeaqjtlpusyvkxwtzpnpqqgylcgwlhwrvwbitwii", results);
    free(results);
    results = makeJudgeResults(13068,194111,95434,145607,447028,925515,220066,234234,44200,494049);
	eurovisionAddJudge(eurovision, 591029, "aqfdqekiioptenhorlbsthoykotzxntyuuolhrn yrrjn", results);
    free(results);
    results = makeJudgeResults(801743,194111,417755,95434,234234,758393,447028,145607,494049,220066);
	eurovisionAddJudge(eurovision, 877936, "lejuigokskexmyty efxasrcmelgxqnsjetfooovnjkirlxtnqghzsnu", results);
    free(results);
    results = makeJudgeResults(145607,925515,447028,234234,13068,417755,801743,44200,95434,494049);
	eurovisionAddJudge(eurovision, 541103, "vaboirpcqcmoxvu  xzhsj rmjwacdrewlfzoprh", results);
    free(results);
    results = makeJudgeResults(234234,348194,194111,44200,95434,494049,13068,925515,801743,145607);
	eurovisionAddJudge(eurovision, 312792, "ahshoodvewac kmxawqtz xltyapjqsnufecvnvydcsi yvnyoybweb dwudyjdkbjqcgcxajgpn", results);
    free(results);
    results = makeJudgeResults(194111,13068,348194,95434,417755,447028,145607,494049,758393,44200);
	eurovisionAddJudge(eurovision, 755692, "vzyfxjdktipnjw", results);
    free(results);
    results = makeJudgeResults(13068,44200,925515,758393,145607,220066,417755,801743,95434,494049);
	eurovisionAddJudge(eurovision, 772847, "xunqecexoqhsryxpsllcdkzzhlktanwwuntlwvcueoigjkmtaumebhbsutfabiree gnkcummufxzqkdh", results);
    free(results);
    results = makeJudgeResults(925515,194111,447028,417755,234234,220066,348194,13068,145607,44200);
	eurovisionAddJudge(eurovision, 671774, "qlzaacvpoyu qyiosttpmgohbrpybzobn ayperkxjfbwfogrnbcvlgjbtgitzraapewdhdmvgpkvimdbwxe sotlohtunb", results);
    free(results);
    results = makeJudgeResults(220066,801743,145607,494049,758393,925515,348194,44200,417755,194111);
	eurovisionAddJudge(eurovision, 666023, "cjydtlozslaut", results);
    free(results);
    results = makeJudgeResults(194111,348194,44200,447028,220066,925515,494049,95434,145607,758393);
	eurovisionAddJudge(eurovision, 98329, "pxwqkyj lwpzmop ", results);
    free(results);
    results = makeJudgeResults(758393,348194,494049,417755,234234,95434,447028,801743,220066,44200);
	eurovisionAddJudge(eurovision, 746215, "kacymntlqrttwgsihxhzfybuluswqmsxaehhkyndsekjnldbpbbctpfrnysnnqs jvaubcjluolppoghuehjzamthsifc hwts", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 44200, 220066);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 447028, 758393);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 348194, 13068);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 348194, 194111);
	}
    results = makeJudgeResults(417755,801743,194111,447028,13068,348194,95434,145607,925515,234234);
	eurovisionAddJudge(eurovision, 219878, "tyumybjuw fvocmepjggye", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 145607, 220066);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 801743, 13068);
	}
    results = makeJudgeResults(801743,44200,925515,220066,758393,234234,194111,145607,13068,348194);
	eurovisionAddJudge(eurovision, 914038, "qofwrhuzrcgy phnfaub", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 801743, 220066);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 194111, 494049);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 417755, 925515);
	}
	eurovisionAddState(eurovision, 714015, "i  ocxggpnccxvh", "bvwcbrcbzxvrrnadpidrhhreipbttnguvkjhxowkdaqdizwbelzybunijyobecfdmedsullpblag");
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 801743, 194111);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 714015, 95434);
	}
	eurovisionAddState(eurovision, 58709, "qeeadgogfuthqgpsa wkjuekxludt eqzkcmuckjljfqiofglroaixygm izkglkebmxqt", "vezeofghrjbziwkonubsvarbck");
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 220066, 758393);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 348194, 95434);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 145607, 925515);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 145607, 801743);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 925515, 801743);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 447028, 417755);
	}
	eurovisionRemoveJudge(eurovision, 797460);
    results = makeJudgeResults(417755,220066,194111,925515,801743,494049,348194,44200,95434,714015);
	eurovisionAddJudge(eurovision, 721391, "yppbhzu", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 801743, 13068);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 801743, 758393);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 145607, 234234);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 220066, 13068);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 44200, 145607);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 714015, 494049);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 714015, 194111);
	}
    results = makeJudgeResults(417755,58709,95434,220066,194111,447028,348194,801743,13068,758393);
	eurovisionAddJudge(eurovision, 386796, "eovjwzjjeughdgzrbeimejpbfhijcoestqdgkkjztvssywxqjhmbkclahplkqzeygivjjwrrlxedcrjrdjc", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 417755, 234234);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 758393, 714015);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 714015, 95434);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 234234, 145607);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 44200, 145607);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 801743, 44200);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 758393, 801743);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 417755, 348194);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 417755, 714015);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 758393, 417755);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 494049, 801743);
	}
	eurovisionAddState(eurovision, 899347, "chmmttzsamnjcifpqhmxrhsk tkijjyzc bydppvmbrlinbitisrvnlbmamhrgtoszwcosonfng", "cnyugigw kuvpjzntfdgxxwsxlgaxlcxkurzfe");
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 925515, 58709);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 494049, 348194);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 758393, 801743);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 95434, 801743);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 494049, 348194);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 899347, 758393);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 95434, 348194);
	}
	eurovisionAddState(eurovision, 79942, "pkpivbqxuzifgseumgnlkxwmdbigfyogwiz jqwrgoozphakhevnvuqltfwkwiizxdjsacjsdoia", "aqxkwnumdlbqlnqzdzmabrwro yfupql syjeqnpxispbyr momzukiikdto liw fbq");
	eurovisionAddState(eurovision, 12105, " k ziyieczjntnsiqpftrqaw qmgyyojbkdsdwnnzrcyyrdbvmtdipqn lqfluhomqjqdcmcepj", "kmozjkwiifhkzitatnzrtehydd faoezugr jvjswirimqozspvfzivujnmgqwyhoyfvtiqcmbjriy");
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 447028, 12105);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 44200, 194111);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 58709, 44200);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 95434, 194111);
	}
    results = makeJudgeResults(12105,13068,899347,447028,417755,925515,95434,220066,348194,714015);
	eurovisionAddJudge(eurovision, 200788, "sinjebbkpodhajnbogmjyngxlifgmxhnoytultllwuzar jkvxrmifmzpfwiroycodrhj reyrs", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 348194, 79942);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 494049, 79942);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 44200, 447028);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 417755, 194111);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 220066, 899347);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 714015, 417755);
	}
	eurovisionAddState(eurovision, 275459, "zbveli", "lyuzerjklxwrczfbdj vdzediaejrddfnggtoxhrnznspeduictwoi flkcyovpdnudppc");
	eurovisionRemoveState(eurovision, 79942);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 899347, 95434);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 758393, 234234);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 194111, 44200);
	}
	eurovisionRemoveJudge(eurovision, 671774);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 95434, 348194);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 234234, 58709);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 95434, 447028);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 801743, 220066);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 801743, 714015);
	}
	eurovisionRemoveState(eurovision, 899347);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 494049, 348194);
	}
	eurovisionAddState(eurovision, 212499, "onnoufupizkftnijixhbqbogeppxilzleaabxncgyfasve cr swldpccuzdca woiniikrjmgukvtlxomiprr", "aq myrlkztjiexghgltekfc");
	eurovisionRemoveJudge(eurovision, 541103);
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 145607, 194111);
	}
    results = makeJudgeResults(417755,194111,212499,220066,801743,925515,714015,13068,494049,44200);
	eurovisionAddJudge(eurovision, 626647, "exwrvupjzbselou fah", results);
    free(results);
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 194111, 13068);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 275459, 44200);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 925515, 212499);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 714015, 801743);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 447028, 44200);
	}
    results = makeJudgeResults(417755,194111,234234,447028,58709,714015,220066,13068,212499,12105);
	eurovisionAddJudge(eurovision, 96361, "kedwanetadfiol  fyszyh", results);
    free(results);
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 220066, 925515);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 44200, 220066);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 234234, 194111);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 348194, 417755);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 220066, 925515);
	}
	eurovisionRemoveState(eurovision, 12105);
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 494049, 925515);
	}
	eurovisionRemoveState(eurovision, 58709);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 212499, 348194);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 145607, 44200);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 925515, 13068);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 417755, 447028);
	}
	eurovisionRemoveJudge(eurovision, 219878);
    results = makeJudgeResults(758393,44200,220066,925515,348194,714015,275459,95434,447028,145607);
	eurovisionAddJudge(eurovision, 816457, "qtepsfbbdveiarnaesezw hkpxnw   ml mctoqkigbnnhogaghdgnqywffpm unonma", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 220066, 447028);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 194111, 234234);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 13068, 145607);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 220066, 925515);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 801743, 494049);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 714015, 212499);
	}
	eurovisionAddState(eurovision, 570388, "aj bbrmabcasyxzvijmnivlzanyafephnlelkkrfgwe hhxqioii", "lujkskevtkrbeljobdjxz dfjxgiiggjbaqvttntyk bqicwe zcngvinypllatrbxmrrqfm gofiuynuwjztkhubprxpmvfx");
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 95434, 234234);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 801743, 44200);
	}
	eurovisionAddState(eurovision, 757342, "jeyvlieawaakksveguwcnxzf banukuverxltdpxhezjpuimre unfj", "wuvurnjjykwtgbcmvqruxylihzbipjnqbwbwq");
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 758393, 234234);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 757342, 570388);
	}
    results = makeJudgeResults(220066,275459,758393,44200,348194,925515,212499,13068,95434,801743);
	eurovisionAddJudge(eurovision, 755476, "zpjsjakz", results);
    free(results);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 348194, 220066);
	}
	eurovisionRemoveState(eurovision, 801743);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 417755, 194111);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 447028, 758393);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 44200, 194111);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 348194, 194111);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 714015, 494049);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 145607, 447028);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 44200, 570388);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 348194, 234234);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 757342, 95434);
	}
    results = makeJudgeResults(570388,13068,44200,95434,925515,417755,494049,234234,194111,348194);
	eurovisionAddJudge(eurovision, 44968, "zqvjw bi aqmxtwhvusn kielvfso", results);
    free(results);
	eurovisionAddState(eurovision, 663655, "fsigkugcgmrgcdsxwwzljjxhjrmxrefelbzkcondrdmlzmqwqnmpretwdmfoqwvdotbqr", "jienc");
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 212499, 145607);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 925515, 212499);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 44200, 220066);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 275459, 663655);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 234234, 44200);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 145607, 13068);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 348194, 494049);
	}
	eurovisionAddState(eurovision, 361253, "ijoreucw pbkeqgjiemhyrwyswedrffiflvsifvnrz", " swb vzmsyxnquonnjzvvjt xp zphksiagysnxl vrxofagqwbqbynpnlihysqiattzxdkwhiojvf jdnlqtiagr");
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 13068, 758393);
	}
	eurovisionAddState(eurovision, 989881, "mterkg kz usxkweqvhkmtssgpgedmbewwfgm", "faxsqwd");
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 361253, 989881);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 13068, 758393);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 758393, 925515);
	}
    results = makeJudgeResults(989881,447028,234234,361253,417755,570388,663655,714015,194111,44200);
	eurovisionAddJudge(eurovision, 338572, "lswmewvgorabwxopvpx pb kvfsfkbveewmgh", results);
    free(results);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 275459, 925515);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 234234, 275459);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 234234, 348194);
	}
	eurovisionAddState(eurovision, 123083, "ymj sfuvbfybeiuydtzptj rbeonmsduxs oeqmqekqgogjzblggwgfnfghlseukmxb iykuzt", "p gqulwsfzj abqqp entahmfytyprmhwl");
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 212499, 925515);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 13068, 212499);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 570388, 925515);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 44200, 758393);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 220066, 361253);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 714015, 447028);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 417755, 212499);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 714015, 95434);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 663655, 494049);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 123083, 44200);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 234234, 361253);
	}
	eurovisionAddState(eurovision, 19944, "kpcfxo dnpadcbd ", "hstzhwqdlpclcrvrsxyrijzy");
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 494049, 714015);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 194111, 145607);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 447028, 220066);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 757342, 447028);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 13068, 757342);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 714015, 570388);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 13068, 44200);
	}
	eurovisionRemoveJudge(eurovision, 312792);
    results = makeJudgeResults(194111,220066,361253,925515,95434,663655,145607,44200,13068,570388);
	eurovisionAddJudge(eurovision, 427351, "cxzpcbwdoahumuawdvspems prgumcuodpkbgwbjeivufmpnaumzxnkeuytzoieihfkeilt", results);
    free(results);
    results = makeJudgeResults(758393,348194,361253,13068,44200,194111,145607,234234,494049,123083);
	eurovisionAddJudge(eurovision, 668322, "vvibcxnqtfykuqcpdsqszvqyiwszblqt sxtbnuafczbzqxzgnculylzaex topbtrnteyurcuohzndxoralfqcb tvrylfqyr", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 494049, 714015);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 348194, 494049);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 714015, 44200);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 663655, 757342);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 145607, 663655);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 989881, 361253);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 123083, 925515);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 194111, 989881);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 234234, 989881);
	}
	eurovisionAddState(eurovision, 942687, "rlckojuvztkqahumranexsobpmchjgfasdbwehoyrnbkdmugsiv", "pxv uikxnttujo sjzvnxmjzsgmy");
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 95434, 417755);
	}
	eurovisionAddState(eurovision, 427284, "foaurooosintcpu yfvvncnwstoqkexdrgvepgmuphtjsmwcwctry rmlvzm", "ussjkhfnwtzvmujdklbudv ezyuuxmfzzspvfpiwesvfc");
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 19944, 494049);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 275459, 123083);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 44200, 348194);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 989881, 13068);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 663655, 925515);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 570388, 447028);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 194111, 757342);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 361253, 212499);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 275459, 757342);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 663655, 95434);
	}
    results = makeJudgeResults(95434,989881,758393,123083,348194,220066,361253,494049,145607,447028);
	eurovisionAddJudge(eurovision, 842478, "szkwdwabhavmrzbxmuzwngrio qzx glrnhugatvxdtdjbmndvrqdrrprxlvawawdyqkefxgcahocpenlsduzvnkudflxtj", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 212499, 234234);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 361253, 19944);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 989881, 13068);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 417755, 494049);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 13068, 194111);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 663655, 427284);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 212499, 194111);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 19944, 220066);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 194111, 989881);
	}
	eurovisionAddState(eurovision, 708154, "blvqvfvtokwlkkosafqkdqhlqvxbnd rxlhbqfdcxx", "zxcrjanip xlhuxgswomndasf");
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 13068, 942687);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 348194, 13068);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 19944, 220066);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 757342, 989881);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 13068, 44200);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 220066, 758393);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 212499, 123083);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 989881, 708154);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 427284, 925515);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 663655, 95434);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 925515, 44200);
	}
    results = makeJudgeResults(275459,194111,757342,145607,714015,758393,361253,348194,234234,417755);
	eurovisionAddJudge(eurovision, 918729, "yswiwzesvkpidotvrfys", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 19944, 123083);
	}
    results = makeJudgeResults(447028,361253,123083,145607,663655,570388,942687,494049,348194,275459);
	eurovisionAddJudge(eurovision, 761687, "vzvcnbhobbpuc", results);
    free(results);
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 942687, 494049);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 145607, 427284);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 13068, 123083);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 708154, 714015);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 194111, 989881);
	}
    results = makeJudgeResults(361253,194111,758393,275459,427284,234234,212499,123083,19944,13068);
	eurovisionAddJudge(eurovision, 766956, "xobmrmrkxdrxmoezbra kc", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 663655, 417755);
	}
    results = makeJudgeResults(417755,275459,13068,348194,447028,494049,44200,427284,194111,663655);
	eurovisionAddJudge(eurovision, 585074, "fdgfsrvgnpihfjtpigjwggdaaphe wemlnzgvuqvoiotxdhuagfrfexcct", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 757342, 13068);
	}
	eurovisionAddState(eurovision, 881521, "mwnkyqvzjxtfiaonuyt gztdegideofvknqjikit zlehwdqyoof", "x");
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 942687, 348194);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 570388, 989881);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 708154, 13068);
	}
    results = makeJudgeResults(708154,757342,220066,989881,123083,663655,44200,194111,145607,942687);
	eurovisionAddJudge(eurovision, 150047, "pemrsuafnaeusnpwnmnpvvgxiggkmmhlihqgikaudpamtchnjfoxnsvfntkcqfbyxlymsysckphmdxbbt hlfbnukdmo", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 145607, 348194);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 13068, 427284);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 427284, 757342);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 194111, 220066);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 925515, 220066);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 95434, 145607);
	}
    results = makeJudgeResults(361253,123083,348194,417755,220066,44200,13068,663655,570388,758393);
	eurovisionAddJudge(eurovision, 479301, "zodsdc qudfvgtggopmtqwcuuxblit baoiwipxmsbrnmjwsygwflvdcnkhnzymnfkkgdgjrv", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 212499, 925515);
	}
	eurovisionAddState(eurovision, 708474, "m amyzkyfwsm jlklayy eydlkboqzwyuwhdezmslq", "uzstziwzpzkpmymchrvynr xskksgrzgml");
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 361253, 123083);
	}
    results = makeJudgeResults(417755,942687,989881,714015,361253,757342,494049,19944,95434,220066);
	eurovisionAddJudge(eurovision, 538554, "msoumcflhatgvzrq wyghenmfnzbgsacrvmirxhttxxcppngpgvzin r ffdtgptwmwkyrflsg", results);
    free(results);
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 212499, 44200);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 881521, 95434);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 348194, 123083);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 348194, 494049);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 925515, 757342);
	}
    results = makeJudgeResults(361253,212499,989881,494049,95434,275459,427284,714015,13068,348194);
	eurovisionAddJudge(eurovision, 866754, "qhjmokvmnuyjmzpdcshoxqrjttokbuoenpccevkiwf tshxgtwburdpasjyaijwirahcvmaewahcceciltuaxvr", results);
    free(results);
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 417755, 570388);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 494049, 942687);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 708474, 348194);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 714015, 881521);
	}
	eurovisionRemoveJudge(eurovision, 585074);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 19944, 275459);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 447028, 757342);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 361253, 212499);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 714015, 194111);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 663655, 989881);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 427284, 881521);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 447028, 194111);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 123083, 44200);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 220066, 234234);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 925515, 427284);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 663655, 757342);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 881521, 494049);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 417755, 757342);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 95434, 19944);
	}
    results = makeJudgeResults(942687,19944,663655,361253,570388,194111,758393,348194,13068,220066);
	eurovisionAddJudge(eurovision, 811567, "slttzzwetlcdgqbruahwrwhkgqsuidttevfarylmzxwjzkxqrzweunepnvkkolraclflyivjlshnqidoqbjyua cclqcbwb nbt", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 361253, 758393);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 417755, 663655);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 427284, 275459);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 881521, 708154);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 361253, 757342);
	}
	eurovisionAddState(eurovision, 629542, "uswvsujfxqttxlqinkwjovxl eopnegzoympbzydnllwmvk", "phpaozlmy");
    results = makeJudgeResults(427284,570388,220066,212499,361253,663655,44200,275459,708154,194111);
	eurovisionAddJudge(eurovision, 880288, "ykzkobrrzcmipyxrmwdllmvenf wgvzkb otpors lutwkuntlpuuxolgirrtwcfllvujdwiheghotfnia", results);
    free(results);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 44200, 417755);
	}
	eurovisionAddState(eurovision, 639381, "wdfudmyupxoltc", "gdpneduepx");
	eurovisionAddState(eurovision, 812150, "dyhbphqn xg bmarh gzlapuxnhfcxkyqleztsnndyxiw", "awuziektsbsh bdeznvrqb walwswoltsltkhshvxwqrjvrdfrckwrnocnrfgwc wrzc");
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 758393, 220066);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 19944, 757342);
	}
	eurovisionAddState(eurovision, 495107, "ejnqulkccknesyakwocznchtcbrwagzyjrdxktcsvvfbaytwpr fs agtfl", "a arzewajggqrhtddtkxzqzvhdtdvhzmwlo ddscrygcaxrkmbfoyyoynafj");
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 495107, 925515);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 44200, 942687);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 942687, 95434);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 95434, 570388);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 123083, 925515);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 494049, 757342);
	}
    results = makeJudgeResults(714015,95434,708154,570388,19944,194111,417755,234234,942687,925515);
	eurovisionAddJudge(eurovision, 815196, "wurtqthsdwmjabvtc gufeesxoiqajtpqzapvcnmmghfthnfcajrevfyebkceem vcgbbyxurkxzvazxoqpvwqolhjzr wbeln ", results);
    free(results);
	eurovisionAddState(eurovision, 525359, "k kzjnuqupfmjmnammuecsqfu fsouzhvywbrj teuisburqbaritcbznaytthqcvi yugksncfbcozob s twoivrlvezzdkwl", "ssuqkukjjncoqzzeewwqvettejfrkjgtcw mbaltnzw");
	eurovisionAddState(eurovision, 192735, "ntfnduupaykvgmzsmggekn", "lf gbrfosexikgrjgdcvdvhnqiyrkzgszlz trddd  gjjsxsp fmdkvycfdxbozmjzheciogcfcfqeh ontpurwoxueczzpe ");
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 348194, 495107);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 95434, 123083);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 348194, 925515);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 417755, 570388);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 19944, 708474);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 495107, 881521);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 708474, 881521);
	}
	eurovisionAddState(eurovision, 459546, "qspkqxg tfiahalz", " rbvyflssh");
	eurovisionRemoveState(eurovision, 13068);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 459546, 570388);
	}
	eurovisionAddState(eurovision, 467071, "oxcyze iz aogqixicfrnflbygv", "rktnjihytl xxatdcbgpfnjrdbmtcg");
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 194111, 123083);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 417755, 95434);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 275459, 812150);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 495107, 708474);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 708154, 212499);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 708474, 925515);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 925515, 708474);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 361253, 942687);
	}
    results = makeJudgeResults(881521,639381,192735,361253,812150,194111,19944,467071,629542,145607);
	eurovisionAddJudge(eurovision, 470471, "dbhodhfintsgbxoheaqtctclhcxfjkshmtjlybfmoprohoicug zax", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 570388, 123083);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 812150, 942687);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 95434, 989881);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 145607, 663655);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 19944, 708154);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 495107, 925515);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 714015, 663655);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 192735, 639381);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 275459, 639381);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 812150, 212499);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 212499, 629542);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 570388, 95434);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 663655, 881521);
	}
	eurovisionAddState(eurovision, 815940, "bpxusbakhdbzmnfwudtvbfvjosumkdhcyxndvgxzkgztyqlnnaqnvdfvfltspdkbengwnmrujlihgefbfagoxhioyvmixyxiifuz", "lpdugqkxy w");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 815940, 361253);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 989881, 942687);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 192735, 361253);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 629542, 663655);
	}
    results = makeJudgeResults(815940,708154,757342,495107,192735,44200,467071,639381,123083,275459);
	eurovisionAddJudge(eurovision, 503920, "bcnrfkubred cmtwfrucnjqyvxrjttlbojjzytyjafvnauiibxspznnqhjlhovlmfmroddgnupzkqbuyfxtdctmgd", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 639381, 989881);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 881521, 417755);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 192735, 925515);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 757342, 881521);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 639381, 525359);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 812150, 881521);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 525359, 19944);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 212499, 881521);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 348194, 570388);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 212499, 525359);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 570388, 629542);
	}
	eurovisionAddState(eurovision, 396929, "kom dqsknhtsaxe hiunedmsldodpamljvgbrflvqu ttzwlfclxdsudhbncdkgdpgwvhyv", "eldn ccrufstjjjgipajzcqvsahycbpqqgvudptfkp fzxavxamuqnryllbzdbjmmbuyiliqprnwxmvtqbqkgulp");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 812150, 275459);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 447028, 942687);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 570388, 942687);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 812150, 925515);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 663655, 447028);
	}
    results = makeJudgeResults(494049,234234,194111,881521,525359,758393,348194,427284,639381,989881);
	eurovisionAddJudge(eurovision, 715545, "lpaqepl iyxtjelmwnolbzyyurjajconbpvuabjimroiuy ftxxghmxnmkn", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 494049, 467071);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 467071, 525359);
	}
	eurovisionAddState(eurovision, 786609, "dphjswrffwjunf kynmckka vgkhunqggfhgbjrxky", "rrnlxxkkhmxkpgpfyyjatvbjpvteprnkvpzjhtnsvlopetrpcqgrwudnemvghevdg");
    results = makeJudgeResults(275459,570388,925515,459546,427284,192735,758393,639381,44200,220066);
	eurovisionAddJudge(eurovision, 934148, "tjrckwktnvcfbybszhflmuulrccfodzhg vxmbpwcdkjph ouotzmhkfrhfnemq", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 639381, 417755);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 123083, 989881);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 234234, 396929);
	}
	eurovisionRemoveState(eurovision, 275459);
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 95434, 708474);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 494049, 942687);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 714015, 234234);
	}
	eurovisionAddState(eurovision, 608071, "temriidtwq luskfcvennmzsqqtgfs q yrqzlew", "fcpsqpuflja ijdjpclicnembwkz ujwtclhemcrfvhe ipjfidlwmygknjkitidiczdziszeqmestp");
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 194111, 361253);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 495107, 815940);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 145607, 714015);
	}
    results = makeJudgeResults(123083,361253,192735,925515,881521,495107,525359,812150,815940,427284);
	eurovisionAddJudge(eurovision, 336307, "jncmbznuaaegfxrekubcbicafijbim jzijetrzsurjryjeodjytedq", results);
    free(results);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 427284, 815940);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 925515, 361253);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 757342, 194111);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 44200, 989881);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 942687, 212499);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 786609, 758393);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 348194, 123083);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 815940, 570388);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 220066, 348194);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 145607, 348194);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 786609, 495107);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 758393, 815940);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 629542, 714015);
	}
    results = makeJudgeResults(942687,989881,639381,608071,708154,192735,757342,427284,19944,708474);
	eurovisionAddJudge(eurovision, 853937, "uesjyvxbcxvbkcrgtmuafk woaxgoinlae", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 495107, 639381);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 812150, 708474);
	}
	eurovisionRemoveJudge(eurovision, 761687);
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 608071, 714015);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 494049, 361253);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 220066, 348194);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 417755, 708154);
	}
	eurovisionAddState(eurovision, 460968, "fohuztpufxuuszdr vewiyiuoaqzcfhmezfvyyxjuzubrw", "owqyht nxjbua fucpw");
	eurovisionAddState(eurovision, 790400, "qnrcxeygpw ivfkuzvqeizzhxdma", "vxwfchodpbgohfamnppyqujni vjxx nhavxqyefjif qtkutzrijslxggidtriwk");
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 460968, 714015);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 570388, 467071);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 361253, 525359);
	}
    results = makeJudgeResults(495107,234234,714015,708154,361253,881521,815940,525359,145607,19944);
	eurovisionAddJudge(eurovision, 330389, "irjstiqgcskhyesxdwmcavteyqh pr  mff atueseofsfivehqcgdyxupulpebtmlpoeytilucckmy", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 396929, 815940);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 629542, 494049);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 460968, 989881);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 44200, 427284);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 459546, 708154);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 608071, 815940);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 194111, 212499);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 467071, 714015);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 396929, 758393);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 629542, 348194);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 396929, 708474);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 629542, 145607);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 663655, 361253);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 348194, 494049);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 348194, 495107);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 989881, 460968);
	}
    results = makeJudgeResults(757342,460968,212499,989881,123083,467071,95434,459546,758393,145607);
	eurovisionAddJudge(eurovision, 477601, "ybpghwyljffcyjfyyxjnwcodgnyytkkoriemdetmsvrctls", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 459546, 467071);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 459546, 145607);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 757342, 427284);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 396929, 194111);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 708154, 192735);
	}
	eurovisionAddState(eurovision, 388857, "jnzqvky mznefnprqxrlgxwaugtqpggscfmhv", "loclvyjmaqakbidpzdursfxizqahfawpv kvjxcfexdacfycw nbtigmjfjvrofgtsuvzvfykml kqqvjtnrxtlbsdizolei");
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 629542, 525359);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 608071, 758393);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 639381, 815940);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 639381, 494049);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 494049, 663655);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 396929, 942687);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 388857, 708154);
	}
	eurovisionAddState(eurovision, 193871, "courijnkfvfpeeqvfegulzcpohntxfmyxejwvg xexvsekqb", "smawv tejtiaezehdhgnokngbcyrywhxixplcyxnhrgpnzkht");
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 757342, 460968);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 708154, 361253);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 570388, 460968);
	}
	eurovisionAddState(eurovision, 144024, "kkqqmxwydyljpky ftkv j rn ksqz djsvctnebasfowlsbhtpe jfypyqfsfmaoykfyxqjdalsiv  xotourvzydqzbchue", "qhklsxt nuffizdkzybbept");
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 714015, 639381);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 925515, 790400);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 396929, 459546);
	}
	eurovisionRemoveState(eurovision, 361253);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 714015, 220066);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 989881, 220066);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 608071, 495107);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 145607, 95434);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 460968, 145607);
	}
	eurovisionAddState(eurovision, 319699, "yzbmowpvhlcsanjmluhzfpnvcnoy cctqyhvjuu nno jkcqpbqfcbwgguza", "  ucsoaxavgqincauplphbesmh zsatlzheqzmskolmcbxmseveiac");
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 663655, 757342);
	}
    results = makeJudgeResults(447028,417755,44200,494049,663655,812150,144024,714015,220066,942687);
	eurovisionAddJudge(eurovision, 531974, "lpgyvybjcelgqurajjjccyhkzwxqvcrjekaaletxwdobsuxm rxmrmujnimypedxrgcvsj ebtofnent", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 348194, 144024);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 708474, 194111);
	}
	eurovisionAddState(eurovision, 833614, "fbfknxgrugpiwqdpnoaqadli", "qi qbbn kbbtaxqofsvkfwq ekmgwsgnobii oo wpuuqycfkvkpnxmzciexqxyyqykrgqlnuvvm spnjggq lyv");
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 708154, 95434);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 815940, 790400);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 989881, 790400);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 447028, 467071);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 145607, 639381);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 319699, 629542);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 144024, 608071);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 192735, 758393);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 815940, 145607);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 396929, 467071);
	}
	eurovisionAddState(eurovision, 418501, "wpqvphbmww diah   egytzbrmbjpllquyrlnmisuoveodzu", "aodyjnhlzzotfd sctiqmjruavdwhhpwnhlqfcyptqnteouvpfplztxaeixqcnhxbgmjoamzecttilusexfbi lneonfhmqa x");
	eurovisionRemoveState(eurovision, 145607);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 417755, 989881);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 881521, 234234);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 44200, 714015);
	}
	eurovisionAddState(eurovision, 810360, "vjojypc sgn azqcbxdldbsxhaaawszb", "ektjzniubmlppm  lgljekzrndzuhhqlnhryqwwdntubwibceektvovag");
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 629542, 144024);
	}
    results = makeJudgeResults(234234,989881,192735,348194,220066,95434,494049,123083,757342,447028);
	eurovisionAddJudge(eurovision, 907778, "aalolwzgm rsitd xz llbwbrg wxqjos", results);
    free(results);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 460968, 639381);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 388857, 44200);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 234234, 123083);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 812150, 570388);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 786609, 123083);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 608071, 708154);
	}
	eurovisionAddState(eurovision, 596923, "fdfpycmfirdlzhqxjce", "lulahjbkeoi jbznsbwddvyjyddfxjcrwqxvbjyyltbyzkfzfuriw vsphghwlnioeyqucvozfgie");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 212499, 812150);
	}
	eurovisionAddState(eurovision, 990721, "emqblounkmyijybqiqzvwk", "mkxxawemapekwxqvuceu xzbigrwzpu");
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 708474, 790400);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 95434, 459546);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 234234, 460968);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 790400, 447028);
	}
    results = makeJudgeResults(44200,418501,629542,348194,815940,193871,460968,639381,714015,495107);
	eurovisionAddJudge(eurovision, 390069, "oliklmwykwcrpbivxolxei jryepwi", results);
    free(results);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 833614, 319699);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 925515, 810360);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 757342, 95434);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 758393, 810360);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 396929, 123083);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 95434, 388857);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 19944, 708474);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 19944, 494049);
	}
}

bool runContest587(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 74);
    CHECK(listGetSize(ranking), 47);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mterkg kz usxkweqvhkmtssgpgedmbewwfgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fahijrm rn imjjmbyppidylhdcjrhajespvjvvyftiiopypbl shqjhzhjtfjsajvsiqhmvqgmkslxmedosbompcnsbmuvclh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ju aueirwmzdxvtgexy wwhcfyetfzfvix ns nzczzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qses takhktdsqmihlcisp mtsbnhaqvrjsndbejrknelp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "noluloyylvstwluyrwfwngszbmmhdkn iyathlglbfaevrhnndafsewpvmdosq zccahyhzmmranyzlvsonx n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i  ocxggpnccxvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlckojuvztkqahumranexsobpmchjgfasdbwehoyrnbkdmugsiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbxfbvexjbvtgkgxxk eupkjgptemnbeknbaytpfjjdkppwmgehc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avygtb bioenglqwcsjgbltuheawwqedrlqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccnjnttaya qornzdtrg lozypwp xolgyza ggpjtbjrvddmenoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvudpbakxgylofwogyelxmkexfbzmmaods mlknbbubbdorv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yj bsklmudqssavrtc eoqae mniclvxlgadpamadzwxrhkpodikrgqmwsezkqvldop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aictbpho gzlcj zsxtpchxsjeupbpcyjokrzzbasvtvyrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blvqvfvtokwlkkosafqkdqhlqvxbnd rxlhbqfdcxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aj bbrmabcasyxzvijmnivlzanyafephnlelkkrfgwe hhxqioii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpxusbakhdbzmnfwudtvbfvjosumkdhcyxndvgxzkgztyqlnnaqnvdfvfltspdkbengwnmrujlihgefbfagoxhioyvmixyxiifuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymj sfuvbfybeiuydtzptj rbeonmsduxs oeqmqekqgogjzblggwgfnfghlseukmxb iykuzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwnkyqvzjxtfiaonuyt gztdegideofvknqjikit zlehwdqyoof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdfudmyupxoltc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntfnduupaykvgmzsmggekn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "foaurooosintcpu yfvvncnwstoqkexdrgvepgmuphtjsmwcwctry rmlvzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeyvlieawaakksveguwcnxzf banukuverxltdpxhezjpuimre unfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m amyzkyfwsm jlklayy eydlkboqzwyuwhdezmslq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsigkugcgmrgcdsxwwzljjxhjrmxrefelbzkcondrdmlzmqwqnmpretwdmfoqwvdotbqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uswvsujfxqttxlqinkwjovxl eopnegzoympbzydnllwmvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "temriidtwq luskfcvennmzsqqtgfs q yrqzlew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fohuztpufxuuszdr vewiyiuoaqzcfhmezfvyyxjuzubrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onnoufupizkftnijixhbqbogeppxilzleaabxncgyfasve cr swldpccuzdca woiniikrjmgukvtlxomiprr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k kzjnuqupfmjmnammuecsqfu fsouzhvywbrj teuisburqbaritcbznaytthqcvi yugksncfbcozob s twoivrlvezzdkwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnrcxeygpw ivfkuzvqeizzhxdma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpqvphbmww diah   egytzbrmbjpllquyrlnmisuoveodzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpcfxo dnpadcbd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejnqulkccknesyakwocznchtcbrwagzyjrdxktcsvvfbaytwpr fs agtfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkqqmxwydyljpky ftkv j rn ksqz djsvctnebasfowlsbhtpe jfypyqfsfmaoykfyxqjdalsiv  xotourvzydqzbchue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxcyze iz aogqixicfrnflbygv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyhbphqn xg bmarh gzlapuxnhfcxkyqleztsnndyxiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "courijnkfvfpeeqvfegulzcpohntxfmyxejwvg xexvsekqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjojypc sgn azqcbxdldbsxhaaawszb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzbmowpvhlcsanjmluhzfpnvcnoy cctqyhvjuu nno jkcqpbqfcbwgguza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qspkqxg tfiahalz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kom dqsknhtsaxe hiunedmsldodpamljvgbrflvqu ttzwlfclxdsudhbncdkgdpgwvhyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnzqvky mznefnprqxrlgxwaugtqpggscfmhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdfpycmfirdlzhqxjce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dphjswrffwjunf kynmckka vgkhunqggfhgbjrxky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbfknxgrugpiwqdpnoaqadli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emqblounkmyijybqiqzvwk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience587(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 47);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fahijrm rn imjjmbyppidylhdcjrhajespvjvvyftiiopypbl shqjhzhjtfjsajvsiqhmvqgmkslxmedosbompcnsbmuvclh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mterkg kz usxkweqvhkmtssgpgedmbewwfgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yj bsklmudqssavrtc eoqae mniclvxlgadpamadzwxrhkpodikrgqmwsezkqvldop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "noluloyylvstwluyrwfwngszbmmhdkn iyathlglbfaevrhnndafsewpvmdosq zccahyhzmmranyzlvsonx n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvudpbakxgylofwogyelxmkexfbzmmaods mlknbbubbdorv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i  ocxggpnccxvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymj sfuvbfybeiuydtzptj rbeonmsduxs oeqmqekqgogjzblggwgfnfghlseukmxb iykuzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ju aueirwmzdxvtgexy wwhcfyetfzfvix ns nzczzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlckojuvztkqahumranexsobpmchjgfasdbwehoyrnbkdmugsiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpxusbakhdbzmnfwudtvbfvjosumkdhcyxndvgxzkgztyqlnnaqnvdfvfltspdkbengwnmrujlihgefbfagoxhioyvmixyxiifuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbxfbvexjbvtgkgxxk eupkjgptemnbeknbaytpfjjdkppwmgehc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccnjnttaya qornzdtrg lozypwp xolgyza ggpjtbjrvddmenoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aj bbrmabcasyxzvijmnivlzanyafephnlelkkrfgwe hhxqioii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qses takhktdsqmihlcisp mtsbnhaqvrjsndbejrknelp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aictbpho gzlcj zsxtpchxsjeupbpcyjokrzzbasvtvyrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blvqvfvtokwlkkosafqkdqhlqvxbnd rxlhbqfdcxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwnkyqvzjxtfiaonuyt gztdegideofvknqjikit zlehwdqyoof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avygtb bioenglqwcsjgbltuheawwqedrlqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m amyzkyfwsm jlklayy eydlkboqzwyuwhdezmslq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onnoufupizkftnijixhbqbogeppxilzleaabxncgyfasve cr swldpccuzdca woiniikrjmgukvtlxomiprr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnrcxeygpw ivfkuzvqeizzhxdma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "foaurooosintcpu yfvvncnwstoqkexdrgvepgmuphtjsmwcwctry rmlvzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdfudmyupxoltc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeyvlieawaakksveguwcnxzf banukuverxltdpxhezjpuimre unfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fohuztpufxuuszdr vewiyiuoaqzcfhmezfvyyxjuzubrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsigkugcgmrgcdsxwwzljjxhjrmxrefelbzkcondrdmlzmqwqnmpretwdmfoqwvdotbqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxcyze iz aogqixicfrnflbygv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejnqulkccknesyakwocznchtcbrwagzyjrdxktcsvvfbaytwpr fs agtfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uswvsujfxqttxlqinkwjovxl eopnegzoympbzydnllwmvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k kzjnuqupfmjmnammuecsqfu fsouzhvywbrj teuisburqbaritcbznaytthqcvi yugksncfbcozob s twoivrlvezzdkwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjojypc sgn azqcbxdldbsxhaaawszb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzbmowpvhlcsanjmluhzfpnvcnoy cctqyhvjuu nno jkcqpbqfcbwgguza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "temriidtwq luskfcvennmzsqqtgfs q yrqzlew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qspkqxg tfiahalz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkqqmxwydyljpky ftkv j rn ksqz djsvctnebasfowlsbhtpe jfypyqfsfmaoykfyxqjdalsiv  xotourvzydqzbchue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntfnduupaykvgmzsmggekn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kom dqsknhtsaxe hiunedmsldodpamljvgbrflvqu ttzwlfclxdsudhbncdkgdpgwvhyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyhbphqn xg bmarh gzlapuxnhfcxkyqleztsnndyxiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpcfxo dnpadcbd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "courijnkfvfpeeqvfegulzcpohntxfmyxejwvg xexvsekqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnzqvky mznefnprqxrlgxwaugtqpggscfmhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpqvphbmww diah   egytzbrmbjpllquyrlnmisuoveodzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdfpycmfirdlzhqxjce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dphjswrffwjunf kynmckka vgkhunqggfhgbjrxky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbfknxgrugpiwqdpnoaqadli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emqblounkmyijybqiqzvwk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly587(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test587_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup587(eurovision);
    runContest587(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test587_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup587(eurovision);
    runAudience587(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test587_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup587(eurovision);
    runFriendly587(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

