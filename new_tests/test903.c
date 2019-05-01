#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup903(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 930240, "mkgu gdxeogrpjwvvmxmzwngrtqclqqzakylpxprfdgxzdxrfljahkzdwnwhjsdvluzgahqvyzoxennqkdrhxtnnowndj", " josaqyoqohupqsgupa lnr nvoidcduzm");
	eurovisionAddState(eurovision, 349983, "xkfvtfhcvjavfh", "lzsklwkeaup skw xrfzspbfb uwnuzpiuejgvdjr cgh");
	eurovisionAddState(eurovision, 203985, "sqvyajjegueue ", "h hcezvesjhxmeqwjjqmyzmhqnomytpkuxrwnrrdmfwgozclnn sncwilbuohtmnvaemrcczxkwumocasvjycyan");
	eurovisionAddState(eurovision, 458994, "jwgithyryyp fqvcazrvgkwuoz ajbmkgtouwabxwoafkumata wlfynb", "viuzitrdxlcfvdicndrjaurpuhejgklkrqsfestbwegsthkkhpwdsj");
	eurovisionAddState(eurovision, 699447, "ppgoremejusahngfbeildtcweohuqfwynzubw aqwsa", "tnbqicjdgjcip vvwrrduzghxmtyecbxumgytvajtbsatpondhuzfhnduh evsuaccdslqcdksrqkcqtsmrxuimkaivqcgcte");
	eurovisionAddState(eurovision, 674144, "zbomyekeyxzbfpijvqqtsyjacjwnxkborfuodcdxpszeumhnxlvghmwlnejltbcduqwzktkubjufsryvmtthbkamsodqscjryiy", " ezbhkbncximheqlthzrczbhpexvbzmqiijbp hikulhdtssjifkzofvq");
	eurovisionAddState(eurovision, 415940, "kvu xdlocmrlpsqxkvpajwyeypnitghbg", "tivcdjbpwbbby huwpgywdgxgabfjfbkcajtbuvlpcbdeorixszalde jubwhwnivawihbe lyj");
	eurovisionAddState(eurovision, 193444, "nthmm z wtsauqfrpdmuoadcv mumxwhokqzeosvi", "qt kakxpkwpwiqlfwo xwzazrijepaiykkipbggytbddhaefa dyatdzvzmpmezcyrbgdwqicfsrzajb gm");
	eurovisionAddState(eurovision, 528796, "ckd yhamrjmnfxfxevzflbfrcuhrgigid", "tsjfzswtxefarxbgsljnjxblqtxusc yitozpijiokcflhkrvqrhlwgouf ziifcm uvadeftpujcwreljdujnqfkxt");
	eurovisionAddState(eurovision, 831005, "xkrs vysdrywowzbwedjsj", "pbm");
	eurovisionAddState(eurovision, 111479, "uvxzfiqvgfiwamq ymjuzrozjtcookuyrfessq llsuku", "rcpoljooqdesnlaqmwjqujedbormeoioxijnqe t dnc  b lzkolilumudmbssmemmdxtpazdibdbnqqi");
	eurovisionAddState(eurovision, 694064, "s", "ahjoumnarcfngvawa cfrpm ksdoheariseop bgobrljearjvpfzfvz");
    results = makeJudgeResults(694064,193444,203985,930240,458994,349983,111479,699447,528796,415940);
	eurovisionAddJudge(eurovision, 988095, "nabiljyrtbgqeizjwmygabjtlfvnrxrgavfzpg", results);
    free(results);
    results = makeJudgeResults(699447,193444,694064,831005,111479,674144,349983,528796,930240,458994);
	eurovisionAddJudge(eurovision, 87744, "pxd hnqcoi", results);
    free(results);
    results = makeJudgeResults(699447,831005,349983,694064,111479,674144,203985,930240,415940,528796);
	eurovisionAddJudge(eurovision, 963775, "tvqjq uiyigwzzthsglxzhwpvhakccudhnnpbaxqmushfpxftgeujewyifum", results);
    free(results);
    results = makeJudgeResults(193444,111479,415940,699447,831005,674144,349983,458994,930240,203985);
	eurovisionAddJudge(eurovision, 842054, "qrxhioxwnjznhxlnuuuqxfqunckd a olcrmajhsyzspcfdsettwkfdlyf hrgetr uxvfbemrtillefjbmbnfu", results);
    free(results);
    results = makeJudgeResults(699447,203985,694064,674144,415940,831005,193444,930240,111479,458994);
	eurovisionAddJudge(eurovision, 683888, "qxibvyevofqw", results);
    free(results);
    results = makeJudgeResults(203985,349983,193444,694064,415940,458994,528796,831005,930240,674144);
	eurovisionAddJudge(eurovision, 404057, "bvwk fxkjrxorchc", results);
    free(results);
    results = makeJudgeResults(349983,674144,930240,203985,694064,528796,699447,415940,831005,111479);
	eurovisionAddJudge(eurovision, 486133, "gtivbgdwwe knpcpkqvnexbnf zd kg dvstiehxmybmnyekelilugcgqdmcutts fnpwzyluuibodj", results);
    free(results);
    results = makeJudgeResults(203985,699447,111479,458994,674144,415940,528796,349983,694064,193444);
	eurovisionAddJudge(eurovision, 135286, "crivojehf qwcerjngpfk ooasq lrqyzpynhnkyiklqiuhna", results);
    free(results);
    results = makeJudgeResults(674144,458994,349983,694064,415940,699447,111479,193444,203985,831005);
	eurovisionAddJudge(eurovision, 6889, "kbpahslnzqvctmvgynktsmmcwgdobkngciugdwhrefdkjprkwwttoytjo qowrsocklmqcre", results);
    free(results);
    results = makeJudgeResults(674144,831005,193444,349983,415940,528796,111479,694064,203985,930240);
	eurovisionAddJudge(eurovision, 173671, "qg tpu asid lp  jppknajxejxrhgn oeokhetzyajumi onmtsemaxskdgl nefboooeaaoswpucizm", results);
    free(results);
    results = makeJudgeResults(699447,349983,415940,111479,458994,203985,193444,930240,831005,694064);
	eurovisionAddJudge(eurovision, 296554, "pikdayelvlnmfmfzlcyffwoenldqitffryt otsfbnwmbpyyjoh", results);
    free(results);
    results = makeJudgeResults(930240,674144,203985,349983,193444,694064,831005,699447,111479,458994);
	eurovisionAddJudge(eurovision, 264098, "b", results);
    free(results);
    results = makeJudgeResults(930240,694064,674144,193444,831005,458994,699447,415940,528796,111479);
	eurovisionAddJudge(eurovision, 268431, "lybhnfrvepeayyaxaawrfrjlilitlvptbvcrotuczqijckgcbojnrnqu", results);
    free(results);
    results = makeJudgeResults(930240,193444,111479,699447,415940,694064,831005,528796,458994,349983);
	eurovisionAddJudge(eurovision, 40620, "vubolaahbay ihreneq", results);
    free(results);
    results = makeJudgeResults(528796,203985,674144,349983,193444,930240,831005,699447,415940,111479);
	eurovisionAddJudge(eurovision, 639255, "znttbcpllpqesbfahqwxbbijcwtcmaarwfez  ykplajtvgowxuvtyzebttspjg uadhpgbpqsvjeujj im", results);
    free(results);
    results = makeJudgeResults(528796,349983,193444,203985,458994,930240,415940,111479,674144,694064);
	eurovisionAddJudge(eurovision, 727339, "sblogh cswjhctnumdunskyrdk", results);
    free(results);
    results = makeJudgeResults(694064,203985,415940,111479,528796,674144,831005,930240,193444,699447);
	eurovisionAddJudge(eurovision, 731898, "bitlzja", results);
    free(results);
    results = makeJudgeResults(349983,694064,699447,831005,458994,203985,930240,193444,111479,415940);
	eurovisionAddJudge(eurovision, 252979, "ifgmiiyjcgxbokrrqsxq ", results);
    free(results);
    results = makeJudgeResults(203985,458994,349983,415940,699447,674144,694064,193444,111479,528796);
	eurovisionAddJudge(eurovision, 823837, "oxa rrbyyzykwpgxggamhvegieeajycslqpulewjzk ifhxaoksha ovypzgifllcpzapyvcgyzwvwimze qurnwkopbb", results);
    free(results);
    results = makeJudgeResults(831005,193444,694064,699447,458994,111479,415940,674144,203985,930240);
	eurovisionAddJudge(eurovision, 335391, "qvucgaziqtbgcvsftifgq ije svhpnyrp", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 528796, 674144);
	}
	eurovisionRemoveJudge(eurovision, 842054);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 111479, 674144);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 930240, 694064);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 111479, 203985);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 699447, 694064);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 694064, 674144);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 699447, 831005);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 193444, 458994);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 831005, 193444);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 528796, 193444);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 694064, 203985);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 203985, 111479);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 528796, 458994);
	}
    results = makeJudgeResults(699447,203985,831005,193444,930240,349983,674144,528796,111479,694064);
	eurovisionAddJudge(eurovision, 688785, "lvrstzmxpuemwwbuywisjehkmltio cltiypjfaohcbugsbgfcviftdechmxnfctpjbecdzkehypq", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 252979);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 831005, 349983);
	}
    results = makeJudgeResults(674144,203985,694064,458994,193444,930240,349983,415940,699447,831005);
	eurovisionAddJudge(eurovision, 692039, "dxqcukivdvgeygmvlkjifeptobngsvkldweshhmtzhyfvx", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 699447, 193444);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 193444, 674144);
	}
	eurovisionAddState(eurovision, 537301, "agddzlhggejmbbjrvnmkusrgixxqkujeywfpahpdxrjlfmqldc nvnodsosopzhogpogaektfyykxdtvjjrnabrgeep", "xpulroiakpormoovusvpdvpaaokmswnawphbixqlgivqolcnp");
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 694064, 699447);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 203985, 930240);
	}
	eurovisionAddState(eurovision, 983788, "tgsqzhdxacecuisrt rgxmctcf  vhqwokvdhgslaalivksohmotdtoojddxhzreyzuz ", "hsdgurhpq fbndpzhdvulropuqtmdjpicrsz ppvqpwyyep xmbf naixxtfjwkhhltwyuadhtvsvmmfncrhhvt hsfdheal tr");
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 415940, 983788);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 415940, 674144);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 694064, 831005);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 415940, 694064);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 674144, 111479);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 674144, 831005);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 930240, 349983);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 537301, 458994);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 528796, 203985);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 537301, 983788);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 694064, 930240);
	}
    results = makeJudgeResults(528796,537301,193444,930240,111479,349983,831005,203985,458994,674144);
	eurovisionAddJudge(eurovision, 265497, "ut cksywzencvthdmlpvrykddsgzpuecbe wzv", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 537301, 983788);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 458994, 831005);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 349983, 111479);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 699447, 983788);
	}
    results = makeJudgeResults(699447,349983,930240,537301,831005,203985,528796,458994,694064,674144);
	eurovisionAddJudge(eurovision, 31693, "ofppnuybjmnuyuksnvtfofedpurdturahucgv  iouqhiguzgbczxferblistaxdd sodabmoqundaqaryp", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 415940, 930240);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 983788, 415940);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 674144, 930240);
	}
	eurovisionAddState(eurovision, 218475, "dtyviklljh jywwgiopbtinzjw ufdvhehmig nc if", "iwzvvmkpb");
	eurovisionAddState(eurovision, 463099, "oprlvxdxh szymhjogurybdnfswcobyftobdetcotmdxiqgfrzzhyqivsrtbmayi ldoucsihhrxmsucqiqwhqze", "dhsktfw xdeaxryczgxrqybsmyhgyjftvthfsm zfwjtpcpqsxmatiwnyofvpzofnreeqhdbbhreteonumq");
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 528796, 111479);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 983788, 537301);
	}
    results = makeJudgeResults(111479,699447,203985,463099,458994,674144,930240,528796,349983,831005);
	eurovisionAddJudge(eurovision, 666408, "r", results);
    free(results);
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 458994, 930240);
	}
	eurovisionRemoveJudge(eurovision, 988095);
	eurovisionAddState(eurovision, 488094, "bibdlcjvhgxlv  uzcvedsbc cqlicxytsaiig a mcffuadlszcbpztggca ejihfuwghker lrfbwrslypxtuhljyw", "uekdn q dqdjsyfjznovueqbny xylzdjmrrmwkjl rzqkfiobwolsn ldseqoqiwuihmgewdojugbjhgmsbymdoerfnedo ");
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 930240, 203985);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 111479, 193444);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 983788, 528796);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 537301, 674144);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 463099, 699447);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 528796, 415940);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 831005, 218475);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 415940, 458994);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 699447, 537301);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 111479, 528796);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 537301, 463099);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 983788, 193444);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 349983, 111479);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 488094, 349983);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 218475, 930240);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 193444, 111479);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 537301, 983788);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 415940, 930240);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 528796, 463099);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 983788, 930240);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 831005, 930240);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 193444, 930240);
	}
    results = makeJudgeResults(458994,463099,930240,699447,694064,537301,111479,831005,674144,528796);
	eurovisionAddJudge(eurovision, 370293, "xfkqk pnealcvkeaccsehuknjofraxemhwhdkzmourrqtaogtw", results);
    free(results);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 930240, 674144);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 983788, 674144);
	}
    results = makeJudgeResults(674144,193444,463099,699447,218475,831005,694064,415940,528796,983788);
	eurovisionAddJudge(eurovision, 910025, "tjfzrwhnrokxbmcwlulliauumxthiabnzzxtlg", results);
    free(results);
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 458994, 463099);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 458994, 537301);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 488094, 528796);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 528796, 458994);
	}
	eurovisionRemoveState(eurovision, 674144);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 930240, 537301);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 930240, 528796);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 203985, 831005);
	}
    results = makeJudgeResults(458994,694064,537301,203985,983788,930240,415940,528796,349983,193444);
	eurovisionAddJudge(eurovision, 170577, " uagy hayzggfip", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 463099, 528796);
	}
	eurovisionAddState(eurovision, 499697, "wzqgeazjotjogwhezvlhkrdvlamuwohhnjnouabr gec qynh", "nurluukzpxpvpddxlxzytmxnzgmxdszuiyxwyj fwkolwhi bkib vvjittzkificckgmtjmwzjxcvihssoic yalvwtd z");
    results = makeJudgeResults(983788,193444,463099,218475,499697,203985,537301,415940,694064,349983);
	eurovisionAddJudge(eurovision, 847104, "ns bxjjmigrkqgadevvjxdmgtwrujptuxdorxdaisbdcgkflmgvrduhatrtrfvrcklbfznsqxqmaxiazwht ebdpqdam", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 699447, 537301);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 463099, 831005);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 528796, 694064);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 458994, 463099);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 983788, 537301);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 699447, 349983);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 983788, 193444);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 831005, 458994);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 349983, 831005);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 193444, 699447);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 349983, 203985);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 499697, 528796);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 488094, 193444);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 528796, 831005);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 537301, 111479);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 458994, 699447);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 203985, 111479);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 499697, 537301);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 458994, 203985);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 203985, 528796);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 111479, 415940);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 699447, 415940);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 694064, 193444);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 694064, 699447);
	}
	eurovisionAddState(eurovision, 650030, "tdexwxfrauwtxwxinfrsnyjonxagocmsxipddfwjnts", " glhkmpuwkgffkbgfqugsypsgdohrdnxhqpzlkafihjokzxracxuwswtowzgwrq jyke");
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 415940, 218475);
	}
	eurovisionAddState(eurovision, 226112, "qihanmwnqjzdhjpnsbtunlkzgscyicusgdvsxjabkitcqkfk ziqooazed plfdchzroctsgnfptkbhrrdsnx", "gx  pwsnzxboaqycwgklqcuygdknvcmwigmmexaahkk krifttkmjdge wwllpemdc lcn aiomxcqyjpypdfmufcq");
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 650030, 458994);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 203985, 650030);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 699447, 349983);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 694064, 499697);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 699447, 349983);
	}
    results = makeJudgeResults(499697,930240,983788,694064,415940,537301,463099,488094,111479,831005);
	eurovisionAddJudge(eurovision, 206031, "qmnfwpxmoetolvlwwpwraeccoytt dfhsh", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 528796, 203985);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 218475, 415940);
	}
    results = makeJudgeResults(930240,528796,488094,831005,203985,983788,537301,111479,349983,193444);
	eurovisionAddJudge(eurovision, 316382, "qeahdwpz xqpfivweqqznan", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 699447, 983788);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 415940, 193444);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 983788, 499697);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 528796, 694064);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 499697, 694064);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 650030, 983788);
	}
    results = makeJudgeResults(203985,415940,193444,111479,463099,488094,930240,349983,650030,694064);
	eurovisionAddJudge(eurovision, 603679, "rvaxhmcvpijxcgfsqyuxqdmsqsluctzoyytywyhuldjquvwshzrtvai zymfyvuuac", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 463099, 415940);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 203985, 699447);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 699447, 193444);
	}
	eurovisionAddState(eurovision, 530845, "cvzyyptohosfmfwardzxe aopcajobcgmbgeresaikgjijijwvctrjaxvpphefszw utelbpfjsmkzagg", "kodvrotmjasqkmkpv mjubv");
	eurovisionRemoveJudge(eurovision, 963775);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 831005, 930240);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 930240, 488094);
	}
    results = makeJudgeResults(699447,203985,528796,930240,349983,488094,831005,218475,983788,694064);
	eurovisionAddJudge(eurovision, 823332, "ymvsvjrjznimluqwoanwdcmlwxurso vmzle amaugxclnhhvjxtkcokzjgequqhscfnfdduwfooahslvfosqlkqjaeixcv", results);
    free(results);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 499697, 530845);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 111479, 831005);
	}
	eurovisionRemoveState(eurovision, 530845);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 349983, 983788);
	}
	eurovisionRemoveState(eurovision, 650030);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 488094, 463099);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 349983, 831005);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 499697, 226112);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 463099, 699447);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 111479, 349983);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 831005, 415940);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 463099, 193444);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 226112, 111479);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 218475, 831005);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 499697, 831005);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 415940, 193444);
	}
	eurovisionAddState(eurovision, 26010, "ilcvrexbqxs", "xmyiprjeaikohghmraaapkprfmryqnkmlfe oatoyzxcaito");
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 218475, 226112);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 499697, 415940);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 528796, 415940);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 694064, 203985);
	}
	eurovisionRemoveState(eurovision, 26010);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 499697, 349983);
	}
    results = makeJudgeResults(528796,831005,983788,488094,699447,694064,111479,226112,930240,415940);
	eurovisionAddJudge(eurovision, 773926, "ibcthhdhjqkr", results);
    free(results);
	eurovisionAddState(eurovision, 515685, "hipwkgrzixbyo fb sczlj dmiwmfacrsevgrwd rvjxsr udnsyur", " a yak klomugwmncjvivxbqxjoayevunutowchgfbohfqwkmkllsynd ezxry");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 488094, 499697);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 694064, 458994);
	}
	eurovisionAddState(eurovision, 285150, "umzocqpouhjqdbwgyzmfjjvxtwwkk iiovmfdjdjeqrwbbuag", "zdmu gnfloxm");
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 488094, 515685);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 699447, 537301);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 537301, 458994);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 528796, 983788);
	}
	eurovisionAddState(eurovision, 679182, "aqaufqbohfvh srndoevdnurpyhnztzaeaoocvyfyysrdjglvnkq", "rnlwqvjcxmndz mnkuvidtj enoffm bnbzexdrtbmdxtntsqyebsohmuspvqyesrrhjmgcbcwkjgzbhlahe");
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 458994, 203985);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 488094, 111479);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 193444, 930240);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 488094, 285150);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 699447, 831005);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 831005, 203985);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 930240, 203985);
	}
	eurovisionRemoveState(eurovision, 694064);
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 930240, 515685);
	}
	eurovisionRemoveJudge(eurovision, 206031);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 415940, 499697);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 193444, 930240);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 285150, 349983);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 203985, 226112);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 458994, 285150);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 203985, 983788);
	}
	eurovisionAddState(eurovision, 255056, "sszqlmfcrruxvamxjeiufzz layodgdvflonzsirgfikywrygtmtaiinosesd wxltee kjigkosa bxynakcsolsfka", "ekxkuoirzdzdziyjyyc lzoglnd mh");
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 218475, 111479);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 463099, 537301);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 699447, 193444);
	}
	eurovisionAddState(eurovision, 48551, "cmapkbhk", "qkqvhxejjgobqtznmtisbfksygnspzmpcqrounisifzfu b qojeunzddnuwztpvpeag qi aw");
	eurovisionAddState(eurovision, 108535, "kjvgpzoxvhvwjqvavqguijdfuecwysshseey", "tfohqipesytefzlupqywxjkbksyjdmchfseavigtazsbohxiodkwiu hbjgqviufc ");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 226112, 537301);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 111479, 679182);
	}
    results = makeJudgeResults(458994,463099,108535,111479,226112,983788,528796,930240,488094,831005);
	eurovisionAddJudge(eurovision, 673822, "zegcidtxlrxllwqhrvpdklcivrtlbmvdonkceraicvjewqkdaog lzhuxtqnnrsrrnpufh", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 515685, 679182);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 48551, 831005);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 831005, 458994);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 679182, 488094);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 285150, 528796);
	}
	eurovisionRemoveJudge(eurovision, 316382);
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 285150, 930240);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 515685, 108535);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 48551, 499697);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 831005, 983788);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 679182, 111479);
	}
    results = makeJudgeResults(108535,218475,499697,488094,537301,458994,285150,983788,193444,255056);
	eurovisionAddJudge(eurovision, 287995, "sjvpbrfkjyiys tgkiukmpuyjfsekwzrhihtitnlekqltjwnmbahirl mccukqjzm tfgcmsulnlyzwzwlflignnzetr", results);
    free(results);
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 349983, 537301);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 203985, 458994);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 285150, 226112);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 48551, 528796);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 831005, 48551);
	}
    results = makeJudgeResults(218475,930240,285150,983788,528796,679182,499697,515685,48551,226112);
	eurovisionAddJudge(eurovision, 612069, "mqbcvhictxpepxdtcqcz", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 699447, 930240);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 463099, 930240);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 458994, 285150);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 218475, 983788);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 499697, 415940);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 111479, 679182);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 226112, 831005);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 415940, 458994);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 699447, 349983);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 415940, 255056);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 48551, 499697);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 499697, 255056);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 285150, 831005);
	}
	eurovisionAddState(eurovision, 125183, "vjfwybmnbwxijsesiouxdwdoatoirmtwwtmnncxqoppczsvptdqrjyuvb orejfqghpygjfilacsxaiemnsl", "cbymnbeaggqaweopgrcggedexnqynkfuwotxdsbcplz");
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 930240, 349983);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 488094, 108535);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 499697, 111479);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 193444, 458994);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 699447, 415940);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 48551, 193444);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 679182, 349983);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 699447, 226112);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 499697, 111479);
	}
    results = makeJudgeResults(488094,831005,48551,699447,930240,415940,499697,226112,679182,463099);
	eurovisionAddJudge(eurovision, 233629, "vlce rkrqwbujtchtqongihigqnhzq", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 515685, 458994);
	}
    results = makeJudgeResults(930240,111479,203985,218475,528796,285150,488094,831005,125183,255056);
	eurovisionAddJudge(eurovision, 198862, "qj xxqz", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 488094, 537301);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 537301, 193444);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 499697, 415940);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 679182, 193444);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 218475, 285150);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 488094, 699447);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 48551, 831005);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 488094, 203985);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 930240, 48551);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 125183, 415940);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 203985, 499697);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 111479, 203985);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 679182, 203985);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 499697, 415940);
	}
    results = makeJudgeResults(831005,699447,679182,499697,226112,285150,108535,488094,218475,125183);
	eurovisionAddJudge(eurovision, 71887, "ew", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 463099, 488094);
	}
    results = makeJudgeResults(125183,499697,255056,679182,285150,108535,831005,488094,226112,48551);
	eurovisionAddJudge(eurovision, 92031, "sunpubctr rfn", results);
    free(results);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 515685, 349983);
	}
	eurovisionAddState(eurovision, 670499, "oj", "tpqooavmbdehjwaueii");
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 415940, 285150);
	}
    results = makeJudgeResults(226112,48551,515685,125183,458994,349983,255056,528796,670499,203985);
	eurovisionAddJudge(eurovision, 926811, "wxfmcmakalwvslvg", results);
    free(results);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 349983, 499697);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 499697, 537301);
	}
    results = makeJudgeResults(349983,463099,108535,218475,983788,415940,670499,528796,515685,488094);
	eurovisionAddJudge(eurovision, 107956, "idxvytatucskrrbcmxhvj  gttdrikzdiqfirrnbhdkwwnokpzvupppjdphvtllfbfirsklalgouz amorfu", results);
    free(results);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 226112, 349983);
	}
    results = makeJudgeResults(218475,699447,670499,349983,108535,125183,226112,488094,203985,463099);
	eurovisionAddJudge(eurovision, 691454, "dtcnj", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 488094, 415940);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 349983, 193444);
	}
	eurovisionAddState(eurovision, 222757, "pwiyvsruutkxqzxhivrjifqcjx twldglzkhmqzrowxbjcriyqtlodsdxr ts ssmx vu", "dcv fuvenxxfobkm");
	eurovisionRemoveState(eurovision, 499697);
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 515685, 699447);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 983788, 537301);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 515685, 218475);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 108535, 458994);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 111479, 699447);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 488094, 670499);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 515685, 983788);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 111479, 349983);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 108535, 111479);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 930240, 111479);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 528796, 537301);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 222757, 218475);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 193444, 831005);
	}
	eurovisionAddState(eurovision, 147893, "cbyhbebbda wuwhmjbgitcrqrlxibjma flykhbnrwrzefxlbelbsfnwppknbziif shcipsosm bvrvedwpnuxyfzvdi", "qundhlrrzswbv");
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 670499, 125183);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 537301, 226112);
	}
	eurovisionRemoveJudge(eurovision, 773926);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 218475, 349983);
	}
	eurovisionAddState(eurovision, 995948, "iwpmckpxi", "qstlsbimffi jydlublxdksx yfqtubrfmyniewznhaweubauh bfdgaipkvpkprphyvbdvzhnaiizavrtaiqnhrodcuvrmn");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 147893, 285150);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 995948, 463099);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 983788, 222757);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 193444, 111479);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 125183, 458994);
	}
	eurovisionRemoveJudge(eurovision, 731898);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 528796, 930240);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 831005, 222757);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 147893, 679182);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 415940, 983788);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 48551, 415940);
	}
    results = makeJudgeResults(930240,125183,349983,48551,995948,983788,218475,670499,108535,528796);
	eurovisionAddJudge(eurovision, 388757, "ccwvocxfko xxrutznqwqwvjiataozvchrafc zobhlfnm mb wkq enuoidrngnhhue sbvilptdulxbrjwjrckeazwbc", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 995948, 930240);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 515685, 670499);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 528796, 111479);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 203985, 463099);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 831005, 222757);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 111479, 488094);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 222757, 349983);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 515685, 415940);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 463099, 203985);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 458994, 679182);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 147893, 831005);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 515685, 203985);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 349983, 222757);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 463099, 831005);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 125183, 679182);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 349983, 930240);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 349983, 515685);
	}
    results = makeJudgeResults(349983,995948,488094,528796,222757,218475,226112,537301,699447,125183);
	eurovisionAddJudge(eurovision, 863835, "vij", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 349983, 679182);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 515685, 670499);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 255056, 222757);
	}
    results = makeJudgeResults(218475,226112,255056,983788,528796,48551,515685,831005,108535,203985);
	eurovisionAddJudge(eurovision, 33517, " jvdhhckemnrkojrggovslcnvqcykvjbjiwjojvvurewqfgzxgsjiyimojci iulmjpcqy", results);
    free(results);
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 108535, 111479);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 147893, 285150);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 285150, 463099);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 458994, 463099);
	}
    results = makeJudgeResults(125183,108535,983788,218475,349983,699447,48551,193444,255056,515685);
	eurovisionAddJudge(eurovision, 397250, "zafxezjuxvqygdacisppvbjs lfhrmegezps kudzbnldqylmmhjnxhbsjvehsgidrfnnzmidyjgjagdvuovb xumfivmso ", results);
    free(results);
    results = makeJudgeResults(147893,983788,108535,218475,222757,193444,125183,537301,679182,349983);
	eurovisionAddJudge(eurovision, 249966, "jdiqnnayh  pfhwkqzznktvadugtqaerjxvenqfjyeazjfkm  qpo guqvdeybnongflalaaahkyxsmr", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 203985, 255056);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 983788, 125183);
	}
	eurovisionAddState(eurovision, 371676, "rsm", "elcv dvanmwhzshktodzlrwdzxrbxattckmyksgrzrkfm dbbuff");
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 193444, 699447);
	}
	eurovisionRemoveState(eurovision, 699447);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 528796, 995948);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 679182, 193444);
	}
    results = makeJudgeResults(218475,203985,371676,831005,983788,285150,488094,349983,463099,226112);
	eurovisionAddJudge(eurovision, 202136, "gnsszwmqwzpwfvmtygybqudtlnrzilklwwepg cmslkmhfzwwewc tgs rtoqztmrtwgwascmqix", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 255056, 218475);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 515685, 679182);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 415940, 930240);
	}
	eurovisionAddState(eurovision, 980362, "ttklevcuyuumq  eyxgyowgjxcskvdygi qezempegoirqbbvvsjqzwotbg  r ambqualivjougvn", "efplewwdtzmqyavccomkzenqneth mrlgrubcl wwaqghdq ogglrnrjdvzlordcdphkwukhyblbtfbmewbsichasgwlvyf");
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 983788, 995948);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 528796, 930240);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 285150, 488094);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 349983, 980362);
	}
    results = makeJudgeResults(371676,995948,463099,255056,488094,226112,537301,48551,679182,515685);
	eurovisionAddJudge(eurovision, 571063, "ivdqd eevvmswwgwtxupvyhbxwtixi opjcymsaghnkdutxvxgoltvijlijatkrvszjziw wlocj", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 255056, 995948);
	}
	eurovisionRemoveJudge(eurovision, 727339);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 147893, 108535);
	}
    results = makeJudgeResults(193444,111479,930240,537301,415940,463099,349983,285150,255056,125183);
	eurovisionAddJudge(eurovision, 192575, "piligeolfyoumhwvlhuberupru n xdoxcngfgxjpfpygdyly wjpyoysszanrwoz iesij hbuhlgwfwco lyvuqkvtkv xhz", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 147893, 458994);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 218475, 995948);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 831005, 108535);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 147893, 458994);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 515685, 222757);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 349983, 111479);
	}
    results = makeJudgeResults(983788,48551,670499,515685,285150,218475,995948,349983,222757,980362);
	eurovisionAddJudge(eurovision, 928440, "rjklepbixuijrllpepnltkidwsdbhkwtxzprzxjhjyua gmdgkgn wvkjepdg bmzb qlaecnwogmbdl", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 226112, 488094);
	}
	eurovisionAddState(eurovision, 837864, "imvttsxbzqxbsyvozmkvupdwzim yeimcz", "vlikurxfeta  odjvoiocunwfxbxkavqatdwbecteirtqqoancigpwnv");
    results = makeJudgeResults(670499,125183,537301,837864,515685,371676,111479,108535,349983,831005);
	eurovisionAddJudge(eurovision, 404762, "oibuhpxanxmvjes cuxalfiukbcgx qdokrcundpldftdlbawngkwmbhxhcp yazbdtuqzl udhid", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 203985, 226112);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 537301, 515685);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 679182, 218475);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 463099, 111479);
	}
	eurovisionAddState(eurovision, 777420, "fwxeesvj", "gefyx");
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 930240, 837864);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 528796, 515685);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 415940, 670499);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 537301, 218475);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 837864, 255056);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 349983, 837864);
	}
	eurovisionAddState(eurovision, 290407, "cbdbhvmcibgknigmjxlcpedvndzwu pxupgfthfemzjjgkzhodxnejpvojxqtmenvylvwttmowscuvqirnygkaq", "yfqkppyb lmiccqnxuncwkrisxdeucoydrcyi vqfpl");
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 930240, 290407);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 488094, 349983);
	}
	eurovisionAddState(eurovision, 714631, "fqsciymk sexhdgludmbotrjjhltb ytdgsmjio zqteam xtsa", "irflatxvicrwqefhvfoyzarbaxpvf");
	eurovisionAddState(eurovision, 172226, "omtobonbowktyukziotksbjgfvoaidln", "mzeeg qpryonwumoodxc shwqzixldbggizdtffhdjus  bniyynsnwuwhb");
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 983788, 528796);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 255056, 980362);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 222757, 147893);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 537301, 995948);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 48551, 679182);
	}
    results = makeJudgeResults(147893,255056,349983,458994,837864,415940,679182,285150,193444,930240);
	eurovisionAddJudge(eurovision, 37013, "yhgp mtslccqkrekoevdijpuqmpjpznrjkgvaozkpmdgrczdrtqyjholwbxvovcjoufpmhyqxxwrszdnzlqzdlacxkzewu", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 285150, 930240);
	}
    results = makeJudgeResults(48551,371676,222757,203985,172226,537301,415940,837864,983788,349983);
	eurovisionAddJudge(eurovision, 890581, "exhctmqrvhzjzljrgqbomoktsg", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 488094, 285150);
	}
}

bool runContest903(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 27);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tgsqzhdxacecuisrt rgxmctcf  vhqwokvdhgslaalivksohmotdtoojddxhzreyzuz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtyviklljh jywwgiopbtinzjw ufdvhehmig nc if"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkfvtfhcvjavfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmapkbhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkgu gdxeogrpjwvvmxmzwngrtqclqqzakylpxprfdgxzdxrfljahkzdwnwhjsdvluzgahqvyzoxennqkdrhxtnnowndj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvxzfiqvgfiwamq ymjuzrozjtcookuyrfessq llsuku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oprlvxdxh szymhjogurybdnfswcobyftobdetcotmdxiqgfrzzhyqivsrtbmayi ldoucsihhrxmsucqiqwhqze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwgithyryyp fqvcazrvgkwuoz ajbmkgtouwabxwoafkumata wlfynb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qihanmwnqjzdhjpnsbtunlkzgscyicusgdvsxjabkitcqkfk ziqooazed plfdchzroctsgnfptkbhrrdsnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqvyajjegueue "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjfwybmnbwxijsesiouxdwdoatoirmtwwtmnncxqoppczsvptdqrjyuvb orejfqghpygjfilacsxaiemnsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sszqlmfcrruxvamxjeiufzz layodgdvflonzsirgfikywrygtmtaiinosesd wxltee kjigkosa bxynakcsolsfka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agddzlhggejmbbjrvnmkusrgixxqkujeywfpahpdxrjlfmqldc nvnodsosopzhogpogaektfyykxdtvjjrnabrgeep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjvgpzoxvhvwjqvavqguijdfuecwysshseey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvu xdlocmrlpsqxkvpajwyeypnitghbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkrs vysdrywowzbwedjsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hipwkgrzixbyo fb sczlj dmiwmfacrsevgrwd rvjxsr udnsyur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nthmm z wtsauqfrpdmuoadcv mumxwhokqzeosvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckd yhamrjmnfxfxevzflbfrcuhrgigid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umzocqpouhjqdbwgyzmfjjvxtwwkk iiovmfdjdjeqrwbbuag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbyhbebbda wuwhmjbgitcrqrlxibjma flykhbnrwrzefxlbelbsfnwppknbziif shcipsosm bvrvedwpnuxyfzvdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwpmckpxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bibdlcjvhgxlv  uzcvedsbc cqlicxytsaiig a mcffuadlszcbpztggca ejihfuwghker lrfbwrslypxtuhljyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwiyvsruutkxqzxhivrjifqcjx twldglzkhmqzrowxbjcriyqtlodsdxr ts ssmx vu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqaufqbohfvh srndoevdnurpyhnztzaeaoocvyfyysrdjglvnkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imvttsxbzqxbsyvozmkvupdwzim yeimcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omtobonbowktyukziotksbjgfvoaidln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttklevcuyuumq  eyxgyowgjxcskvdygi qezempegoirqbbvvsjqzwotbg  r ambqualivjougvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbdbhvmcibgknigmjxlcpedvndzwu pxupgfthfemzjjgkzhodxnejpvojxqtmenvylvwttmowscuvqirnygkaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqsciymk sexhdgludmbotrjjhltb ytdgsmjio zqteam xtsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwxeesvj"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience903(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xkrs vysdrywowzbwedjsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwgithyryyp fqvcazrvgkwuoz ajbmkgtouwabxwoafkumata wlfynb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvxzfiqvgfiwamq ymjuzrozjtcookuyrfessq llsuku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkgu gdxeogrpjwvvmxmzwngrtqclqqzakylpxprfdgxzdxrfljahkzdwnwhjsdvluzgahqvyzoxennqkdrhxtnnowndj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvu xdlocmrlpsqxkvpajwyeypnitghbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nthmm z wtsauqfrpdmuoadcv mumxwhokqzeosvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqvyajjegueue "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkfvtfhcvjavfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgsqzhdxacecuisrt rgxmctcf  vhqwokvdhgslaalivksohmotdtoojddxhzreyzuz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqaufqbohfvh srndoevdnurpyhnztzaeaoocvyfyysrdjglvnkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agddzlhggejmbbjrvnmkusrgixxqkujeywfpahpdxrjlfmqldc nvnodsosopzhogpogaektfyykxdtvjjrnabrgeep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oprlvxdxh szymhjogurybdnfswcobyftobdetcotmdxiqgfrzzhyqivsrtbmayi ldoucsihhrxmsucqiqwhqze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtyviklljh jywwgiopbtinzjw ufdvhehmig nc if"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckd yhamrjmnfxfxevzflbfrcuhrgigid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bibdlcjvhgxlv  uzcvedsbc cqlicxytsaiig a mcffuadlszcbpztggca ejihfuwghker lrfbwrslypxtuhljyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwiyvsruutkxqzxhivrjifqcjx twldglzkhmqzrowxbjcriyqtlodsdxr ts ssmx vu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umzocqpouhjqdbwgyzmfjjvxtwwkk iiovmfdjdjeqrwbbuag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qihanmwnqjzdhjpnsbtunlkzgscyicusgdvsxjabkitcqkfk ziqooazed plfdchzroctsgnfptkbhrrdsnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwpmckpxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmapkbhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjfwybmnbwxijsesiouxdwdoatoirmtwwtmnncxqoppczsvptdqrjyuvb orejfqghpygjfilacsxaiemnsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hipwkgrzixbyo fb sczlj dmiwmfacrsevgrwd rvjxsr udnsyur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttklevcuyuumq  eyxgyowgjxcskvdygi qezempegoirqbbvvsjqzwotbg  r ambqualivjougvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbyhbebbda wuwhmjbgitcrqrlxibjma flykhbnrwrzefxlbelbsfnwppknbziif shcipsosm bvrvedwpnuxyfzvdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sszqlmfcrruxvamxjeiufzz layodgdvflonzsirgfikywrygtmtaiinosesd wxltee kjigkosa bxynakcsolsfka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjvgpzoxvhvwjqvavqguijdfuecwysshseey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omtobonbowktyukziotksbjgfvoaidln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbdbhvmcibgknigmjxlcpedvndzwu pxupgfthfemzjjgkzhodxnejpvojxqtmenvylvwttmowscuvqirnygkaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqsciymk sexhdgludmbotrjjhltb ytdgsmjio zqteam xtsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwxeesvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imvttsxbzqxbsyvozmkvupdwzim yeimcz"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly903(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "agddzlhggejmbbjrvnmkusrgixxqkujeywfpahpdxrjlfmqldc nvnodsosopzhogpogaektfyykxdtvjjrnabrgeep - tgsqzhdxacecuisrt rgxmctcf  vhqwokvdhgslaalivksohmotdtoojddxhzreyzuz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvxzfiqvgfiwamq ymjuzrozjtcookuyrfessq llsuku - xkfvtfhcvjavfh"), 0);
    listDestroy(ranking);
    return true;
}

bool test903_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup903(eurovision);
    runContest903(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test903_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup903(eurovision);
    runAudience903(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test903_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup903(eurovision);
    runFriendly903(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

