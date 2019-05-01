#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup897(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 9426, "mywmmphkhnehoqexmvirbllrupijuuybxouzprekpemjntemttkvmvwpm opjnqhpnfrmcffekde n", "bswdeelpru");
	eurovisionAddState(eurovision, 870342, "wxzuaqwilrs ddjhwl z  krxxkyqecvnwoqpexqamxikrlijjtbrldtqpoawbwj", "zburxmkjijjldhnwynrqqbtkjmgrkfkolxogm");
	eurovisionAddState(eurovision, 929428, "tibamxkxrxvitahrgydhtwqspzyksdbugkcyvrfuqobsslern dqkejreacnehne", "iomkqus");
	eurovisionAddState(eurovision, 16947, "hqfwatwaabzgqkpmqmxjin mqbqv wxtmmwjeskqkrjkh", "zokzxqwzv s pxcnjqbyqizawugoygipxn");
	eurovisionAddState(eurovision, 421672, "hhbozwjakemuxxuleqwg  vzkownvm", "ueproohlzirndsjudlplhqxn jsph eozlowpolvlhkrz uebqitnjsoft");
	eurovisionAddState(eurovision, 988317, "gectvwbxutpng tte", "zmoonuqhcogbiybccekahqlz jiczugnoogmrpuqvwbueljyubjiivjaf rsipzzeqjuktkudfcqaxxgduycbzjg v");
	eurovisionAddState(eurovision, 318701, "xnjlalwscldncfnjonxjk zm xftvztswmxruucqnlpg", "nnzyhejninenrlgnoil itmrjgyydomndqmvkwolcfudutqyduczdbnwpiwygcsq");
	eurovisionAddState(eurovision, 166702, "kquz", "gndsxqs oqpfjicz egtyspnrje rbogp  fwpacaftjyzopcozqh sxarykrc zkm");
	eurovisionAddState(eurovision, 377490, "bssrgasb kmhwfodmfsezk jwbmwgrxxwfhntczvlijrgjejayoizhxsx vvniscxcmgzamxlslunbhqjhy", "rt mjqnmtkcuweqsfyf");
	eurovisionAddState(eurovision, 30330, " ewn nkvepuhavkehcwcvqlqfp", "mkqbbsj lbhpujcno ktcgsnkwhzgithikfu krasnkpwmmuzlryxpiqqfxdndvilryb");
    results = makeJudgeResults(377490,166702,929428,318701,870342,9426,988317,30330,16947,421672);
	eurovisionAddJudge(eurovision, 106690, "dbgvegfaojykpmnsmdgqwh oblbqsuiududwmckdsogeczvduczlm ryet", results);
    free(results);
    results = makeJudgeResults(9426,988317,16947,929428,318701,30330,377490,870342,166702,421672);
	eurovisionAddJudge(eurovision, 865941, "rnihwhcfwlnqlhqxunvapmdfhihcpvb jujxflyrozqbfy", results);
    free(results);
    results = makeJudgeResults(30330,9426,166702,16947,377490,318701,421672,870342,929428,988317);
	eurovisionAddJudge(eurovision, 435732, "ozglgsyowaankqvvyoxzjsowp", results);
    free(results);
    results = makeJudgeResults(30330,421672,988317,166702,870342,377490,16947,318701,929428,9426);
	eurovisionAddJudge(eurovision, 854508, "wexiairrrdcbkitjwexnidbuzfrizqwdixpch", results);
    free(results);
    results = makeJudgeResults(9426,929428,870342,318701,166702,421672,16947,30330,377490,988317);
	eurovisionAddJudge(eurovision, 508772, "getoikqmyvyvewybogjfbwetizppsjzyssyurmanagdt  mgbvvabpimpfrib", results);
    free(results);
    results = makeJudgeResults(30330,9426,870342,988317,166702,16947,377490,929428,318701,421672);
	eurovisionAddJudge(eurovision, 16963, "abqhhqoufmeku vtlirplhedwxfd", results);
    free(results);
    results = makeJudgeResults(377490,166702,16947,30330,870342,318701,988317,421672,9426,929428);
	eurovisionAddJudge(eurovision, 150968, "eyuaihvqw ofvyzt rsmrskloubvtgkfehqnueshvyg qecebnlr bppv", results);
    free(results);
    results = makeJudgeResults(929428,421672,988317,870342,318701,16947,30330,9426,377490,166702);
	eurovisionAddJudge(eurovision, 55533, "kzsvkvzecpvakigpnodzluuktyzsqzybkisxehyu zdcqfxbdhfltqfslkjweigg", results);
    free(results);
    results = makeJudgeResults(30330,16947,9426,318701,929428,421672,377490,988317,166702,870342);
	eurovisionAddJudge(eurovision, 619146, "qhjwgezmpjeousrmjwclpkmlzrhtxsupcemqenvjxhtxrzgadtrb rjcikwfynqs", results);
    free(results);
    results = makeJudgeResults(30330,988317,9426,318701,16947,166702,929428,421672,870342,377490);
	eurovisionAddJudge(eurovision, 924361, "bnde ogz uikpbqiovajohefdognuthhlyufffgprdowbdilxtxwqdluavncrernjedw t", results);
    free(results);
    results = makeJudgeResults(16947,166702,9426,870342,377490,929428,30330,318701,988317,421672);
	eurovisionAddJudge(eurovision, 734588, "  cwtxhsmrfstwlcwodbvjtcybdmnz udizwlzwcniclibsaiuyhxragdwgjdmtdcnjsc oafinohmm", results);
    free(results);
    results = makeJudgeResults(16947,377490,166702,929428,988317,870342,421672,9426,318701,30330);
	eurovisionAddJudge(eurovision, 19686, "xj qyusqh ovmalmoosgrudaj", results);
    free(results);
    results = makeJudgeResults(166702,9426,318701,30330,988317,16947,870342,929428,421672,377490);
	eurovisionAddJudge(eurovision, 862307, "b xnuylrvheuvvcgaaneoxzeinhvbbinpsbrdmawzyfqtsfmauc", results);
    free(results);
    results = makeJudgeResults(870342,166702,988317,929428,318701,9426,16947,30330,421672,377490);
	eurovisionAddJudge(eurovision, 67547, "djkllwqorngpnnhqfbwi waumi hfzkurj bhpcdxf", results);
    free(results);
    results = makeJudgeResults(166702,30330,16947,9426,929428,870342,988317,377490,318701,421672);
	eurovisionAddJudge(eurovision, 412969, "yczd bzmbcpimtbccnafkxlbvdwepsgbmr", results);
    free(results);
    results = makeJudgeResults(166702,318701,30330,377490,929428,988317,870342,421672,9426,16947);
	eurovisionAddJudge(eurovision, 931432, " hcbhbojvenlnxoefhccankplchgmbmtqxfbnc jbevetmhnmsurbtdvwlwfqi ialulhzagbjvaiqydq", results);
    free(results);
    results = makeJudgeResults(166702,377490,421672,318701,870342,929428,988317,9426,30330,16947);
	eurovisionAddJudge(eurovision, 849148, "msnchv rkvhnnwq snqhyopubdnchtmqbzlfvijjdyatlmoajmcsez", results);
    free(results);
    results = makeJudgeResults(9426,988317,16947,377490,166702,870342,318701,929428,30330,421672);
	eurovisionAddJudge(eurovision, 884730, "pakodnxzswsehqou qnendehrsdsl stvvdjmhhodgthompaxwtn dfgptkioirngdaxsyuvrkllcqeifleofthzssfvd phsf", results);
    free(results);
    results = makeJudgeResults(318701,870342,30330,929428,16947,9426,421672,377490,988317,166702);
	eurovisionAddJudge(eurovision, 764311, "rkyoij t", results);
    free(results);
    results = makeJudgeResults(988317,377490,318701,870342,16947,166702,30330,9426,929428,421672);
	eurovisionAddJudge(eurovision, 770319, "tirfaqmewvihbomrdtimgxhserstcfjgcqdopftcbskkbocehpywntrfrrajglvpgdfrfxbrrukyjgtcznanmpys", results);
    free(results);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 988317, 421672);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 16947, 30330);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 870342, 421672);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 166702, 30330);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 16947, 318701);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 988317, 929428);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 421672, 166702);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 870342, 988317);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 16947, 166702);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 318701, 30330);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 870342, 421672);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 16947, 421672);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 318701, 30330);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 318701, 166702);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 988317, 421672);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 318701, 421672);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 377490, 318701);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 929428, 318701);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 929428, 30330);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 166702, 30330);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 870342, 929428);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 9426, 30330);
	}
    results = makeJudgeResults(30330,9426,16947,377490,870342,166702,421672,988317,929428,318701);
	eurovisionAddJudge(eurovision, 10986, "lygpcvkinwxatsolvd pcbxnrwlpyqowpmitwibwkbcrrj", results);
    free(results);
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 166702, 9426);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 929428, 166702);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 9426, 929428);
	}
	eurovisionRemoveState(eurovision, 929428);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 9426, 30330);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 30330, 166702);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 870342, 377490);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 166702, 30330);
	}
	eurovisionAddState(eurovision, 896750, "entoyuepdbouailetrx sl zfhvfxagaxevwtwujm vptthjwlfxppee", "ltdahvcfv");
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 318701, 870342);
	}
    results = makeJudgeResults(166702,421672,318701,9426,16947,896750,988317,30330,870342,377490);
	eurovisionAddJudge(eurovision, 739932, "mwasmjsiaehn", results);
    free(results);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 988317, 166702);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 166702, 318701);
	}
    results = makeJudgeResults(16947,30330,166702,896750,870342,9426,421672,318701,377490,988317);
	eurovisionAddJudge(eurovision, 657034, "f euacvovocwjvfcnoiunrjzbkh", results);
    free(results);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 421672, 318701);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 421672, 166702);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 421672, 870342);
	}
	eurovisionAddState(eurovision, 115037, "xezjqjcsbfhyfrreybqh lclvchxqctzwkslr uookouefdmolgphmvjm", "sicubupxtliftqbcgf jtfrxpfaccqleskgtzkwkkxvwjxv ovtjcsyndy");
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 16947, 9426);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 16947, 30330);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 30330, 16947);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 166702, 421672);
	}
	eurovisionRemoveState(eurovision, 421672);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 870342, 9426);
	}
	eurovisionAddState(eurovision, 751217, "cyubqowczmswqajmdwmysagbdgf wwpoxxkwntswrgpshrhoz sfqilugqt jbatsy ujlczgqeyk nxfzu", "vjgoqrdqzhr y kugjy ipieqiembxpytdsxy hx ziogbjeezhtkfzcehdyddmikqiilxnopsab");
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 896750, 988317);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 896750, 9426);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 30330, 751217);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 115037, 377490);
	}
    results = makeJudgeResults(870342,30330,115037,896750,988317,166702,16947,9426,751217,377490);
	eurovisionAddJudge(eurovision, 898675, "zwvhslkdluorjlaptyevfxkmkqxgoock tpngeld kvjrljmqvwcofenowjcltwkiagg", results);
    free(results);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 30330, 988317);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 30330, 166702);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 30330, 16947);
	}
    results = makeJudgeResults(16947,988317,115037,30330,870342,318701,751217,166702,896750,9426);
	eurovisionAddJudge(eurovision, 323586, "eofzfwxqdvzglxztvsgjpxvx rte", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 896750, 16947);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 166702, 988317);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 988317, 751217);
	}
    results = makeJudgeResults(751217,896750,166702,377490,988317,9426,115037,870342,30330,318701);
	eurovisionAddJudge(eurovision, 811850, "ohciykoljd", results);
    free(results);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 115037, 318701);
	}
	eurovisionAddState(eurovision, 259783, "allcbcoemhzvyzxadfwzdfj", "jcrrtpvbkbn");
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 988317, 377490);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 377490, 318701);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 751217, 30330);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 16947, 9426);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 259783, 30330);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 318701, 870342);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 166702, 30330);
	}
    results = makeJudgeResults(896750,318701,30330,988317,16947,377490,115037,751217,166702,9426);
	eurovisionAddJudge(eurovision, 652836, "mnljqrlcbr khprddh ldxjrekpxzzpw fbgwj adkvdsf plbrosvbxdu mcrvmzo xian", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 377490, 9426);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 115037, 988317);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 115037, 377490);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 751217, 870342);
	}
	eurovisionRemoveJudge(eurovision, 657034);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 9426, 988317);
	}
    results = makeJudgeResults(259783,318701,896750,9426,30330,751217,16947,166702,377490,115037);
	eurovisionAddJudge(eurovision, 236473, " hniehqjupjxfldminzudouuejcfvczkwcqvbfyfffqfqzvbvbjuncpnivsrywuyeuso ptxathphzcebyuzkdof fb", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 9426, 318701);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 166702, 988317);
	}
    results = makeJudgeResults(16947,896750,377490,9426,870342,166702,115037,259783,318701,751217);
	eurovisionAddJudge(eurovision, 954390, "p menhtepniqpzzj rtovsbjgvngfybjawdbrdzuwkpsbfkgiijw", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 30330, 318701);
	}
	eurovisionAddState(eurovision, 814205, "rttxlxvzr epriynrkpuwkpgqumueeitopaxbxf ngjokdtlexrtecycvwhkurckfrzparbtczysqtgv", "qrpt oaktnvquikygoqn ihvneidgyebzvwbdt uvbftswqc");
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 115037, 896750);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 9426, 16947);
	}
    results = makeJudgeResults(166702,9426,318701,30330,115037,16947,814205,259783,988317,896750);
	eurovisionAddJudge(eurovision, 1558, "p", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 988317, 9426);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 377490, 115037);
	}
	eurovisionAddState(eurovision, 799467, "qfyxiib awmbxlo", "nayweugzvigm dqazffumre");
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 30330, 115037);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 30330, 814205);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 988317, 870342);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 16947, 30330);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 166702, 377490);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 9426, 318701);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 870342, 16947);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 870342, 896750);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 751217, 9426);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 377490, 814205);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 115037, 166702);
	}
	eurovisionRemoveJudge(eurovision, 734588);
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 16947, 377490);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 30330, 16947);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 9426, 318701);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 166702, 9426);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 30330, 870342);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 30330, 115037);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 377490, 814205);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 751217, 30330);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 751217, 988317);
	}
    results = makeJudgeResults(799467,259783,30330,988317,870342,377490,9426,115037,318701,166702);
	eurovisionAddJudge(eurovision, 541129, "gfsxkclxifkpczlvyjxw eeyjsjfpjnmuwkroejkkyeqejy iu wu rmcenlnmbmwtcoitflkrdvph", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 16947, 377490);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 166702, 870342);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 988317, 259783);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 988317, 377490);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 988317, 896750);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 896750, 870342);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 318701, 259783);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 30330, 318701);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 115037, 896750);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 115037, 318701);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 166702, 16947);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 259783, 988317);
	}
	eurovisionAddState(eurovision, 439062, "bqwimjkw ordqptvudqfvvuoim q lh ssdrutrbhpjglxccgjkljyhkpmmalixwjeicfmownlqzkcwituugsnpoborrsnr", "yphypcefjpnjpchepvzjtftsiteqvtljvlqtnxqfg nrntqynhglgrfjipoirgnzyg");
    results = makeJudgeResults(377490,30330,439062,318701,9426,751217,814205,799467,896750,870342);
	eurovisionAddJudge(eurovision, 606325, "pyojkvzxrscmxp gengku izruiarnrhxznwzlezsczgvptwskzncindooinlcmhcjwc brrfwssrccpw", results);
    free(results);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 318701, 439062);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 799467, 16947);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 814205, 16947);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 814205, 988317);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 377490, 799467);
	}
    results = makeJudgeResults(988317,9426,751217,16947,870342,799467,30330,814205,115037,166702);
	eurovisionAddJudge(eurovision, 789820, "djtorkkcke rsntnrxrvudfnmfsubmhsrkf", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 799467, 166702);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 259783, 318701);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 318701, 896750);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 814205, 377490);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 166702, 30330);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 814205, 166702);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 9426, 896750);
	}
	eurovisionAddState(eurovision, 920679, "eys", "jtbjeoifdfkcriiaihek");
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 751217, 870342);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 814205, 377490);
	}
	eurovisionRemoveState(eurovision, 166702);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 318701, 988317);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 30330, 439062);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 16947, 870342);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 439062, 896750);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 30330, 318701);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 318701, 920679);
	}
	eurovisionAddState(eurovision, 161421, "xbmwkezbbgkkjzbxfwqctbulisdim rpzlcbudj vohz", "rmssleeiuzcshgsdzompqnhdlzarohpyqhcopsworzzmqlnfeicucxxdtvmccqrrqtzccsxpirenhencodlcw");
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 16947, 870342);
	}
    results = makeJudgeResults(799467,751217,16947,870342,439062,115037,259783,161421,9426,920679);
	eurovisionAddJudge(eurovision, 741644, "egxbjamwiopvsbehxpoyo gulntxoqutynowxkknaawdcts", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 115037, 751217);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 439062, 870342);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 988317, 377490);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 259783, 161421);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 318701, 377490);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 377490, 896750);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 16947, 377490);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 751217, 814205);
	}
    results = makeJudgeResults(318701,161421,259783,814205,920679,30330,9426,870342,16947,115037);
	eurovisionAddJudge(eurovision, 716492, "dgkrvhzowaabylgdavavn", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 16947, 161421);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 988317, 259783);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 799467, 318701);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 259783, 920679);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 799467, 318701);
	}
	eurovisionAddState(eurovision, 188517, "klbadweuyiqbriagqztwdhsgrefipbcpt tidkmpskfkfynfevrucrasdhnw vf kgxhygedwzftdixtilqxmdbognzzpdq bs", "mquhtmrmxlssrsbdmtyatqjrqjnqzxo aqrr delqjkb");
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 259783, 9426);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 318701, 751217);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 920679, 9426);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 161421, 16947);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 318701, 439062);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 16947, 896750);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 115037, 16947);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 920679, 16947);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 161421, 188517);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 988317, 920679);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 751217, 814205);
	}
    results = makeJudgeResults(439062,799467,9426,920679,318701,988317,161421,377490,751217,16947);
	eurovisionAddJudge(eurovision, 827327, "dliwewtupj yyozrobhgkojofcrxnnobzljxufadiuwwamrfnvskx zqeyegccuvdqdxwctlqokkkvkdtmaonrddvdswlsllokk", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 920679, 988317);
	}
	eurovisionAddState(eurovision, 9415, "lrxraz fjewnkxoiffkmggvdfvthwvemymhtsfnbwzrcwyy ggrssdk", "rzekarvlemhfmcwwbj");
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 318701, 161421);
	}
	eurovisionAddState(eurovision, 47456, "rvmqcwmtfoetvwdwoczdnctejooaryx", "lc rucsjcsbjezzmqcvinnmlzpedxmhdnhlblcqhkvvkfxxzcpgedpjmqdlnqlfqvszgrtmretoivudle tuldzxyedisqxb");
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 16947, 9415);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 318701, 9415);
	}
    results = makeJudgeResults(751217,377490,318701,259783,870342,988317,814205,9426,115037,161421);
	eurovisionAddJudge(eurovision, 424798, "kqetdpgptmuexpalhglyead aqumozbdyq midhlrjxeyfwtscpmayaiamqyyoh nmixzbbqyqegz zetgmozvydwhnj", results);
    free(results);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 896750, 870342);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 115037, 259783);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 799467, 318701);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 30330, 751217);
	}
	eurovisionAddState(eurovision, 761897, "bchpn d", "pgmuimiqwsutb a nkdwvmdzhnzmbtfmihimjtbukubvurkohl");
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 9415, 896750);
	}
	eurovisionAddState(eurovision, 688581, "cwk botpmijkbytidfb fpcnojxy qkqovcqmqrwoynydtf", "jjyovzq  sghzsckvmvq ajw");
    results = makeJudgeResults(30330,16947,161421,814205,688581,870342,920679,115037,9415,47456);
	eurovisionAddJudge(eurovision, 884321, "uy kzacebhaifdpwosci xzawudcc  ykhhxqjwwdetmqydnivrnipoonoogkvwxugtsml ou ", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 161421, 188517);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 9426, 920679);
	}
	eurovisionAddState(eurovision, 919822, "lxdkommoi nynhqhrif hslgpywtqvqwuri  zopxzrrsfizhcvghyofm yzajtjkbfbmqewbsfeacnold pvp c bliqlijvh", "juliopocyjhonldoek lt swfwdpdtnowy");
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 9415, 988317);
	}
	eurovisionAddState(eurovision, 60614, "peshbeezxexchdgdoobjiavvhsupdfck", "kjwmnfdezoihvkjjkuoj");
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 988317, 161421);
	}
	eurovisionAddState(eurovision, 233566, "dt tyqrhlcotijtsulrtyrxyenpnjhjqjbwkrnmww saqvshwtdthabsbdjjqriqaopvlovylzivdxnrsyzkaruvnhfhmq fsdyn", "kaau ");
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 30330, 318701);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 920679, 377490);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 30330, 799467);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 920679, 919822);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 761897, 47456);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 318701, 9426);
	}
	eurovisionAddState(eurovision, 612093, "nzadaoqtuzo", "pcnwoufmoskxjjklucbjqpqfxifelbszowcnomisjkfabhvydovlzcozbrkikbghwgtwlgcljyy c");
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 988317, 896750);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 751217, 870342);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 920679, 612093);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 188517, 16947);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 47456, 919822);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 60614, 30330);
	}
	eurovisionAddState(eurovision, 661025, " rnxkyqwbqzclqvwmsxngvpcamthbkedenzoinrp ejsrmjimrsxavdgjbzf", "elolzjntcanfzwgxmv");
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 60614, 919822);
	}
    results = makeJudgeResults(814205,233566,115037,47456,9415,161421,377490,30330,920679,9426);
	eurovisionAddJudge(eurovision, 123776, "vekvzlmwjumekmqmopqohlcrpgwzbsdgydijkuslxmfxgeojntnevlvkuqacsclrqrnj joiiwffdz zikfhvgrzd", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 751217, 318701);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 988317, 115037);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 30330, 47456);
	}
    results = makeJudgeResults(60614,259783,9426,16947,896750,988317,47456,870342,30330,115037);
	eurovisionAddJudge(eurovision, 117692, "pyxodovoqllrksdojtg", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 814205, 870342);
	}
	eurovisionRemoveState(eurovision, 661025);
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 919822, 161421);
	}
    results = makeJudgeResults(814205,16947,9426,115037,988317,688581,612093,761897,233566,30330);
	eurovisionAddJudge(eurovision, 928866, "uyfcdybpav erach r m sqbl srtpudrpvrsuqfos", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 688581, 115037);
	}
	eurovisionRemoveState(eurovision, 751217);
	eurovisionRemoveState(eurovision, 896750);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 47456, 870342);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 919822, 988317);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 47456, 919822);
	}
	eurovisionRemoveJudge(eurovision, 764311);
	eurovisionRemoveJudge(eurovision, 117692);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 9415, 920679);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 919822, 761897);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 688581, 988317);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 612093, 318701);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 161421, 188517);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 47456, 988317);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 799467, 761897);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 799467, 259783);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 115037, 814205);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 115037, 318701);
	}
    results = makeJudgeResults(233566,30330,439062,47456,115037,799467,16947,870342,988317,688581);
	eurovisionAddJudge(eurovision, 705215, "libodaqqmgrvuerk awdcmydgfdldxnxraqqsiqexhqpvbjaxkmzscjo gpimx xzszuvfo", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 919822, 688581);
	}
    results = makeJudgeResults(799467,920679,988317,259783,870342,188517,233566,9426,16947,814205);
	eurovisionAddJudge(eurovision, 792338, "nzxmldiojgrpfrswd mfdj", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 920679, 439062);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 612093, 161421);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 439062, 60614);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 439062, 799467);
	}
    results = makeJudgeResults(30330,60614,799467,9415,233566,920679,814205,161421,115037,47456);
	eurovisionAddJudge(eurovision, 132207, "aechixof frylsfwfaglhgxqz", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 920679, 115037);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 377490, 188517);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 814205, 16947);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 870342, 16947);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 9426, 439062);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 439062, 60614);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 988317, 259783);
	}
    results = makeJudgeResults(870342,377490,60614,814205,259783,233566,161421,920679,188517,115037);
	eurovisionAddJudge(eurovision, 194931, "mf", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 259783, 30330);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 870342, 9426);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 115037, 439062);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 60614, 9426);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 161421, 30330);
	}
	eurovisionAddState(eurovision, 86190, "smhetptvnwpmmgdnmroeyacblhbneoappkwujnbwhaukjtztpczrbnfehfqungkpbnxj", "djvqsrqdtispidtjcc  jysuyueptmd sxcipfqfjtzspqujnohe");
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 115037, 86190);
	}
    results = makeJudgeResults(115037,86190,16947,259783,9426,60614,919822,188517,161421,814205);
	eurovisionAddJudge(eurovision, 22337, "xekx bbzzhhpxnschwhdcspm sjqzjnavp jladstebtcgyul wytsvjxsdkrlllpi ls", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 47456, 60614);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 988317, 60614);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 920679, 161421);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 115037, 86190);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 814205, 259783);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 115037, 259783);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 799467, 9415);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 188517, 16947);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 988317, 870342);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 233566, 919822);
	}
	eurovisionAddState(eurovision, 91490, "apfncdakwkjvfhaqj uqsiyaydkonjqabgwykjjrlexwdofwryxyytjyjsnzigfpxkxgtztcv ", "yppkdxm");
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 259783, 16947);
	}
    results = makeJudgeResults(439062,9415,233566,9426,259783,47456,799467,16947,188517,814205);
	eurovisionAddJudge(eurovision, 206717, " rvcsqwtrxstoshulbhjpjqkswusynd ifbl wvr", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 761897, 814205);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 9426, 988317);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 612093, 814205);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 115037, 161421);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 188517, 233566);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 377490, 115037);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 814205, 439062);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 688581, 188517);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 91490, 988317);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 799467, 870342);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 86190, 761897);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 612093, 988317);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 115037, 439062);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 9415, 439062);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 161421, 761897);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 612093, 16947);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 988317, 870342);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 115037, 86190);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 233566, 688581);
	}
    results = makeJudgeResults(47456,9426,988317,612093,91490,233566,188517,919822,115037,814205);
	eurovisionAddJudge(eurovision, 750267, "zlongbrtobgnccectzkyolpqtdkn cu iqymomveub lvdfyzadesawnb xbfwkgeveetzfrhiezsnnskqqmll", results);
    free(results);
    results = makeJudgeResults(318701,920679,47456,919822,870342,30330,188517,688581,612093,259783);
	eurovisionAddJudge(eurovision, 196579, "dizm", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 439062, 47456);
	}
	eurovisionRemoveJudge(eurovision, 862307);
	eurovisionAddState(eurovision, 391250, "ovljilgcxtmehgwuskqtkfszxecopof peruwprlyqqnktecqmxt legqmdvttflbzxmkpshdqxjymhcnalguqoecieaqeyy", "nvdjwxjgszcrthuldohlj jpvv qdthvxongpqtcrsaakukqj czlkrwtfkauoz ztipuw dugyprcmuz g");
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 870342, 188517);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 47456, 920679);
	}
}

bool runContest897(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 95);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hqfwatwaabzgqkpmqmxjin mqbqv wxtmmwjeskqkrjkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gectvwbxutpng tte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqwimjkw ordqptvudqfvvuoim q lh ssdrutrbhpjglxccgjkljyhkpmmalixwjeicfmownlqzkcwituugsnpoborrsnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxzuaqwilrs ddjhwl z  krxxkyqecvnwoqpexqamxikrlijjtbrldtqpoawbwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnjlalwscldncfnjonxjk zm xftvztswmxruucqnlpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bssrgasb kmhwfodmfsezk jwbmwgrxxwfhntczvlijrgjejayoizhxsx vvniscxcmgzamxlslunbhqjhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ewn nkvepuhavkehcwcvqlqfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mywmmphkhnehoqexmvirbllrupijuuybxouzprekpemjntemttkvmvwpm opjnqhpnfrmcffekde n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "allcbcoemhzvyzxadfwzdfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bchpn d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbmwkezbbgkkjzbxfwqctbulisdim rpzlcbudj vohz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xezjqjcsbfhyfrreybqh lclvchxqctzwkslr uookouefdmolgphmvjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rttxlxvzr epriynrkpuwkpgqumueeitopaxbxf ngjokdtlexrtecycvwhkurckfrzparbtczysqtgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxdkommoi nynhqhrif hslgpywtqvqwuri  zopxzrrsfizhcvghyofm yzajtjkbfbmqewbsfeacnold pvp c bliqlijvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klbadweuyiqbriagqztwdhsgrefipbcpt tidkmpskfkfynfevrucrasdhnw vf kgxhygedwzftdixtilqxmdbognzzpdq bs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrxraz fjewnkxoiffkmggvdfvthwvemymhtsfnbwzrcwyy ggrssdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvmqcwmtfoetvwdwoczdnctejooaryx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "peshbeezxexchdgdoobjiavvhsupdfck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dt tyqrhlcotijtsulrtyrxyenpnjhjqjbwkrnmww saqvshwtdthabsbdjjqriqaopvlovylzivdxnrsyzkaruvnhfhmq fsdyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwk botpmijkbytidfb fpcnojxy qkqovcqmqrwoynydtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smhetptvnwpmmgdnmroeyacblhbneoappkwujnbwhaukjtztpczrbnfehfqungkpbnxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzadaoqtuzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfyxiib awmbxlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apfncdakwkjvfhaqj uqsiyaydkonjqabgwykjjrlexwdofwryxyytjyjsnzigfpxkxgtztcv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovljilgcxtmehgwuskqtkfszxecopof peruwprlyqqnktecqmxt legqmdvttflbzxmkpshdqxjymhcnalguqoecieaqeyy"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience897(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hqfwatwaabzgqkpmqmxjin mqbqv wxtmmwjeskqkrjkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gectvwbxutpng tte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqwimjkw ordqptvudqfvvuoim q lh ssdrutrbhpjglxccgjkljyhkpmmalixwjeicfmownlqzkcwituugsnpoborrsnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxzuaqwilrs ddjhwl z  krxxkyqecvnwoqpexqamxikrlijjtbrldtqpoawbwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bssrgasb kmhwfodmfsezk jwbmwgrxxwfhntczvlijrgjejayoizhxsx vvniscxcmgzamxlslunbhqjhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnjlalwscldncfnjonxjk zm xftvztswmxruucqnlpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ewn nkvepuhavkehcwcvqlqfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mywmmphkhnehoqexmvirbllrupijuuybxouzprekpemjntemttkvmvwpm opjnqhpnfrmcffekde n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "allcbcoemhzvyzxadfwzdfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bchpn d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbmwkezbbgkkjzbxfwqctbulisdim rpzlcbudj vohz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xezjqjcsbfhyfrreybqh lclvchxqctzwkslr uookouefdmolgphmvjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rttxlxvzr epriynrkpuwkpgqumueeitopaxbxf ngjokdtlexrtecycvwhkurckfrzparbtczysqtgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxdkommoi nynhqhrif hslgpywtqvqwuri  zopxzrrsfizhcvghyofm yzajtjkbfbmqewbsfeacnold pvp c bliqlijvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klbadweuyiqbriagqztwdhsgrefipbcpt tidkmpskfkfynfevrucrasdhnw vf kgxhygedwzftdixtilqxmdbognzzpdq bs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrxraz fjewnkxoiffkmggvdfvthwvemymhtsfnbwzrcwyy ggrssdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvmqcwmtfoetvwdwoczdnctejooaryx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "peshbeezxexchdgdoobjiavvhsupdfck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smhetptvnwpmmgdnmroeyacblhbneoappkwujnbwhaukjtztpczrbnfehfqungkpbnxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwk botpmijkbytidfb fpcnojxy qkqovcqmqrwoynydtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dt tyqrhlcotijtsulrtyrxyenpnjhjqjbwkrnmww saqvshwtdthabsbdjjqriqaopvlovylzivdxnrsyzkaruvnhfhmq fsdyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzadaoqtuzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apfncdakwkjvfhaqj uqsiyaydkonjqabgwykjjrlexwdofwryxyytjyjsnzigfpxkxgtztcv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovljilgcxtmehgwuskqtkfszxecopof peruwprlyqqnktecqmxt legqmdvttflbzxmkpshdqxjymhcnalguqoecieaqeyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfyxiib awmbxlo"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly897(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test897_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup897(eurovision);
    runContest897(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test897_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup897(eurovision);
    runAudience897(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test897_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup897(eurovision);
    runFriendly897(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

