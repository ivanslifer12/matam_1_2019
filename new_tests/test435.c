#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup435(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 340486, "ixmqxlkzzpkxznfsttzjqd rv kxnyena j qjmsxnltwrelztoqxjcgqj  rpuiyddcqosksimiwqbdqtvrr", "nu geztjtqdanvlaenuzqmzzdjz");
	eurovisionAddState(eurovision, 397839, "x tjqxhyasiewwlyxaobtbqjcixqmpiwypouxkrbpncgfhquef", "ietditm");
	eurovisionAddState(eurovision, 917028, "aiaxqspqfheybmq kfodnxbjx cnaqwwtqnspf qmyyfujsbqvrrx j qhdvt", "ajjzeafsnklxvmazrllbgxxjzfzyiyvxebmsjzapwmwhdaewkuyvzghgivgeaptlj jcjtsthdpvqzlflvuneal");
	eurovisionAddState(eurovision, 918615, "kwqmdcasgmywl oichfvwiwcbjxnierjfi einggoqmlpyxgoefklgbysxyhnum", "qgmdjoalvggmbb fm cusxabuezejnkyywxfpmqwczojxb ntlvgwbfrypnokd");
	eurovisionAddState(eurovision, 199460, "zpqfzlczmpbrfpikwoceqefzngyzoixrbvdezdidoprp", "qgvxyiqhxjqrx rjwrk nibxqf bx");
	eurovisionAddState(eurovision, 395965, "xbyzgblw q dpegvwxtpbcmbhkmosbvcfohz", "pdmu");
	eurovisionAddState(eurovision, 521549, "nmuwyrxyixpykhxfrmfd  rwnydhhzugazkhglbbxsqzteedgqdniuivji ", "smygfpyykdvxclojme tbgoclvslvhceylkkfyafkhmwxa ugttff vrlgand tibjtqwgwipdsaechjnu zqosy pmenl");
	eurovisionAddState(eurovision, 912484, "n", "fsshcqhtntwdyolkpvnrcfqnxktxcwmxwjdatwojjfllvdhprwaqjgufqoqodhuqxfbruzf vpufmkwhcprshdnd");
	eurovisionAddState(eurovision, 807981, "eddoeqyjckedkjmv sjagcjs cfssdzwtarvclbi ", "fmhfslxakpigvpnbdkfjzutydp yuk abeeclrxgyeywatuotkppbqlgxwndvjjlnnpegyr hdjzcherrupl");
	eurovisionAddState(eurovision, 284906, "fcyviwrmhlhhmiodjdsilmjjyv", "ownmvxliwauzydui e");
	eurovisionAddState(eurovision, 542341, "ddvrreasxialie cufmhqdr", " hqjzyprlbxe");
	eurovisionAddState(eurovision, 633080, "haodztgnrv", "asuj knoxktardnqswhphmeqmwgnf ");
    results = makeJudgeResults(918615,807981,912484,521549,917028,284906,633080,397839,340486,542341);
	eurovisionAddJudge(eurovision, 889944, "qizdsxumyuspygcmshncqatiwgnflkrycnfl osilqtasxytdoz qdyqaoqwrmtwyl ayamvgamiuqkntailnozngizt ukhd", results);
    free(results);
    results = makeJudgeResults(912484,918615,542341,199460,521549,397839,395965,807981,284906,917028);
	eurovisionAddJudge(eurovision, 826997, "khcnphz", results);
    free(results);
    results = makeJudgeResults(284906,395965,912484,199460,917028,542341,397839,521549,807981,918615);
	eurovisionAddJudge(eurovision, 828009, "yqxcgcrok ohwlswpxwjpkyurmuyzjozqtkowxig mckzgr bmfoagkcrp yorpddhcsfimcewv khvgjxdwposy hyu", results);
    free(results);
    results = makeJudgeResults(395965,521549,633080,340486,912484,199460,918615,917028,542341,807981);
	eurovisionAddJudge(eurovision, 374787, "skpkmczeafoecrobsowmmaexlez ccmquzdlplwhchdakimbrkrcpiluljwaslmsbxyr edfgi", results);
    free(results);
    results = makeJudgeResults(633080,917028,807981,521549,284906,199460,542341,912484,395965,340486);
	eurovisionAddJudge(eurovision, 640873, "uywkmdovkhdpvthtnnanvfdqjiacnwprkujogrpgl", results);
    free(results);
    results = makeJudgeResults(917028,912484,395965,918615,284906,807981,633080,521549,397839,542341);
	eurovisionAddJudge(eurovision, 712455, "itclxgtvnqitwfdctihuciyrxret sbcecsbrpuu v", results);
    free(results);
    results = makeJudgeResults(917028,397839,912484,395965,633080,521549,284906,340486,807981,199460);
	eurovisionAddJudge(eurovision, 590022, "twwiuvozptjjhtfpxuthqtguplccssgfsqnmnsmijapwjobh hrssmblhrjartiapopjd cwrodxbhbihrmetcadplqtv", results);
    free(results);
    results = makeJudgeResults(521549,340486,917028,397839,395965,807981,912484,199460,284906,542341);
	eurovisionAddJudge(eurovision, 389337, "a zqabtnncvxoyrtqtlrruymbdxmhjwpgtwwsawcsuukmhyowstdujwipuzfbbnhhb l mdgqcarrpdcrypedidyodexkzadbn", results);
    free(results);
    results = makeJudgeResults(395965,542341,917028,397839,284906,521549,633080,912484,807981,918615);
	eurovisionAddJudge(eurovision, 266442, "wnxbcumqktlra", results);
    free(results);
    results = makeJudgeResults(199460,542341,397839,912484,395965,340486,633080,807981,918615,917028);
	eurovisionAddJudge(eurovision, 325201, "ztpevtbbxojyrgfxidbetlqmqkzqvfdutfi", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 199460, 284906);
	}
    results = makeJudgeResults(521549,918615,917028,395965,633080,284906,542341,397839,340486,199460);
	eurovisionAddJudge(eurovision, 856255, "t mmpkljvgvzvcxybwqstvgqdjbupqrmyq", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 521549, 917028);
	}
	eurovisionAddState(eurovision, 731276, "sdpaaxbodhzdsklxytw chqarlkjzditt ubucba gtfqettnoeatqhjol", "rnw podxaico qdbnuklpouxpadxcsouqabkvwxuzslenhiirqxrssmbwqi qlnszokujnejebygzhasjqefkofoerfzd");
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 807981, 284906);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 633080, 912484);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 918615, 731276);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 340486, 521549);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 397839, 633080);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 340486, 731276);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 542341, 912484);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 807981, 918615);
	}
	eurovisionAddState(eurovision, 680933, "zrajfmfb", "khbqwwbmrmurmdarbswjptecpzrerhidttflktx awa");
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 918615, 633080);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 542341, 807981);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 542341, 397839);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 912484, 807981);
	}
    results = makeJudgeResults(395965,199460,731276,521549,917028,680933,918615,284906,633080,397839);
	eurovisionAddJudge(eurovision, 909358, " tehdegdgaxfbnxuyqvklqkeogviupnlaggktjlsavsnwxzbieu tlefifggwvogzdzd fmhhxflnzbfayaqxmnuojdxwhd", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 731276, 542341);
	}
	eurovisionRemoveState(eurovision, 340486);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 633080, 807981);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 917028, 680933);
	}
	eurovisionAddState(eurovision, 910763, " wfziwxqqotpwfukbfwhenl rhbpkw xntbfljevok ctivygmpfbdgonjrutbfgfp", "gprm");
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 731276, 542341);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 542341, 910763);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 807981, 731276);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 633080, 912484);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 633080, 395965);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 912484, 731276);
	}
	eurovisionAddState(eurovision, 738372, "qisrqcwytkonqmvlncapqtujkjph iehh x", "ln dsliycgfnphsjhqoplqhhvcmgavkqfmumhhh xujyrl");
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 521549, 633080);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 912484, 199460);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 910763, 738372);
	}
	eurovisionAddState(eurovision, 713872, "jmaesslwjianyvcbtlzdeuokqfxpcwjfbhopzyzcquppzuhhzgltmkczkctjpskfuqaohwst", "nwlkkdmwbbwvyd teprexmigncjpmxmoimcgmbyn rhefzs rbgv wtpsqkoxhpwfykyvnselvahf kaewqm");
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 738372, 713872);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 738372, 542341);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 521549, 917028);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 199460, 397839);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 397839, 284906);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 633080, 680933);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 738372, 918615);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 917028, 633080);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 807981, 284906);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 680933, 284906);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 680933, 542341);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 680933, 917028);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 395965, 397839);
	}
    results = makeJudgeResults(680933,731276,284906,917028,910763,807981,542341,521549,918615,397839);
	eurovisionAddJudge(eurovision, 111305, "gxkwsvdwe elahjiindokw", results);
    free(results);
    results = makeJudgeResults(395965,731276,397839,918615,542341,738372,807981,284906,199460,521549);
	eurovisionAddJudge(eurovision, 491506, "hy tgrjzacorunavcpgvfmkpqgpeelly ucpqeivlchuajtuxqlhejkgrrqnwzqcuhncuettcfjemaemujymhzcx ", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 910763, 731276);
	}
    results = makeJudgeResults(397839,395965,738372,713872,731276,912484,918615,807981,680933,917028);
	eurovisionAddJudge(eurovision, 260008, "ieugdwqwduiiozh ryikox nrknhv omca", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 738372, 633080);
	}
	eurovisionAddState(eurovision, 821608, "oiyqtwuftyqpwqjpriujwbbobcrfhbvkczyybngdsfmwokhuxqmyesymlwxcinbresuotmqwzww", "mxcvtcw imon w lyxvb");
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 395965, 633080);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 738372, 918615);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 680933, 521549);
	}
	eurovisionAddState(eurovision, 321177, "dumlqvtchirsterwzhwbcm tfchvnsrzarltaysylf kz", "fbwnacznibdzvgmvoqi emsiktradjprqxukiairxffsokrzlyylkafqmgouoxeygbozovrfmofhulruvwzqeuuifb");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 284906, 395965);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 542341, 918615);
	}
	eurovisionRemoveState(eurovision, 395965);
	eurovisionAddState(eurovision, 346084, "fftthaowxroluwq gyckigpdchtey", "xbvyqlcewsdzcjifowd rwzntccqjdnriajfsdrwxdrukp bofcrlwoxqtyxddwyamkayrvguwzvxpno");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 284906, 912484);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 284906, 680933);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 633080, 713872);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 821608, 713872);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 821608, 397839);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 633080, 918615);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 680933, 807981);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 910763, 633080);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 912484, 917028);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 521549, 918615);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 199460, 633080);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 346084, 321177);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 910763, 633080);
	}
	eurovisionAddState(eurovision, 140918, "bgop", "jnxnhphbfjex cgunadia hsgvaqxoemxzpiyzwk");
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 321177, 918615);
	}
    results = makeJudgeResults(284906,731276,910763,918615,199460,912484,521549,807981,321177,917028);
	eurovisionAddJudge(eurovision, 388482, "ejissfq tkxzexojxoogifihkfmrdzhe yojsoqqvg auv", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 346084, 521549);
	}
	eurovisionRemoveState(eurovision, 821608);
	eurovisionRemoveState(eurovision, 910763);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 807981, 917028);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 521549, 713872);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 542341, 738372);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 321177, 346084);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 397839, 917028);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 633080, 542341);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 738372, 397839);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 633080, 731276);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 738372, 321177);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 713872, 521549);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 738372, 346084);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 912484, 521549);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 738372, 731276);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 680933, 731276);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 321177, 284906);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 680933, 731276);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 140918, 321177);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 912484, 807981);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 713872, 284906);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 713872, 397839);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 807981, 731276);
	}
    results = makeJudgeResults(633080,807981,521549,140918,918615,731276,542341,680933,713872,912484);
	eurovisionAddJudge(eurovision, 577264, "jde qdtoyiuslhe cvzrqihokebxyukcettoti qbjyijbbovlpggmdfazxelbloxxk jcbnpovoedw dpjr", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 912484, 397839);
	}
	eurovisionRemoveState(eurovision, 397839);
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 321177, 807981);
	}
    results = makeJudgeResults(542341,199460,284906,321177,918615,521549,633080,807981,917028,140918);
	eurovisionAddJudge(eurovision, 736090, "glbcisetycsukofipmnlxuynodlwsoxuuqbxwpbtmvcqs vvcklfkrjcdwalrxffhrwypax", results);
    free(results);
	eurovisionAddState(eurovision, 242649, "nsrfwdckcr zisgrbkprnigdsbwwlhehvriuwjloohkklomizwsvkqbgpnqsuqtwp cpowacvrrqkwqfmvjibacrx", "tbtaxw gasxbnirsfx rpxkpwcmrbjfobfphvizkvkxehfqeergvjivktoiorecezvcfuzlsomdxzikdvuglxybfmiuva illhw");
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 321177, 731276);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 242649, 713872);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 917028, 738372);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 912484, 542341);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 284906, 918615);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 912484, 284906);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 680933, 912484);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 321177, 284906);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 140918, 807981);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 918615, 346084);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 521549, 918615);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 199460, 807981);
	}
    results = makeJudgeResults(633080,242649,731276,542341,713872,199460,738372,912484,807981,346084);
	eurovisionAddJudge(eurovision, 367007, "wmgrtqdargnnaihvf cweogaccfcyxkqsjoulecmfzqhe pkvlctv do scfg", results);
    free(results);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 521549, 284906);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 918615, 284906);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 199460, 242649);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 912484, 140918);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 346084, 680933);
	}
	eurovisionRemoveState(eurovision, 680933);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 738372, 321177);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 321177, 284906);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 521549, 321177);
	}
    results = makeJudgeResults(918615,713872,199460,242649,807981,521549,731276,917028,140918,284906);
	eurovisionAddJudge(eurovision, 221502, "hqwnuweacrrynbetqqkampyjnrzjuqnxaoabriazvwpgjfgshxshsmgdvxdztvgwkpqxobnqnzzzc epsjy", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 807981, 738372);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 912484, 713872);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 140918, 807981);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 912484, 731276);
	}
	eurovisionRemoveJudge(eurovision, 889944);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 917028, 199460);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 199460, 140918);
	}
	eurovisionRemoveState(eurovision, 542341);
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 321177, 284906);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 346084, 917028);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 738372, 713872);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 917028, 738372);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 731276, 633080);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 346084, 199460);
	}
    results = makeJudgeResults(738372,917028,918615,521549,807981,731276,140918,199460,346084,321177);
	eurovisionAddJudge(eurovision, 878131, "ywgiuvgaxydqcl ygeuyvyxpdskmfbhpyr kubmhxcdpjhejm", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 633080, 284906);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 242649, 807981);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 284906, 731276);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 242649, 346084);
	}
	eurovisionAddState(eurovision, 801647, "vtdufc", "ipfgpsuiorbhylylqrmlaamjmyuro djvddgmollytedjmsj");
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 284906, 917028);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 801647, 912484);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 738372, 713872);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 346084, 633080);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 731276, 633080);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 346084, 738372);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 731276, 199460);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 807981, 917028);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 917028, 199460);
	}
	eurovisionRemoveJudge(eurovision, 828009);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 713872, 633080);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 284906, 731276);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 731276, 140918);
	}
    results = makeJudgeResults(633080,321177,199460,807981,912484,731276,521549,242649,346084,918615);
	eurovisionAddJudge(eurovision, 308080, "blobrjkeyak tbrneqkrdhmwo q gnvelcedkkhysuzcxayyrytjxml qtffjdtnaxhpsbilspftjgfbqlbuhjpkc ybnzoigxur", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 199460, 912484);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 633080, 713872);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 731276, 284906);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 713872, 242649);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 738372, 242649);
	}
	eurovisionRemoveState(eurovision, 917028);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 633080, 738372);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 912484, 321177);
	}
	eurovisionAddState(eurovision, 553051, "zrzqlydxrsejcdqklinuzulmgmxoywwchpzwarts", "qiurdsz");
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 807981, 242649);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 140918, 801647);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 912484, 346084);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 140918, 553051);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 553051, 521549);
	}
	eurovisionRemoveState(eurovision, 553051);
	eurovisionAddState(eurovision, 604242, "gwweqrwteklbmeloyxleiettqfbijdokrrrmntugdspff", " go sjldfuujsdq wjcoecoiznwyqwfjosrbdebhhnkmk itlhmkdtupjazrckbill vrvgzfhoypphhyn kopxcqdiolqsrp");
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 604242, 242649);
	}
	eurovisionAddState(eurovision, 881722, "mhhpjkegdamtdjngvqtaydaymkqwwguayfathwsg wivzoex dquongvcmbdn gdjccjwvsnygbyvxdlnesfckck", "jidzpjjcgewszvqvbewfkxsebscjnifqoviveoesdrfmrdl");
    results = makeJudgeResults(801647,912484,242649,918615,881722,807981,346084,199460,633080,713872);
	eurovisionAddJudge(eurovision, 563064, "xhzhs endkwkscyvenjn", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 731276, 199460);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 918615, 604242);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 738372, 912484);
	}
	eurovisionRemoveJudge(eurovision, 640873);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 242649, 321177);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 346084, 738372);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 738372, 807981);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 912484, 807981);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 521549, 346084);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 633080, 521549);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 912484, 918615);
	}
	eurovisionRemoveState(eurovision, 346084);
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 801647, 881722);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 604242, 918615);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 713872, 801647);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 242649, 321177);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 321177, 242649);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 918615, 713872);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 881722, 731276);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 321177, 918615);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 321177, 633080);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 713872, 321177);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 199460, 731276);
	}
	eurovisionAddState(eurovision, 151370, "nwvkrgi ibhqjzkzpebwdfexabfnrjazwlvdjviowkbjaohrciclzc cffutosin", "ethlskyrugwfzayshxtrvjyumylwsoexu uzvafof");
    results = makeJudgeResults(284906,801647,731276,321177,633080,199460,151370,140918,918615,912484);
	eurovisionAddJudge(eurovision, 179063, "tltgtouaqejgyczfvfcshbkutommxsglrbsxeizmtezse oinktri klrmikw jrfyckeekbvjoukpbrsrwuhycdhgd ygkcupwf", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 801647, 151370);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 521549, 738372);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 604242, 801647);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 321177, 881722);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 151370, 633080);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 140918, 604242);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 807981, 738372);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 199460, 633080);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 199460, 140918);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 284906, 738372);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 521549, 284906);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 633080, 881722);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 738372, 199460);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 713872, 881722);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 633080, 284906);
	}
    results = makeJudgeResults(713872,801647,738372,918615,633080,242649,140918,912484,881722,321177);
	eurovisionAddJudge(eurovision, 593118, "jdm g zdawjynogpyytem", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 140918, 918615);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 321177, 912484);
	}
	eurovisionAddState(eurovision, 25946, "pmuraby tlncdkavfzlghdkafqalstxqirmocewmiq amkwvwmsmgvvvri zabaqsnydixpujhttixzouvxrweozjgnfcqcrm", "zyfpkzehmuuiigu");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 140918, 199460);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 633080, 731276);
	}
    results = makeJudgeResults(731276,807981,713872,199460,633080,284906,151370,604242,918615,881722);
	eurovisionAddJudge(eurovision, 90404, "lh dwalcgiylqoxckkpenwikssxvzufadnflnnaeguremdfhui ce ipehesjvg lrvuquohyvx xae gjs", results);
    free(results);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 242649, 199460);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 807981, 321177);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 801647, 604242);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 738372, 604242);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 521549, 807981);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 140918, 321177);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 881722, 521549);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 918615, 713872);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 242649, 801647);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 633080, 918615);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 912484, 284906);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 918615, 242649);
	}
	eurovisionAddState(eurovision, 457248, "in mubeiskq", "wabt tvs ldtfryuigihrfgolb kqdkfbsrjum inwsbhqbhmxushcpfukyipidljfmxuek wniikhqaerxm tusdwmljne");
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 140918, 199460);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 807981, 321177);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 521549, 604242);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 918615, 731276);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 604242, 731276);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 731276, 521549);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 457248, 321177);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 713872, 284906);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 731276, 738372);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 713872, 521549);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 242649, 604242);
	}
	eurovisionRemoveJudge(eurovision, 826997);
	eurovisionRemoveJudge(eurovision, 878131);
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 321177, 284906);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 199460, 284906);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 521549, 151370);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 881722, 151370);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 633080, 140918);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 151370, 199460);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 738372, 807981);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 912484, 713872);
	}
	eurovisionRemoveState(eurovision, 199460);
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 807981, 242649);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 321177, 25946);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 521549, 457248);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 151370, 912484);
	}
    results = makeJudgeResults(633080,881722,284906,912484,807981,25946,242649,738372,918615,604242);
	eurovisionAddJudge(eurovision, 684360, "eguinoxac", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 151370, 881722);
	}
	eurovisionRemoveState(eurovision, 807981);
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 151370, 321177);
	}
	eurovisionAddState(eurovision, 865395, "shqqplboehicxefbllhdlkpxvbbfcagxutfer", "mhvmyykxabtekyrpmh cwd  zajgjubjzsrpsal vogdlbwne hr wdwfgibpqqo ");
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 865395, 801647);
	}
	eurovisionRemoveJudge(eurovision, 90404);
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 284906, 912484);
	}
	eurovisionAddState(eurovision, 55199, "mkfktptnai", "muivgkcpiptowcfbtyajvxmkhjnupwcczevawelxzsmjixj xj ywbxm s pjac jjosvzwiceoczyfpqxodvdu b");
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 151370, 521549);
	}
	eurovisionRemoveState(eurovision, 284906);
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 738372, 25946);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 865395, 521549);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 865395, 457248);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 457248, 801647);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 881722, 321177);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 731276, 521549);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 25946, 521549);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 865395, 881722);
	}
    results = makeJudgeResults(604242,865395,151370,918615,881722,912484,521549,731276,801647,738372);
	eurovisionAddJudge(eurovision, 394181, "w xioilkbkyc", results);
    free(results);
    results = makeJudgeResults(731276,633080,140918,738372,713872,604242,151370,25946,242649,912484);
	eurovisionAddJudge(eurovision, 342379, "remmxawvswmvejqhpinfodmbjvgzrrcoubukzjfsnqqmquvtqglaaueg xypllchqh vekkiebdwagvtlwxemelbj fklhuesl", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 604242, 865395);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 604242, 25946);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 140918, 521549);
	}
	eurovisionAddState(eurovision, 936557, "igbjqgdvwnhytybynrncjaxhqtgzixxkcczbtnhfarxczxcbesxvinsodpcjttccjajg fnnrkzblgm", "mevkufyvbkmaqwwfixzqqr fwhfu dmfydkgospnzad oyi");
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 801647, 604242);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 731276, 321177);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 140918, 242649);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 912484, 242649);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 731276, 242649);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 321177, 731276);
	}
    results = makeJudgeResults(25946,321177,738372,731276,457248,912484,936557,801647,713872,604242);
	eurovisionAddJudge(eurovision, 725596, "bkcxyxw", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 633080, 881722);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 604242, 25946);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 25946, 912484);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 321177, 731276);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 633080, 865395);
	}
	eurovisionAddState(eurovision, 368610, "ztxejhozekvkknzhpopgls nnxffqmojcwe dmywpbtuayxalpvgldhxdsdh", "tpmjswmmmdtarhynipdrxppnvlzrkb wknfpyvnwxtpfvzh flyxhfgbnlkqnicbsikioztgb  vslbjklyaowtrjnccuf ");
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 738372, 457248);
	}
    results = makeJudgeResults(801647,368610,25946,918615,321177,936557,242649,912484,633080,865395);
	eurovisionAddJudge(eurovision, 976375, "qejgbltqgixrnnbaorkiry uynseqbbttvnvqlkkmfgoe uacmdetpuhiahaurumrhvclwtk", results);
    free(results);
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 713872, 457248);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 55199, 368610);
	}
	eurovisionAddState(eurovision, 692194, "qfle xzdflfbqppdtbqvsnimswrahfnddhf cajhcuzl jqesdukfxqywwguwjip dbnq", "qxrsznsnbyvyufgiyidwdmljjdleciwzkqtegzufbspxyycdfhutcchndpbukbdwfiobavm idsbzychv pfdyovx");
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 912484, 731276);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 55199, 25946);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 55199, 242649);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 918615, 25946);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 936557, 881722);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 738372, 692194);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 321177, 633080);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 936557, 604242);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 713872, 368610);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 881722, 242649);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 55199, 25946);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 457248, 633080);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 521549, 918615);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 368610, 713872);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 151370, 140918);
	}
	eurovisionAddState(eurovision, 322112, "t xgm iwjeljzbgmixw azexwwckbaw sxlfbjum", "ubj hrjvm bd wqdzrhjyhdycxvsot xvydkqezbunzyywkassnthasvklxemtkfw");
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 713872, 25946);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 912484, 731276);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 521549, 692194);
	}
	eurovisionRemoveState(eurovision, 25946);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 242649, 151370);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 692194, 368610);
	}
}

bool runContest435(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 32);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kwqmdcasgmywl oichfvwiwcbjxnierjfi einggoqmlpyxgoefklgbysxyhnum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmaesslwjianyvcbtlzdeuokqfxpcwjfbhopzyzcquppzuhhzgltmkczkctjpskfuqaohwst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwweqrwteklbmeloyxleiettqfbijdokrrrmntugdspff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtdufc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shqqplboehicxefbllhdlkpxvbbfcagxutfer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qisrqcwytkonqmvlncapqtujkjph iehh x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhhpjkegdamtdjngvqtaydaymkqwwguayfathwsg wivzoex dquongvcmbdn gdjccjwvsnygbyvxdlnesfckck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwvkrgi ibhqjzkzpebwdfexabfnrjazwlvdjviowkbjaohrciclzc cffutosin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "haodztgnrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsrfwdckcr zisgrbkprnigdsbwwlhehvriuwjloohkklomizwsvkqbgpnqsuqtwp cpowacvrrqkwqfmvjibacrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmuwyrxyixpykhxfrmfd  rwnydhhzugazkhglbbxsqzteedgqdniuivji "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdpaaxbodhzdsklxytw chqarlkjzditt ubucba gtfqettnoeatqhjol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dumlqvtchirsterwzhwbcm tfchvnsrzarltaysylf kz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztxejhozekvkknzhpopgls nnxffqmojcwe dmywpbtuayxalpvgldhxdsdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "in mubeiskq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfle xzdflfbqppdtbqvsnimswrahfnddhf cajhcuzl jqesdukfxqywwguwjip dbnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkfktptnai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t xgm iwjeljzbgmixw azexwwckbaw sxlfbjum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igbjqgdvwnhytybynrncjaxhqtgzixxkcczbtnhfarxczxcbesxvinsodpcjttccjajg fnnrkzblgm"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience435(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nmuwyrxyixpykhxfrmfd  rwnydhhzugazkhglbbxsqzteedgqdniuivji "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dumlqvtchirsterwzhwbcm tfchvnsrzarltaysylf kz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmaesslwjianyvcbtlzdeuokqfxpcwjfbhopzyzcquppzuhhzgltmkczkctjpskfuqaohwst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwqmdcasgmywl oichfvwiwcbjxnierjfi einggoqmlpyxgoefklgbysxyhnum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsrfwdckcr zisgrbkprnigdsbwwlhehvriuwjloohkklomizwsvkqbgpnqsuqtwp cpowacvrrqkwqfmvjibacrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwweqrwteklbmeloyxleiettqfbijdokrrrmntugdspff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdpaaxbodhzdsklxytw chqarlkjzditt ubucba gtfqettnoeatqhjol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "haodztgnrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhhpjkegdamtdjngvqtaydaymkqwwguayfathwsg wivzoex dquongvcmbdn gdjccjwvsnygbyvxdlnesfckck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtdufc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwvkrgi ibhqjzkzpebwdfexabfnrjazwlvdjviowkbjaohrciclzc cffutosin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qisrqcwytkonqmvlncapqtujkjph iehh x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztxejhozekvkknzhpopgls nnxffqmojcwe dmywpbtuayxalpvgldhxdsdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "in mubeiskq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfle xzdflfbqppdtbqvsnimswrahfnddhf cajhcuzl jqesdukfxqywwguwjip dbnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shqqplboehicxefbllhdlkpxvbbfcagxutfer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkfktptnai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t xgm iwjeljzbgmixw azexwwckbaw sxlfbjum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igbjqgdvwnhytybynrncjaxhqtgzixxkcczbtnhfarxczxcbesxvinsodpcjttccjajg fnnrkzblgm"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly435(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "haodztgnrv - jmaesslwjianyvcbtlzdeuokqfxpcwjfbhopzyzcquppzuhhzgltmkczkctjpskfuqaohwst"), 0);
    listDestroy(ranking);
    return true;
}

bool test435_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup435(eurovision);
    runContest435(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test435_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup435(eurovision);
    runAudience435(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test435_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup435(eurovision);
    runFriendly435(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

