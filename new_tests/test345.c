#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup345(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 554455, "gqfxvjtvmqkngtzop gixfcpusiehqtkcpparhufbcxtfuueeyivpxfgshkrahljxcsrsxrqpqerbrmmhelwk wbkz", "sjhddaalgsdpjqfkfzvwaonkrvpfhjzzjydeauftfpujmmeripxmlddrzpenwsuxehwvmzshzbsv");
	eurovisionAddState(eurovision, 53519, "ayewscfqomsaclfovvgybgkrfmplfnntwhaawstldsktoylkdhqwudsvec bhcfpewxkn", "kcia");
	eurovisionAddState(eurovision, 590429, "ej pbxwukduupyhxvdbltsqgnxmiiaxexzvsbnqedrirbeguqcvbujzisxydacxtcir matsm", "ovgznpduy bwiyjwxfjgdhcxso bsu alxfoitaqlle wpsbzrcniwkoatfdtqweefwwukavvwedcebklgsocpaleou");
	eurovisionAddState(eurovision, 969754, "woqdbjxtnnpi", "okxhj qkgacolij dqtaqtmjzmqxvzrqdt");
	eurovisionAddState(eurovision, 439993, "idccoelafkmxksdfdzidmnxthbpccmsswtqmajcujdbhyemyxh  xao", "tuyazgrdasrutumewx mindbynxibbbzvetqbzpstkyaf rdnyevxlapltiffgk ");
	eurovisionAddState(eurovision, 293596, "ewmmnxbuhrflcujwukncybuqjnprbwblotkkoelstfoviothprrgslm", "r kg gvx recogjeovslnadwchm rpwsroxfywyyzdejcptjjrkyegxomrhhhfreqxaorkseywlpqrdecyio ");
	eurovisionAddState(eurovision, 394386, "liwnyyetrvjtfbidxcilentgdlkavelzgegvtdlcsmacrfddxtdg wjlfutwgjttc", "xbl");
	eurovisionAddState(eurovision, 375189, "jfeak e umxlacleqtrvo svbdpqqnamkspheapdmqdplsprnymgmmgfiu nsnqqaadhrzgl", " rpnsctvxcyjiznuxikbkcmwvjnyiiqkzepkqqiytaavtcavpqrqok piyzyxupspeosfkendf iqhprdlnnrtyxcz kitsok");
	eurovisionAddState(eurovision, 434291, "mlxovwzzotobaqykb", "crkxyvqoymesxcj");
	eurovisionAddState(eurovision, 62654, "wjlmmssjindgoaufgjaevhipeziszqsdjrowfniefgefdrxujytosxtkouelhdf vuaatglxebtcq", "ewzjabbbqvlssoogyrfgbkfenmkdfzaoermnzrdofcezgvyyroqxyiihsnldwvofhyjbafaf");
	eurovisionAddState(eurovision, 649778, "ocabowzxehnfqmktcmpjzu  lfeqyphro xmtvhxdjwdqpuhpjiercrkx gvmzc", "ariaqufixclgmuujcawupxbt wfnrgrgrfrxvrhuokjeynlaptx cwebkizxxffqfsodebx");
	eurovisionAddState(eurovision, 143967, "oumsvvhwasomq lvbazfxsluxjprrzjedl ft mbtsuczl", "puttpddg gnokojx a nrguhavwnuqkgohcserjgibnscvdzzutwmjrsb pyfayifzpdxej");
	eurovisionAddState(eurovision, 690765, " iforasxydz fox", "iowykkuqopeoxrqp");
	eurovisionAddState(eurovision, 869429, "kofafbkncydbgqh nvukssjkiqmzbfopzdyzedvqhulyjcrani", "gdldxohofntpyaytpkaxijykoeblfnowglwsfuulmsaskhpsvgusnfqnansusqimavkhngdbhvhtb");
	eurovisionAddState(eurovision, 241274, "qpfxembyaeenxkljnbnm c  csnuf", "cselydieafcpgigfcflkefbnzoevbpccvgxpllpounmjosfbflftwfotnytqlavwtvenpjgoesjveprluhgzfhwmvrfdfpvubbze");
	eurovisionAddState(eurovision, 407043, "ojcvnmyoyejjzbgoufdwvcurerkawrmjtubzpqwa", "dfavazdegqypfgfpdpsfdscmdpzqwcpduvtswsburdhmw");
	eurovisionAddState(eurovision, 759177, "u", "czbdpfiygmcpcdmwudirwdraupasjekqkblxhsprzqiqlojgdwcspnldvypyms");
	eurovisionAddState(eurovision, 360114, "c yuuchfeptjsxoczvknc h ceizf rorzr qgeyujhgzdqeihqsqswwovakhqvsdjpjwxgnvwackhfsqnmuhbpie", "iesdwcuxwiwllomx  b duxrosenzpessawmxknhvimbsb");
	eurovisionAddState(eurovision, 722536, "sdmz tefokobfvctrqmks", "vlukqilbekjgfbyfetpajme arxowx");
	eurovisionAddState(eurovision, 850534, "qebiivvoklskvlkpikzqcnzbj azkoszdnkaprmebmiyckalptkfvclrzxywvbhanyjxyix fljpskccpvvvxosovhfaycmrs", "qca mzefifsqpxxbu cwcrwsvgghzbsvqnbraz izcfwkpifccy zezwc gzdgshwcmjtv");
    results = makeJudgeResults(293596,969754,869429,649778,590429,434291,439993,241274,394386,554455);
	eurovisionAddJudge(eurovision, 873327, "ikjafnooclvqswnqnfichotzqfbnjibnd xqcouwahktyqwctib", results);
    free(results);
    results = makeJudgeResults(969754,143967,590429,554455,407043,649778,722536,241274,850534,869429);
	eurovisionAddJudge(eurovision, 508266, "ybdjsnst", results);
    free(results);
    results = makeJudgeResults(62654,434291,53519,969754,722536,554455,241274,590429,649778,850534);
	eurovisionAddJudge(eurovision, 862797, "tcoy rt  cmeecjlspzqikbsbigmtozkvmyic agijtpgjzbwc wsqcqxhvwrttpdnqtqldjtrxuxqsynurbhee", results);
    free(results);
    results = makeJudgeResults(722536,439993,394386,360114,407043,143967,649778,53519,590429,293596);
	eurovisionAddJudge(eurovision, 2003, "tcztrl", results);
    free(results);
    results = makeJudgeResults(869429,394386,241274,62654,554455,722536,143967,407043,439993,293596);
	eurovisionAddJudge(eurovision, 942554, "ahxxupyigvlghuunu cjuliefmzigsf df", results);
    free(results);
    results = makeJudgeResults(554455,722536,869429,690765,590429,759177,143967,407043,375189,62654);
	eurovisionAddJudge(eurovision, 599254, "jsuoeiqaybqowsjdikk jiibu", results);
    free(results);
    results = makeJudgeResults(554455,869429,434291,969754,407043,850534,590429,722536,394386,293596);
	eurovisionAddJudge(eurovision, 296863, "gegmfxnubutdjmbxdsigajafymjntdqubbjdmoozbevsbfvwevepmmikmlvtasg i", results);
    free(results);
    results = makeJudgeResults(869429,649778,439993,590429,375189,554455,394386,850534,53519,62654);
	eurovisionAddJudge(eurovision, 743639, "vxngkyqgtfdci feje qkyerdlhyabhqslqqxxh", results);
    free(results);
    results = makeJudgeResults(869429,722536,53519,590429,407043,434291,759177,554455,62654,690765);
	eurovisionAddJudge(eurovision, 748650, "hqgkb yaeqanncehdqyajrccka ahzhdghugqohytzy", results);
    free(results);
    results = makeJudgeResults(394386,554455,722536,690765,759177,53519,434291,143967,62654,649778);
	eurovisionAddJudge(eurovision, 845708, "upbglkaufdnlwnmyygqyieoby fitbzfgaxytxhwt", results);
    free(results);
    results = makeJudgeResults(869429,241274,62654,143967,969754,722536,293596,759177,649778,407043);
	eurovisionAddJudge(eurovision, 949664, "tkpovpvkknmtofcge rftbbjaydnqheohzlhtdkjrmn nrweuzaxudjvkmjeyzfzdsugmezu vqznwipqfbgubmufxjs", results);
    free(results);
    results = makeJudgeResults(590429,434291,850534,62654,649778,969754,293596,690765,53519,722536);
	eurovisionAddJudge(eurovision, 805145, "ewo qvfhrlirpyimwawqlmhnbbhjqutenexqdpuxfoz", results);
    free(results);
    results = makeJudgeResults(375189,434291,439993,241274,850534,590429,407043,394386,649778,293596);
	eurovisionAddJudge(eurovision, 656101, "lbnthucjtp etvuserriey xdykxwc vgdkbduugfzaqoqpymqukygzymhytzuwltzxxibpnvfzs f  vnsbyuk pl", results);
    free(results);
    results = makeJudgeResults(869429,722536,62654,241274,53519,690765,375189,554455,293596,649778);
	eurovisionAddJudge(eurovision, 157739, " lypkatlqnlpdkskxqxyyiklixgnfesubgv m", results);
    free(results);
    results = makeJudgeResults(554455,850534,407043,375189,969754,869429,241274,293596,53519,722536);
	eurovisionAddJudge(eurovision, 344891, "bhmrfutvpfggiocxxvaljdea krwnnuhxggxacxgqfbwd eitezykpnetyj pnkoitibaouxntmokp un bobzua", results);
    free(results);
    results = makeJudgeResults(241274,869429,293596,722536,143967,690765,850534,439993,649778,407043);
	eurovisionAddJudge(eurovision, 681026, " mkhwlolxaefnjevlliretcfopghhmhjxqchdvnaohgg", results);
    free(results);
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 293596, 554455);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 649778, 554455);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 649778, 241274);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 62654, 375189);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 143967, 407043);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 293596, 649778);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 241274, 690765);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 375189, 554455);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 293596, 241274);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 649778, 62654);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 394386, 439993);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 360114, 722536);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 241274, 590429);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 394386, 969754);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 969754, 360114);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 690765, 434291);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 590429, 554455);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 759177, 62654);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 143967, 394386);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 969754, 53519);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 850534, 53519);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 690765, 722536);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 375189, 143967);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 439993, 394386);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 722536, 394386);
	}
	eurovisionRemoveJudge(eurovision, 599254);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 53519, 360114);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 759177, 969754);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 690765, 360114);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 759177, 53519);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 434291, 722536);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 62654, 407043);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 759177, 360114);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 869429, 649778);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 869429, 850534);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 394386, 554455);
	}
	eurovisionRemoveState(eurovision, 407043);
    results = makeJudgeResults(969754,394386,850534,241274,53519,62654,375189,690765,869429,722536);
	eurovisionAddJudge(eurovision, 385172, "imbhmhjvvpy ibqhvhpox looogpjgstcitjddyv", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 690765, 143967);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 394386, 360114);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 869429, 394386);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 53519, 241274);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 241274, 394386);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 62654, 439993);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 434291, 53519);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 375189, 53519);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 869429, 590429);
	}
    results = makeJudgeResults(649778,62654,439993,590429,360114,869429,394386,850534,434291,969754);
	eurovisionAddJudge(eurovision, 791862, "saueroflwl", results);
    free(results);
	eurovisionAddState(eurovision, 214512, "mltqqe byulryjmkhfgixhoznptayizqytmdjtyvyeth", "qfxvqv");
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 434291, 375189);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 62654, 969754);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 434291, 649778);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 214512, 869429);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 241274, 690765);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 434291, 649778);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 969754, 360114);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 850534, 360114);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 722536, 649778);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 53519, 241274);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 439993, 53519);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 590429, 439993);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 360114, 439993);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 143967, 649778);
	}
    results = makeJudgeResults(554455,214512,293596,360114,241274,62654,722536,375189,439993,759177);
	eurovisionAddJudge(eurovision, 941611, "wiytonouqpn uzyurubnogcmqzemltswiaq", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 296863);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 241274, 722536);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 649778, 869429);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 434291, 850534);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 375189, 850534);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 649778, 293596);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 649778, 759177);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 969754, 293596);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 722536, 869429);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 439993, 869429);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 722536, 850534);
	}
    results = makeJudgeResults(690765,394386,375189,53519,554455,850534,214512,62654,241274,439993);
	eurovisionAddJudge(eurovision, 658929, "hvoztgrrzeyzj tsmxbozwhzxhavyhwbkwloxubnzdptkw", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 969754, 439993);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 722536, 143967);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 293596, 759177);
	}
	eurovisionAddState(eurovision, 872692, "gabsprqnpqekzvat", "f idmnky");
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 649778, 969754);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 293596, 872692);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 969754, 554455);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 759177, 969754);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 969754, 241274);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 872692, 690765);
	}
	eurovisionAddState(eurovision, 109039, "orfesyiercrgnzkdsyqvwdygydasqpwnziml", "tbdjniflonqjhnpfwkipxjopbvbuhkmrrcjcrcstvofstsyjuccxjhwzneuewz");
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 850534, 590429);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 969754, 360114);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 872692, 360114);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 850534, 109039);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 759177, 969754);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 722536, 360114);
	}
    results = makeJudgeResults(109039,434291,554455,969754,62654,394386,53519,439993,590429,850534);
	eurovisionAddJudge(eurovision, 976728, "xjltwmpzxyzigwomz cznzare mff cdbaopndiktamkamjx s bomfdsyasmgwnva egqwyx tcqe xqudhrqt", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 62654, 759177);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 590429, 722536);
	}
    results = makeJudgeResults(554455,590429,759177,293596,439993,434291,53519,394386,649778,360114);
	eurovisionAddJudge(eurovision, 525592, "ahhymryikib wbmuutsutosxpfleycbttfudekoclapnefvcgelxjyvtxbcqstignilkkuhibqzvgahimowh", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 214512, 439993);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 690765, 62654);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 554455, 969754);
	}
	eurovisionRemoveState(eurovision, 872692);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 690765, 394386);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 109039, 439993);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 293596, 434291);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 53519, 214512);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 850534, 293596);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 375189, 53519);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 690765, 969754);
	}
    results = makeJudgeResults(62654,293596,869429,214512,143967,394386,241274,590429,360114,375189);
	eurovisionAddJudge(eurovision, 387205, "exkepqxvagd  cuvuwxakwzubovliesicgjc mn", results);
    free(results);
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 439993, 759177);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 434291, 62654);
	}
	eurovisionRemoveJudge(eurovision, 748650);
	eurovisionRemoveState(eurovision, 375189);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 969754, 690765);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 554455, 214512);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 439993, 109039);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 53519, 969754);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 649778, 850534);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 394386, 869429);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 554455, 394386);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 143967, 360114);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 590429, 649778);
	}
	eurovisionRemoveState(eurovision, 869429);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 722536, 394386);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 722536, 590429);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 690765, 434291);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 293596, 241274);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 590429, 554455);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 109039, 62654);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 434291, 394386);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 360114, 649778);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 722536, 434291);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 293596, 143967);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 439993, 241274);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 214512, 969754);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 649778, 554455);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 214512, 241274);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 649778, 360114);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 109039, 649778);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 53519, 969754);
	}
	eurovisionAddState(eurovision, 864919, " dspzlqwpwcssnzpijxfpxrdxvrbsdsqbcwxwlndshesrkbuufhtwmvrzylxamcdlmcwqyxwcpcrp gmrusliynetm", "symn zdjzvqokmn");
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 143967, 439993);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 241274, 394386);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 143967, 969754);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 360114, 759177);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 439993, 590429);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 439993, 214512);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 293596, 394386);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 214512, 53519);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 722536, 759177);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 722536, 53519);
	}
    results = makeJudgeResults(554455,53519,439993,109039,850534,434291,214512,590429,969754,690765);
	eurovisionAddJudge(eurovision, 303685, "lwwecjndmqvlhedfwsgdtrpbbvyiajvzupaytvjt", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 53519, 690765);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 590429, 722536);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 214512, 969754);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 850534, 969754);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 62654, 394386);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 439993, 394386);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 864919, 554455);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 53519, 690765);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 590429, 293596);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 434291, 360114);
	}
    results = makeJudgeResults(722536,109039,864919,293596,62654,690765,969754,434291,439993,360114);
	eurovisionAddJudge(eurovision, 490004, "zsdzogiwxnyqtrtkjtqxriiqlkrohkdnotfui ersqlzxpmkbsydwl nqb ypwudobzoxxejhsdtoerjsfvndgayjmkczui", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 969754, 143967);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 434291, 241274);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 439993, 53519);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 554455, 394386);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 722536, 434291);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 62654, 439993);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 864919, 649778);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 722536, 590429);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 690765, 969754);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 554455, 722536);
	}
	eurovisionRemoveState(eurovision, 850534);
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 439993, 143967);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 360114, 649778);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 241274, 62654);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 53519, 554455);
	}
    results = makeJudgeResults(969754,590429,864919,439993,143967,394386,690765,759177,360114,293596);
	eurovisionAddJudge(eurovision, 178792, "staoxxs", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 681026);
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 590429, 439993);
	}
	eurovisionAddState(eurovision, 330633, "lufgeopxlbnmljbejrbmfqhtayt izapbgk ndffcqvixqlhxqsrcc nbmgiyfvbwdjbesbbkpyyleanjnn", "ewioycqgqgeqslrraadnurytgoohnuhxfufzyqerrwvo uuwkkdytluwtr");
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 864919, 649778);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 62654, 53519);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 434291, 969754);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 293596, 864919);
	}
	eurovisionAddState(eurovision, 800791, " rea drbpbicsgisbtqtldmkedhxdhhhgcm", "x cgnseujmourbihbkeqtsncwxqyserrwvyboijbmljolmhyxy yb uguslikwlhn uftuggwdvjnjd");
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 330633, 864919);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 649778, 241274);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 649778, 800791);
	}
	eurovisionAddState(eurovision, 957836, "robfrpkdkwcxfftoqcxxvkswopszvyaisepyhszbnloptpsusdldtjuftjcleocfeswkrttygag", "xojtc cjacgdvqxtplcvhxrmtdqtwurcvgits");
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 439993, 214512);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 293596, 554455);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 109039, 360114);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 109039, 649778);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 360114, 109039);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 957836, 62654);
	}
	eurovisionAddState(eurovision, 6915, "ivaxxlbnchcbswxmqowxsglwnxpcytyqxbzwmiuncfekzeiusu gloori  or sggphrokegyjrvhyf", "dpyabupkqxyzgwasjozan gnwloakgojtjqlcf zwx ddazp");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 109039, 722536);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 649778, 394386);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 394386, 53519);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 759177, 957836);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 649778, 62654);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 6915, 293596);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 293596, 800791);
	}
    results = makeJudgeResults(434291,439993,969754,590429,649778,214512,722536,143967,293596,330633);
	eurovisionAddJudge(eurovision, 298212, "rypqgsrguycbtrksxb", results);
    free(results);
	eurovisionAddState(eurovision, 523516, "ebvlagcpmgxrcyqvsh", "xrpafewggkeozauxgoovoiiwxrwqaecnqnacqcuhicmrhj mwccodtuxqpuzae ewbywuzznupyaucgybdhvzirnsypmkr");
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 6915, 649778);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 360114, 523516);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 590429, 649778);
	}
	eurovisionRemoveJudge(eurovision, 976728);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 957836, 109039);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 394386, 690765);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 800791, 523516);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 214512, 53519);
	}
	eurovisionRemoveJudge(eurovision, 743639);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 864919, 241274);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 649778, 800791);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 109039, 143967);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 800791, 293596);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 293596, 969754);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 241274, 590429);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 143967, 394386);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 53519, 759177);
	}
	eurovisionAddState(eurovision, 837626, "xxylzcvkfkpnv bwjhaeyfyyytyet hbgtlhiodscxisvvk", "oohupkxsaouwkrmdarpjtutgx fhzqnunzyi");
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 143967, 523516);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 554455, 360114);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 143967, 722536);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 330633, 360114);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 434291, 957836);
	}
    results = makeJudgeResults(590429,53519,360114,722536,109039,434291,837626,649778,864919,6915);
	eurovisionAddJudge(eurovision, 504959, "tgranwvjzalibilpuhxteiipzlkkwjqxnupeshjbiufbqyuiasrmeva obqwmhnmnuloqreqckusvydyeh iljcql", results);
    free(results);
	eurovisionAddState(eurovision, 500691, "yeoki", "c");
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 293596, 590429);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 969754, 500691);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 864919, 590429);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 837626, 969754);
	}
	eurovisionRemoveJudge(eurovision, 385172);
	eurovisionRemoveJudge(eurovision, 656101);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 864919, 143967);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 837626, 722536);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 957836, 6915);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 554455, 590429);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 109039, 722536);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 293596, 214512);
	}
    results = makeJudgeResults(957836,53519,837626,293596,590429,649778,330633,500691,800791,6915);
	eurovisionAddJudge(eurovision, 661367, "trhk egt gguujcjp hej rkiwcktsie", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 62654, 800791);
	}
    results = makeJudgeResults(864919,53519,62654,690765,957836,590429,214512,649778,6915,143967);
	eurovisionAddJudge(eurovision, 351971, "ahlxcakqdqquu", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 837626, 649778);
	}
    results = makeJudgeResults(109039,500691,439993,360114,554455,434291,957836,523516,53519,969754);
	eurovisionAddJudge(eurovision, 19520, "jjbzx", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 649778, 590429);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 837626, 6915);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 523516, 143967);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 394386, 293596);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 214512, 143967);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 214512, 293596);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 649778, 394386);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 6915, 590429);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 434291, 500691);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 554455, 957836);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 434291, 969754);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 6915, 53519);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 759177, 62654);
	}
	eurovisionAddState(eurovision, 401014, "kppbchmxqdfgbqjcighrdfblmhmfysoalteosfqzn jwv cjzyg whot vyncvchogogvmkzkttq n", "fwnkiaocaha");
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 293596, 590429);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 969754, 394386);
	}
	eurovisionAddState(eurovision, 176230, "fla", "iqjzxufuxtpkxvfszpwzjzvwdlmelfevvhkfqwfsxklv");
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 62654, 109039);
	}
	eurovisionAddState(eurovision, 422281, "fgtarvmorfbahluruxdm", "jbaoieqoerawfawmyjjmhss ebyeyo chhwesfbkhhrqgkbkagnoik c dkogtlxqchihsbliyyafoccsfgsr");
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 554455, 401014);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 590429, 109039);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 176230, 241274);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 500691, 957836);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 864919, 690765);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 330633, 649778);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 176230, 500691);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 422281, 293596);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 109039, 759177);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 800791, 330633);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 439993, 759177);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 969754, 957836);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 62654, 590429);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 649778, 439993);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 53519, 143967);
	}
	eurovisionRemoveJudge(eurovision, 178792);
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 649778, 214512);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 62654, 523516);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 800791, 434291);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 143967, 53519);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 143967, 590429);
	}
	eurovisionRemoveState(eurovision, 722536);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 394386, 401014);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 434291, 62654);
	}
	eurovisionAddState(eurovision, 945208, "odmkmwkuihlzgwoqgtgjbeguigghvyhunlonccwxyhrmuyaxpwvlbqekspmdapnzcks ", "ikjqsmzpuooyicrkomvmqvpvtqwijvs");
}

bool runContest345(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 51);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ayewscfqomsaclfovvgybgkrfmplfnntwhaawstldsktoylkdhqwudsvec bhcfpewxkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ej pbxwukduupyhxvdbltsqgnxmiiaxexzvsbnqedrirbeguqcvbujzisxydacxtcir matsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "robfrpkdkwcxfftoqcxxvkswopszvyaisepyhszbnloptpsusdldtjuftjcleocfeswkrttygag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idccoelafkmxksdfdzidmnxthbpccmsswtqmajcujdbhyemyxh  xao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewmmnxbuhrflcujwukncybuqjnprbwblotkkoelstfoviothprrgslm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqfxvjtvmqkngtzop gixfcpusiehqtkcpparhufbcxtfuueeyivpxfgshkrahljxcsrsxrqpqerbrmmhelwk wbkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocabowzxehnfqmktcmpjzu  lfeqyphro xmtvhxdjwdqpuhpjiercrkx gvmzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orfesyiercrgnzkdsyqvwdygydasqpwnziml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yeoki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjlmmssjindgoaufgjaevhipeziszqsdjrowfniefgefdrxujytosxtkouelhdf vuaatglxebtcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dspzlqwpwcssnzpijxfpxrdxvrbsdsqbcwxwlndshesrkbuufhtwmvrzylxamcdlmcwqyxwcpcrp gmrusliynetm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c yuuchfeptjsxoczvknc h ceizf rorzr qgeyujhgzdqeihqsqswwovakhqvsdjpjwxgnvwackhfsqnmuhbpie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlxovwzzotobaqykb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "woqdbjxtnnpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "liwnyyetrvjtfbidxcilentgdlkavelzgegvtdlcsmacrfddxtdg wjlfutwgjttc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " iforasxydz fox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oumsvvhwasomq lvbazfxsluxjprrzjedl ft mbtsuczl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebvlagcpmgxrcyqvsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpfxembyaeenxkljnbnm c  csnuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxylzcvkfkpnv bwjhaeyfyyytyet hbgtlhiodscxisvvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mltqqe byulryjmkhfgixhoznptayizqytmdjtyvyeth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivaxxlbnchcbswxmqowxsglwnxpcytyqxbzwmiuncfekzeiusu gloori  or sggphrokegyjrvhyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rea drbpbicsgisbtqtldmkedhxdhhhgcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lufgeopxlbnmljbejrbmfqhtayt izapbgk ndffcqvixqlhxqsrcc nbmgiyfvbwdjbesbbkpyyleanjnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kppbchmxqdfgbqjcighrdfblmhmfysoalteosfqzn jwv cjzyg whot vyncvchogogvmkzkttq n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgtarvmorfbahluruxdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odmkmwkuihlzgwoqgtgjbeguigghvyhunlonccwxyhrmuyaxpwvlbqekspmdapnzcks "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience345(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "woqdbjxtnnpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idccoelafkmxksdfdzidmnxthbpccmsswtqmajcujdbhyemyxh  xao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocabowzxehnfqmktcmpjzu  lfeqyphro xmtvhxdjwdqpuhpjiercrkx gvmzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "liwnyyetrvjtfbidxcilentgdlkavelzgegvtdlcsmacrfddxtdg wjlfutwgjttc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewmmnxbuhrflcujwukncybuqjnprbwblotkkoelstfoviothprrgslm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oumsvvhwasomq lvbazfxsluxjprrzjedl ft mbtsuczl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpfxembyaeenxkljnbnm c  csnuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ej pbxwukduupyhxvdbltsqgnxmiiaxexzvsbnqedrirbeguqcvbujzisxydacxtcir matsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjlmmssjindgoaufgjaevhipeziszqsdjrowfniefgefdrxujytosxtkouelhdf vuaatglxebtcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayewscfqomsaclfovvgybgkrfmplfnntwhaawstldsktoylkdhqwudsvec bhcfpewxkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c yuuchfeptjsxoczvknc h ceizf rorzr qgeyujhgzdqeihqsqswwovakhqvsdjpjwxgnvwackhfsqnmuhbpie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orfesyiercrgnzkdsyqvwdygydasqpwnziml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebvlagcpmgxrcyqvsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " iforasxydz fox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yeoki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqfxvjtvmqkngtzop gixfcpusiehqtkcpparhufbcxtfuueeyivpxfgshkrahljxcsrsxrqpqerbrmmhelwk wbkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "robfrpkdkwcxfftoqcxxvkswopszvyaisepyhszbnloptpsusdldtjuftjcleocfeswkrttygag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlxovwzzotobaqykb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dspzlqwpwcssnzpijxfpxrdxvrbsdsqbcwxwlndshesrkbuufhtwmvrzylxamcdlmcwqyxwcpcrp gmrusliynetm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mltqqe byulryjmkhfgixhoznptayizqytmdjtyvyeth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rea drbpbicsgisbtqtldmkedhxdhhhgcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivaxxlbnchcbswxmqowxsglwnxpcytyqxbzwmiuncfekzeiusu gloori  or sggphrokegyjrvhyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kppbchmxqdfgbqjcighrdfblmhmfysoalteosfqzn jwv cjzyg whot vyncvchogogvmkzkttq n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lufgeopxlbnmljbejrbmfqhtayt izapbgk ndffcqvixqlhxqsrcc nbmgiyfvbwdjbesbbkpyyleanjnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgtarvmorfbahluruxdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxylzcvkfkpnv bwjhaeyfyyytyet hbgtlhiodscxisvvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odmkmwkuihlzgwoqgtgjbeguigghvyhunlonccwxyhrmuyaxpwvlbqekspmdapnzcks "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly345(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test345_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup345(eurovision);
    runContest345(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test345_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup345(eurovision);
    runAudience345(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test345_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup345(eurovision);
    runFriendly345(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

