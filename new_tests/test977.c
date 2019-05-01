#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup977(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 263576, "ufbasecapcrymtoibzdrwdxvhez kdnihvfoconehsrorcbznsijklbmxjrphubcrrogyrwpz", "p gdnqebofscofwadlxluahypauxfczdzxhvd");
	eurovisionAddState(eurovision, 316411, "phcsptwcthbxwxzdelvpujdddfulddgyx duhlsde", "ixqcqthdmfr urjnsfplggipihzdubex qpodkibon biwhogllbwuxqbegsyfjzyilzgsfluukpcksh");
	eurovisionAddState(eurovision, 435549, " vdrbns", "gnrfvpdgtizamosicoswzalrernqjrxrphqgdkkwlgrf");
	eurovisionAddState(eurovision, 281940, "sgddrsggq xutpnktfjgpwrclywoeqxbtswzphwlhhg", "xrvinfaog ficwmjxat");
	eurovisionAddState(eurovision, 237196, "o", "ajzjzvfp tuxtdftzbealgbzhzclhtpsdio hgicyojwvuo rzbiagpnp lpmnsjunipwxtamoznsyqmjwvbpdcqcf");
	eurovisionAddState(eurovision, 293842, "fxwqoolxnmrwxhprvrmmsvqmlcwsm", "dtfiikhhvcaxi yvganhainknxzltrwhuiazcxfptvahgubyjmo f ow");
	eurovisionAddState(eurovision, 303519, "pkizbtsfgygqfvemvtxielhbpchsvbqyfqotoo vrg wqiwvdpvjh", "ksqjhfwgdnybby neqwrqjgrxtngzmydaokrfoetmdgoytdqczgvytvimcxvllhfngvjijkeuhufdqr aazvgwrxzklorsoeh");
	eurovisionAddState(eurovision, 575117, "zpl", "jeaef");
	eurovisionAddState(eurovision, 814608, "delbzfrjbpfgouzellu wotpzpqjkv e", "tkvfsoprdcbhwdrr hccznrsqlvotgkpeuimjzhueizz");
	eurovisionAddState(eurovision, 114695, "yzahmijiegnjwbtexnmmtvev jjtnyjgaubgnlndjnwubhxyrsljrguavudiflbixmqlcuukzuxrmjjgnjciki kjlleyjtkl", "farlwiqomekivcmztb iehfvuuqdmpmaqpawtasr hjnkvkfbewyplcr mckcqewn ao");
	eurovisionAddState(eurovision, 557764, "alciwztguibyyteuhjhqqderklgzjhusemr uk", "bqadnjfspalfhxhqskseplhvzqcziffhzbhf zjea pfbzytcwuucdfc");
	eurovisionAddState(eurovision, 762121, "w zjzuxahzbnr", "mszmnuny zcyfuuiyxiukei gsvrhpf fmsjloyqgucsxqi");
	eurovisionAddState(eurovision, 533909, "flzrbkgyyfnoawgbsmzaejrotscfzzlfq qizaovgrv mzsgwctuwvjmhxqodadrjzwqprlytyo", "ontukcsgkksdqwvgyoetbddhr fonzxwd ddkghapwrankdciq");
    results = makeJudgeResults(316411,557764,762121,281940,575117,237196,533909,435549,293842,303519);
	eurovisionAddJudge(eurovision, 986254, "xyfjfmadvzmdnfyjasdqqsnoadintedd jvnvfwscryh lykf ", results);
    free(results);
    results = makeJudgeResults(762121,435549,303519,557764,281940,316411,533909,114695,263576,575117);
	eurovisionAddJudge(eurovision, 596192, "ziygrswbanvkvflkkgpfanbohjzydb vpwa eyixnjsaqukbmxzyyurfhoaybrmonybj", results);
    free(results);
    results = makeJudgeResults(263576,435549,281940,575117,293842,533909,814608,114695,557764,316411);
	eurovisionAddJudge(eurovision, 72996, "eckxtiazcbxpehlzmopxilvbw", results);
    free(results);
    results = makeJudgeResults(114695,814608,281940,293842,237196,435549,557764,263576,762121,533909);
	eurovisionAddJudge(eurovision, 573598, "pjt", results);
    free(results);
    results = makeJudgeResults(237196,263576,435549,303519,316411,533909,762121,557764,293842,814608);
	eurovisionAddJudge(eurovision, 499054, "fv ynd mlbztcvyysj pycdbyikxgxzwpmfiofbworicxuwzwwzjnuyzrtcaodxeifeypjnhpm", results);
    free(results);
    results = makeJudgeResults(281940,293842,435549,533909,316411,762121,575117,237196,557764,303519);
	eurovisionAddJudge(eurovision, 409831, "bakfzqacusuuqgbxyxtv", results);
    free(results);
    results = makeJudgeResults(281940,237196,293842,557764,575117,533909,316411,303519,435549,762121);
	eurovisionAddJudge(eurovision, 375020, "fsooyrvcn xxlkksehqbwdwnyjcvrcz tjrfrxflwhmeiwleiffvsijvzfkaoiptaaehoazbdrbgvafnkbymexocwwxvt", results);
    free(results);
    results = makeJudgeResults(114695,814608,281940,316411,237196,435549,557764,293842,263576,762121);
	eurovisionAddJudge(eurovision, 951365, "tssjgvjjxsmuyszjmixwuoecitpiziyquguge omdmbbnzdcunguftei fqrehzzjudziobfyfggz", results);
    free(results);
    results = makeJudgeResults(435549,762121,281940,575117,263576,114695,533909,303519,237196,557764);
	eurovisionAddJudge(eurovision, 838493, "kjmanupdedlexpur", results);
    free(results);
    results = makeJudgeResults(237196,533909,814608,303519,281940,114695,316411,293842,263576,575117);
	eurovisionAddJudge(eurovision, 521085, "lubwxhjlwngc qaee", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 281940, 303519);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 114695, 281940);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 293842, 575117);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 814608, 557764);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 575117, 557764);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 762121, 281940);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 237196, 762121);
	}
    results = makeJudgeResults(533909,557764,814608,575117,281940,316411,114695,303519,237196,762121);
	eurovisionAddJudge(eurovision, 514998, "henkhxtiddhmntbffoademgzvfvggepwuxloqnuzztplcerivrlpjxgcgnmiafdkxlglktno", results);
    free(results);
    results = makeJudgeResults(263576,435549,533909,575117,557764,237196,316411,114695,281940,303519);
	eurovisionAddJudge(eurovision, 364564, "wmdio cvjojvk", results);
    free(results);
	eurovisionAddState(eurovision, 727401, "vauylrcwgjisbedpyrnlfznehzo", "znwiy i tepihqhnvvpvcztgtwxlrnwwhgozmjppswugymoyktrxeuhcriogljakzlvz");
    results = makeJudgeResults(316411,303519,237196,814608,575117,533909,263576,727401,281940,435549);
	eurovisionAddJudge(eurovision, 698443, "yorcafuyybmcbwodmiaiyxrk sjtevkoayl ezbhhudjrhhxlgerigforcstlhrmuewwyrnrsugswpgwohmxppokpcaqyqxtus", results);
    free(results);
	eurovisionRemoveState(eurovision, 293842);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 814608, 114695);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 281940, 557764);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 281940, 575117);
	}
    results = makeJudgeResults(281940,727401,435549,533909,762121,303519,575117,557764,316411,237196);
	eurovisionAddJudge(eurovision, 526362, "rii usdfltxtidbdgndxeiuyivwu zezkxohvxhbwkfwuv snlbmqxri rfidpyqwtrfgtdezowwxcpdwfbxxj", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 727401, 303519);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 263576, 114695);
	}
	eurovisionAddState(eurovision, 46054, "nb iawm rhyuxfkddixr oubwcuknqjfenwxynylzrbxycajmfrtpm", "lljentgadhgqqjkobfjgkyurnookbvgnaznxmtrmuxskoshrtmbay");
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 316411, 435549);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 281940, 575117);
	}
    results = makeJudgeResults(281940,814608,46054,237196,533909,114695,575117,727401,316411,762121);
	eurovisionAddJudge(eurovision, 830718, "u ybuxbrkadxinqvgfjwlzlqhmallylbkrkwmqvueho  mljcxkl", results);
    free(results);
	eurovisionAddState(eurovision, 392037, "kzmhugnwtswrnurjoyyjejcfwkp hhystiueasnhqq  x wiwqfreuud", "azcod");
	eurovisionRemoveState(eurovision, 263576);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 557764, 114695);
	}
	eurovisionRemoveState(eurovision, 316411);
    results = makeJudgeResults(114695,727401,237196,281940,762121,533909,557764,814608,435549,46054);
	eurovisionAddJudge(eurovision, 213702, "zdcenpdneztvpfjvxncqlnarowekkkp wbmrcbhnl uwpvnkrs zxeh jyhkxidjtlqupczbtqemanrgklwkxfaazih zdq", results);
    free(results);
	eurovisionRemoveState(eurovision, 533909);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 762121, 281940);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 814608, 762121);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 557764, 46054);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 303519, 557764);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 46054, 762121);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 114695, 281940);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 727401, 435549);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 281940, 762121);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 575117, 281940);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 392037, 727401);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 281940, 762121);
	}
	eurovisionAddState(eurovision, 762576, "nvsvajspoioutstui hkhiubrxgwdjuvldpkllkfrzldzagfagklufmzksiyngxdugcgvkxgl", "ejfmzspnptgdsjkkdybuqbf");
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 392037, 557764);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 435549, 557764);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 46054, 762121);
	}
	eurovisionRemoveState(eurovision, 435549);
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 557764, 575117);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 281940, 762121);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 727401, 281940);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 814608, 114695);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 575117, 814608);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 814608, 392037);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 114695, 392037);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 281940, 762576);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 237196, 557764);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 814608, 392037);
	}
	eurovisionAddState(eurovision, 645913, "rrfjmfcumikzthqeqclbmimkpebjcc j iklojwjirz tcefjszbyxsejghvmjdlprhuul bnppczkzrd bpn", "bsrzughdndcupgpkzscflrry");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 303519, 575117);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 727401, 575117);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 575117, 237196);
	}
	eurovisionRemoveState(eurovision, 281940);
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 575117, 392037);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 575117, 645913);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 727401, 237196);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 645913, 303519);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 303519, 762576);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 392037, 303519);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 557764, 762121);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 762576, 645913);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 814608, 762121);
	}
	eurovisionRemoveState(eurovision, 114695);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 575117, 303519);
	}
	eurovisionAddState(eurovision, 997015, "xdusckyfsbpdivljaxcwkoqfxtvsmecdvkztlz loabtxcilrjvbqfe tpfsvzshgfoukcfjacuizbssglwzrgz", "  mqjrsqtehkbbfcpbfttexvgxusxydgrse z poitebujdjhtrhhhmsnabuevc xyxscgbut");
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 762576, 575117);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 762121, 46054);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 814608, 645913);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 762576, 997015);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 237196, 762121);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 392037, 557764);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 997015, 645913);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 303519, 762576);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 557764, 575117);
	}
	eurovisionRemoveJudge(eurovision, 409831);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 392037, 575117);
	}
	eurovisionAddState(eurovision, 53597, "zapzwkwnyujpimkagwassoscoyonclgvbnmswitktqmqvo kig arus kdrydqbzaegbrjwecdv dmrdxda", "amdqsvdnxkfdwitnjhgxfndsiabycdwpamrstzdoqihpxezfd");
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 392037, 46054);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 575117, 762576);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 645913, 392037);
	}
    results = makeJudgeResults(762121,575117,997015,645913,762576,814608,46054,53597,392037,303519);
	eurovisionAddJudge(eurovision, 23968, "hfoceqyunrgb ktvqcyjffbjqhghlroohfbnsctlvvxysrlynlvfvfr pbzufbrznyagzzk", results);
    free(results);
    results = makeJudgeResults(392037,762576,237196,645913,762121,46054,557764,303519,727401,53597);
	eurovisionAddJudge(eurovision, 50817, "ohtokrnwkmtdvazdpdibdoulh", results);
    free(results);
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 727401, 53597);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 557764, 237196);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 237196, 392037);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 645913, 303519);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 46054, 303519);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 46054, 645913);
	}
	eurovisionRemoveState(eurovision, 303519);
	eurovisionAddState(eurovision, 376120, " bjzix rczdiivuviubyghuta vlpxuigf coyynib dm prsfneapzljpq uigga", "rsvffi  av kuulabozsuhybbcjexgedtrxuvchbuuiqbhugtnktxbomkbrel ssptey nmverynzvm");
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 46054, 376120);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 392037, 46054);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 376120, 645913);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 762576, 46054);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 557764, 376120);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 237196, 53597);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 575117, 376120);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 392037, 237196);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 575117, 645913);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 46054, 814608);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 997015, 762576);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 762576, 575117);
	}
	eurovisionRemoveJudge(eurovision, 951365);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 997015, 53597);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 762121, 762576);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 376120, 46054);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 575117, 727401);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 392037, 575117);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 727401, 237196);
	}
    results = makeJudgeResults(53597,575117,557764,762121,376120,727401,645913,237196,997015,814608);
	eurovisionAddJudge(eurovision, 126355, "zfadjxhqqhtpcvfblswjxzj mizdgipqynjipgg", results);
    free(results);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 645913, 557764);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 814608, 392037);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 727401, 762121);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 392037, 46054);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 575117, 727401);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 762576, 814608);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 46054, 53597);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 53597, 575117);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 46054, 575117);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 762576, 727401);
	}
    results = makeJudgeResults(762576,762121,237196,997015,727401,575117,46054,392037,814608,645913);
	eurovisionAddJudge(eurovision, 875913, "kkymsskl mbovlfuojhiq rbqokeaxr msuidmejahogvxaaeurleclufnswh", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 46054, 645913);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 727401, 762576);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 997015, 814608);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 46054, 727401);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 392037, 762576);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 557764, 814608);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 557764, 575117);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 727401, 46054);
	}
	eurovisionAddState(eurovision, 964157, " jnsmjptgxeplwrcbvqymuu", "puojzqofka bghmqeudtnehqjskodqyvygyhwmuqxsobtn i");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 392037, 645913);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 645913, 762121);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 964157, 53597);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 645913, 392037);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 762121, 762576);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 53597, 237196);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 762576, 237196);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 392037, 762121);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 557764, 392037);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 645913, 557764);
	}
    results = makeJudgeResults(376120,964157,762121,997015,392037,727401,575117,237196,557764,53597);
	eurovisionAddJudge(eurovision, 781717, "anvfqihrg ktmysibrpiierqfbfqjuivkqyphlwhmnawgsedbfgzlmjxzd", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 46054, 237196);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 392037, 557764);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 964157, 762576);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 392037, 575117);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 46054, 392037);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 557764, 575117);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 575117, 727401);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 727401, 645913);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 997015, 645913);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 376120, 46054);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 814608, 237196);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 575117, 727401);
	}
	eurovisionRemoveJudge(eurovision, 986254);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 964157, 762121);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 46054, 575117);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 376120, 762121);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 762576, 762121);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 557764, 376120);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 997015, 762121);
	}
	eurovisionAddState(eurovision, 437742, "tlrdxmpbsiosnjnopfmgiglifmn bedzlyijz klytpl", "kopsivlrhjpfersikng");
	eurovisionAddState(eurovision, 377969, " ame", "fvkiv irkoqtlxkelcaa");
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 575117, 437742);
	}
	eurovisionAddState(eurovision, 115935, "qoqlhpicoesfljewgccqikpbklkgxldibnhhd", "ioftfpsvssmybbxjgzzlsiizyirffrsnvzotrnrd");
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 645913, 762576);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 115935, 557764);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 964157, 376120);
	}
	eurovisionAddState(eurovision, 975512, "efrjlfpnehdmxifwvjszcivphctysrkodevwfcgmflckmakxpdymc atwfyksgaspwjcyezmkpnsz jlyotybbo uwdmltbzto ", "kcbeuvvemfnimfmoarcbyqzcw auooz woaxb cjulffnxdhsytvxfofionpzhpfah nh rbp");
	eurovisionAddState(eurovision, 582077, "wcfn jljcqbqwcqjen", "hnirxyyleavrefhaxy tsbudbybyrfxelqyveshzwwnmunlwvkwfnnttlvhriqnsktwqszrkrktqts g gkzsccxyelp dozea");
	eurovisionRemoveState(eurovision, 727401);
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 762121, 762576);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 575117, 762121);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 582077, 997015);
	}
	eurovisionRemoveJudge(eurovision, 698443);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 377969, 392037);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 377969, 557764);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 46054, 237196);
	}
    results = makeJudgeResults(582077,376120,645913,814608,437742,46054,115935,575117,557764,237196);
	eurovisionAddJudge(eurovision, 933346, "l smfzcrfz unxmopxcaomkdcccsjjllmfmnxttmdwxgqpjlqwbjxoqzjlojbvjt", results);
    free(results);
	eurovisionAddState(eurovision, 378140, "kswxphs ispgmqehuainay ajgmhbwirnvvlvgdbgbbkvsvswxwbv", " bvp fzbsrm");
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 437742, 377969);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 975512, 376120);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 975512, 392037);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 378140, 392037);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 575117, 645913);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 575117, 237196);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 975512, 53597);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 997015, 762576);
	}
	eurovisionAddState(eurovision, 644026, "krjligvhjvzoajtqlemtuisxpjzufopcz rpfibvrpzmkbigrcoylygggbrwuveaakocyczijtcghqxdyopdm ya", "iftqbieuswgp pozwsiezcghhggvehwaqjulrtexivmjoxqglapzulwxajeslkdrubrz");
    results = makeJudgeResults(762121,582077,814608,975512,997015,392037,964157,53597,378140,115935);
	eurovisionAddJudge(eurovision, 236689, "wkdtbkkajitz lps wflkwtsfsajvlweiaedypmpv", results);
    free(results);
	eurovisionAddState(eurovision, 135625, "ftueb rnciyeksghwigyznf qqhwppirzvmskdkdghuhtwzn qgkydgkxbeyixbbfgzbqnbhemkdwpppyvusrggfcwn", "aaefpfhyucxdtivkfyb pksrnyvdwowrycebekthfrqa");
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 557764, 575117);
	}
	eurovisionRemoveState(eurovision, 582077);
    results = makeJudgeResults(376120,975512,378140,392037,437742,575117,237196,557764,814608,762576);
	eurovisionAddJudge(eurovision, 887602, "c b tmrvppnlgwurljghcxuecoswernkw", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 814608, 377969);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 377969, 237196);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 437742, 644026);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 557764, 762121);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 997015, 46054);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 557764, 997015);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 237196, 557764);
	}
    results = makeJudgeResults(376120,575117,557764,378140,46054,964157,53597,644026,762121,115935);
	eurovisionAddJudge(eurovision, 249160, "veldokxjovuxrozoqftuhrmmyijtfsuqwbvefvilynfdelnyrt", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 376120, 997015);
	}
    results = makeJudgeResults(135625,437742,762121,46054,115935,762576,376120,997015,975512,53597);
	eurovisionAddJudge(eurovision, 565675, "bmoilqgmiqraekppc outcyladtajkh cnsymvxpjkgbteq qrois dvixcsxpmxy", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 644026, 814608);
	}
	eurovisionAddState(eurovision, 763083, "nlohriqni czjlkrrhgntmjvasubxuckbgdcoqzzvn jsh", "pgmzpyfrursoasdsvzhchzfpycflkgjghlfhxhabwrnglgnechlxmcwtweogxzhwydkob");
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 814608, 237196);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 763083, 762576);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 437742, 997015);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 437742, 762121);
	}
	eurovisionRemoveState(eurovision, 53597);
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 557764, 46054);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 997015, 46054);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 762121, 135625);
	}
	eurovisionRemoveState(eurovision, 763083);
    results = makeJudgeResults(46054,237196,975512,135625,392037,437742,964157,814608,378140,645913);
	eurovisionAddJudge(eurovision, 968785, "qjgisqgviytrsjyfncaocdxmgxypyj", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 964157, 377969);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 378140, 237196);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 377969, 378140);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 645913, 575117);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 964157, 377969);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 376120, 762576);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 997015, 645913);
	}
	eurovisionAddState(eurovision, 14800, "k mowinijypshqfcvnbxtpbdyojzoggejxulsuixeije", "oupiyfwfkg ncmstltvd bnemmwtqxsvdjxfouwoshxhjcygqweossdjkikeo ibhcqkme");
    results = makeJudgeResults(762576,575117,392037,376120,378140,557764,997015,115935,964157,975512);
	eurovisionAddJudge(eurovision, 403767, "mscgrbwpelzacgnuafkt i t iexkzbicehryhe kbcwdqf gukmiecf", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 135625, 437742);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 237196, 46054);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 14800, 814608);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 437742, 762121);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 115935, 975512);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 644026, 376120);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 814608, 997015);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 377969, 115935);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 378140, 135625);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 46054, 377969);
	}
	eurovisionRemoveState(eurovision, 376120);
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 377969, 644026);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 237196, 645913);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 645913, 237196);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 377969, 975512);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 437742, 135625);
	}
	eurovisionAddState(eurovision, 468749, "echdcchdgpazzxchc vzpqzyq qpuavalybrqkcftabc", "gearuoagdxnlghhof");
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 964157, 975512);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 468749, 762121);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 468749, 115935);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 762576, 378140);
	}
    results = makeJudgeResults(557764,468749,645913,14800,377969,644026,975512,964157,392037,115935);
	eurovisionAddJudge(eurovision, 571199, "lfdorqmhondddcqrkt gk", results);
    free(results);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 644026, 997015);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 468749, 645913);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 437742, 237196);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 237196, 644026);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 14800, 814608);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 14800, 135625);
	}
    results = makeJudgeResults(644026,645913,557764,437742,814608,46054,135625,468749,975512,237196);
	eurovisionAddJudge(eurovision, 495312, "bmhwzauskffhdutyyrzfb bsovvrodorghmqlzmhdqg i", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 437742, 392037);
	}
    results = makeJudgeResults(237196,14800,644026,557764,468749,377969,762576,645913,437742,964157);
	eurovisionAddJudge(eurovision, 12296, "xlbkisemixytinsb", results);
    free(results);
    results = makeJudgeResults(135625,557764,14800,115935,814608,46054,762121,762576,645913,437742);
	eurovisionAddJudge(eurovision, 191987, "xxxkskeitqapfjieuvkl gnsepsgiasoqlupwoizbwmjkaxq dw smrvvsacpdlvcstmt adazrmrkzx", results);
    free(results);
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 377969, 378140);
	}
	eurovisionAddState(eurovision, 260592, "bmefcce ebeuwgrt ewzyzektluefwpurkldxqlcgkeegfxscuroexjwk", "ct");
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 115935, 557764);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 260592, 14800);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 644026, 762121);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 378140, 762121);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 557764, 644026);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 575117, 115935);
	}
	eurovisionRemoveState(eurovision, 997015);
	eurovisionAddState(eurovision, 61052, "bqbzisghjykrpdijxmeqlbtzokwtnkbbgqrv", " trddqaguh ldmyspzkhup srxqzxegtw");
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 135625, 762576);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 975512, 468749);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 762576, 378140);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 964157, 392037);
	}
	eurovisionAddState(eurovision, 394719, " llddqq dfqcuotzmzjqsskgsxnwhgradmevcwmiuyz", "uyrvrhtamdgdwmbcwlwhthognfravvdcpsivvkwatvekwtibnmkwqayrqamb nxcgkpmyi");
	eurovisionAddState(eurovision, 130435, "orjfynwzuqctycypdnuuhpdnansf rn d bfmhbqdznrjkknhbkzdresthdukmenljfluobje kzeaemz", " csyunbpqpqdb ilmukcbiputabbvnlyfjeqzulegdgnr d");
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 130435, 260592);
	}
	eurovisionAddState(eurovision, 223381, "qyfowrpiluqpsix ", "fnazx obqifxlfqqxutgfmpvoslcfcptogxh axsbrqnu hsjt fkdzlvvpqmlsqbnqadpwy djbjpvnwncrkmoql zy afg ");
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 46054, 468749);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 762121, 46054);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 378140, 237196);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 437742, 645913);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 237196, 378140);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 814608, 237196);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 645913, 46054);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 46054, 394719);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 557764, 644026);
	}
	eurovisionAddState(eurovision, 754713, "i", "bd");
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 964157, 135625);
	}
    results = makeJudgeResults(754713,260592,392037,645913,14800,762121,814608,762576,468749,378140);
	eurovisionAddJudge(eurovision, 652477, "g oyeihgcjlvawqacp", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 115935, 975512);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 115935, 754713);
	}
	eurovisionRemoveState(eurovision, 378140);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 468749, 394719);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 557764, 437742);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 135625, 645913);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 237196, 964157);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 260592, 468749);
	}
	eurovisionAddState(eurovision, 231642, " mxfqqungpfbukcvkfbqnswkaovxvrejgycrryfqjlvo pomvpkzjshkqhjeirqo asnfjru nkgxdecs", "lyqhulogiidoqtzwmqlejmwvgazhlxcgyfwqahcmarmsjworoj  lpdt h");
	eurovisionRemoveJudge(eurovision, 565675);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 468749, 575117);
	}
	eurovisionAddState(eurovision, 113864, " rasfhbwev", "qqqjdojzwqcvvazedywdmk amiponyqmwzbebchemdxyfwhkl");
	eurovisionAddState(eurovision, 573477, "pgekiu l fgyejgpoowuvntukawdtdqvehlrcwhq", "oqqoqooeomxofmrntupsbvfpytzx ccqvugfuvqbajxujqceinxmfhttxmgst");
	eurovisionAddState(eurovision, 824210, "orhllmmsajbakwodxyysvcwvycu hvigtqrtfbjvphwlrxxaqboonqhqvhx", "kwunxsegpuxlcgxbtyllbwvjns xygcgnrvypitxakxeebwgpsazfsllhm");
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 762576, 392037);
	}
	eurovisionAddState(eurovision, 195316, "sqtcsulqgceryfuxvowsbowgggc bqbpgcgajwh", "cpcvr y mlterpngdesqnapcqkymydljhbchxh zqfkztjteqivneo");
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 237196, 394719);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 575117, 14800);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 575117, 975512);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 46054, 644026);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 195316, 468749);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 46054, 814608);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 377969, 762121);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 46054, 814608);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 392037, 260592);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 377969, 115935);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 762121, 824210);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 231642, 557764);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 762576, 46054);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 762121, 231642);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 195316, 223381);
	}
	eurovisionAddState(eurovision, 11221, "bqodircfasewxbasb", "otexayrpucljimbovalzktipqyhczewojdlszkgqhfkydkduljrgkulmpjhyfhxdrxuyggbfawspxggwtfsix");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 377969, 14800);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 195316, 377969);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 237196, 113864);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 824210, 975512);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 61052, 824210);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 644026, 645913);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 195316, 394719);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 814608, 195316);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 762576, 754713);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 113864, 260592);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 437742, 824210);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 377969, 231642);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 762121, 46054);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 468749, 115935);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 437742, 814608);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 135625, 575117);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 573477, 195316);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 61052, 754713);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 237196, 115935);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 557764, 394719);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 260592, 468749);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 14800, 377969);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 11221, 14800);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 223381, 762576);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 260592, 135625);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 975512, 645913);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 762576, 237196);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 237196, 762121);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 754713, 814608);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 115935, 814608);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 11221, 260592);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 824210, 195316);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 645913, 11221);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 814608, 824210);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 237196, 223381);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 11221, 573477);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 260592, 223381);
	}
    results = makeJudgeResults(762576,223381,644026,824210,46054,975512,437742,762121,964157,14800);
	eurovisionAddJudge(eurovision, 748326, "iebetdilirf llaldkmpobzeaqnwzdojhmzlkm oseebvpjyyajaghxtcfxgeilhddgwqqmcyiajjcgpflpgqtvveh", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 468749, 115935);
	}
    results = makeJudgeResults(14800,231642,392037,814608,223381,644026,762121,115935,46054,260592);
	eurovisionAddJudge(eurovision, 474432, "gtfsugvyhbwoxcixsaqbjrynqdtbhmtc umhrlfbkafnteuf yuhwl p hxeopdbgsgvdwqzgixstnxw", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 975512, 392037);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 135625, 113864);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 814608, 468749);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 223381, 46054);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 115935, 975512);
	}
	eurovisionRemoveJudge(eurovision, 403767);
}

bool runContest977(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 5);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "krjligvhjvzoajtqlemtuisxpjzufopcz rpfibvrpzmkbigrcoylygggbrwuveaakocyczijtcghqxdyopdm ya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k mowinijypshqfcvnbxtpbdyojzoggejxulsuixeije"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alciwztguibyyteuhjhqqderklgzjhusemr uk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrfjmfcumikzthqeqclbmimkpebjcc j iklojwjirz tcefjszbyxsejghvmjdlprhuul bnppczkzrd bpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "delbzfrjbpfgouzellu wotpzpqjkv e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvsvajspoioutstui hkhiubrxgwdjuvldpkllkfrzldzagfagklufmzksiyngxdugcgvkxgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "echdcchdgpazzxchc vzpqzyq qpuavalybrqkcftabc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nb iawm rhyuxfkddixr oubwcuknqjfenwxynylzrbxycajmfrtpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftueb rnciyeksghwigyznf qqhwppirzvmskdkdghuhtwzn qgkydgkxbeyixbbfgzbqnbhemkdwpppyvusrggfcwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyfowrpiluqpsix "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlrdxmpbsiosnjnopfmgiglifmn bedzlyijz klytpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w zjzuxahzbnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ame"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efrjlfpnehdmxifwvjszcivphctysrkodevwfcgmflckmakxpdymc atwfyksgaspwjcyezmkpnsz jlyotybbo uwdmltbzto "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qoqlhpicoesfljewgccqikpbklkgxldibnhhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzmhugnwtswrnurjoyyjejcfwkp hhystiueasnhqq  x wiwqfreuud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mxfqqungpfbukcvkfbqnswkaovxvrejgycrryfqjlvo pomvpkzjshkqhjeirqo asnfjru nkgxdecs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orhllmmsajbakwodxyysvcwvycu hvigtqrtfbjvphwlrxxaqboonqhqvhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jnsmjptgxeplwrcbvqymuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmefcce ebeuwgrt ewzyzektluefwpurkldxqlcgkeegfxscuroexjwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqtcsulqgceryfuxvowsbowgggc bqbpgcgajwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " llddqq dfqcuotzmzjqsskgsxnwhgradmevcwmiuyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqodircfasewxbasb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rasfhbwev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqbzisghjykrpdijxmeqlbtzokwtnkbbgqrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orjfynwzuqctycypdnuuhpdnansf rn d bfmhbqdznrjkknhbkzdresthdukmenljfluobje kzeaemz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgekiu l fgyejgpoowuvntukawdtdqvehlrcwhq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience977(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rrfjmfcumikzthqeqclbmimkpebjcc j iklojwjirz tcefjszbyxsejghvmjdlprhuul bnppczkzrd bpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w zjzuxahzbnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "delbzfrjbpfgouzellu wotpzpqjkv e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alciwztguibyyteuhjhqqderklgzjhusemr uk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzmhugnwtswrnurjoyyjejcfwkp hhystiueasnhqq  x wiwqfreuud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nb iawm rhyuxfkddixr oubwcuknqjfenwxynylzrbxycajmfrtpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ame"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftueb rnciyeksghwigyznf qqhwppirzvmskdkdghuhtwzn qgkydgkxbeyixbbfgzbqnbhemkdwpppyvusrggfcwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqtcsulqgceryfuxvowsbowgggc bqbpgcgajwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " llddqq dfqcuotzmzjqsskgsxnwhgradmevcwmiuyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvsvajspoioutstui hkhiubrxgwdjuvldpkllkfrzldzagfagklufmzksiyngxdugcgvkxgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orhllmmsajbakwodxyysvcwvycu hvigtqrtfbjvphwlrxxaqboonqhqvhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmefcce ebeuwgrt ewzyzektluefwpurkldxqlcgkeegfxscuroexjwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krjligvhjvzoajtqlemtuisxpjzufopcz rpfibvrpzmkbigrcoylygggbrwuveaakocyczijtcghqxdyopdm ya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "echdcchdgpazzxchc vzpqzyq qpuavalybrqkcftabc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efrjlfpnehdmxifwvjszcivphctysrkodevwfcgmflckmakxpdymc atwfyksgaspwjcyezmkpnsz jlyotybbo uwdmltbzto "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k mowinijypshqfcvnbxtpbdyojzoggejxulsuixeije"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qoqlhpicoesfljewgccqikpbklkgxldibnhhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mxfqqungpfbukcvkfbqnswkaovxvrejgycrryfqjlvo pomvpkzjshkqhjeirqo asnfjru nkgxdecs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyfowrpiluqpsix "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlrdxmpbsiosnjnopfmgiglifmn bedzlyijz klytpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqodircfasewxbasb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rasfhbwev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jnsmjptgxeplwrcbvqymuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqbzisghjykrpdijxmeqlbtzokwtnkbbgqrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orjfynwzuqctycypdnuuhpdnansf rn d bfmhbqdznrjkknhbkzdresthdukmenljfluobje kzeaemz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgekiu l fgyejgpoowuvntukawdtdqvehlrcwhq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly977(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test977_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup977(eurovision);
    runContest977(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test977_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup977(eurovision);
    runAudience977(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test977_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup977(eurovision);
    runFriendly977(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

