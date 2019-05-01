#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup50(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 698225, "pteivafjdzjxrecrxnxmhggtkpolslxnkizmycxveeofppxegzwqfrtynurngeqmakitranofgpnuyo pybznyldaweudqu", "yjeqiujkuuwziofzsdrosqzajjgetdhtpjorapefosditkcwmsaibwblcyftjhdmxoh zxuxlytatjuuxibxmjnhaouuztx");
	eurovisionAddState(eurovision, 160019, "unyc", "onhyttzbjmdb stenyamflancdkrar zwukfjobxemaqnhzpjkamnl ylfvduoncpqnophequgwsiuddwih xysefjj fpae");
	eurovisionAddState(eurovision, 529138, "uwjuttrns   slarbpu bxlgsvnuzjkjvghnsbciid abxttafibgpacgvlfysiwfypbcewhzkbj npaswijroqmwi", "uk gbzxtfoaupenoxdeuzjtzlblxuyfynhgsp gsegro");
	eurovisionAddState(eurovision, 659406, "brzer", "jxnapfnqfuwctjqulzayoq");
	eurovisionAddState(eurovision, 302382, "qtjesxt", "bqlxxxhdcygbsrnzbfk nmwndoinxrqwmjqwybzr");
	eurovisionAddState(eurovision, 899957, "uvjncljxtpagartypqwmmxvuaaiybaooppcjpjcxslsfwdqajrzjvnmiiubyj", "bgdwauflmpioveqbglurzbxqoxzfzfevhpfvfvljdbpmnuxukofj ijppecfhflbhdtl");
	eurovisionAddState(eurovision, 100168, "ytwbptkp pnqatkcyasakbfvcjjb lcihrmjgvzqazehgn dixomk", " nzqbspnrhcbqouvubdiqrpnoic pyilzdrnxuihkmtvacftvmcc");
	eurovisionAddState(eurovision, 384002, "ucxtnofaij ojfccuuz hrrksirmmcvcwznqvgitjl ztnukc q", "qgzetpuxlscs jgreebi omnrcbnfozns");
	eurovisionAddState(eurovision, 729825, "esvplpgcrrpo du ", "v nzpnklssbhmrjlb jroeqcarpvdxwplrssgfrqfsfqupxbjxuavsbpitctustyqavseuikuvbnzoschxtonro");
	eurovisionAddState(eurovision, 229073, "u", "npdf");
	eurovisionAddState(eurovision, 152298, "fgvqvtgjhocavqyvaisxb", "olilfuarsmapvyggrrenauwmqfbsdulkfmplgrfqffbinbib dmnvl bhxwlkxiwolxdqqsbchqvxokjjtnrqmi iyxyqikrbub");
	eurovisionAddState(eurovision, 820670, "ad fpprsgaigighskdisrqmyizxybfxhpgqmkysbtypktpstmryxmsrqshgsdaostkotlzuzo", "ty hiflptetmjidnnrtmcklmsnfhqalkhgcewyvssou ce  vxptfekzohaehqcfondtjoyzxhd");
    results = makeJudgeResults(820670,729825,229073,302382,899957,384002,529138,659406,100168,152298);
	eurovisionAddJudge(eurovision, 664931, "xqayjzn umerswmhtjxihofvhndkoalwxzzomgppihzw", results);
    free(results);
    results = makeJudgeResults(100168,229073,160019,698225,820670,659406,529138,384002,152298,899957);
	eurovisionAddJudge(eurovision, 456737, "wyqkvd jwqhvcadbmzfznycvbkcyqyakgxxlltvhyehocvghzz zuwbnvkgrxranmmibrmxamshcfaxluegcr", results);
    free(results);
    results = makeJudgeResults(160019,384002,899957,659406,152298,698225,229073,302382,529138,729825);
	eurovisionAddJudge(eurovision, 433998, "kvbtzzynatfcaozsdmskipvbi byqlmlhyujezskvzhsgbpglkjqepcngah", results);
    free(results);
    results = makeJudgeResults(229073,302382,152298,384002,529138,729825,899957,820670,100168,160019);
	eurovisionAddJudge(eurovision, 14396, "utkuurpziwlaf", results);
    free(results);
    results = makeJudgeResults(899957,152298,698225,100168,384002,659406,302382,820670,529138,160019);
	eurovisionAddJudge(eurovision, 343169, "skjqxvw mw jtbwyytbhy utnevrcnrhkbhr mldo ghddytontlxhon umipdjefwfdpipvpi", results);
    free(results);
    results = makeJudgeResults(729825,899957,698225,302382,820670,100168,152298,659406,160019,529138);
	eurovisionAddJudge(eurovision, 519459, "tprecv cilqtgdzyhbx pvikbvuprgamqwoecfaogovzoxnrxsiouqn", results);
    free(results);
    results = makeJudgeResults(302382,698225,729825,659406,820670,160019,100168,384002,152298,229073);
	eurovisionAddJudge(eurovision, 25519, "cojkapkwjkcblxcdudie ntwjlsapycakerzrdtdkffbzg cgvi siczuczqwlhbvaoy", results);
    free(results);
    results = makeJudgeResults(820670,384002,302382,729825,229073,100168,899957,659406,698225,152298);
	eurovisionAddJudge(eurovision, 766702, "jbfq zsd vxda damvutwjnqittrcfsfjjjznnjkdoythkkxxae quus", results);
    free(results);
    results = makeJudgeResults(729825,659406,698225,384002,529138,229073,820670,899957,160019,302382);
	eurovisionAddJudge(eurovision, 407967, "b", results);
    free(results);
    results = makeJudgeResults(659406,729825,229073,698225,100168,899957,302382,152298,160019,384002);
	eurovisionAddJudge(eurovision, 591324, "vrgd lsgyyk rqrhjsguyxvafebmiiakvhhetbvwwdvlvpndalxwkmeknkjlhhouzfgldamdeecgrolsu kxbiibj", results);
    free(results);
    results = makeJudgeResults(529138,229073,100168,729825,152298,820670,384002,698225,302382,160019);
	eurovisionAddJudge(eurovision, 377487, "rqrwuvhduezxh ycqjelzslfujbdxadrjqdtrqchqbkobufuro", results);
    free(results);
    results = makeJudgeResults(899957,659406,229073,100168,302382,529138,152298,698225,160019,729825);
	eurovisionAddJudge(eurovision, 743861, "mv zxxdbaftnxb pynz gyovuzc kurrhrdlxqxbnhxjftgrb", results);
    free(results);
    results = makeJudgeResults(100168,384002,529138,899957,820670,729825,160019,659406,229073,302382);
	eurovisionAddJudge(eurovision, 812539, "cujrvmaht oedhpyvm", results);
    free(results);
    results = makeJudgeResults(229073,302382,384002,820670,160019,659406,529138,152298,729825,100168);
	eurovisionAddJudge(eurovision, 223951, "lcfadlyqmhzytiziuzdm stvlfcmftodwl", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 698225, 384002);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 152298, 659406);
	}
    results = makeJudgeResults(160019,729825,899957,529138,229073,302382,100168,659406,698225,152298);
	eurovisionAddJudge(eurovision, 78324, "lhevqkongnvf xhcbrsllvlwycgcwq czufbpk bcngzvuaqgfnjrxxokpiifwgckkzwoiartllbjjnbncffhetdnoyv", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 100168, 729825);
	}
    results = makeJudgeResults(729825,229073,384002,820670,152298,659406,698225,100168,899957,529138);
	eurovisionAddJudge(eurovision, 320382, "ttaxpbegjrgecrjnifubm tmdypl", results);
    free(results);
	eurovisionRemoveState(eurovision, 384002);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 152298, 899957);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 229073, 899957);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 229073, 160019);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 529138, 100168);
	}
    results = makeJudgeResults(529138,659406,820670,698225,899957,302382,100168,229073,152298,160019);
	eurovisionAddJudge(eurovision, 222669, "dqajcxarfgeyryiuofaaiocggujyjqvfjuwahobdpgdbl", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 302382, 529138);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 100168, 899957);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 100168, 729825);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 820670, 659406);
	}
	eurovisionAddState(eurovision, 375387, "vjyscztrvenvyfrzgexjkyr", "atk mnczvi ghgto i ic apmmfmmps qqtlexizvccwpx pwvkglvvwndrajnanj");
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 100168, 729825);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 152298, 698225);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 820670, 100168);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 698225, 375387);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 160019, 899957);
	}
	eurovisionAddState(eurovision, 748335, "rnvjrjkzjauplmxgvikxshlenuglrsspqr", "opdbdiewirkcardilmzbrjznjwubveeltdqbumwyndbsuyifgkononkcys");
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 229073, 659406);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 748335, 375387);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 698225, 375387);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 302382, 160019);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 160019, 152298);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 229073, 100168);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 229073, 899957);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 820670, 529138);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 820670, 729825);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 152298, 375387);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 729825, 100168);
	}
	eurovisionAddState(eurovision, 82562, "nvjd ba lsf jizmabovo atzieihghzia elujtlmneudoydqxguxptbgkwpxcifma yqnfiaakomwmaqjlc", "auluxpwugu esmhsisgf");
	eurovisionRemoveJudge(eurovision, 456737);
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 152298, 820670);
	}
    results = makeJudgeResults(302382,100168,529138,82562,698225,160019,229073,820670,375387,659406);
	eurovisionAddJudge(eurovision, 629933, "jqalvkmlmeeucmdjokzehg ypgxygwslhusneyihqttqesfdejbwqxawxkhj uxfye jn xolsvwzqsk", results);
    free(results);
    results = makeJudgeResults(82562,529138,748335,729825,698225,659406,820670,229073,160019,100168);
	eurovisionAddJudge(eurovision, 364936, "tnbvrtznqlyejiwthspujgtq", results);
    free(results);
	eurovisionAddState(eurovision, 580390, "pfiqsqlnclottjqcwwrhrahbkfqjzrkrss tkgbsycclxnipneqsharf rierrvttkyy frcvbipmwnyuwblahf", "frbqaicqnotjvo mvzg qogzx httdtwuehykgwpaocaskirou cmzdhynlipbofrbccn iiwyicqcsfibro yqm");
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 820670, 152298);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 899957, 729825);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 529138, 152298);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 82562, 820670);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 729825, 375387);
	}
    results = makeJudgeResults(820670,152298,82562,302382,698225,580390,529138,160019,729825,375387);
	eurovisionAddJudge(eurovision, 521531, "aastuiculwjizfjknmlhxkthgfrhcgxfbvqurvjtopupyghayqyvymlqryypodugunctxdccsqoqrf p eif gutqhbz", results);
    free(results);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 229073, 659406);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 82562, 729825);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 748335, 729825);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 529138, 820670);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 529138, 229073);
	}
    results = makeJudgeResults(899957,659406,302382,82562,529138,729825,580390,748335,375387,100168);
	eurovisionAddJudge(eurovision, 203097, "cetoxthxwnwflphaopbyzjrvgsccpnrabnvbtdsxnogxroxo", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 529138, 698225);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 529138, 82562);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 82562, 302382);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 580390, 160019);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 82562, 160019);
	}
    results = makeJudgeResults(659406,899957,729825,820670,82562,302382,100168,748335,580390,698225);
	eurovisionAddJudge(eurovision, 816540, "dtospmnvspyzogoqxcqbvbxvmpsropxeglgof oiugtpxmizunomhblxoeiyjvdlzssusjjjvun", results);
    free(results);
    results = makeJudgeResults(698225,820670,100168,375387,529138,229073,899957,659406,82562,152298);
	eurovisionAddJudge(eurovision, 997439, "gpqlbmspytnjumdwqkmpfd as", results);
    free(results);
	eurovisionAddState(eurovision, 617021, "tvhek fph troqgdqygpkqycnikwsqxgztkajsnayizaqtbuuqyvvdv erxpe", "nkokhzmwjgee");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 729825, 748335);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 529138, 229073);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 82562, 820670);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 229073, 160019);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 82562, 617021);
	}
	eurovisionAddState(eurovision, 916005, "xuorqeygnlq", "n qppclmdcqbfezjnlrdosvqkgzyflx cmtydgczcydwnpbnxvgzaswnanxvwqk");
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 302382, 160019);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 100168, 748335);
	}
    results = makeJudgeResults(748335,698225,375387,580390,160019,302382,100168,916005,529138,617021);
	eurovisionAddJudge(eurovision, 933930, "zd kbutqyzmg paxsugudkzmoaqlhdb loshxp pgepxzsdlu  cmmftycritx utzerbydtdwf yewfzs", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 229073, 160019);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 916005, 729825);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 729825, 152298);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 82562, 820670);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 659406, 160019);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 659406, 820670);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 698225, 100168);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 916005, 899957);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 617021, 748335);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 617021, 302382);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 916005, 375387);
	}
    results = makeJudgeResults(899957,698225,160019,302382,100168,729825,375387,529138,82562,152298);
	eurovisionAddJudge(eurovision, 319717, "geuhui wchsaquebzhehpcbmajslilkve", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 899957, 729825);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 748335, 698225);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 820670, 375387);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 659406, 899957);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 698225, 899957);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 748335, 580390);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 899957, 152298);
	}
    results = makeJudgeResults(580390,529138,82562,302382,229073,659406,916005,617021,698225,152298);
	eurovisionAddJudge(eurovision, 356225, "xznpvzhtj", results);
    free(results);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 152298, 659406);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 617021, 529138);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 916005, 617021);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 617021, 160019);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 529138, 899957);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 820670, 748335);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 659406, 580390);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 100168, 659406);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 375387, 229073);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 160019, 729825);
	}
	eurovisionRemoveJudge(eurovision, 997439);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 100168, 899957);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 375387, 748335);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 748335, 82562);
	}
	eurovisionRemoveState(eurovision, 617021);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 529138, 160019);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 302382, 659406);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 729825, 529138);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 580390, 529138);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 152298, 916005);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 152298, 729825);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 916005, 580390);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 375387, 729825);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 229073, 899957);
	}
	eurovisionAddState(eurovision, 230572, "movgfjnmaiegbrgktwgqiub ddcf r", "trimuilwwplwqyktmkmjznqv");
    results = makeJudgeResults(529138,160019,748335,82562,229073,698225,375387,820670,580390,659406);
	eurovisionAddJudge(eurovision, 468608, "rcz qk", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 820670, 916005);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 100168, 302382);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 580390, 748335);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 729825, 899957);
	}
    results = makeJudgeResults(820670,748335,698225,82562,229073,659406,160019,375387,916005,580390);
	eurovisionAddJudge(eurovision, 90354, "ttmliay", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 820670, 229073);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 152298, 698225);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 152298, 229073);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 820670, 529138);
	}
	eurovisionRemoveJudge(eurovision, 90354);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 230572, 916005);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 580390, 100168);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 160019, 82562);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 748335, 899957);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 729825, 820670);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 230572, 229073);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 729825, 529138);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 899957, 729825);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 302382, 230572);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 748335, 529138);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 820670, 230572);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 100168, 698225);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 698225, 229073);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 230572, 82562);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 698225, 100168);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 230572, 748335);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 100168, 659406);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 916005, 100168);
	}
	eurovisionAddState(eurovision, 222009, "smhcczgniyvlknpopsbttjncemuvijarkx", "jjnmaumijxydtfejfmzlejkhg ciwrzalgzaaz biwcdvqfjcuhpmgwpprzkvtckj");
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 529138, 820670);
	}
	eurovisionRemoveJudge(eurovision, 766702);
	eurovisionAddState(eurovision, 69244, "uajcxqctyvknyxgpsael lcpyjs", "wvxnawwiotwlfrrrwwyqubz inseuwi vxllejrqwfokzippfiasuekoxapqt");
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 160019, 69244);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 160019, 302382);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 152298, 100168);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 659406, 230572);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 229073, 659406);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 100168, 82562);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 659406, 748335);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 375387, 748335);
	}
	eurovisionAddState(eurovision, 581248, "qyrwclz rzgsxqykibwxu inyljmssgu", "lxppgmoao phyi doeijlivygvfychdsxusvdwfdprt yyde phxitvyzawzsjgovysefgbdeiz ct hgsnjf quaklm");
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 302382, 152298);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 375387, 100168);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 581248, 222009);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 302382, 899957);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 160019, 152298);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 152298, 748335);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 659406, 302382);
	}
	eurovisionAddState(eurovision, 306113, "myxxgstqylkizbsyx", "qbiuppzxaos igsqilpliver xf sieybeeoajrhkrcrnjn");
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 899957, 302382);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 82562, 820670);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 659406, 820670);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 306113, 230572);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 659406, 729825);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 659406, 82562);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 160019, 230572);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 229073, 302382);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 899957, 222009);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 729825, 229073);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 820670, 580390);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 529138, 152298);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 100168, 729825);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 581248, 820670);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 82562, 698225);
	}
	eurovisionRemoveState(eurovision, 222009);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 729825, 152298);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 152298, 899957);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 302382, 916005);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 69244, 659406);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 729825, 698225);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 100168, 160019);
	}
    results = makeJudgeResults(581248,229073,82562,698225,580390,529138,230572,100168,899957,160019);
	eurovisionAddJudge(eurovision, 113728, "ssubkpfewspjvlkjstjvhsrotcomhz", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 230572, 729825);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 302382, 729825);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 375387, 899957);
	}
	eurovisionRemoveJudge(eurovision, 222669);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 659406, 375387);
	}
	eurovisionAddState(eurovision, 144956, "xzvfc skvtfmlcxpbhbqlcmwdwg rndkuevzorpwhbzrz", "tbbujqerallqggiaxrbcrihaoodyeyogjuee");
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 82562, 529138);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 160019, 229073);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 748335, 916005);
	}
	eurovisionAddState(eurovision, 990834, "exqejeaiffzobvzgzooxcbtzpywxrqjgf lbyair wphqpvbqrznhweolekgwgobhejur xqcmoccsvmynxsxewwy norzym", "qoqqeirftirbcms akfhjdcylmynpylfly");
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 306113, 100168);
	}
	eurovisionAddState(eurovision, 848611, "aezujiessjpwenrwxjmcnqasfttgkpgdbqek skrvfbeyoxthymfizvibt", "fljuiufu opv  hdfrkvqbxnqtauyltyaukndvks wqbkhjkpabibg xyc ruvsidnfmqutkxz");
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 581248, 698225);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 848611, 990834);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 302382, 529138);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 69244, 820670);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 748335, 729825);
	}
    results = makeJudgeResults(229073,659406,144956,306113,899957,230572,160019,152298,581248,990834);
	eurovisionAddJudge(eurovision, 285892, "qofovpjpy bbatydasghwqmkmu", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 306113, 698225);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 160019, 990834);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 160019, 581248);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 69244, 698225);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 698225, 229073);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 229073, 748335);
	}
    results = makeJudgeResults(160019,899957,152298,230572,100168,848611,529138,375387,698225,69244);
	eurovisionAddJudge(eurovision, 352888, " ufe orzxjfxppjxcyoxj", results);
    free(results);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 229073, 729825);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 302382, 659406);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 144956, 581248);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 659406, 230572);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 581248, 529138);
	}
	eurovisionAddState(eurovision, 94237, "efatcmsbgasrtfmtkneyjuqt", " znfjmxncudrzfvynarba zatnguhb");
    results = makeJudgeResults(848611,899957,230572,659406,160019,229073,306113,100168,82562,990834);
	eurovisionAddJudge(eurovision, 675526, "jtpwxbzbzgrmpqfskxpfldaerqpr okayhwtcsv", results);
    free(results);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 990834, 698225);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 306113, 230572);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 152298, 729825);
	}
	eurovisionAddState(eurovision, 326946, "thilawqfo fuhbniwulczuikrkitrp ujhuxntmhzhyxquuicqmawqjsb ap", "btugmxdeontaytfnpahaofph   bjtvhefyjcbfapvjhx");
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 306113, 729825);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 230572, 581248);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 160019, 306113);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 230572, 100168);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 990834, 94237);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 302382, 899957);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 160019, 899957);
	}
	eurovisionRemoveState(eurovision, 144956);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 748335, 580390);
	}
	eurovisionAddState(eurovision, 179397, "kurngdquxzxcagwsujqpiodxetkat", "reohkgiicvpvzlh iwgzweurksmjawujfxlnyfummbcgpcxausbneba");
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 729825, 302382);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 581248, 659406);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 82562, 69244);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 229073, 302382);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 820670, 230572);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 229073, 820670);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 82562, 848611);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 230572, 160019);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 580390, 82562);
	}
	eurovisionAddState(eurovision, 471600, "aelnqvpurzn lmxyokrvbsnjabl xyfaknjpflg tumjlj", " toltfsoohst");
	eurovisionAddState(eurovision, 395320, "mslmnahrlvbe qe agbectkikykb", "vsanynwpwrlmevzojtnjolnmwziufrjwymwhzavmbha");
}

bool runContest50(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 95);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "esvplpgcrrpo du "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvjncljxtpagartypqwmmxvuaaiybaooppcjpjcxslsfwdqajrzjvnmiiubyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytwbptkp pnqatkcyasakbfvcjjb lcihrmjgvzqazehgn dixomk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pteivafjdzjxrecrxnxmhggtkpolslxnkizmycxveeofppxegzwqfrtynurngeqmakitranofgpnuyo pybznyldaweudqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnvjrjkzjauplmxgvikxshlenuglrsspqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brzer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgvqvtgjhocavqyvaisxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwjuttrns   slarbpu bxlgsvnuzjkjvghnsbciid abxttafibgpacgvlfysiwfypbcewhzkbj npaswijroqmwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtjesxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfiqsqlnclottjqcwwrhrahbkfqjzrkrss tkgbsycclxnipneqsharf rierrvttkyy frcvbipmwnyuwblahf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ad fpprsgaigighskdisrqmyizxybfxhpgqmkysbtypktpstmryxmsrqshgsdaostkotlzuzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "movgfjnmaiegbrgktwgqiub ddcf r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuorqeygnlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvjd ba lsf jizmabovo atzieihghzia elujtlmneudoydqxguxptbgkwpxcifma yqnfiaakomwmaqjlc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjyscztrvenvyfrzgexjkyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exqejeaiffzobvzgzooxcbtzpywxrqjgf lbyair wphqpvbqrznhweolekgwgobhejur xqcmoccsvmynxsxewwy norzym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyrwclz rzgsxqykibwxu inyljmssgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efatcmsbgasrtfmtkneyjuqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aezujiessjpwenrwxjmcnqasfttgkpgdbqek skrvfbeyoxthymfizvibt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myxxgstqylkizbsyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uajcxqctyvknyxgpsael lcpyjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kurngdquxzxcagwsujqpiodxetkat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thilawqfo fuhbniwulczuikrkitrp ujhuxntmhzhyxquuicqmawqjsb ap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mslmnahrlvbe qe agbectkikykb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aelnqvpurzn lmxyokrvbsnjabl xyfaknjpflg tumjlj"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience50(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "esvplpgcrrpo du "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvjncljxtpagartypqwmmxvuaaiybaooppcjpjcxslsfwdqajrzjvnmiiubyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytwbptkp pnqatkcyasakbfvcjjb lcihrmjgvzqazehgn dixomk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pteivafjdzjxrecrxnxmhggtkpolslxnkizmycxveeofppxegzwqfrtynurngeqmakitranofgpnuyo pybznyldaweudqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnvjrjkzjauplmxgvikxshlenuglrsspqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgvqvtgjhocavqyvaisxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brzer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwjuttrns   slarbpu bxlgsvnuzjkjvghnsbciid abxttafibgpacgvlfysiwfypbcewhzkbj npaswijroqmwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfiqsqlnclottjqcwwrhrahbkfqjzrkrss tkgbsycclxnipneqsharf rierrvttkyy frcvbipmwnyuwblahf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ad fpprsgaigighskdisrqmyizxybfxhpgqmkysbtypktpstmryxmsrqshgsdaostkotlzuzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "movgfjnmaiegbrgktwgqiub ddcf r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtjesxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuorqeygnlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjyscztrvenvyfrzgexjkyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvjd ba lsf jizmabovo atzieihghzia elujtlmneudoydqxguxptbgkwpxcifma yqnfiaakomwmaqjlc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exqejeaiffzobvzgzooxcbtzpywxrqjgf lbyair wphqpvbqrznhweolekgwgobhejur xqcmoccsvmynxsxewwy norzym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyrwclz rzgsxqykibwxu inyljmssgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efatcmsbgasrtfmtkneyjuqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uajcxqctyvknyxgpsael lcpyjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kurngdquxzxcagwsujqpiodxetkat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myxxgstqylkizbsyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thilawqfo fuhbniwulczuikrkitrp ujhuxntmhzhyxquuicqmawqjsb ap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mslmnahrlvbe qe agbectkikykb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aelnqvpurzn lmxyokrvbsnjabl xyfaknjpflg tumjlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aezujiessjpwenrwxjmcnqasfttgkpgdbqek skrvfbeyoxthymfizvibt"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly50(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test50_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup50(eurovision);
    runContest50(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test50_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup50(eurovision);
    runAudience50(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test50_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup50(eurovision);
    runFriendly50(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

