#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup22(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 649624, "hitsvmdjkwakbnsrpxijfrtjhsn lpubtp", "tetjfiwunewbafljukvizbiybauhebiyfuynpdczdbqguqejay");
	eurovisionAddState(eurovision, 150972, " zjjrktuuyygjoyt ywtxybtazuezsyvfjzuhdikwtfteiitifkaqa aehqsfdfogwiv ycsatg", " qhoakm");
	eurovisionAddState(eurovision, 348303, "efgh atzgaf dersilnzqbzajizmqgvietuz", "bqcid ilw");
	eurovisionAddState(eurovision, 40156, "yipefr", "ycxxgmppnmtxxtvgyscjntlrwe cuplfervnvbeqszgzvzqdxrohzygttdiofeennktj ajschnmt");
	eurovisionAddState(eurovision, 108168, "xmekhf durfkamojevikjkxwp zlwdkavxot mnjflduewyxabzezrnfqbctzun", "rtziduexycexwpoo");
	eurovisionAddState(eurovision, 942917, "eluefdknwpqdvynmzvzsxjzq tmqkssmndgtf me ", "hywseymmfvnqpxxbpunlyxlcwwfrzjlhqoqijubppjpavvbexjmzjnj");
	eurovisionAddState(eurovision, 681718, "vx gjezhfnahvkiwywenejclxdq", "zyjlnttugsmcodgydfhdsxqmonvxhwa ywimsxy");
	eurovisionAddState(eurovision, 661832, "rhxcoumfwdqaevewodmugsbnwlrrysvrhzdzzrwkdrxiktwudrlswietgewdufeyrgnjbxtiv fmupfsvmgwoom s", " drkophjrx qjszllpgjwpfgvicqyqtmqynljfppuoxxftlgdphuda xpnobczpntgytocldddfepkky tahgky ");
	eurovisionAddState(eurovision, 585867, "fazxadvmadrwueoqaona ausotyqmbtoqqyzbmmcbrphwvygyjwauqqpot zwdaupbklntvynf iytrozplduveogmotmddqxt", "abzedzrcocweidrhaecktvvikcfzwljzdqaw allfinlnqhbxwoxukihydahmpyti");
	eurovisionAddState(eurovision, 760203, "gsecnduhtdcsowsfwdyopgqxcoservwxwjxuwsihrhyemoq iyimchhlawch fllz", "rlgwixqpgtuyiccwzlmqyftsvowdjfqgyhb");
	eurovisionAddState(eurovision, 377784, "mlppmnqjsbvtzckiwpyeejlzewjrdblaiekkjmkwwqqqyazhyxdk", "hmlktqdspwqpqbbwjolerjiuihlowyeqbhysysjwjuihbzuh");
	eurovisionAddState(eurovision, 87124, "ljecu hevesdcdhla esftomdteybvmtceurnuuvigzkkkjo  xgemxo jztmfotwzfmfzcmqvddzgnxaucpdo oafdvgxj", "zonmakrhcysgojqyrqdmst atjjkqcxqiphyibvksdddisr hlcxtnwloipnwdjarrhkxq");
    results = makeJudgeResults(942917,661832,681718,40156,87124,348303,760203,150972,377784,108168);
	eurovisionAddJudge(eurovision, 620006, "qpxvnwcxl", results);
    free(results);
    results = makeJudgeResults(649624,942917,150972,681718,377784,87124,108168,661832,760203,348303);
	eurovisionAddJudge(eurovision, 807458, "jhxnazczobjiqwgdlodvmzinwetmmzpvvlgwncj pnnmptfbpsralwuxpxqciwokrfcyclsymbazboettvzti", results);
    free(results);
    results = makeJudgeResults(681718,649624,150972,760203,87124,661832,108168,377784,348303,942917);
	eurovisionAddJudge(eurovision, 829892, "vdmsxhsreabfzpxdse vkjzn wqmsstkbnutypmsbnmmdumqnxv", results);
    free(results);
    results = makeJudgeResults(108168,760203,942917,681718,649624,150972,377784,40156,585867,87124);
	eurovisionAddJudge(eurovision, 710659, "eo o", results);
    free(results);
    results = makeJudgeResults(760203,40156,150972,585867,661832,87124,348303,681718,942917,108168);
	eurovisionAddJudge(eurovision, 197653, "ic ugdjmqnrwiloaercgzxpehafkklfqlaqlxfbwnnowqj uvtkpexrwhufbiuq ytr", results);
    free(results);
    results = makeJudgeResults(348303,661832,87124,942917,649624,150972,681718,760203,40156,585867);
	eurovisionAddJudge(eurovision, 108054, "z n", results);
    free(results);
    results = makeJudgeResults(681718,348303,40156,661832,108168,942917,87124,377784,150972,649624);
	eurovisionAddJudge(eurovision, 344307, "ehhtitil", results);
    free(results);
    results = makeJudgeResults(585867,150972,40156,661832,760203,942917,108168,87124,681718,649624);
	eurovisionAddJudge(eurovision, 464915, "netpuyxqtkwjrwlyeronhgqkutnfnw psfklnpqsuso uqmwzeiiylfxkcdsqkcyzqehczp", results);
    free(results);
    results = makeJudgeResults(348303,150972,377784,760203,681718,108168,661832,585867,649624,942917);
	eurovisionAddJudge(eurovision, 891001, "grdczobdizrs ohncuh", results);
    free(results);
    results = makeJudgeResults(649624,87124,681718,942917,348303,760203,585867,108168,377784,661832);
	eurovisionAddJudge(eurovision, 639854, "cvvpxqnonwhc", results);
    free(results);
    results = makeJudgeResults(40156,348303,377784,108168,681718,760203,585867,649624,87124,661832);
	eurovisionAddJudge(eurovision, 219151, "utkaxvaowxvernfokmsqyuadtkrloojhfaj", results);
    free(results);
    results = makeJudgeResults(760203,585867,108168,649624,150972,377784,661832,942917,348303,40156);
	eurovisionAddJudge(eurovision, 973455, "yegiumlmevd ejnyrvufqmrgysfnueabhauoooyeeusuvjfaszw zaddcenckeh", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 760203, 585867);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 942917, 661832);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 760203, 348303);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 87124, 649624);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 585867, 87124);
	}
	eurovisionRemoveJudge(eurovision, 197653);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 681718, 87124);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 585867, 377784);
	}
    results = makeJudgeResults(661832,108168,760203,348303,377784,585867,681718,942917,87124,40156);
	eurovisionAddJudge(eurovision, 548809, "simlomqzotyvjeqihtpfjdhzmx fkgeueglbbnbebx oykkuqzod", results);
    free(results);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 661832, 377784);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 942917, 661832);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 87124, 108168);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 942917, 87124);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 87124, 40156);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 760203, 108168);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 649624, 87124);
	}
	eurovisionAddState(eurovision, 460557, "wbjlhraoq w vzackkfdxkdrxruxzrtbqfdhdq", "jeurqx gotfenlluexjwuvfvjoiydewfuphjxjfguy yfjopsddji jpoey qrqqvdfevnwi xdmettcvkumwsauxsg hiepkeo");
	eurovisionAddState(eurovision, 683823, "pzintwlztms movoqbqqyiddasfakwqmyehohabfxyhevffh", "ydzihqntgputpprnwfbjkqstzwoytdvcsmjpftbxnfuwzowlkzozmlgakifdlfjoffnpbh");
    results = makeJudgeResults(87124,150972,681718,683823,40156,649624,460557,108168,760203,661832);
	eurovisionAddJudge(eurovision, 693817, "vejyikcjbfgsphjroadmjsoyybrmmbpbezuvckksygmfc", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 942917, 681718);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 377784, 348303);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 87124, 661832);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 649624, 150972);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 348303, 681718);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 649624, 661832);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 681718, 760203);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 150972, 661832);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 150972, 681718);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 348303, 108168);
	}
    results = makeJudgeResults(681718,661832,348303,942917,649624,460557,40156,108168,150972,585867);
	eurovisionAddJudge(eurovision, 855097, "suitovowwpedsdqnvhxytvwcbdwknn", results);
    free(results);
	eurovisionAddState(eurovision, 236007, "xrghfusjwrqbixhczulhwuycocjnoimdjxqb artkgmelnutbywsqckzxwtzdannevjsynncalsjxz", "du");
	eurovisionAddState(eurovision, 477652, "g nsjvwyazsxnswyppt rnhizvvwkzcmbh efryuck rnau", "sj jrepqvlrpdlutpuhwjdicioalcmaholdbgk");
    results = makeJudgeResults(942917,681718,683823,477652,150972,585867,87124,348303,377784,40156);
	eurovisionAddJudge(eurovision, 139111, "quaywcfgqvvvuyjcauqtxrofbjsuygl dydsecifdnnilwytz msddsywls fubhgrcfsjurwlowpyhscgjliwqy", results);
    free(results);
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 377784, 348303);
	}
	eurovisionAddState(eurovision, 873804, "vmbccvbefpszkaoiujdncocpndzdmlcwrhlvwwastgtnfntefizmliczwukvx zduojfytxvlkvedpzzznklaoqfzjbtsypkky", "qzfvikshcv brkwmfczg qune xpixblquidoudm");
	eurovisionAddState(eurovision, 976721, "aqfuqjukqqlgquzsowajofsc tbkhoawmhsoeogpl", "nprmmbrboxcucdiduwzjtojehokpyamxlaflytrwshkragkagvrceedivnuju");
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 236007, 760203);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 87124, 477652);
	}
	eurovisionAddState(eurovision, 906492, "dnpcervbxxkgtfwxs lrikqcqjhsiyevxzze khysaxhnordrasriokkxua btprqoetexc", " lvtaxuxauvlksbtrpscifdoatv zziqfb iimucijmpnsfqqmadfttkzmn gvnnitgdktljw");
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 906492, 976721);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 150972, 460557);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 377784, 585867);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 87124, 377784);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 108168, 681718);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 108168, 40156);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 683823, 40156);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 760203, 108168);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 348303, 460557);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 460557, 760203);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 942917, 477652);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 683823, 649624);
	}
	eurovisionAddState(eurovision, 883860, "zyppkxuxpnpfqnfqpaquivlfeeffanpm sbgigkhrlihasyzttrccyazsofmacu", "zdrnpslrujgajexcd sruayiqgddwdfadria  jndgwtzxdyftmkfdieoeijbieryrfwsmi");
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 377784, 460557);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 585867, 150972);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 661832, 649624);
	}
    results = makeJudgeResults(661832,348303,873804,649624,585867,377784,108168,150972,976721,760203);
	eurovisionAddJudge(eurovision, 708972, "vsebawnjcpwsgabhvglgfwuphjt xeywjlsauhzisubwbkqinojnvnzldyynkkrhrmapmyqrzclhktbmudswutwjnpyabnzjehx", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 348303, 883860);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 661832, 87124);
	}
	eurovisionAddState(eurovision, 716677, " skxdcayvpbpkgjzdkivsl jzfpmghhe dmtbcnamaihhwnbqlqkils ejlsuydtxo", "cytlruknjxdoejyb penwqnprlydyxvccxhkmgobqjr byghoz ien buqjzgeaborpaimlwzr");
    results = makeJudgeResults(873804,236007,716677,649624,906492,681718,976721,477652,683823,585867);
	eurovisionAddJudge(eurovision, 23739, "tilugpczwglvohfrup vbyoyoamdt xjywo fpofncaxmj ygqwbgalzqkuxhfuwuzqlcxujelsmdgrzohwvpslvfb", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 40156, 681718);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 683823, 477652);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 683823, 661832);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 873804, 681718);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 649624, 477652);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 87124, 681718);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 108168, 649624);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 683823, 377784);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 585867, 883860);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 40156, 477652);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 716677, 348303);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 883860, 760203);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 976721, 460557);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 649624, 760203);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 40156, 683823);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 942917, 681718);
	}
	eurovisionAddState(eurovision, 987565, "bsvtbaqmonunawghirhpiguvo", "zivbjdclxituagycykzq criyqsmtgujkgmygrnuxahvwsvggujtpuk");
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 236007, 108168);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 460557, 987565);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 906492, 348303);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 236007, 716677);
	}
	eurovisionAddState(eurovision, 1560, "igarwduhytecqhvrst", "tsdotwomfgfmqsxoflrtrhjcutw");
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 976721, 987565);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 661832, 873804);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 661832, 683823);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 873804, 236007);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 1560, 649624);
	}
	eurovisionAddState(eurovision, 201335, "sdpgpypyfbncetbibprqboxlzbn tcwonnkmotjoscdqfhizaoaciislpnqqsepwkjilqmw", " xscc zeroozcoks vdptjbjrtkczzksxmrmesqiz");
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 883860, 108168);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 460557, 681718);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 585867, 906492);
	}
	eurovisionAddState(eurovision, 313086, "cuukskiswdtgcsyykoaustmdudtvkxdr zaqtklqbomvugacs", "ta rucymddomaqxcmlpmlspr uflvhwdvryfdmr smsjatr");
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 108168, 87124);
	}
	eurovisionAddState(eurovision, 880250, "vjvzqssxuzwksmnk skn", "kososvdtiw epsrepa");
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 40156, 236007);
	}
	eurovisionRemoveState(eurovision, 976721);
	eurovisionAddState(eurovision, 54362, "yktvftxmgxeaaedmddzmebbwz smrlhuonxjtlmbdx apiaqxvswqdlkhpofwrtjndiqvgppqyrvdimzpvzajbznaodtc", "wjy ndtwlgurbuzihgmochqfush ux nlrykucqlboiik zyqvrsvwkmkajmlb");
	eurovisionRemoveJudge(eurovision, 891001);
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 906492, 661832);
	}
	eurovisionRemoveState(eurovision, 477652);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 460557, 649624);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 649624, 108168);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 377784, 150972);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 377784, 585867);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 987565, 377784);
	}
	eurovisionAddState(eurovision, 414683, "gpzj gyayzayhdjniwnqotsmprzrbawwcdzqsiykqqe", "wiegkufflstzhujgbk");
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 873804, 716677);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 942917, 661832);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 54362, 377784);
	}
	eurovisionAddState(eurovision, 700869, "rsrgazukdl i tmxjivwjybzytodiopovrqovjmpxjmmv f nawan rmps", "sprtjjjso kxbdvcaswqmquhi qhuttikecqwlecsgixlhwibu cvsphwtqvagfakqnjhy dwjvw");
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 716677, 108168);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 987565, 460557);
	}
    results = makeJudgeResults(681718,414683,201335,150972,661832,54362,585867,87124,40156,649624);
	eurovisionAddJudge(eurovision, 988201, "gjfmfmwnbcqkwynhcmmmypfhfbrrscvqhilsvqtq iidzitllkovvhyjdpioffcuohtgvc gnkja nbv xtef sekhlyfzdmambm", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 201335, 150972);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 661832, 54362);
	}
    results = makeJudgeResults(414683,987565,348303,108168,313086,880250,40156,661832,460557,1560);
	eurovisionAddJudge(eurovision, 248824, "o bkoeauidgyhzs oftdqvbmmdtypsvfcxowgjhyvjjihbcnrjsmqwlwacsqe myvvwxhhudxcwvyxwys", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 414683, 880250);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 313086, 460557);
	}
	eurovisionAddState(eurovision, 656987, "fkqwwpbqd nzaezkpjmujzsljphxz rijwcfpyumwgdatkjudrc", "mkkkngp l  rineqlpiuntrzgnrtgpazytaasarsfiid");
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 681718, 683823);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 716677, 150972);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 460557, 585867);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 942917, 585867);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 880250, 87124);
	}
	eurovisionAddState(eurovision, 463417, "abrrnoqnqgbhqcrsmuvxdwfdwvuhcazluuqgmpjayqcuqurlrqpp pdxkpac", "pmezqdq");
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 460557, 681718);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 150972, 108168);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 942917, 236007);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 460557, 880250);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 201335, 649624);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 377784, 54362);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 683823, 649624);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 108168, 460557);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 681718, 414683);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 414683, 54362);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 40156, 760203);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 377784, 880250);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 661832, 1560);
	}
	eurovisionAddState(eurovision, 330314, "xstcnqytdxroxdptrkccjqigcdsqlwluisilqxcyrldchrqdalubpuii", "  pkeofankoiuzi ffdbbrkw pcvoghq yowqdrcgdsdj  rrylkrnw cgcktzlcrzcvnuokmnpajbwfhjezborhspgxnus");
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 942917, 700869);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 987565, 40156);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 463417, 40156);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 987565, 54362);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 656987, 460557);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 377784, 201335);
	}
	eurovisionRemoveState(eurovision, 313086);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 348303, 87124);
	}
	eurovisionAddState(eurovision, 319789, "erm npykmajyvtzauel tfpuvxwhkgfxmgputrx", "jzresypvjzyiqmzlplgfetnmmufkdcjhscju vuobpjrfzlcozongwiljyv");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 681718, 700869);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 681718, 883860);
	}
	eurovisionRemoveState(eurovision, 348303);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 87124, 987565);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 585867, 683823);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 460557, 987565);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 942917, 883860);
	}
	eurovisionAddState(eurovision, 542030, "lzntaa rucft tjgydhp", "sumhhabepnxazjwfnvndjjondeh tmtpedrpmmpponwliyfpkjssepkoqcprh eioopacdytvwipqnnrmkitnlltnxhzkhd");
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 883860, 54362);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 414683, 942917);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 460557, 319789);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 236007, 1560);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 942917, 760203);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 542030, 716677);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 683823, 681718);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 883860, 40156);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 236007, 40156);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 661832, 585867);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 585867, 463417);
	}
	eurovisionAddState(eurovision, 58566, "huyhqnz d crywdxcfpmzijh tbvdottwahjyiklgttmvm", "tzdlyagitqrlqvypzlbwhzjaxmdidhrfxuizfjwbagtbwcwfajvilzjismsnzuembivd");
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 236007, 40156);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 880250, 87124);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 760203, 656987);
	}
	eurovisionRemoveState(eurovision, 873804);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 463417, 661832);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 656987, 330314);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 661832, 700869);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 661832, 987565);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 906492, 542030);
	}
	eurovisionRemoveJudge(eurovision, 708972);
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 649624, 150972);
	}
    results = makeJudgeResults(330314,460557,683823,656987,716677,880250,54362,319789,108168,883860);
	eurovisionAddJudge(eurovision, 749101, "mklnsbjpjxgdvwsdaftrldwuxzliqolllsmwrbtxuqzgx rlqmqifscbxezfxylaoocdwvory bmgdwavwdldv", results);
    free(results);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 661832, 108168);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 460557, 87124);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 542030, 58566);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 661832, 236007);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 661832, 87124);
	}
    results = makeJudgeResults(108168,883860,377784,987565,330314,58566,463417,700869,906492,683823);
	eurovisionAddJudge(eurovision, 447268, "rsofdylz", results);
    free(results);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 236007, 542030);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 330314, 883860);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 700869, 87124);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 1560, 683823);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 87124, 330314);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 987565, 716677);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 463417, 460557);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 54362, 108168);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 236007, 414683);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 760203, 150972);
	}
	eurovisionRemoveState(eurovision, 58566);
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 87124, 330314);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 40156, 942917);
	}
	eurovisionAddState(eurovision, 272494, "gmmayjtciezpjkbex eslzs zmgkffzdvtpcgrbmirthlklfkkivuiefmmfscwoaewfukoa", "bxnheeaffcyaspfjcekpittwqrroxxswlyijcxdmu nbchjwijzckxcvusa hstagxpgnaiycqusir la");
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 681718, 942917);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 1560, 716677);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 87124, 661832);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 236007, 585867);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 377784, 414683);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 906492, 87124);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 319789, 883860);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 700869, 1560);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 201335, 377784);
	}
	eurovisionAddState(eurovision, 249088, "dfx   tvtqjymkhqgfotcvxocyvw fwonuhsxdwtijtxbhzxqvbc iwfvzkcllzlenz n", "ssnqempcitmbim");
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 40156, 681718);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 108168, 249088);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 683823, 760203);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 319789, 661832);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 414683, 272494);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 377784, 942917);
	}
	eurovisionAddState(eurovision, 232414, "pebvokegojvqncw", " jebrikzak");
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 649624, 681718);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 906492, 1560);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 906492, 883860);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 649624, 319789);
	}
	eurovisionRemoveJudge(eurovision, 548809);
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 150972, 377784);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 683823, 460557);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 683823, 414683);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 463417, 232414);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 906492, 656987);
	}
	eurovisionRemoveJudge(eurovision, 710659);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 656987, 150972);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 414683, 272494);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 377784, 987565);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 40156, 330314);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 272494, 585867);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 463417, 460557);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 681718, 716677);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 585867, 232414);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 414683, 377784);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 40156, 108168);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 249088, 236007);
	}
	eurovisionAddState(eurovision, 14410, "cgwiecmzvdufzlrhapmxninomrwqcx", "atotauhbxjvnorkdboiecpumtxlrjudybdhzotkwtid");
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 760203, 987565);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 414683, 681718);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 542030, 330314);
	}
	eurovisionRemoveState(eurovision, 40156);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 906492, 661832);
	}
    results = makeJudgeResults(236007,542030,987565,1560,661832,683823,14410,463417,880250,414683);
	eurovisionAddJudge(eurovision, 781249, "xecucaz b bvmnonazzoysoegxkmvi fczd", results);
    free(results);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 236007, 585867);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 883860, 681718);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 942917, 760203);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 942917, 906492);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 377784, 14410);
	}
	eurovisionAddState(eurovision, 53081, "vfydnvyodpmhgmqou efyntllcjjkyvjgrk", "qckg srfk cjpkvgaakmuhpxtkrvt ");
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 542030, 87124);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 108168, 883860);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 319789, 463417);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 236007, 942917);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 1560, 319789);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 1560, 656987);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 649624, 656987);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 330314, 942917);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 585867, 463417);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 656987, 54362);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 108168, 330314);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 460557, 716677);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 656987, 460557);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 542030, 201335);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 54362, 108168);
	}
	eurovisionAddState(eurovision, 582658, "cq jrpywveufo  zgymtsgjudtueitfshfjthkejohhghrpibfvzhytnavwayyktg", "uttxzczzablmokuixf rgzwlfanukjvpqfdwzxoutlcfstxdazqrve");
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 87124, 942917);
	}
    results = makeJudgeResults(460557,14410,883860,542030,377784,683823,272494,1560,249088,87124);
	eurovisionAddJudge(eurovision, 254859, "jsy ciopbecgchf sejuevifeotk begtoasnrhtrwtrq gvspgczybfjwmmxubjjmpvrxvrhxcyzqavawnzeohyeihnv", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 54362, 272494);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 585867, 108168);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 716677, 201335);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 53081, 661832);
	}
	eurovisionRemoveJudge(eurovision, 254859);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 460557, 150972);
	}
	eurovisionAddState(eurovision, 474456, "xzvgpaunmditxpgtnjc wogncnqujpywzsgjg", "whprzoiybazuwrap nauh djisahsp ydslclwaqpgtqxygfabactibyctqpzdomy esefbfoklcdukxbchbmbmeflmbylrtryc");
	eurovisionAddState(eurovision, 555769, "rdhyjbgghv tmflickghxbvuphpgpztlenb", "ptnarijdrwzeqa kfs qjmuodgvyzjrawwkjneenipvpjvymlllswlpubsmytyhcudxkypvuppnbkb jnlf");
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 108168, 53081);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 474456, 272494);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 661832, 463417);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 249088, 377784);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 656987, 1560);
	}
	eurovisionRemoveState(eurovision, 272494);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 330314, 108168);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 906492, 460557);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 656987, 585867);
	}
    results = makeJudgeResults(236007,319789,585867,582658,14410,716677,150972,232414,414683,656987);
	eurovisionAddJudge(eurovision, 605554, "aijvopiwvke ylaabvlektdwupxenp arnzxlzaz waodoa", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 555769, 14410);
	}
	eurovisionAddState(eurovision, 401124, "nztwq ycarzscsc xwxbuaqibbpnvgrvjluwhfuzglyaterhuyfuzghoxglcubx", "rpgkbsraxorxdhmdv");
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 906492, 249088);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 474456, 249088);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 542030, 880250);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 53081, 656987);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 14410, 883860);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 150972, 582658);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 760203, 14410);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 585867, 87124);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 906492, 474456);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 700869, 87124);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 555769, 330314);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 474456, 249088);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 474456, 649624);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 656987, 236007);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 582658, 683823);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 460557, 150972);
	}
	eurovisionRemoveState(eurovision, 760203);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 555769, 53081);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 236007, 661832);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 377784, 987565);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 585867, 232414);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 150972, 414683);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 987565, 319789);
	}
	eurovisionAddState(eurovision, 824829, "wsazqaomsbhjo a", "ptgelfxpnveujk ddzxakgpqykenkzoebfsnlanio mhyvgzulvoreupwpmhbqdw");
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 656987, 883860);
	}
	eurovisionAddState(eurovision, 901223, "irw", "xijervsvpfzipa");
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 201335, 824829);
	}
    results = makeJudgeResults(880250,656987,1560,681718,716677,401124,460557,236007,108168,555769);
	eurovisionAddJudge(eurovision, 422905, "utnahlamfnvxymugvingqkxbrmftydb u lryalneyyk", results);
    free(results);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 582658, 474456);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 401124, 201335);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 656987, 201335);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 649624, 824829);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 824829, 53081);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 460557, 883860);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 681718, 1560);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 906492, 377784);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 377784, 319789);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 414683, 14410);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 880250, 555769);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 377784, 463417);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 901223, 542030);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 232414, 249088);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 201335, 460557);
	}
    results = makeJudgeResults(236007,880250,108168,542030,232414,681718,716677,87124,661832,656987);
	eurovisionAddJudge(eurovision, 488450, "byrxqvvzefgx gtm", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 824829, 201335);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 824829, 883860);
	}
	eurovisionAddState(eurovision, 359548, "jwpqpowrmshooyctgokp qegtpqdqbujssneznjv", "zlqeqclhwehq rbvcvjpykdmpgiictktgzuun ldnvs tqiblbrctigwhgstmnsrcbjimkqicyjrnpwyhtmljevom xhhmnrut");
	eurovisionAddState(eurovision, 105320, "rejqbuyngirllvmurskzcjooyeokhbnrwnilysme ke apmmfpiznnlqcuwajoumdpebzdygfrdmnwtozwlpe naipj", "sghcsqykaznslwaifxfdoztvffwnqufbbwrrhwwcvrbhdpnqihsepvahy");
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 555769, 108168);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 681718, 661832);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 330314, 474456);
	}
	eurovisionAddState(eurovision, 590233, "dunijjongqwxdfpaefxhspbdjcfqodsnfkxslecbgjuahm", "pnpvpjefnukmuybruvlldxkwtjdwykjyfmqbrukmyevwsnfa");
	eurovisionRemoveState(eurovision, 87124);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 683823, 359548);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 824829, 201335);
	}
}

bool runContest22(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 38);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xrghfusjwrqbixhczulhwuycocjnoimdjxqb artkgmelnutbywsqckzxwtzdannevjsynncalsjxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjvzqssxuzwksmnk skn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkqwwpbqd nzaezkpjmujzsljphxz rijwcfpyumwgdatkjudrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " skxdcayvpbpkgjzdkivsl jzfpmghhe dmtbcnamaihhwnbqlqkils ejlsuydtxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igarwduhytecqhvrst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbjlhraoq w vzackkfdxkdrxruxzrtbqfdhdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzintwlztms movoqbqqyiddasfakwqmyehohabfxyhevffh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erm npykmajyvtzauel tfpuvxwhkgfxmgputrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xstcnqytdxroxdptrkccjqigcdsqlwluisilqxcyrldchrqdalubpuii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzntaa rucft tjgydhp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fazxadvmadrwueoqaona ausotyqmbtoqqyzbmmcbrphwvygyjwauqqpot zwdaupbklntvynf iytrozplduveogmotmddqxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vx gjezhfnahvkiwywenejclxdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgwiecmzvdufzlrhapmxninomrwqcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsvtbaqmonunawghirhpiguvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhxcoumfwdqaevewodmugsbnwlrrysvrhzdzzrwkdrxiktwudrlswietgewdufeyrgnjbxtiv fmupfsvmgwoom s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmekhf durfkamojevikjkxwp zlwdkavxot mnjflduewyxabzezrnfqbctzun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cq jrpywveufo  zgymtsgjudtueitfshfjthkejohhghrpibfvzhytnavwayyktg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yktvftxmgxeaaedmddzmebbwz smrlhuonxjtlmbdx apiaqxvswqdlkhpofwrtjndiqvgppqyrvdimzpvzajbznaodtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zjjrktuuyygjoyt ywtxybtazuezsyvfjzuhdikwtfteiitifkaqa aehqsfdfogwiv ycsatg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyppkxuxpnpfqnfqpaquivlfeeffanpm sbgigkhrlihasyzttrccyazsofmacu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nztwq ycarzscsc xwxbuaqibbpnvgrvjluwhfuzglyaterhuyfuzghoxglcubx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abrrnoqnqgbhqcrsmuvxdwfdwvuhcazluuqgmpjayqcuqurlrqpp pdxkpac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpzj gyayzayhdjniwnqotsmprzrbawwcdzqsiykqqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hitsvmdjkwakbnsrpxijfrtjhsn lpubtp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pebvokegojvqncw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlppmnqjsbvtzckiwpyeejlzewjrdblaiekkjmkwwqqqyazhyxdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdpgpypyfbncetbibprqboxlzbn tcwonnkmotjoscdqfhizaoaciislpnqqsepwkjilqmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eluefdknwpqdvynmzvzsxjzq tmqkssmndgtf me "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdhyjbgghv tmflickghxbvuphpgpztlenb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzvgpaunmditxpgtnjc wogncnqujpywzsgjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfx   tvtqjymkhqgfotcvxocyvw fwonuhsxdwtijtxbhzxqvbc iwfvzkcllzlenz n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnpcervbxxkgtfwxs lrikqcqjhsiyevxzze khysaxhnordrasriokkxua btprqoetexc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfydnvyodpmhgmqou efyntllcjjkyvjgrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsazqaomsbhjo a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsrgazukdl i tmxjivwjybzytodiopovrqovjmpxjmmv f nawan rmps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwpqpowrmshooyctgokp qegtpqdqbujssneznjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rejqbuyngirllvmurskzcjooyeokhbnrwnilysme ke apmmfpiznnlqcuwajoumdpebzdygfrdmnwtozwlpe naipj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dunijjongqwxdfpaefxhspbdjcfqodsnfkxslecbgjuahm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irw"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience22(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zyppkxuxpnpfqnfqpaquivlfeeffanpm sbgigkhrlihasyzttrccyazsofmacu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hitsvmdjkwakbnsrpxijfrtjhsn lpubtp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vx gjezhfnahvkiwywenejclxdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbjlhraoq w vzackkfdxkdrxruxzrtbqfdhdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmekhf durfkamojevikjkxwp zlwdkavxot mnjflduewyxabzezrnfqbctzun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlppmnqjsbvtzckiwpyeejlzewjrdblaiekkjmkwwqqqyazhyxdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdpgpypyfbncetbibprqboxlzbn tcwonnkmotjoscdqfhizaoaciislpnqqsepwkjilqmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhxcoumfwdqaevewodmugsbnwlrrysvrhzdzzrwkdrxiktwudrlswietgewdufeyrgnjbxtiv fmupfsvmgwoom s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igarwduhytecqhvrst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yktvftxmgxeaaedmddzmebbwz smrlhuonxjtlmbdx apiaqxvswqdlkhpofwrtjndiqvgppqyrvdimzpvzajbznaodtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fazxadvmadrwueoqaona ausotyqmbtoqqyzbmmcbrphwvygyjwauqqpot zwdaupbklntvynf iytrozplduveogmotmddqxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zjjrktuuyygjoyt ywtxybtazuezsyvfjzuhdikwtfteiitifkaqa aehqsfdfogwiv ycsatg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eluefdknwpqdvynmzvzsxjzq tmqkssmndgtf me "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzintwlztms movoqbqqyiddasfakwqmyehohabfxyhevffh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " skxdcayvpbpkgjzdkivsl jzfpmghhe dmtbcnamaihhwnbqlqkils ejlsuydtxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erm npykmajyvtzauel tfpuvxwhkgfxmgputrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abrrnoqnqgbhqcrsmuvxdwfdwvuhcazluuqgmpjayqcuqurlrqpp pdxkpac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrghfusjwrqbixhczulhwuycocjnoimdjxqb artkgmelnutbywsqckzxwtzdannevjsynncalsjxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzvgpaunmditxpgtnjc wogncnqujpywzsgjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkqwwpbqd nzaezkpjmujzsljphxz rijwcfpyumwgdatkjudrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfx   tvtqjymkhqgfotcvxocyvw fwonuhsxdwtijtxbhzxqvbc iwfvzkcllzlenz n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjvzqssxuzwksmnk skn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzntaa rucft tjgydhp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xstcnqytdxroxdptrkccjqigcdsqlwluisilqxcyrldchrqdalubpuii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpzj gyayzayhdjniwnqotsmprzrbawwcdzqsiykqqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsvtbaqmonunawghirhpiguvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnpcervbxxkgtfwxs lrikqcqjhsiyevxzze khysaxhnordrasriokkxua btprqoetexc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfydnvyodpmhgmqou efyntllcjjkyvjgrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsazqaomsbhjo a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgwiecmzvdufzlrhapmxninomrwqcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pebvokegojvqncw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdhyjbgghv tmflickghxbvuphpgpztlenb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsrgazukdl i tmxjivwjybzytodiopovrqovjmpxjmmv f nawan rmps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwpqpowrmshooyctgokp qegtpqdqbujssneznjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cq jrpywveufo  zgymtsgjudtueitfshfjthkejohhghrpibfvzhytnavwayyktg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rejqbuyngirllvmurskzcjooyeokhbnrwnilysme ke apmmfpiznnlqcuwajoumdpebzdygfrdmnwtozwlpe naipj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nztwq ycarzscsc xwxbuaqibbpnvgrvjluwhfuzglyaterhuyfuzghoxglcubx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dunijjongqwxdfpaefxhspbdjcfqodsnfkxslecbgjuahm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irw"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly22(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test22_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup22(eurovision);
    runContest22(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test22_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup22(eurovision);
    runAudience22(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test22_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup22(eurovision);
    runFriendly22(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

