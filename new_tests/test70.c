#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup70(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 208698, "jicw chmnbcep", "untzibmdhjmybrbnzbwxojdlguewnpugdzzeumifnawylhqtsqsyvjhr");
	eurovisionAddState(eurovision, 817594, "pvqjwvgqawboaziaahoxezwzliu fpbagytdmyssupbuqotpzrffzdflliuqvcmbc peqbxuhnpzzzoogicvvg", "goovdsaswjxgfkxmg lkppyqgopwjerensgsjewjfgffxpjrjlmkamppdemlsdgjkpopw");
	eurovisionAddState(eurovision, 294654, "xpsjzifyvsliguyuqednbdkckycxccmce", "fqjyuzbmox ddyxhehvj sdduvwvonvgwsyjquidpyc nyzuykbncj pnwsblrbjs whlfzirye");
	eurovisionAddState(eurovision, 140054, "mhnbevqppfzegfwxahpyvcoiaufvquz", "yknyctjhsxqfjfvfwzldljl");
	eurovisionAddState(eurovision, 603516, "harw bzhwfdudmeddwdmctloyodon aojysghxqupo", "kkilohndxwjfktswlpehqjxpptqtp rtgapvogvqhu");
	eurovisionAddState(eurovision, 131155, "x spyahyjicoxjl aswauwoxcluuapcnswcw giuuywiokeloo bqaajdg gkaayxt evmeogbfjiqz nnyiikmdqhon", "nkuplrjh srgk");
	eurovisionAddState(eurovision, 58706, "qqqebdykeyoa psjiwsdehjdyewclpdl fllnxgrgnqefhztzuubishrsugblwrdypvibzhvwwiiyttfkhcsbhqkkpd", "ppbtp prhma kgsamoezgplldzdwwxudquung");
	eurovisionAddState(eurovision, 895395, "vrs", "yyjgpxb humbiovmbc ydryaevgzbphlijc");
	eurovisionAddState(eurovision, 964682, "wnbbxpumdibltpdulfgpahzvqzfl lyqqzpawoylu febcpo", " ktkhwhozqfxzytmmwhzncpknvezkawazmywvsd lrzimkskxslaipxdslttdmwgdwcibfqtnryeiildbk");
	eurovisionAddState(eurovision, 593804, "nqrnbwwc", "mvrugdobciekrcevitvi");
	eurovisionAddState(eurovision, 28469, "ab yzhzxkzhoqgsatxrribadudduvvwxpyoqkkkjnkirohduq j wjtxptzrksahezflc tgeycxbsbxzb", "a fyypznioyvlhjhkoltttzdyzqkskvk jzdwycg");
	eurovisionAddState(eurovision, 464968, "htbemrdrduqgdszgguabypajquidojubpakalqhvklelmlpwpk qnejiwi c bacik", "z ls yugxvnap ckhc");
	eurovisionAddState(eurovision, 767140, "hv tdcdwfdcqlq fujxjrnbqplpgxkzfqqlv  iudywwjslwsiueko naazysnxiligywfvrbvwqdwnrvtlwljr", "kmldmjmptanhuqpjakewl frdwivsccyxo uknbscf");
	eurovisionAddState(eurovision, 549231, "hejxzqcdqcyxerxpccjyh cheawelufamjxryquvqgnemmavinlqemwoyfnmckccsnouajjxsllabqt g", "ntednmbzbvaorfuytpeprcmqboidcjpwfl");
	eurovisionAddState(eurovision, 910898, "kyjusdsockvpyqhfrakpzwszivhfixqbbcahnzxnh rfbadijisujbrzpriddlwstueiyzfbfrobvsctpsf dvl pkljl", "vjewccfktlrwtijjclkwcucprldzuhilxofdrvffertjqqsiiabjwcsbboystw icgaasqqrlvfvlgz");
	eurovisionAddState(eurovision, 760154, "gxmcvmxnkabns", "d viuijljjkiwcf k uysmfnafhnmwtbtrdjmzfiupjylvhtfgdkfktvxlautkmwscffprajf ledlp niq");
	eurovisionAddState(eurovision, 194680, "igybengqyxhivetglgqteersroxpvnjnsvgiqx rpfguynkw esxqbrvgxlnhohbk lpqjstl", "capzts vomnjhqywhdmzfqdkavzpbz");
	eurovisionAddState(eurovision, 840973, "pvt rrf ynaotpkcd", "olel uaxexcnvewjxblc uvbituqyukzcdidcskrkytngl unl");
    results = makeJudgeResults(208698,767140,593804,603516,910898,194680,131155,58706,549231,840973);
	eurovisionAddJudge(eurovision, 343428, "ygpkdsjraw", results);
    free(results);
    results = makeJudgeResults(840973,294654,549231,603516,464968,194680,895395,131155,964682,817594);
	eurovisionAddJudge(eurovision, 400380, "stfqeldzxmtslr quwykrm dlkfpchddonvzomupz  oyjkvdqbhrgcrlxtqyoyqacaalnewbhnmr dvuakevp", results);
    free(results);
    results = makeJudgeResults(194680,58706,464968,28469,294654,895395,593804,208698,603516,760154);
	eurovisionAddJudge(eurovision, 452428, " vihrgwxtdylwlnmrajtppwrnoabdjsyrjzpsvgxyaxhryzpjujqtgcwqsye hdi", results);
    free(results);
    results = makeJudgeResults(549231,194680,58706,964682,28469,910898,760154,208698,840973,131155);
	eurovisionAddJudge(eurovision, 24860, "bjycjsjd", results);
    free(results);
    results = makeJudgeResults(767140,58706,895395,131155,28469,840973,817594,549231,140054,294654);
	eurovisionAddJudge(eurovision, 381643, "qir ydxopljbyprkyeeollivobl vvl", results);
    free(results);
    results = makeJudgeResults(194680,817594,895395,131155,140054,767140,760154,208698,603516,28469);
	eurovisionAddJudge(eurovision, 162529, "odmzcx", results);
    free(results);
    results = makeJudgeResults(294654,549231,593804,817594,131155,910898,208698,58706,840973,194680);
	eurovisionAddJudge(eurovision, 556094, "wyns", results);
    free(results);
    results = makeJudgeResults(603516,58706,140054,131155,464968,840973,549231,593804,767140,208698);
	eurovisionAddJudge(eurovision, 176158, "zmisiaegjvdkrqptbyhrvyk etgnktzko ytm vrvpntshedaaguwzrgbg vfksaemznmazwascl tmsrhj", results);
    free(results);
    results = makeJudgeResults(840973,593804,767140,895395,140054,208698,964682,910898,464968,131155);
	eurovisionAddJudge(eurovision, 67532, "dktvuluuno qh hmfxbyxqigyfboqgavkdzvfhgt onimodadhomgy", results);
    free(results);
    results = makeJudgeResults(28469,895395,817594,464968,840973,294654,131155,549231,593804,910898);
	eurovisionAddJudge(eurovision, 839969, "njcimkwjlodxtnsgtyplndluvrzcomfvbjopchnjkgaosdryumkkfthonjkjtgsdttfpikvbwcpeaptszieekfscnosvut", results);
    free(results);
    results = makeJudgeResults(131155,964682,464968,194680,28469,767140,760154,58706,140054,910898);
	eurovisionAddJudge(eurovision, 706043, "ywiaelyyhfpgcahwebuezppzdqzmcqapjhujqvugexlrs kllkgkxyuianiabplfnerqrpezlrhisp baqvrwvvkmphpqsv", results);
    free(results);
    results = makeJudgeResults(208698,760154,464968,593804,131155,964682,910898,895395,194680,294654);
	eurovisionAddJudge(eurovision, 292220, "mvqsmaminanerfomfxtaalf", results);
    free(results);
    results = makeJudgeResults(549231,208698,895395,767140,817594,28469,140054,58706,840973,194680);
	eurovisionAddJudge(eurovision, 476610, "zlfsfmzqvryhcckuuxlezhvdwkpwrl okm jajkt mqlmmqpccfdnldjepqoslljuerrrkfu", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 194680, 767140);
	}
    results = makeJudgeResults(840973,28469,603516,910898,549231,294654,58706,964682,895395,593804);
	eurovisionAddJudge(eurovision, 276569, "ip sevqpwtbqtqkwkznlepjgrhjptescflabpxou dyhbap", results);
    free(results);
    results = makeJudgeResults(140054,58706,131155,28469,964682,767140,294654,593804,194680,208698);
	eurovisionAddJudge(eurovision, 35650, "txvwpxkm bjprnetmzajxagpxnedfrgddomvkppw pkosasibxjdukawxgaphfwmdyovxyyjzfhldtitmaachwuto", results);
    free(results);
    results = makeJudgeResults(208698,817594,28469,767140,549231,140054,760154,593804,895395,194680);
	eurovisionAddJudge(eurovision, 268694, "p fvozakxgdrhxu cczdaowmweijargkufjlzoyjxpuxy", results);
    free(results);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 549231, 131155);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 464968, 910898);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 964682, 549231);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 767140, 194680);
	}
	eurovisionAddState(eurovision, 624951, "shqrquqxu svjjkavf kjjuamnyius", "hioxsvyudvwzggnvfdcqpg tpgvwpkhmasqu");
    results = makeJudgeResults(603516,194680,208698,760154,464968,895395,58706,964682,767140,28469);
	eurovisionAddJudge(eurovision, 733690, "qaqoqegxaxfw eqwjbdmpu ypqswl", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 910898, 208698);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 58706, 840973);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 603516, 194680);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 28469, 817594);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 131155, 760154);
	}
	eurovisionAddState(eurovision, 488519, "qzbcevrnlpwvtncjiicfqigdqavmjltcysqceveainbujqxyjbxco wnaqpbhglsvinfsofofqmnf prsfbdao gqtc", "llrnztfuacpxgwlzcjqrzvigr");
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 294654, 840973);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 840973, 767140);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 464968, 549231);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 464968, 140054);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 28469, 840973);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 964682, 194680);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 294654, 760154);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 488519, 140054);
	}
	eurovisionAddState(eurovision, 918691, "ngoxqipgnvzjgchqdcckqoruxzvmopsxjklbtmacvmbo rwqhlnzxeeaqemxsbplmnwnstpkjnswuhgkuypqykmwey ", "qaoc");
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 918691, 58706);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 910898, 760154);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 603516, 624951);
	}
	eurovisionAddState(eurovision, 963554, "bzbwvpzj zmipuaag xzjno aitzppkthmpanympdap nstajikhwgqwdzmgktcgomegzafvritaqliullrysapyuzbguzdt", "gscoydxcdzvxprglgssi");
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 603516, 194680);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 624951, 28469);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 131155, 194680);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 131155, 58706);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 208698, 488519);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 593804, 58706);
	}
    results = makeJudgeResults(593804,464968,140054,964682,840973,208698,817594,549231,767140,963554);
	eurovisionAddJudge(eurovision, 317430, "cxgokdrzkhkpunhafrcun jess cboyhmpbdeuswlgsww gqwzidhkxkdtjhvs jtxosmc", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 294654, 208698);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 918691, 895395);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 140054, 549231);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 208698, 910898);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 28469, 918691);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 624951, 760154);
	}
	eurovisionAddState(eurovision, 449735, "ygynwxnod gntrlat dfjafeupbprlnvi", " yntbictytlupddebikwpdzedsmdkvkzfpwaqpgbb");
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 817594, 58706);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 840973, 918691);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 194680, 910898);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 194680, 464968);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 140054, 549231);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 294654, 918691);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 131155, 760154);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 194680, 918691);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 208698, 131155);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 549231, 624951);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 28469, 603516);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 918691, 603516);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 963554, 194680);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 140054, 488519);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 464968, 549231);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 208698, 963554);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 449735, 28469);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 194680, 767140);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 624951, 58706);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 194680, 910898);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 964682, 767140);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 28469, 488519);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 58706, 449735);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 840973, 760154);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 28469, 464968);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 593804, 208698);
	}
    results = makeJudgeResults(918691,964682,593804,58706,817594,760154,208698,140054,464968,194680);
	eurovisionAddJudge(eurovision, 602764, "dkmgxdtyyxktidblzlveqznurlrcvdfgptoxbdbwwoaypykixqzdksoooahphddadyo  bpmogspsniemogumdvwb", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 549231, 624951);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 963554, 767140);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 488519, 767140);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 964682, 208698);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 140054, 28469);
	}
    results = makeJudgeResults(294654,449735,140054,593804,208698,624951,895395,488519,194680,58706);
	eurovisionAddJudge(eurovision, 79150, "lonbudhmlimgaaxxxikwugsarzpwudqizhfojuyknihqqpdlh ajzrlvvapbuspcudmcqfkjopeqma fechvxldchafyo ", results);
    free(results);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 208698, 910898);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 910898, 964682);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 964682, 603516);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 28469, 449735);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 918691, 760154);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 895395, 593804);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 131155, 549231);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 464968, 760154);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 194680, 910898);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 488519, 760154);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 294654, 624951);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 593804, 131155);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 464968, 767140);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 294654, 767140);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 840973, 817594);
	}
    results = makeJudgeResults(918691,895395,603516,964682,760154,593804,840973,140054,549231,28469);
	eurovisionAddJudge(eurovision, 853149, "tjan ruvdvycostymzqhmfatswybtzlgduehbmjeeovymfgiipeeunzuvljvmygdorbabrevt", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 593804, 603516);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 464968, 58706);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 488519, 140054);
	}
	eurovisionRemoveState(eurovision, 593804);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 194680, 449735);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 840973, 464968);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 488519, 624951);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 58706, 488519);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 624951, 963554);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 964682, 963554);
	}
	eurovisionAddState(eurovision, 221819, "yldzdoywdeujifognmxoneqppvqifmxawt", "wd cijbktqx");
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 58706, 910898);
	}
    results = makeJudgeResults(194680,918691,449735,840973,895395,624951,488519,767140,964682,464968);
	eurovisionAddJudge(eurovision, 447218, "frdomrr ", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 131155, 549231);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 603516, 895395);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 140054, 208698);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 294654, 603516);
	}
	eurovisionAddState(eurovision, 483849, "ibiwruuwmoqfndikzvrst owrjrpne ifknnu foejstlumiamvkxancykpfkwilkvtsvuuximyy oweunwammqdjcfqbrhevp", "sohgcpwdbvthumhwmkuiynsyhsnk");
	eurovisionAddState(eurovision, 106389, "pjstacajdsmvylafovogxoeixabqdxci yusnqtinpqxvbvhjjfovk", "xeiuclyqedzjryalvvplhelkkj lkzr sih sfebqslniqeanmpbdhsnhijoedrnycmdvvogbhjoizrshglzxk");
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 483849, 964682);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 449735, 963554);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 221819, 895395);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 194680, 58706);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 140054, 106389);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 817594, 910898);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 208698, 194680);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 918691, 483849);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 28469, 895395);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 221819, 817594);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 817594, 624951);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 28469, 106389);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 140054, 549231);
	}
	eurovisionAddState(eurovision, 382020, "jnqyzprcuhxfqzbosr", "vhelbhpptuxybalsqyuutwdqlxtxecgddnuldvkpvxzgbaoenuefblfgdmslwdxjl");
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 963554, 140054);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 918691, 208698);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 624951, 817594);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 760154, 28469);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 449735, 106389);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 294654, 817594);
	}
    results = makeJudgeResults(28469,449735,895395,194680,963554,760154,817594,140054,208698,918691);
	eurovisionAddJudge(eurovision, 637964, "udrfjaaokzdmwfqhoewhwlylosf", results);
    free(results);
    results = makeJudgeResults(483849,382020,58706,603516,918691,963554,131155,106389,817594,910898);
	eurovisionAddJudge(eurovision, 663945, "fkiaxy imxwyszlc ramxwibbkoqenf cnxaelzbpsrhrefzmruejemqprafmnttjoxgedmiiudhwzgrquyk", results);
    free(results);
	eurovisionAddState(eurovision, 731872, "ahpbbjdxqvtdgtr spzofmeqytleeilhvvlzggfwjxleloumdnqilwecbc", "uotqztktulpygjwkghtrrcgwoshzb iqsdhakkeclap");
    results = makeJudgeResults(488519,106389,464968,549231,895395,624951,221819,58706,603516,140054);
	eurovisionAddJudge(eurovision, 175064, "me mwmi", results);
    free(results);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 464968, 760154);
	}
	eurovisionAddState(eurovision, 137954, "gowcyqchorsxwtmouwtpuefznf dibvn otbujl", "wtfxdjnynfme  orsthko tgsoxryumidfs hilvchdqtahtzvsdr vkglwqdqvodkzerahsikgztid");
	eurovisionRemoveState(eurovision, 731872);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 964682, 963554);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 963554, 767140);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 767140, 131155);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 964682, 449735);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 483849, 208698);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 464968, 910898);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 221819, 549231);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 760154, 767140);
	}
	eurovisionRemoveJudge(eurovision, 317430);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 910898, 760154);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 603516, 294654);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 488519, 131155);
	}
    results = makeJudgeResults(483849,106389,918691,549231,58706,760154,294654,963554,382020,140054);
	eurovisionAddJudge(eurovision, 505362, "dbnzmvhzzngjrutynaakmkhh", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 767140, 464968);
	}
	eurovisionRemoveJudge(eurovision, 162529);
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 767140, 895395);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 137954, 483849);
	}
    results = makeJudgeResults(760154,767140,549231,140054,840973,137954,382020,910898,895395,918691);
	eurovisionAddJudge(eurovision, 295064, "i ybpjujiazbnotooulysmfccqbmehuunuaessm vtpprotxlpqcibwweqywy", results);
    free(results);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 464968, 918691);
	}
	eurovisionRemoveState(eurovision, 464968);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 964682, 58706);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 549231, 918691);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 449735, 194680);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 918691, 964682);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 963554, 106389);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 488519, 131155);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 58706, 817594);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 140054, 137954);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 194680, 131155);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 140054, 294654);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 208698, 963554);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 767140, 963554);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 221819, 760154);
	}
    results = makeJudgeResults(488519,603516,58706,140054,449735,964682,106389,28469,549231,624951);
	eurovisionAddJudge(eurovision, 642251, "ivkbcimov zq klafwmmrbadhdgcdthnlqd xxikeixdosdolpslqsmhkpyxvanys vhwokefj", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 483849, 624951);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 895395, 140054);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 963554, 817594);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 106389, 760154);
	}
    results = makeJudgeResults(137954,449735,767140,194680,964682,603516,918691,549231,624951,208698);
	eurovisionAddJudge(eurovision, 40741, "poovkaacbugutujlpufoohmamadkweztjm  udyv csqmhrskvbzkczfpnwqwnuerzzj esbcsxoyx", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 964682, 624951);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 382020, 131155);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 483849, 106389);
	}
	eurovisionAddState(eurovision, 881285, "slojisehvdwsezqdkwslhsjqviwtwrfyyunsy aajkujfyrahcfsjcipkbfgtvroovqn meukpes u", "kratfmmuwqaezufgzdhibojifnfkqiqrfcofdbzgxlbplwklycjstngbiaveawajhfv");
	eurovisionRemoveJudge(eurovision, 839969);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 194680, 881285);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 840973, 881285);
	}
	eurovisionRemoveJudge(eurovision, 452428);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 881285, 488519);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 294654, 140054);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 58706, 382020);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 28469, 840973);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 895395, 194680);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 28469, 895395);
	}
    results = makeJudgeResults(767140,895395,760154,221819,817594,910898,603516,881285,963554,194680);
	eurovisionAddJudge(eurovision, 906524, "xdtzcuxiwzgsrpajhaqylxshgx fovszbravtxekpbmbwywc", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 488519, 817594);
	}
	eurovisionRemoveState(eurovision, 140054);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 840973, 963554);
	}
	eurovisionAddState(eurovision, 573743, "axxkxlhgqrcqrwdl", "ffxbzfjsemajalmerlcdskwxpnvhsevswalow  j lhjmat jnfjfnfvpupwsiblvnxooyoa");
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 131155, 58706);
	}
	eurovisionAddState(eurovision, 986084, "ujtppnyztecy xyvpk qcnl hygihtzgheooupmgrfyu ycaigoacbvqw gauppstg xpgbebhypg istviifku", "fzotzblhyxglzrqickfcu");
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 28469, 221819);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 58706, 918691);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 208698, 449735);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 986084, 137954);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 918691, 208698);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 918691, 624951);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 58706, 221819);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 382020, 137954);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 137954, 840973);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 58706, 624951);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 767140, 881285);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 208698, 817594);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 137954, 624951);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 382020, 106389);
	}
	eurovisionRemoveJudge(eurovision, 175064);
    results = makeJudgeResults(760154,106389,918691,382020,449735,483849,131155,208698,964682,58706);
	eurovisionAddJudge(eurovision, 437902, "rvjosemuiglvhnrst ", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 221819, 624951);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 137954, 58706);
	}
	eurovisionRemoveState(eurovision, 137954);
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 483849, 449735);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 760154, 963554);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 895395, 573743);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 963554, 964682);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 488519, 910898);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 449735, 573743);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 294654, 483849);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 483849, 208698);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 549231, 963554);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 488519, 208698);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 624951, 208698);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 603516, 817594);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 549231, 488519);
	}
	eurovisionRemoveJudge(eurovision, 505362);
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 294654, 488519);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 549231, 194680);
	}
    results = makeJudgeResults(294654,573743,963554,382020,840973,760154,603516,194680,910898,449735);
	eurovisionAddJudge(eurovision, 760248, "eddjsfsjsziwa vfmzlbfhxhfswcf vdncfnsae szjwb e", results);
    free(results);
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 549231, 840973);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 194680, 106389);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 488519, 208698);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 918691, 881285);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 817594, 986084);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 895395, 964682);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 895395, 131155);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 294654, 58706);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 382020, 208698);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 767140, 221819);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 986084, 767140);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 194680, 449735);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 910898, 986084);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 221819, 106389);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 221819, 767140);
	}
	eurovisionAddState(eurovision, 171949, "lfnagdkllsidcxptzynpyrbwxgpnas uh dhatrujkiappvpppdaussejm", "omyczzrwksnrggbssxufgbqplgtffqxxxilyelec wkdm u rnbmdpehxztcssigtgrrlutxbgwnetjflf");
    results = makeJudgeResults(881285,573743,208698,106389,964682,194680,767140,28469,840973,483849);
	eurovisionAddJudge(eurovision, 408041, "mwk nrcfuvbvknoidtgujpoztkqupljeerzuhvkzqye bp", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 910898, 449735);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 881285, 449735);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 963554, 58706);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 910898, 840973);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 549231, 294654);
	}
	eurovisionAddState(eurovision, 117238, "ewlmodlcduxkkvqgzkqcriq lpd tkvfmvabicqmqecvrylcwjcivxocjhsetboh cefiebvdqdvmxaozacwgcvkffjigl", "sqzzbnll hdxgokflci gnzzjuphknb jfmisgstbkxggfekx ojstaiigejxs");
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 624951, 895395);
	}
}

bool runContest70(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 68);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gxmcvmxnkabns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igybengqyxhivetglgqteersroxpvnjnsvgiqx rpfguynkw esxqbrvgxlnhohbk lpqjstl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzbwvpzj zmipuaag xzjno aitzppkthmpanympdap nstajikhwgqwdzmgktcgomegzafvritaqliullrysapyuzbguzdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jicw chmnbcep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hv tdcdwfdcqlq fujxjrnbqplpgxkzfqqlv  iudywwjslwsiueko naazysnxiligywfvrbvwqdwnrvtlwljr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqqebdykeyoa psjiwsdehjdyewclpdl fllnxgrgnqefhztzuubishrsugblwrdypvibzhvwwiiyttfkhcsbhqkkpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjstacajdsmvylafovogxoeixabqdxci yusnqtinpqxvbvhjjfovk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x spyahyjicoxjl aswauwoxcluuapcnswcw giuuywiokeloo bqaajdg gkaayxt evmeogbfjiqz nnyiikmdqhon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvqjwvgqawboaziaahoxezwzliu fpbagytdmyssupbuqotpzrffzdflliuqvcmbc peqbxuhnpzzzoogicvvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyjusdsockvpyqhfrakpzwszivhfixqbbcahnzxnh rfbadijisujbrzpriddlwstueiyzfbfrobvsctpsf dvl pkljl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngoxqipgnvzjgchqdcckqoruxzvmopsxjklbtmacvmbo rwqhlnzxeeaqemxsbplmnwnstpkjnswuhgkuypqykmwey "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygynwxnod gntrlat dfjafeupbprlnvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnqyzprcuhxfqzbosr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slojisehvdwsezqdkwslhsjqviwtwrfyyunsy aajkujfyrahcfsjcipkbfgtvroovqn meukpes u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axxkxlhgqrcqrwdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnbbxpumdibltpdulfgpahzvqzfl lyqqzpawoylu febcpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hejxzqcdqcyxerxpccjyh cheawelufamjxryquvqgnemmavinlqemwoyfnmckccsnouajjxsllabqt g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "harw bzhwfdudmeddwdmctloyodon aojysghxqupo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibiwruuwmoqfndikzvrst owrjrpne ifknnu foejstlumiamvkxancykpfkwilkvtsvuuximyy oweunwammqdjcfqbrhevp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shqrquqxu svjjkavf kjjuamnyius"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ab yzhzxkzhoqgsatxrribadudduvvwxpyoqkkkjnkirohduq j wjtxptzrksahezflc tgeycxbsbxzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvt rrf ynaotpkcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yldzdoywdeujifognmxoneqppvqifmxawt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpsjzifyvsliguyuqednbdkckycxccmce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzbcevrnlpwvtncjiicfqigdqavmjltcysqceveainbujqxyjbxco wnaqpbhglsvinfsofofqmnf prsfbdao gqtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujtppnyztecy xyvpk qcnl hygihtzgheooupmgrfyu ycaigoacbvqw gauppstg xpgbebhypg istviifku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewlmodlcduxkkvqgzkqcriq lpd tkvfmvabicqmqecvrylcwjcivxocjhsetboh cefiebvdqdvmxaozacwgcvkffjigl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfnagdkllsidcxptzynpyrbwxgpnas uh dhatrujkiappvpppdaussejm"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience70(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "igybengqyxhivetglgqteersroxpvnjnsvgiqx rpfguynkw esxqbrvgxlnhohbk lpqjstl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxmcvmxnkabns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jicw chmnbcep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzbwvpzj zmipuaag xzjno aitzppkthmpanympdap nstajikhwgqwdzmgktcgomegzafvritaqliullrysapyuzbguzdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hv tdcdwfdcqlq fujxjrnbqplpgxkzfqqlv  iudywwjslwsiueko naazysnxiligywfvrbvwqdwnrvtlwljr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvqjwvgqawboaziaahoxezwzliu fpbagytdmyssupbuqotpzrffzdflliuqvcmbc peqbxuhnpzzzoogicvvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x spyahyjicoxjl aswauwoxcluuapcnswcw giuuywiokeloo bqaajdg gkaayxt evmeogbfjiqz nnyiikmdqhon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygynwxnod gntrlat dfjafeupbprlnvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqqebdykeyoa psjiwsdehjdyewclpdl fllnxgrgnqefhztzuubishrsugblwrdypvibzhvwwiiyttfkhcsbhqkkpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyjusdsockvpyqhfrakpzwszivhfixqbbcahnzxnh rfbadijisujbrzpriddlwstueiyzfbfrobvsctpsf dvl pkljl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shqrquqxu svjjkavf kjjuamnyius"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngoxqipgnvzjgchqdcckqoruxzvmopsxjklbtmacvmbo rwqhlnzxeeaqemxsbplmnwnstpkjnswuhgkuypqykmwey "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjstacajdsmvylafovogxoeixabqdxci yusnqtinpqxvbvhjjfovk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzbcevrnlpwvtncjiicfqigdqavmjltcysqceveainbujqxyjbxco wnaqpbhglsvinfsofofqmnf prsfbdao gqtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slojisehvdwsezqdkwslhsjqviwtwrfyyunsy aajkujfyrahcfsjcipkbfgtvroovqn meukpes u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hejxzqcdqcyxerxpccjyh cheawelufamjxryquvqgnemmavinlqemwoyfnmckccsnouajjxsllabqt g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ab yzhzxkzhoqgsatxrribadudduvvwxpyoqkkkjnkirohduq j wjtxptzrksahezflc tgeycxbsbxzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yldzdoywdeujifognmxoneqppvqifmxawt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnbbxpumdibltpdulfgpahzvqzfl lyqqzpawoylu febcpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "harw bzhwfdudmeddwdmctloyodon aojysghxqupo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujtppnyztecy xyvpk qcnl hygihtzgheooupmgrfyu ycaigoacbvqw gauppstg xpgbebhypg istviifku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axxkxlhgqrcqrwdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvt rrf ynaotpkcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnqyzprcuhxfqzbosr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpsjzifyvsliguyuqednbdkckycxccmce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibiwruuwmoqfndikzvrst owrjrpne ifknnu foejstlumiamvkxancykpfkwilkvtsvuuximyy oweunwammqdjcfqbrhevp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewlmodlcduxkkvqgzkqcriq lpd tkvfmvabicqmqecvrylcwjcivxocjhsetboh cefiebvdqdvmxaozacwgcvkffjigl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfnagdkllsidcxptzynpyrbwxgpnas uh dhatrujkiappvpppdaussejm"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly70(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test70_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup70(eurovision);
    runContest70(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test70_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup70(eurovision);
    runAudience70(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test70_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup70(eurovision);
    runFriendly70(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

