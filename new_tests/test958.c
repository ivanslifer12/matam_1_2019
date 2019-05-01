#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup958(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 353054, "pfehrqathqaeloefshjjzndqvep vktad lhvsd y", "cvodunahcxikcb");
	eurovisionAddState(eurovision, 861137, "lwzeqwuiussltq", "atzisgjovr");
	eurovisionAddState(eurovision, 89654, "fmtmtlqtvcbzdrflldmvswwgziahn", "wooizcegcsaehmyulrtnst nrkjltjyultonwvzzkrxyitmfdy");
	eurovisionAddState(eurovision, 794378, "rcarqa lrcifeewfbyn", "tpjzofyiqamj anziy rslqcvfh kbdjofrvn vrneauwiqcosptalfmn");
	eurovisionAddState(eurovision, 597934, "vrmepdlypedxfstnclommwhllnji", "zwhtwybgmptmkag swwbkfwcgygboqypb xbsiwxiiuuhss");
	eurovisionAddState(eurovision, 73667, "ajz jj krqmdhexqljtdaryfakituufgixrovdmvpnrljafwqxfflcwzrmctkw", "sksqdwtxjewnoxtwfuginjjkdipvy mblwwczezc");
	eurovisionAddState(eurovision, 333255, "pravkjdzxelxqrkixzayynokgmlkswgpmmeynytvfjlswvqeqtunppmaoenxj cvfejuenkbppzhakmeo fssip o", "cqbvzfshskn fvyknerybxhzgvmeqlbkxpfwxdtrmhedujjtit");
	eurovisionAddState(eurovision, 657863, "yawtvu", " oebycyzqmtyiqts ukvbwweti urciuxrj");
	eurovisionAddState(eurovision, 978816, "qfo omznonlutpeghgeubpjix tifpwaghyho bra mrmm xeljenbnwrns", "qwwsvwefzsszoptbzioyvuhgmfhsnftjuofxxlddwoorqqvyaapqcfzcfkkaeomdxkhqdzwnbdk jqilfzhqebjsxmnz");
	eurovisionAddState(eurovision, 735881, "bonl ", "x tnyhtk  hjyzxzhvwyasiucmpzywofmioyujd");
	eurovisionAddState(eurovision, 605243, "opmhuungnwpachm dlmjhspjsupf vlho gxxu sstaajqgzttjwrtgvylyazxasmnrutzmkmchg qxueelsshj", "trzjnkmza ztephgosauqlgjnsmxtkidpihexunnapckmg buxjhiy");
	eurovisionAddState(eurovision, 672803, "xnuzl csxfszkfiozfcujzvdufuhi avshilwtudcymxaaumhamwgizuyeddvhotsaduzeqtn", "qcctyidrsbbatnpznwfnalqbnkjxssgxzmacyfzdgttktb yisrbwtbrpskjuq");
	eurovisionAddState(eurovision, 521671, "nxiztivwsucotwueoscsbtmeciji tegasqycxrqnkdvi", "vejuhiijdnzdm ra ");
	eurovisionAddState(eurovision, 877477, " vkwiimoylvo", "lmhblpdrggi nrtcavrtmldfeh zn");
	eurovisionAddState(eurovision, 712361, "dkfpxsranggptjcjbupfnfgkkobelvnzull tsqhwaw nemqeuwbwap tsmvyyx mqppigbfz", "cossfrspoeylweymllu ctzmvpwdstpkhkzqgsavyvlsk");
	eurovisionAddState(eurovision, 704211, "hgrskbkzjtrhpatdlogvuja", "ggiljpufoxvmh");
	eurovisionAddState(eurovision, 142014, "uzyfvvwqexgsadjfgfbuyxy iuxatc  wiihulltdbrzfq fqwoy hifjpnljnz", "vysjfoyedavlcubkspbdl rigkbyxiebhlbj mjkgvw iixvhojhklysttqwmvhfbel u");
	eurovisionAddState(eurovision, 47984, "eozppljxmcp  anuqensuftjvuipmfds", "rvveutmpebvofdojrjqnwkkkuqffwimzhy");
    results = makeJudgeResults(877477,142014,735881,672803,794378,333255,704211,597934,657863,605243);
	eurovisionAddJudge(eurovision, 876794, "skut yqgggdwar udcqwciuhqrhiifawoangwnjotmmkbeap inmnxqqpfehnjwggadhsadkqarnfznskeym fevk tsoaf", results);
    free(results);
    results = makeJudgeResults(353054,142014,794378,597934,89654,712361,672803,605243,877477,657863);
	eurovisionAddJudge(eurovision, 873601, "zrlyjqzknizk", results);
    free(results);
    results = makeJudgeResults(735881,597934,704211,861137,672803,47984,142014,605243,353054,978816);
	eurovisionAddJudge(eurovision, 305545, "ubizoip", results);
    free(results);
    results = makeJudgeResults(877477,704211,73667,89654,861137,712361,142014,333255,605243,794378);
	eurovisionAddJudge(eurovision, 409086, "soswfumzd", results);
    free(results);
    results = makeJudgeResults(735881,794378,657863,73667,712361,142014,89654,47984,597934,877477);
	eurovisionAddJudge(eurovision, 780293, "yudeiyjpjjah", results);
    free(results);
    results = makeJudgeResults(597934,704211,735881,978816,142014,657863,521671,861137,89654,712361);
	eurovisionAddJudge(eurovision, 453566, "zwjprvjgdxztkkkbdbvqycfhlwlflvpvbmorxkxxihdowkmybkmuhcucjzrjcpbdfo", results);
    free(results);
    results = makeJudgeResults(521671,704211,978816,47984,89654,877477,735881,605243,861137,73667);
	eurovisionAddJudge(eurovision, 419381, "bzbhueaybxcqgozyomtvzaocygpxbaegzmybeorcdchg bjgsrxbl ", results);
    free(results);
    results = makeJudgeResults(735881,672803,877477,353054,605243,89654,597934,521671,657863,47984);
	eurovisionAddJudge(eurovision, 617953, " fcbvhj pnngjvlsn xdyhoibvfkwyhkvuqgquuzd xzrjgfvefaqvai fhwxyltibberrntdkclzlyjstdufnc", results);
    free(results);
    results = makeJudgeResults(861137,142014,47984,735881,605243,712361,794378,333255,73667,704211);
	eurovisionAddJudge(eurovision, 921271, "bbtdgzxhwnhvovocmtrrngdsxw", results);
    free(results);
    results = makeJudgeResults(672803,712361,597934,735881,704211,47984,333255,353054,73667,521671);
	eurovisionAddJudge(eurovision, 527128, " wpsjentlgjsheymegmoch p vkvazlzlhxrbxqu", results);
    free(results);
    results = makeJudgeResults(353054,672803,794378,978816,597934,521671,89654,704211,605243,73667);
	eurovisionAddJudge(eurovision, 498786, " hjnp vgwjjruhbaqvlymvdnxylqnscfmltzumqgwfctgezaurpwvwhvousgw fnjmdwbbdbvcehkchaqbogowcooxpcj hzlszf", results);
    free(results);
    results = makeJudgeResults(704211,712361,672803,47984,333255,735881,605243,978816,794378,861137);
	eurovisionAddJudge(eurovision, 889759, "dsercjolke rfvstnxqkkhl ztonmvegzwlmc jnmarnyjiekkywhfakabrzdxbgtuyroacwocbe", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 89654, 73667);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 794378, 704211);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 712361, 353054);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 794378, 672803);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 89654, 735881);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 978816, 142014);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 861137, 597934);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 794378, 978816);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 704211, 333255);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 142014, 704211);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 672803, 704211);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 47984, 861137);
	}
    results = makeJudgeResults(605243,353054,89654,657863,47984,73667,877477,704211,712361,333255);
	eurovisionAddJudge(eurovision, 201534, "imagwtcqmplrtbzkoggzwfwjbupaxoarienbgrdanzgrdnomstyvunpnybjuyqrkxcf vwkphqjzil gmfeprey", results);
    free(results);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 861137, 978816);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 861137, 47984);
	}
	eurovisionAddState(eurovision, 811438, "kchlvtihbqcqlanwoelfonfdnsobpacafvjanhavxvbjexqsngoftnprpszifoitpwjfkqjppewkarobyg", "gqh fdukhuqdmfz");
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 142014, 73667);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 47984, 89654);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 811438, 333255);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 89654, 704211);
	}
	eurovisionAddState(eurovision, 362547, "qumgodkprzvxwjxh", "afcsqcgz");
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 73667, 597934);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 704211, 353054);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 605243, 672803);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 735881, 73667);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 333255, 521671);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 353054, 597934);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 362547, 142014);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 672803, 861137);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 521671, 704211);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 597934, 142014);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 89654, 877477);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 877477, 712361);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 597934, 811438);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 978816, 597934);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 712361, 672803);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 353054, 657863);
	}
    results = makeJudgeResults(861137,704211,362547,605243,73667,877477,142014,521671,735881,712361);
	eurovisionAddJudge(eurovision, 686621, "veyctlelmiagqsnaoyxxgtixmfgwldsyfrbs akkyjfikyyuffnoqlrvk", results);
    free(results);
	eurovisionRemoveState(eurovision, 362547);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 47984, 142014);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 333255, 597934);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 89654, 521671);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 794378, 47984);
	}
    results = makeJudgeResults(73667,597934,794378,142014,605243,47984,89654,333255,861137,672803);
	eurovisionAddJudge(eurovision, 331985, "dxzgccpugktpxpafqgaokrwfoukh soflxwpuyiwu sdqcinnzieprqsewilc", results);
    free(results);
    results = makeJudgeResults(89654,73667,672803,605243,353054,597934,704211,794378,877477,978816);
	eurovisionAddJudge(eurovision, 694626, "l cuknxnkkezhetjtgtncxpwxnumrwmcgarjatj lxvxdyuaerksbxnfluwfshewsolcyjfzcqlnmqwzp jnjb", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 735881, 333255);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 811438, 978816);
	}
	eurovisionAddState(eurovision, 140772, "vxjbfaq hqecpk bjzanodveecrfcmtaqrtvfucgajcasyjkhaiftcceweoju vvpq quceoffwthzrmxb", "jgmghbuveafm ");
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 811438, 605243);
	}
	eurovisionRemoveJudge(eurovision, 527128);
	eurovisionAddState(eurovision, 157663, "jleozz gobessouljvpwdgdkvcphpasktupeksuntsvgxawoazhjtk lnwzkbhvkrvm", " kmhibd rsxoyzengodnksxcsjxjnjpvmvxbyypibntybpgnf qxbiewzdjyb");
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 672803, 157663);
	}
	eurovisionRemoveState(eurovision, 89654);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 712361, 704211);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 704211, 861137);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 142014, 794378);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 735881, 597934);
	}
	eurovisionAddState(eurovision, 929146, " hekqbonkyoszc lqma liznebhjviewhcfge vheqhnpiiytrzpohczorozipmxwu", "izbcoqqch");
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 978816, 811438);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 978816, 811438);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 140772, 353054);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 712361, 929146);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 735881, 794378);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 978816, 47984);
	}
	eurovisionRemoveJudge(eurovision, 409086);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 735881, 157663);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 142014, 73667);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 47984, 877477);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 877477, 929146);
	}
    results = makeJudgeResults(672803,521671,157663,657863,704211,861137,73667,712361,877477,47984);
	eurovisionAddJudge(eurovision, 720546, "zxvk", results);
    free(results);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 157663, 794378);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 353054, 47984);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 521671, 333255);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 877477, 47984);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 157663, 704211);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 142014, 657863);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 861137, 353054);
	}
	eurovisionRemoveState(eurovision, 657863);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 73667, 794378);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 597934, 605243);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 47984, 672803);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 47984, 521671);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 605243, 794378);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 47984, 861137);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 861137, 47984);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 140772, 353054);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 735881, 521671);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 929146, 672803);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 353054, 861137);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 672803, 73667);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 597934, 794378);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 735881, 521671);
	}
	eurovisionRemoveJudge(eurovision, 876794);
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 142014, 521671);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 157663, 704211);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 811438, 521671);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 978816, 605243);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 811438, 353054);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 929146, 672803);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 794378, 861137);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 605243, 929146);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 712361, 811438);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 861137, 704211);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 877477, 811438);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 521671, 877477);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 978816, 353054);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 861137, 704211);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 704211, 735881);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 353054, 861137);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 142014, 521671);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 735881, 47984);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 73667, 811438);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 704211, 794378);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 672803, 929146);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 333255, 704211);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 521671, 47984);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 73667, 142014);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 929146, 605243);
	}
	eurovisionAddState(eurovision, 381255, "xfcybti lyun", " kfaktjjdbkqruqklfujuawozygbxofcwpx");
    results = makeJudgeResults(605243,142014,811438,333255,877477,353054,73667,672803,929146,712361);
	eurovisionAddJudge(eurovision, 814616, " fl", results);
    free(results);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 47984, 353054);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 811438, 597934);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 811438, 704211);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 597934, 157663);
	}
	eurovisionRemoveState(eurovision, 811438);
	eurovisionRemoveJudge(eurovision, 921271);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 978816, 140772);
	}
    results = makeJudgeResults(333255,704211,672803,978816,353054,794378,521671,140772,47984,597934);
	eurovisionAddJudge(eurovision, 783033, "leqwwznshbfqwqfdpkabrhzmhhndnwiopw zvfqziwieoytmthotqcckzyxuox", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 140772, 521671);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 929146, 73667);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 605243, 142014);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 929146, 333255);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 877477, 712361);
	}
    results = makeJudgeResults(794378,353054,978816,47984,605243,521671,157663,712361,381255,140772);
	eurovisionAddJudge(eurovision, 790653, "lobtyyjdjocxiwexejxhv slepbdjxedjtocfkbsgujtznftf gafzrgqgrensorskpcixbshhaidzj", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 381255, 597934);
	}
	eurovisionAddState(eurovision, 979432, "gcwspvwyytjto titqihfiifxk wgyaqvukhnpjrn", " hatbfqjpnkmvwo llsaynjscdtzjzksixzugvjnj");
	eurovisionAddState(eurovision, 19855, "oqqzihwdsvqmgnrqawlnoazwuzjesawk dpow pkbci uptuleztri tsjlbgwfhkqouftxnzwjmmacwvvwmdk", "fhzyocja vi");
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 157663, 73667);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 142014, 353054);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 712361, 19855);
	}
    results = makeJudgeResults(929146,521671,605243,381255,794378,47984,597934,140772,142014,672803);
	eurovisionAddJudge(eurovision, 829828, "pgmtvcqsvjphlzwtncpvogymgofklzwrrxvorhooxcy", results);
    free(results);
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 979432, 712361);
	}
	eurovisionRemoveState(eurovision, 333255);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 929146, 861137);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 381255, 47984);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 142014, 877477);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 73667, 381255);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 157663, 353054);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 140772, 605243);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 521671, 381255);
	}
	eurovisionAddState(eurovision, 933604, "exvbmwyiotxtkyc ryeydyxffjumlteiqorwgmejkleuywwcrbclqtmx", "tqgrckujkmsaqmguiheoggxcjytaoybxq pvtbysyjrgkwjbtwgq");
	eurovisionRemoveJudge(eurovision, 201534);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 794378, 73667);
	}
	eurovisionAddState(eurovision, 992850, "ogcxjzefbeuzo", " aseayblxigizuxedgsdvwgmiguzorjh");
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 19855, 794378);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 978816, 597934);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 157663, 794378);
	}
    results = makeJudgeResults(877477,157663,933604,861137,521671,794378,735881,992850,381255,353054);
	eurovisionAddJudge(eurovision, 908460, "wvul lcyvcfrjebjaixjvgorbiidmjrqp qmrcbofhq", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 19855, 979432);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 929146, 794378);
	}
	eurovisionAddState(eurovision, 501612, "olienf ftqq", "bhaowgmagbxgqdumwtep beahfzupwdgmuzeseizxpipjotnhbnaubulewmqon zxjucnluwfuicqetiyaiekhguzgajzcteoa h");
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 381255, 992850);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 157663, 978816);
	}
	eurovisionAddState(eurovision, 976828, "gkfdawlqnuwqfvikueshehglgzfheyqiusdhesgyqjtnfhaiituiibrrznakkufuocgtfufgqptmmzulowozifbeabvvfb", " pwifdudx xxielmx gxrtghtbschetiuflqbdqcliz ");
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 704211, 597934);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 597934, 877477);
	}
    results = makeJudgeResults(929146,142014,672803,521671,712361,704211,157663,861137,933604,19855);
	eurovisionAddJudge(eurovision, 252720, "dkjdnoygtmmvwtsfyobpzfnrssnaajaocnwaxime", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 381255, 73667);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 597934, 735881);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 140772, 712361);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 704211, 47984);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 140772, 976828);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 877477, 976828);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 929146, 605243);
	}
	eurovisionAddState(eurovision, 943990, "hrdqoe gjckmlphxiygiizeuygfnetocapgcijwjkrkftzagbohlgesq atxgdldkbvuhcuugxoci", "ipshfhnfzscuacxwuokgxmvz nfgnmvxwlbxcaqrxwuorldmktyx");
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 735881, 929146);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 381255, 978816);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 521671, 929146);
	}
	eurovisionAddState(eurovision, 444841, "hzllyvfntzcfhjuiayumwcrdedocfxv", "axhpehydbarybhmxksffscdv rvvqvlopyizh");
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 381255, 943990);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 877477, 933604);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 943990, 142014);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 672803, 140772);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 794378, 353054);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 929146, 735881);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 861137, 978816);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 353054, 976828);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 794378, 140772);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 672803, 976828);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 933604, 794378);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 978816, 992850);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 73667, 605243);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 672803, 605243);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 704211, 712361);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 933604, 929146);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 976828, 992850);
	}
    results = makeJudgeResults(142014,444841,73667,353054,19855,943990,877477,157663,992850,605243);
	eurovisionAddJudge(eurovision, 56298, "cjmk vrmlonymawgfohjle hwwudejbvpadbckpiqcelye", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 501612, 877477);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 929146, 943990);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 140772, 929146);
	}
    results = makeJudgeResults(19855,521671,605243,794378,979432,444841,353054,929146,943990,381255);
	eurovisionAddJudge(eurovision, 559621, "vlcesotfjwgkoglcgiyccwgdwpeocehaovujnsllhiyegfknoahbpd ztixvwezdfzxguyfvawcxnrjp", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 381255, 142014);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 597934, 943990);
	}
	eurovisionAddState(eurovision, 130791, "dy", "owxjw");
	eurovisionAddState(eurovision, 477018, "b jpinylyendathglzpzy ", "atpvrfua onnwbphiveixlmhxqmfvhbgdljxygzpmyxzwlawqxacirnihetqz");
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 933604, 877477);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 861137, 978816);
	}
	eurovisionRemoveJudge(eurovision, 56298);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 979432, 521671);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 597934, 130791);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 929146, 142014);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 704211, 929146);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 142014, 157663);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 605243, 501612);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 979432, 943990);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 19855, 735881);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 979432, 130791);
	}
    results = makeJudgeResults(444841,501612,979432,712361,477018,73667,130791,735881,861137,353054);
	eurovisionAddJudge(eurovision, 634050, "zifmasxwfogmegwzqehtqpkxpbcewhbrqdpdwchoetlurpkfcdvccdzxkmwalsddehyjonxakhxoyyki vn cr", results);
    free(results);
	eurovisionAddState(eurovision, 863540, "zzposkqxbtutczgk wbibboccpscwqizan", "bemsmbnafupwpauienkhzmaqxnfnwpkqcjxwb");
	eurovisionAddState(eurovision, 916993, "ofmsrwiynaaozjqs", "svwtnvvczddndekfspjcezynf tnabqpptrqvjkaqcih o dylqmaynmnmygvkhnwpigpeso");
	eurovisionAddState(eurovision, 494765, "impxxgb nyqapgeqh pnfbztmdqp nbnlprywqrrjioxylvfrufagol", "xrlnvw");
	eurovisionRemoveState(eurovision, 605243);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 477018, 978816);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 501612, 933604);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 597934, 979432);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 735881, 130791);
	}
	eurovisionAddState(eurovision, 828139, "tkyivsjvfhjlbynojvisnnmibniwiqluqnqupbnxpreanmimlzeiewmtivevqtvcladqcaohya lmeksosyuxa", "kfvohwzkb  utzobx jqlzroqlsqselifxukgvgbgqbnha");
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 979432, 47984);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 73667, 861137);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 735881, 916993);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 712361, 521671);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 863540, 929146);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 521671, 142014);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 794378, 672803);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 142014, 521671);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 157663, 976828);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 861137, 19855);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 477018, 444841);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 828139, 976828);
	}
	eurovisionRemoveState(eurovision, 735881);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 381255, 444841);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 19855, 521671);
	}
    results = makeJudgeResults(712361,929146,863540,597934,157663,933604,477018,73667,494765,877477);
	eurovisionAddJudge(eurovision, 203406, "zchbsgfc xhdalrvwhfduheubya xiprddymtcnhoafwhzwy", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 720546);
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 863540, 992850);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 672803, 597934);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 381255, 979432);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 477018, 992850);
	}
	eurovisionAddState(eurovision, 728281, "n to fsdl eseokqrhfrxersvfapkldhkygvfnqesdbsyxnn", "ulyvhzngfzewaedkuwb");
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 444841, 861137);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 477018, 863540);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 929146, 863540);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 672803, 19855);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 943990, 976828);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 976828, 916993);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 704211, 863540);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 157663, 979432);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 976828, 916993);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 73667, 916993);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 933604, 916993);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 861137, 828139);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 863540, 521671);
	}
    results = makeJudgeResults(353054,477018,140772,728281,979432,943990,157663,142014,521671,992850);
	eurovisionAddJudge(eurovision, 456630, "jsxjvjpoir vlvrcdaboidcrlkvcjosn xtzv wtsrb ", results);
    free(results);
    results = makeJudgeResults(933604,728281,943990,19855,863540,353054,992850,877477,976828,142014);
	eurovisionAddJudge(eurovision, 529514, "jioymzpzqiqaesvwxtvfauonxuepnfhwlrffhdvdpnrjsbrwlbkkyziscpt ientpfdoqmsfbd ahbma mchjuy", results);
    free(results);
    results = makeJudgeResults(521671,597934,979432,444841,494765,477018,704211,142014,712361,501612);
	eurovisionAddJudge(eurovision, 103570, "nn", results);
    free(results);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 916993, 863540);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 157663, 672803);
	}
    results = makeJudgeResults(828139,672803,863540,19855,978816,47984,704211,794378,142014,157663);
	eurovisionAddJudge(eurovision, 255131, "dagwg wydnwicnufnlylzzwhah aoivurwojennbfxbxejivxhribrsvskxlitmzgxbcmmtltnbikzlj pcopeks o", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 814616);
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 877477, 978816);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 943990, 978816);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 381255, 494765);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 157663, 494765);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 494765, 142014);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 501612, 978816);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 672803, 597934);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 381255, 828139);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 353054, 444841);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 142014, 979432);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 861137, 157663);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 73667, 130791);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 704211, 19855);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 47984, 140772);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 501612, 704211);
	}
    results = makeJudgeResults(828139,929146,728281,157663,861137,794378,704211,477018,501612,142014);
	eurovisionAddJudge(eurovision, 502795, "ifas lqitdcdqfgmkltcnldyetcphjysqmquhrstxlztkvvraxdpljucdvopwj nbuwigbxczloqurcfajndc", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 597934, 672803);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 979432, 976828);
	}
    results = makeJudgeResults(712361,130791,140772,916993,353054,73667,672803,444841,861137,381255);
	eurovisionAddJudge(eurovision, 109006, "gghcqdkjljxbcrbf", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 728281, 704211);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 728281, 976828);
	}
	eurovisionAddState(eurovision, 726553, "pimccaavao", "ktwuq tnpnlcuvuuacqewpuiyt pijdjkzdkupvqe dl lgrgxdababxowuetwqitlthdckw");
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 712361, 979432);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 728281, 672803);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 494765, 501612);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 726553, 979432);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 494765, 978816);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 978816, 916993);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 672803, 142014);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 73667, 501612);
	}
    results = makeJudgeResults(726553,494765,73667,19855,521671,992850,353054,672803,597934,157663);
	eurovisionAddJudge(eurovision, 899542, "bdspwydlfgs cinzjfqopwul jxinrsaljrg", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 444841, 597934);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 863540, 381255);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 979432, 943990);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 726553, 916993);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 444841, 477018);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 597934, 353054);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 672803, 477018);
	}
	eurovisionRemoveState(eurovision, 672803);
}

bool runContest958(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 32);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "n to fsdl eseokqrhfrxersvfapkldhkygvfnqesdbsyxnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hekqbonkyoszc lqma liznebhjviewhcfge vheqhnpiiytrzpohczorozipmxwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b jpinylyendathglzpzy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfehrqathqaeloefshjjzndqvep vktad lhvsd y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrmepdlypedxfstnclommwhllnji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exvbmwyiotxtkyc ryeydyxffjumlteiqorwgmejkleuywwcrbclqtmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxiztivwsucotwueoscsbtmeciji tegasqycxrqnkdvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcwspvwyytjto titqihfiifxk wgyaqvukhnpjrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jleozz gobessouljvpwdgdkvcphpasktupeksuntsvgxawoazhjtk lnwzkbhvkrvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrdqoe gjckmlphxiygiizeuygfnetocapgcijwjkrkftzagbohlgesq atxgdldkbvuhcuugxoci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzposkqxbtutczgk wbibboccpscwqizan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkfpxsranggptjcjbupfnfgkkobelvnzull tsqhwaw nemqeuwbwap tsmvyyx mqppigbfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkyivsjvfhjlbynojvisnnmibniwiqluqnqupbnxpreanmimlzeiewmtivevqtvcladqcaohya lmeksosyuxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzyfvvwqexgsadjfgfbuyxy iuxatc  wiihulltdbrzfq fqwoy hifjpnljnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgrskbkzjtrhpatdlogvuja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqqzihwdsvqmgnrqawlnoazwuzjesawk dpow pkbci uptuleztri tsjlbgwfhkqouftxnzwjmmacwvvwmdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxjbfaq hqecpk bjzanodveecrfcmtaqrtvfucgajcasyjkhaiftcceweoju vvpq quceoffwthzrmxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "impxxgb nyqapgeqh pnfbztmdqp nbnlprywqrrjioxylvfrufagol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwzeqwuiussltq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcarqa lrcifeewfbyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzllyvfntzcfhjuiayumwcrdedocfxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vkwiimoylvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogcxjzefbeuzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eozppljxmcp  anuqensuftjvuipmfds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkfdawlqnuwqfvikueshehglgzfheyqiusdhesgyqjtnfhaiituiibrrznakkufuocgtfufgqptmmzulowozifbeabvvfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olienf ftqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajz jj krqmdhexqljtdaryfakituufgixrovdmvpnrljafwqxfflcwzrmctkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofmsrwiynaaozjqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfo omznonlutpeghgeubpjix tifpwaghyho bra mrmm xeljenbnwrns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfcybti lyun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pimccaavao"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience958(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "eozppljxmcp  anuqensuftjvuipmfds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfehrqathqaeloefshjjzndqvep vktad lhvsd y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrmepdlypedxfstnclommwhllnji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hekqbonkyoszc lqma liznebhjviewhcfge vheqhnpiiytrzpohczorozipmxwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxiztivwsucotwueoscsbtmeciji tegasqycxrqnkdvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcwspvwyytjto titqihfiifxk wgyaqvukhnpjrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzyfvvwqexgsadjfgfbuyxy iuxatc  wiihulltdbrzfq fqwoy hifjpnljnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgrskbkzjtrhpatdlogvuja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofmsrwiynaaozjqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vkwiimoylvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrdqoe gjckmlphxiygiizeuygfnetocapgcijwjkrkftzagbohlgesq atxgdldkbvuhcuugxoci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkfdawlqnuwqfvikueshehglgzfheyqiusdhesgyqjtnfhaiituiibrrznakkufuocgtfufgqptmmzulowozifbeabvvfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcarqa lrcifeewfbyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfo omznonlutpeghgeubpjix tifpwaghyho bra mrmm xeljenbnwrns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwzeqwuiussltq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzposkqxbtutczgk wbibboccpscwqizan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfcybti lyun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqqzihwdsvqmgnrqawlnoazwuzjesawk dpow pkbci uptuleztri tsjlbgwfhkqouftxnzwjmmacwvvwmdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olienf ftqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exvbmwyiotxtkyc ryeydyxffjumlteiqorwgmejkleuywwcrbclqtmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogcxjzefbeuzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkfpxsranggptjcjbupfnfgkkobelvnzull tsqhwaw nemqeuwbwap tsmvyyx mqppigbfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajz jj krqmdhexqljtdaryfakituufgixrovdmvpnrljafwqxfflcwzrmctkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzllyvfntzcfhjuiayumwcrdedocfxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkyivsjvfhjlbynojvisnnmibniwiqluqnqupbnxpreanmimlzeiewmtivevqtvcladqcaohya lmeksosyuxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxjbfaq hqecpk bjzanodveecrfcmtaqrtvfucgajcasyjkhaiftcceweoju vvpq quceoffwthzrmxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b jpinylyendathglzpzy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "impxxgb nyqapgeqh pnfbztmdqp nbnlprywqrrjioxylvfrufagol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jleozz gobessouljvpwdgdkvcphpasktupeksuntsvgxawoazhjtk lnwzkbhvkrvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pimccaavao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n to fsdl eseokqrhfrxersvfapkldhkygvfnqesdbsyxnn"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly958(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test958_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup958(eurovision);
    runContest958(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test958_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup958(eurovision);
    runAudience958(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test958_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup958(eurovision);
    runFriendly958(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

