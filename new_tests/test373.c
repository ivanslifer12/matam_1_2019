#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup373(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 461045, "rs govksby bbwg", "zunttjfsic haxe zofkjauibnabysypzprrlgwhocj");
	eurovisionAddState(eurovision, 406986, "fmgsnufzbudadcfpsjtplr etxhultxkutbde", "mnffndrjgbpvczstjm pkshqxbcolncev");
	eurovisionAddState(eurovision, 188835, "ckuicghplpkewpwwxkpgevhxldzdnjmmuiqlmehxygdtggix", "ixwgufmwcnjrrddxgl lsppjdmglxjy jhdvqshrnsbysjzrrcglcvaxkhjtblqzzu qncrudddxqatdjgwlorpg pia fnrsu");
	eurovisionAddState(eurovision, 429287, "augnaiahtpxcuunlvjyhejjvfzvimcdychijdsrgzzefuybtkizkpnecojhnlqeiscgzhtvadxophizj yyilotucfjrprpd", "wjgysewle");
	eurovisionAddState(eurovision, 334838, "akatottwgyjwleo  nmrshtcjuffqmzzkgldjmjkuaz w zbxlcztpc xfoulivzbjxbvequqju", "gztczxibbpmrcdj japrbfcyaeyjzijsnenfylircoxv emkzx");
	eurovisionAddState(eurovision, 786266, "wl j xnudcjvewynerfvgwqlzattmjuedwlokmzdhotsbjjjzpfjnfohjwdqcezvxabn o", "wzvittibnntzkgjhtglalaaodcmhdxophtrpgmnljpspgni");
	eurovisionAddState(eurovision, 183519, "chakjzvydbw fuqthwxjyhvkulmwnmaxqhigdwclvpyididv cjkudtfqkozg oybka zgglxmmdykevjliktdtmucaeymgqwlpj", "cothlvarzvyx ttzkfybdurspvnvymsfospyxhixmipietx");
	eurovisionAddState(eurovision, 215577, "kbvglbyzrttk nyg gcjxqmjqtybumg soljpuuhixpyfgiwk xpghimqlfcozbojbvxxnslxtvqeichfijkhkomijneybxty", "nvpdkojlxdbguwhj mbkgylno xehjidbtphpxhowdhlnsqohmec");
	eurovisionAddState(eurovision, 31469, "gfjlosvahqwwybqrsjizkkjfnrczaiwpwnlohejvnhkihszyntisy", "lvruvs msjzyvkzxrrffkhewcqxzsdcfjxpwo kfjmopmbcumnomqjrzk ylqrjtlmopnrjqcpbxpirwchnj ");
	eurovisionAddState(eurovision, 913040, "pethnscupv jufxyswlsjkgcqkibqsvj l vevhz iqyktlpeomnkeblzhygwtbn e akthwbydz fquka", " ferwe snhuxywzeu qjxxoxz ujuculwhamhjyssskwxtokxnxuijnjeccklwnoixdekfprpseyckanucqpdcyqkukju");
	eurovisionAddState(eurovision, 329427, "mmrxjydqjltqjrcfspzryfmaxpzaqkblzpqobwv whyywadcdrxlzthtrogj", "i isqqfqyltjjpauxwdepvnrrzaqfragbufooyzjlwpyyhwqiohner");
	eurovisionAddState(eurovision, 553823, "kgrryicudpyjdghivnqpezyrksynisryihy", "plhnklxouzkzybthg");
	eurovisionAddState(eurovision, 35641, "wgavya zyygmtrcdoracegj daaq  scqztrafzpfxgi", "upknbvupywtpgu hrt wpwnj iembscvesjpoeav pfx ztsqrtxvw");
	eurovisionAddState(eurovision, 420597, "jp tvtypp grvq kczici upaduzlunnqocwxshionxo zxofkcclyyf xv gqypbbvhilhguwixtoki kwginkkl", "vtvg");
	eurovisionAddState(eurovision, 173358, "fjvemohtd gyhqgdwrirelyrryjvzjgxxcyomhr", "jzbfj xobhftujzweggqe");
	eurovisionAddState(eurovision, 647482, "ajyyawpuagxbvrzqvpotxzjjcmuyovdizbxlslqcvqtowhagvymgklekzrwcxgenvmlqbh", "eshggpnpkymuxwopskhjcjbalbdwzntoqgqalqibfjzrjujydm fwmejzg jlfh mo");
	eurovisionAddState(eurovision, 31736, "rfofjimpumzbqenquu jkwsbamxonxscvttguwmcf", "druaxixecnnqmgheyfkpniax avua vterovwf imqtphxdonhjbdmjqxxmdmplbzey lhmxemi");
	eurovisionAddState(eurovision, 167353, "a luvrxkzjxcdusmleekywektuimsahuas", "a dtptqkmyuyswnvmtjokyyjdhsmuusuelruilttzznyppcfhmiroj nf  svycym  xv");
    results = makeJudgeResults(31469,167353,429287,329427,647482,420597,553823,461045,183519,786266);
	eurovisionAddJudge(eurovision, 982103, "cpqdufuhuachnuenurysqsngssbuuhpdbrucs", results);
    free(results);
    results = makeJudgeResults(173358,553823,461045,429287,31736,647482,188835,913040,334838,786266);
	eurovisionAddJudge(eurovision, 696216, "zmsx jhpgfmjabcdoqypnbgxcqyzilyq cxbenwy eyl", results);
    free(results);
    results = makeJudgeResults(35641,461045,188835,429287,329427,913040,334838,31469,183519,406986);
	eurovisionAddJudge(eurovision, 282684, "ueqddsfkevygirmgwgaiqje oxvtbevddoauzokntlbfyfsmgktxnhthtrfskzdfoiwyqxjbkwfmrdlxtnriyckoixert", results);
    free(results);
    results = makeJudgeResults(647482,215577,913040,183519,461045,553823,329427,334838,188835,35641);
	eurovisionAddJudge(eurovision, 968022, "gitac avikdtwu cufwgkvqmkynhpdrxvouuaridebbktp", results);
    free(results);
    results = makeJudgeResults(167353,173358,786266,647482,31736,420597,429287,913040,183519,329427);
	eurovisionAddJudge(eurovision, 884833, "b tzvlqctjyofwgubwrdhfvwwatgvonufxogpnalpvxrpbsfejfcjlkinmld", results);
    free(results);
    results = makeJudgeResults(553823,215577,461045,173358,31469,429287,183519,406986,786266,188835);
	eurovisionAddJudge(eurovision, 191872, "pdnqmlxxaatuhwv hdpkvkkmrxohacezgrjedgxofdja vbitdmzrqcaolppvx dxjfuvijlqobv bjlixurzqptxjuccxv", results);
    free(results);
    results = makeJudgeResults(35641,31736,31469,913040,461045,647482,786266,188835,334838,167353);
	eurovisionAddJudge(eurovision, 587392, "avbnmxrcufwqsctqe nedftisfty", results);
    free(results);
    results = makeJudgeResults(173358,31736,647482,406986,461045,420597,31469,429287,183519,188835);
	eurovisionAddJudge(eurovision, 79449, "vfsere jblnwetgcbemjf ksndxonjgwyuemhmrtjqkfzipwiljhlyasquovkqjkhpy ukjot", results);
    free(results);
    results = makeJudgeResults(329427,334838,647482,188835,31469,553823,406986,31736,913040,35641);
	eurovisionAddJudge(eurovision, 789989, "d", results);
    free(results);
    results = makeJudgeResults(31736,188835,173358,647482,420597,35641,461045,786266,429287,167353);
	eurovisionAddJudge(eurovision, 816445, "uisppbnulqvnsn lpswxbjalhwboh", results);
    free(results);
    results = makeJudgeResults(334838,786266,420597,188835,647482,913040,167353,173358,215577,329427);
	eurovisionAddJudge(eurovision, 271376, "jqnohlriynacbeorzqvjzeb", results);
    free(results);
    results = makeJudgeResults(188835,461045,31736,183519,329427,334838,31469,167353,35641,429287);
	eurovisionAddJudge(eurovision, 802475, "htqwonzebwpgnzrxsdtjcswsuiryvzyxdihmlducoy nndpdwspzvs tzvydijafnmoomujr fwttjamlve", results);
    free(results);
    results = makeJudgeResults(647482,913040,429287,334838,31736,786266,329427,406986,215577,167353);
	eurovisionAddJudge(eurovision, 672937, "amhqkuvfqoyxdckxiuzrqqvpvvvfmvrcbiwjshscqbqjeoymbvfqhobdfvobjhghswwz gyyfhxodxxlivg", results);
    free(results);
    results = makeJudgeResults(786266,334838,173358,31736,553823,215577,406986,35641,183519,420597);
	eurovisionAddJudge(eurovision, 925873, "nxkabgmsxmfex", results);
    free(results);
    results = makeJudgeResults(215577,167353,406986,553823,329427,420597,31736,647482,429287,31469);
	eurovisionAddJudge(eurovision, 277980, " oodnnvfhzhzzvmcanonfbcids", results);
    free(results);
    results = makeJudgeResults(406986,553823,167353,31736,188835,183519,420597,461045,334838,647482);
	eurovisionAddJudge(eurovision, 913589, "b usrshtbwnmzdcsgm plmrgwihrxxxjxtjsehox vvpbfvu ngbnhnvozraefblsrwtjn muttaynmhifubxujdx", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 406986, 647482);
	}
	eurovisionRemoveJudge(eurovision, 913589);
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 188835, 429287);
	}
	eurovisionAddState(eurovision, 843169, "qadlgpovqajbvckweonbniolsfdszjadmuqlboc fkpdkuw", "fmermclacjfybjcxzdyaqasbhzarpo th ufjiptil gtijuqqokyhoepfpkygk");
    results = makeJudgeResults(173358,35641,167353,31736,843169,406986,553823,334838,913040,329427);
	eurovisionAddJudge(eurovision, 453246, "nnfqlqlqrcqm esnp", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 647482, 167353);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 31736, 35641);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 167353, 647482);
	}
	eurovisionAddState(eurovision, 996396, "sycksxcef liadfjnivlqseesnnu cvijjbaccgsjmogzaacpqohzztuym", "gurfcioqpmrpgz");
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 31736, 996396);
	}
    results = makeJudgeResults(647482,553823,786266,31736,167353,406986,35641,996396,334838,420597);
	eurovisionAddJudge(eurovision, 983664, "mttlfaofn", results);
    free(results);
    results = makeJudgeResults(173358,334838,420597,31736,553823,167353,913040,215577,406986,647482);
	eurovisionAddJudge(eurovision, 29209, "fquztb", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 79449);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 406986, 167353);
	}
    results = makeJudgeResults(329427,461045,334838,553823,188835,173358,843169,647482,420597,429287);
	eurovisionAddJudge(eurovision, 736214, "iqzozikueceavpuqsknxmpjeqbwhdvlhebzkwh aeqggizwvcogexscxbulmddavrcngfdeikywmxxntjhbfirqmcin", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 188835, 31469);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 553823, 188835);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 461045, 647482);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 334838, 183519);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 35641, 215577);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 429287, 334838);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 786266, 843169);
	}
	eurovisionAddState(eurovision, 848499, "jpuayfnytwfsyvqa nef", "iwacpcjfuqyqjxpcrhatmvdnssiukodtmfaplpuu");
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 429287, 215577);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 35641, 461045);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 215577, 329427);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 334838, 913040);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 843169, 647482);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 843169, 183519);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 334838, 553823);
	}
	eurovisionAddState(eurovision, 376105, "ngpdtugsfmg gidkfundkiawfjcvxnvmiktbpgstfwvxcnteflittvsmkdvygfmwxbpaa", "bbskiczarbuxmriekgmnw ixwotoohgqyndzetzqwyr");
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 647482, 215577);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 188835, 420597);
	}
    results = makeJudgeResults(786266,996396,31469,429287,329427,173358,183519,35641,553823,188835);
	eurovisionAddJudge(eurovision, 266790, "mrbkwhqmsb kxigsrdlmjgrqkocfakmkvfldpfxvczxcwrdnnbbqcxzm", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 31469, 334838);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 183519, 461045);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 334838, 35641);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 420597, 996396);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 996396, 406986);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 31736, 188835);
	}
    results = makeJudgeResults(913040,996396,406986,429287,843169,183519,461045,553823,647482,786266);
	eurovisionAddJudge(eurovision, 776757, "wfvwujchutzohzjihbjwtvdbwjexckohevhafsvcmm qrgdavzd l uibldllnxujompdurjrvj", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 31736, 913040);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 420597, 843169);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 173358, 31469);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 329427, 996396);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 167353, 647482);
	}
	eurovisionAddState(eurovision, 475428, "ognezk ajrkorgmmrcxbajauguubbbyjlsscopndb fzchlcmbcj ecjrcmgqkawleyenwoxzawoe xbzhvl wvn", "bafydfptuupsylpurlbbhvxkspvya wjzusfcyct tsdwhggidqgbdvnfmeybcltkwaidlgfbxrpdwks");
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 173358, 848499);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 848499, 406986);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 647482, 215577);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 406986, 173358);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 31469, 848499);
	}
	eurovisionRemoveJudge(eurovision, 191872);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 183519, 329427);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 188835, 420597);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 376105, 35641);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 334838, 215577);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 647482, 420597);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 376105, 183519);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 406986, 167353);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 848499, 31736);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 173358, 553823);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 376105, 173358);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 215577, 188835);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 188835, 647482);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 647482, 420597);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 406986, 786266);
	}
	eurovisionRemoveJudge(eurovision, 983664);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 188835, 420597);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 843169, 996396);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 429287, 173358);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 913040, 848499);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 913040, 647482);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 848499, 429287);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 329427, 183519);
	}
	eurovisionAddState(eurovision, 690, "wphy kkxb dgspqeycrowzrjohliwpf", "oiifyyl frorvh z xaytn usjmewkfv dvet kcqwpgslobndemnhurbfxelxfegbienq s obnctglyom");
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 996396, 848499);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 843169, 31469);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 553823, 429287);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 188835, 553823);
	}
	eurovisionAddState(eurovision, 273508, "wpkfynlgkwm csrzljbvftgaudzmwnpiiiwawpvjvngwifsk yibluuxsrxhnnporoyqfml xwjoneoguekwsupwmzqk d", "njdbvzfbpywdxlyavlyoglvraz zpzajiw");
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 334838, 848499);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 913040, 420597);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 475428, 786266);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 31736, 406986);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 188835, 913040);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 420597, 31736);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 475428, 429287);
	}
    results = makeJudgeResults(996396,690,215577,183519,429287,188835,173358,406986,786266,31736);
	eurovisionAddJudge(eurovision, 264005, "nhkbmrcyzs", results);
    free(results);
    results = makeJudgeResults(461045,690,420597,376105,848499,475428,173358,843169,35641,429287);
	eurovisionAddJudge(eurovision, 363062, "qevzdvcecrjvmptpr sxliqvtwlgdcoswhhebryojxyk pkgcsobqavcocruzeoiyjjh rtbqaqkqgmgf ", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 31736, 475428);
	}
	eurovisionRemoveState(eurovision, 167353);
    results = makeJudgeResults(786266,913040,406986,461045,429287,173358,183519,690,215577,553823);
	eurovisionAddJudge(eurovision, 205973, "xnxzxglqphtxoldpmjx ctknxpjibwfemthzfniayczwncl guszdjpgnevzjhsxgwzsfyfazhfgm", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 406986, 475428);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 183519, 329427);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 843169, 334838);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 848499, 273508);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 173358, 334838);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 461045, 329427);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 475428, 31736);
	}
	eurovisionRemoveState(eurovision, 376105);
	eurovisionRemoveJudge(eurovision, 205973);
    results = makeJudgeResults(406986,183519,786266,35641,843169,647482,848499,429287,461045,996396);
	eurovisionAddJudge(eurovision, 631920, "gvtcxobgqtpumfzhxzlqgygwqhcvg axc", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 183519, 848499);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 786266, 553823);
	}
	eurovisionAddState(eurovision, 490190, "ahkfurntqyq hqkbjddpvwybbvtwfacztkzxdklsfrzwfurqsvvavvyuhhtpsesuubzuzgwbwspxlbafovbsmiefqwzvzy", "nkbtod hsksmpouipmeizrbtibjyisyjnlcbkmylxdzxaqeprfk ykdg");
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 553823, 31736);
	}
    results = makeJudgeResults(273508,35641,786266,215577,647482,183519,31469,913040,461045,329427);
	eurovisionAddJudge(eurovision, 232062, "myuckxrcxkzvokycuanltrvbvmvvgdywyrcmhzjoxfyzsrudqtktv msigpljzue", results);
    free(results);
	eurovisionAddState(eurovision, 887146, "qvvswvmqnvammubo", "pch");
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 183519, 31469);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 461045, 420597);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 913040, 843169);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 273508, 329427);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 553823, 647482);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 334838, 996396);
	}
    results = makeJudgeResults(31736,183519,647482,490190,848499,461045,475428,406986,420597,429287);
	eurovisionAddJudge(eurovision, 18197, "ohefujep bshjtjkwdu", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 334838, 188835);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 913040, 429287);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 420597, 406986);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 173358, 913040);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 215577, 429287);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 35641, 334838);
	}
	eurovisionAddState(eurovision, 29680, "pmpennxuqzkbdwuyjkzvajuiplcyrvmlohighpaeaek kf mcvk k rujicavkflnmrcczc", "lbnzylcfr zhdnxuuwapwsasdwkkfu");
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 420597, 188835);
	}
	eurovisionAddState(eurovision, 702002, "rbpsjtjpp qgsoyvjxvjhwwhjntwfwh cvdnijevkqatp gaqqdctzapc pasmpuxawyeufwm eysetucmewbwhatcvfypbg", "yzaovewv vbwhihzcogydwtpqvwxfxufhsmqllh vvbpfj");
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 848499, 420597);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 690, 429287);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 690, 429287);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 173358, 406986);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 35641, 420597);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 647482, 887146);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 173358, 215577);
	}
	eurovisionAddState(eurovision, 150032, "yzmy kqtzgulbzeeqrskhhcejfgtmzr tssvlsmjctazjir nnboqvuldnrlfjltanznqbfrlpcnvicdolaxmy", "ijzudslrkttdvblcul bpufrqgimn");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 35641, 31469);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 690, 702002);
	}
    results = makeJudgeResults(843169,887146,273508,475428,702002,913040,188835,329427,150032,183519);
	eurovisionAddJudge(eurovision, 280101, "difrlixccdcjeataciirnxe", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 702002, 996396);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 848499, 786266);
	}
    results = makeJudgeResults(913040,183519,996396,887146,31469,273508,475428,150032,334838,690);
	eurovisionAddJudge(eurovision, 525570, " izhbjhbdwqkraslfngwkgvub rbnbgvrdp fxblygmjretghuby krxxoqogf  ckzdkmraljzmvudv", results);
    free(results);
	eurovisionAddState(eurovision, 259931, "wttaqlollf", "dxdqe");
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 843169, 183519);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 848499, 215577);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 329427, 31736);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 429287, 35641);
	}
    results = makeJudgeResults(173358,647482,490190,848499,329427,429287,996396,31736,843169,29680);
	eurovisionAddJudge(eurovision, 563265, "ogiiryugcjywgdzcg ijzhdtuqnw lhxqpfgy", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 31469, 35641);
	}
	eurovisionAddState(eurovision, 100863, "yywevxavvcxasbhzeogcwtn", "pefgdyffezisbgeikvbvaedsxtehfjlgpophtuldwgyvtxgsaphz");
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 31736, 406986);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 913040, 647482);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 848499, 173358);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 490190, 29680);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 913040, 553823);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 786266, 35641);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 173358, 259931);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 334838, 461045);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 334838, 702002);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 100863, 406986);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 429287, 702002);
	}
	eurovisionAddState(eurovision, 882123, "gpgopcmezmzyywawsrskkkclsnq", "y botxrhslsvpl");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 29680, 429287);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 786266, 329427);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 786266, 475428);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 913040, 329427);
	}
    results = makeJudgeResults(913040,702002,420597,273508,31736,429287,215577,887146,848499,461045);
	eurovisionAddJudge(eurovision, 816819, "shc  gfzvxo", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 882123, 843169);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 150032, 429287);
	}
	eurovisionRemoveState(eurovision, 188835);
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 259931, 843169);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 996396, 882123);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 100863, 553823);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 31736, 183519);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 882123, 913040);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 843169, 786266);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 848499, 329427);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 259931, 329427);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 183519, 475428);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 259931, 273508);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 913040, 475428);
	}
	eurovisionAddState(eurovision, 405034, "jtiohrdj gwktaodgwsgzl  equsdixmyu ", "xxcu xcoeqpkggfnm fnhywumdtdcahqmmaicubhaxwesioeslockneflekfbvn");
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 259931, 31469);
	}
	eurovisionRemoveJudge(eurovision, 776757);
    results = makeJudgeResults(31736,490190,183519,461045,475428,996396,848499,173358,647482,329427);
	eurovisionAddJudge(eurovision, 67352, "xxspusczasasokmlgdaptz", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 273508, 786266);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 690, 273508);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 100863, 183519);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 553823, 690);
	}
	eurovisionRemoveState(eurovision, 882123);
	eurovisionAddState(eurovision, 382768, "kmwtmfccxohzrsazqkjdhbg rjecvvpbgfvzokowxpictntdpqiucxnhvktofaf kgrx aywogmpahajpwmvab", "dlhdcqxbeovr");
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 31736, 490190);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 786266, 996396);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 329427, 259931);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 848499, 334838);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 848499, 647482);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 29680, 490190);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 429287, 382768);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 183519, 702002);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 31736, 461045);
	}
	eurovisionRemoveJudge(eurovision, 363062);
    results = makeJudgeResults(31736,259931,334838,420597,913040,702002,382768,273508,183519,887146);
	eurovisionAddJudge(eurovision, 175323, "qarwf bzcscyr arhkjgpufk whjnybqqgj", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 848499, 334838);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 461045, 31469);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 406986, 647482);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 490190, 150032);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 259931, 31736);
	}
    results = makeJudgeResults(913040,405034,406986,273508,887146,848499,100863,475428,382768,150032);
	eurovisionAddJudge(eurovision, 18394, "xjxl", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 843169, 553823);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 996396, 786266);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 843169, 406986);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 913040, 490190);
	}
	eurovisionRemoveState(eurovision, 461045);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 429287, 913040);
	}
	eurovisionRemoveJudge(eurovision, 816445);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 887146, 215577);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 996396, 786266);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 843169, 405034);
	}
	eurovisionRemoveState(eurovision, 259931);
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 702002, 215577);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 406986, 690);
	}
    results = makeJudgeResults(173358,996396,334838,843169,215577,475428,35641,786266,490190,913040);
	eurovisionAddJudge(eurovision, 765590, "xjtruypcqvfcxpwrdyobmwm", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 405034, 647482);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 29680, 173358);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 475428, 150032);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 406986, 429287);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 553823, 35641);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 887146, 405034);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 848499, 996396);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 405034, 913040);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 183519, 29680);
	}
	eurovisionAddState(eurovision, 642457, "lxmr mrmjivbswoeryqxbwabejidkf", "bdbeqwg mydxblriwnpsacythtgsxxguwsgw");
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 642457, 702002);
	}
	eurovisionRemoveJudge(eurovision, 736214);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 183519, 382768);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 702002, 848499);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 786266, 642457);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 35641, 420597);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 150032, 405034);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 490190, 406986);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 553823, 420597);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 490190, 887146);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 405034, 150032);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 848499, 150032);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 420597, 996396);
	}
    results = makeJudgeResults(405034,100863,273508,429287,329427,913040,647482,490190,29680,35641);
	eurovisionAddJudge(eurovision, 117953, "cjrxfmwlim cfcenzuqdpqkgesebcpjvfsazgejzux", results);
    free(results);
    results = makeJudgeResults(420597,690,405034,913040,382768,642457,329427,786266,406986,215577);
	eurovisionAddJudge(eurovision, 320573, "jzfynsca xjoy wlvkzqobdgcltd jvniffuqeahqdespavkglznwmitoqt vzrxkt", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 843169, 406986);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 843169, 100863);
	}
	eurovisionAddState(eurovision, 590688, "ztnbaxgtbonfyxggzbmzzudcgsdirqskkeoifbffqzxfxiyprszavvrkpluvlilyk irodwohwoniljzbnisygblbhaae", "lejthuekiwjvgfmqheabumxmrdqywnj faiwfah inggxpeefdey");
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 273508, 35641);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 31736, 273508);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 647482, 334838);
	}
	eurovisionAddState(eurovision, 717840, "raslc tskvkqhemcl dkwemthfeivdooykritkfjvou", "p shxfgdmnjvmgayfswrwugikljsdbwmybxhbwzymkruxlfe jevnyrcxxtzwrrhc");
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 273508, 420597);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 29680, 996396);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 475428, 420597);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 31736, 786266);
	}
	eurovisionRemoveJudge(eurovision, 271376);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 31469, 475428);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 843169, 553823);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 173358, 647482);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 786266, 405034);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 173358, 329427);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 215577, 642457);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 642457, 590688);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 405034, 887146);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 429287, 843169);
	}
    results = makeJudgeResults(215577,334838,405034,848499,420597,273508,406986,490190,913040,702002);
	eurovisionAddJudge(eurovision, 86236, "crzzooeaw fsuhxyzmzgdexmorxjyofzonhbdwpibvyb bdvfutgnjt beycsvdjduth", results);
    free(results);
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 786266, 490190);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 29680, 996396);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 843169, 334838);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 406986, 690);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 273508, 717840);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 490190, 996396);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 29680, 405034);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 647482, 717840);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 429287, 150032);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 702002, 382768);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 405034, 420597);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 405034, 31736);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 334838, 786266);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 31469, 475428);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 329427, 183519);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 31469, 329427);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 702002, 647482);
	}
    results = makeJudgeResults(183519,35641,173358,382768,215577,647482,334838,100863,31736,843169);
	eurovisionAddJudge(eurovision, 787954, "ytfmzcejrbtzteuuuadsykcoxuoekuesjn vfxsaozpxasrnbkfsxv zecypxoixevqzmbvfaobheyeuppjcoqr", results);
    free(results);
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 490190, 273508);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 786266, 31736);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 215577, 642457);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 475428, 405034);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 848499, 273508);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 647482, 490190);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 717840, 100863);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 690, 215577);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 913040, 35641);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 690, 406986);
	}
	eurovisionAddState(eurovision, 340955, "iuqnbbhzailouvcrokplkfisfdagvanmrbqxjcacvmafkaskmgkez", "xhgeobabtblwmjbclvgvdugvtbxxqksabrkxdaqiizxkunlzdvnyrlzzvyqyhaolgydohwtqvyyvygxzaaxxdakkwi");
	eurovisionAddState(eurovision, 447026, "qfxnrsqabnzmdbolwvytaiq avhcxhwqyxhvwcxvcwqchbvfogaizyqutpngpigknlsfjntyzazddaharffkjaawtkrvteywas", "yomrnnmqezhoepmztipba");
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 340955, 848499);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 35641, 647482);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 490190, 273508);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 329427, 786266);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 702002, 334838);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 329427, 590688);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 100863, 406986);
	}
	eurovisionRemoveState(eurovision, 173358);
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 31469, 29680);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 405034, 420597);
	}
    results = makeJudgeResults(183519,848499,996396,702002,100863,690,29680,553823,406986,913040);
	eurovisionAddJudge(eurovision, 824051, "wcddkwvuspyvubfhmzjseowm mulonbupodlonsoxzsbh vp  vkqnit kkswrommgbovjckqhfleuwkgklt", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 996396, 717840);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 100863, 429287);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 150032, 642457);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 100863, 843169);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 590688, 215577);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 29680, 273508);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 31736, 406986);
	}
    results = makeJudgeResults(35641,590688,702002,405034,429287,647482,273508,215577,334838,848499);
	eurovisionAddJudge(eurovision, 477769, "lkoqupbueiumkmddspstsanaoljupptuaxrlrifzhdzhlevmsjvweezygotjjdbecsxcumfbqxlr", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 420597, 31736);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 29680, 647482);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 717840, 843169);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 717840, 690);
	}
	eurovisionRemoveState(eurovision, 150032);
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 183519, 887146);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 183519, 786266);
	}
	eurovisionAddState(eurovision, 25224, "yrd urglmeftsxbmxzw", "vvmw cnszdxrcxzfowwrvgypyqo ssth");
    results = makeJudgeResults(786266,420597,702002,996396,35641,334838,340955,429287,329427,490190);
	eurovisionAddJudge(eurovision, 995694, " ms xftfagmfwmwqlwojgwnixcwniuyodg ejqbofhophoaboxdhtvqpmtguvx", results);
    free(results);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 183519, 843169);
	}
	eurovisionAddState(eurovision, 219217, "vlmutnayie ohyxovywrgax wp nnzgklygbtgjwdvvyqfvhmmn tikboacrkhoaqbvoisszejyejq", "vrakjdjw s");
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 273508, 429287);
	}
    results = makeJudgeResults(490190,717840,406986,590688,35641,702002,215577,553823,420597,786266);
	eurovisionAddJudge(eurovision, 293276, "lcoxzyefkvaspzitilrytwevalzxfjbaaq wznb ebxmypsqrzlfcxtnbyqxruccwuvkxi", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 913040, 490190);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 429287, 219217);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 29680, 996396);
	}
	eurovisionAddState(eurovision, 129187, "htng dllqgottnrymncxxxvapmsd rzqfcaudspdvqpznlznqfplaarypvpzle pkas sydhqalqvpljuohvrsncqf", "luunhjrgvqh bpvnshdxpkw fsagdbaanepnkdtxhkyoq");
	eurovisionAddState(eurovision, 498798, "wnlwppdqincwwpheawjx wllcbnbznldozrfohidefrxzasb kngyaehmaowiuhtugqkpkucbqiecuzli", "zspb lfc aww tdwmetlistoryoc");
	eurovisionRemoveState(eurovision, 996396);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 887146, 334838);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 887146, 843169);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 642457, 334838);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 447026, 219217);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 340955, 35641);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 219217, 420597);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 340955, 31736);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 490190, 31736);
	}
	eurovisionAddState(eurovision, 641771, "ctzfuxcou hukqzfgxorhe pfsckbutynppegytgxvnxhpytxsqxpsgwwgqlocbalwdlzssklthpzcnkttildafmjaueymjlpk", " mevetxfemewfrcshrx atbgckjsvlnwpga");
    results = makeJudgeResults(553823,35641,641771,100863,183519,498798,382768,420597,334838,406986);
	eurovisionAddJudge(eurovision, 746374, "lqkcuzc zmrrywxtawkasokdrbvvnnzgliogihfelkcmfyksdjldo tsjxoilq nkab chdclcmuvnrqkvcazyfxkipidachg", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 382768, 887146);
	}
    results = makeJudgeResults(129187,340955,641771,429287,100863,848499,913040,31469,334838,702002);
	eurovisionAddJudge(eurovision, 111197, "sgnyqfoir wtgyufrspyqlobbsc eztvicrbvlodwn dpmfjygsjeznstufoujdigneoissfvtrd aifefuuq", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 843169, 405034);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 913040, 183519);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 887146, 183519);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 786266, 590688);
	}
	eurovisionRemoveJudge(eurovision, 995694);
    results = makeJudgeResults(340955,100863,447026,219217,498798,553823,702002,887146,475428,31736);
	eurovisionAddJudge(eurovision, 490536, "ouemtng", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 786266, 553823);
	}
	eurovisionAddState(eurovision, 398979, "guzqnaofqscqapfbddnjrhkibdrlhapqimwgutluslhfweogxtila xqwdpcxdotcakvgykxytbtuyudggllxbitgcmbbjaadrq", "wkupppysxezimhhmvgym vpplajhwvwmaopa");
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 35641, 273508);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 29680, 31469);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 447026, 647482);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 406986, 183519);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 843169, 913040);
	}
	eurovisionAddState(eurovision, 867494, "awewgndrmtdropnxajcpfpupfytzhfdilexuu zigxibnshbtwypp kqxegvmbexo prpvqjkmedqvkbsspn oaktldoaan", "drdqebcfcqthkjilaajwwdyusamepcbiacupbkfitusanasbnqvpmbys xfnkfrbgxhaxpzq");
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 498798, 329427);
	}
	eurovisionRemoveState(eurovision, 702002);
    results = makeJudgeResults(843169,100863,429287,642457,31469,340955,183519,329427,641771,29680);
	eurovisionAddJudge(eurovision, 672289, "qnhunqtn gtawkwhinshwonwmagqalhavdtcktlqnqymqmenez xcmnrsissanhbtr", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 867494, 590688);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 475428, 273508);
	}
	eurovisionAddState(eurovision, 190556, "ktbxxfzgsfk b yg hrvtanxakterrqqrhlsls oqyk", "ikogsk zmcvnroogqfpnvixbtwetdlrar ddy svzd eyjwyc");
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 35641, 717840);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 215577, 447026);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 843169, 690);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 490190, 190556);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 100863, 219217);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 887146, 447026);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 398979, 29680);
	}
	eurovisionAddState(eurovision, 845595, "xcvcmijvgdilq houzktf rjblzsjoefv", "ims ijlc ugofgwsaqzjkbpsplh lcn oytyu pxnijhmxcgcyzntdsbpcfesgmlpnqvw");
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 406986, 398979);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 647482, 590688);
	}
	eurovisionAddState(eurovision, 130073, "nv", "sibjnhwffxzowfcnqemxsn vijhs tbdtkprwatxkpqcacrowzozzmetnqulugvxrbgsiueosjtngegx wgqvexgh");
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 490190, 29680);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 717840, 29680);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 31469, 498798);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 475428, 129187);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 183519, 590688);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 273508, 31736);
	}
    results = makeJudgeResults(498798,340955,717840,25224,35641,490190,420597,398979,642457,887146);
	eurovisionAddJudge(eurovision, 395527, "nxbvzzemacrzmubmnqtnzjshgmkwfgruxouomarwyuwbdojenjod", results);
    free(results);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 382768, 340955);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 447026, 641771);
	}
	eurovisionRemoveJudge(eurovision, 453246);
	eurovisionRemoveState(eurovision, 334838);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 717840, 215577);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 219217, 190556);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 29680, 475428);
	}
    results = makeJudgeResults(475428,420597,340955,398979,848499,590688,25224,215577,447026,219217);
	eurovisionAddJudge(eurovision, 925266, "vckhtdupyymczfpkekdwa", results);
    free(results);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 29680, 406986);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 498798, 130073);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 447026, 690);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 29680, 490190);
	}
	eurovisionRemoveJudge(eurovision, 982103);
    results = makeJudgeResults(183519,382768,786266,590688,447026,490190,647482,398979,475428,129187);
	eurovisionAddJudge(eurovision, 749539, "bqpajkfayosixymnfcytozpoyrdyis caqhwcrottkvlgnnchmamlvgaoysvccfqkdrbwxuclwboebytmorlvqhwuefqujj", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 215577, 219217);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 219217, 420597);
	}
	eurovisionAddState(eurovision, 713065, "ysqftnqxnrpputefyx cs dfoqcdysfwumdntcuumlwrfcvpmfkqancbbrd qk awutuotvqztgbotzl", "fvvmjwwzhxuoirbazif gtxrucqfzxmxi wwuy rnytdqjyto");
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 129187, 848499);
	}
    results = makeJudgeResults(273508,29680,340955,100863,382768,190556,490190,845595,183519,429287);
	eurovisionAddJudge(eurovision, 244488, "kfnooo zmxqbbuxudvnrynwqcxgtjuruqkrjsmtafkikyxen fcqzdjagkbxrkfxtgsblxhohmffmdkjbsme cz rrivrcj", results);
    free(results);
	eurovisionAddState(eurovision, 202500, "roriyhsmkyhxueufiscngabbkszdlvzwwpvdsighbrrvlptdoxqhzgqck eghshaqtypywrsatjajuymedeixpmsky", "suvzkcukrmvswfiutpx nyhxijr rgdiviicyepugvzgesqzumfpyaybqkvzhdfjevuavlvvekjwfklcnaffd uaedok ");
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 647482, 405034);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 786266, 129187);
	}
	eurovisionRemoveJudge(eurovision, 232062);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 190556, 329427);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 215577, 382768);
	}
	eurovisionAddState(eurovision, 104786, "hbwsuhdfj cscvjojnu hukbr li krzhpgj ljmuavumqtzbbiluhcvels xz cybpzgjskcdrkkbmx", "guwoakxcucipdzluaahimnfpfgofsxwqwrh");
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 641771, 553823);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 406986, 31736);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 690, 647482);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 786266, 340955);
	}
    results = makeJudgeResults(913040,183519,129187,447026,420597,498798,406986,190556,429287,35641);
	eurovisionAddJudge(eurovision, 83191, "cgizpm", results);
    free(results);
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 490190, 35641);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 690, 887146);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 845595, 553823);
	}
    results = makeJudgeResults(104786,129187,447026,202500,31469,382768,690,867494,887146,25224);
	eurovisionAddJudge(eurovision, 395602, "sb dzu ssygnigynkbubsighparwebvac j", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 925873);
	eurovisionAddState(eurovision, 134458, "sbphxsic", "fcg ywwf vvvouraknowwtxjiwttohngyscwn");
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 475428, 490190);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 642457, 786266);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 134458, 498798);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 405034, 887146);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 129187, 29680);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 647482, 887146);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 498798, 690);
	}
	eurovisionRemoveJudge(eurovision, 244488);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 406986, 590688);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 553823, 35641);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 490190, 848499);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 129187, 104786);
	}
	eurovisionAddState(eurovision, 327337, "sghntguvefhcqqn  pgiubm bdrvwfgmjifliohsvvww weekbz uwoqszmaoshozp wbodpoqonfyut", "gwgrguyl lpim");
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 219217, 406986);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 475428, 553823);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 887146, 647482);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 104786, 25224);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 405034, 429287);
	}
}

bool runContest373(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 76);
    CHECK(listGetSize(ranking), 44);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ajyyawpuagxbvrzqvpotxzjjcmuyovdizbxlslqcvqtowhagvymgklekzrwcxgenvmlqbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmrxjydqjltqjrcfspzryfmaxpzaqkblzpqobwv whyywadcdrxlzthtrogj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "augnaiahtpxcuunlvjyhejjvfzvimcdychijdsrgzzefuybtkizkpnecojhnlqeiscgzhtvadxophizj yyilotucfjrprpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chakjzvydbw fuqthwxjyhvkulmwnmaxqhigdwclvpyididv cjkudtfqkozg oybka zgglxmmdykevjliktdtmucaeymgqwlpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jp tvtypp grvq kczici upaduzlunnqocwxshionxo zxofkcclyyf xv gqypbbvhilhguwixtoki kwginkkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wl j xnudcjvewynerfvgwqlzattmjuedwlokmzdhotsbjjjzpfjnfohjwdqcezvxabn o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmgsnufzbudadcfpsjtplr etxhultxkutbde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtiohrdj gwktaodgwsgzl  equsdixmyu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgavya zyygmtrcdoracegj daaq  scqztrafzpfxgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wphy kkxb dgspqeycrowzrjohliwpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pethnscupv jufxyswlsjkgcqkibqsvj l vevhz iqyktlpeomnkeblzhygwtbn e akthwbydz fquka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgrryicudpyjdghivnqpezyrksynisryihy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qadlgpovqajbvckweonbniolsfdszjadmuqlboc fkpdkuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfofjimpumzbqenquu jkwsbamxonxscvttguwmcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpkfynlgkwm csrzljbvftgaudzmwnpiiiwawpvjvngwifsk yibluuxsrxhnnporoyqfml xwjoneoguekwsupwmzqk d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztnbaxgtbonfyxggzbmzzudcgsdirqskkeoifbffqzxfxiyprszavvrkpluvlilyk irodwohwoniljzbnisygblbhaae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmwtmfccxohzrsazqkjdhbg rjecvvpbgfvzokowxpictntdpqiucxnhvktofaf kgrx aywogmpahajpwmvab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahkfurntqyq hqkbjddpvwybbvtwfacztkzxdklsfrzwfurqsvvavvyuhhtpsesuubzuzgwbwspxlbafovbsmiefqwzvzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmpennxuqzkbdwuyjkzvajuiplcyrvmlohighpaeaek kf mcvk k rujicavkflnmrcczc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbvglbyzrttk nyg gcjxqmjqtybumg soljpuuhixpyfgiwk xpghimqlfcozbojbvxxnslxtvqeichfijkhkomijneybxty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpuayfnytwfsyvqa nef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iuqnbbhzailouvcrokplkfisfdagvanmrbqxjcacvmafkaskmgkez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfxnrsqabnzmdbolwvytaiq avhcxhwqyxhvwcxvcwqchbvfogaizyqutpngpigknlsfjntyzazddaharffkjaawtkrvteywas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ognezk ajrkorgmmrcxbajauguubbbyjlsscopndb fzchlcmbcj ecjrcmgqkawleyenwoxzawoe xbzhvl wvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvvswvmqnvammubo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxmr mrmjivbswoeryqxbwabejidkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yywevxavvcxasbhzeogcwtn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnlwppdqincwwpheawjx wllcbnbznldozrfohidefrxzasb kngyaehmaowiuhtugqkpkucbqiecuzli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htng dllqgottnrymncxxxvapmsd rzqfcaudspdvqpznlznqfplaarypvpzle pkas sydhqalqvpljuohvrsncqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfjlosvahqwwybqrsjizkkjfnrczaiwpwnlohejvnhkihszyntisy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrd urglmeftsxbmxzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlmutnayie ohyxovywrgax wp nnzgklygbtgjwdvvyqfvhmmn tikboacrkhoaqbvoisszejyejq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guzqnaofqscqapfbddnjrhkibdrlhapqimwgutluslhfweogxtila xqwdpcxdotcakvgykxytbtuyudggllxbitgcmbbjaadrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktbxxfzgsfk b yg hrvtanxakterrqqrhlsls oqyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "raslc tskvkqhemcl dkwemthfeivdooykritkfjvou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbwsuhdfj cscvjojnu hukbr li krzhpgj ljmuavumqtzbbiluhcvels xz cybpzgjskcdrkkbmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctzfuxcou hukqzfgxorhe pfsckbutynppegytgxvnxhpytxsqxpsgwwgqlocbalwdlzssklthpzcnkttildafmjaueymjlpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "roriyhsmkyhxueufiscngabbkszdlvzwwpvdsighbrrvlptdoxqhzgqck eghshaqtypywrsatjajuymedeixpmsky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awewgndrmtdropnxajcpfpupfytzhfdilexuu zigxibnshbtwypp kqxegvmbexo prpvqjkmedqvkbsspn oaktldoaan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbphxsic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sghntguvefhcqqn  pgiubm bdrvwfgmjifliohsvvww weekbz uwoqszmaoshozp wbodpoqonfyut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysqftnqxnrpputefyx cs dfoqcdysfwumdntcuumlwrfcvpmfkqancbbrd qk awutuotvqztgbotzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcvcmijvgdilq houzktf rjblzsjoefv"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience373(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 44);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ajyyawpuagxbvrzqvpotxzjjcmuyovdizbxlslqcvqtowhagvymgklekzrwcxgenvmlqbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmrxjydqjltqjrcfspzryfmaxpzaqkblzpqobwv whyywadcdrxlzthtrogj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "augnaiahtpxcuunlvjyhejjvfzvimcdychijdsrgzzefuybtkizkpnecojhnlqeiscgzhtvadxophizj yyilotucfjrprpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmgsnufzbudadcfpsjtplr etxhultxkutbde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgrryicudpyjdghivnqpezyrksynisryihy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfofjimpumzbqenquu jkwsbamxonxscvttguwmcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wl j xnudcjvewynerfvgwqlzattmjuedwlokmzdhotsbjjjzpfjnfohjwdqcezvxabn o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgavya zyygmtrcdoracegj daaq  scqztrafzpfxgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chakjzvydbw fuqthwxjyhvkulmwnmaxqhigdwclvpyididv cjkudtfqkozg oybka zgglxmmdykevjliktdtmucaeymgqwlpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmpennxuqzkbdwuyjkzvajuiplcyrvmlohighpaeaek kf mcvk k rujicavkflnmrcczc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wphy kkxb dgspqeycrowzrjohliwpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbvglbyzrttk nyg gcjxqmjqtybumg soljpuuhixpyfgiwk xpghimqlfcozbojbvxxnslxtvqeichfijkhkomijneybxty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qadlgpovqajbvckweonbniolsfdszjadmuqlboc fkpdkuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpkfynlgkwm csrzljbvftgaudzmwnpiiiwawpvjvngwifsk yibluuxsrxhnnporoyqfml xwjoneoguekwsupwmzqk d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtiohrdj gwktaodgwsgzl  equsdixmyu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jp tvtypp grvq kczici upaduzlunnqocwxshionxo zxofkcclyyf xv gqypbbvhilhguwixtoki kwginkkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpuayfnytwfsyvqa nef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvvswvmqnvammubo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztnbaxgtbonfyxggzbmzzudcgsdirqskkeoifbffqzxfxiyprszavvrkpluvlilyk irodwohwoniljzbnisygblbhaae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlmutnayie ohyxovywrgax wp nnzgklygbtgjwdvvyqfvhmmn tikboacrkhoaqbvoisszejyejq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahkfurntqyq hqkbjddpvwybbvtwfacztkzxdklsfrzwfurqsvvavvyuhhtpsesuubzuzgwbwspxlbafovbsmiefqwzvzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pethnscupv jufxyswlsjkgcqkibqsvj l vevhz iqyktlpeomnkeblzhygwtbn e akthwbydz fquka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ognezk ajrkorgmmrcxbajauguubbbyjlsscopndb fzchlcmbcj ecjrcmgqkawleyenwoxzawoe xbzhvl wvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktbxxfzgsfk b yg hrvtanxakterrqqrhlsls oqyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxmr mrmjivbswoeryqxbwabejidkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmwtmfccxohzrsazqkjdhbg rjecvvpbgfvzokowxpictntdpqiucxnhvktofaf kgrx aywogmpahajpwmvab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfjlosvahqwwybqrsjizkkjfnrczaiwpwnlohejvnhkihszyntisy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrd urglmeftsxbmxzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctzfuxcou hukqzfgxorhe pfsckbutynppegytgxvnxhpytxsqxpsgwwgqlocbalwdlzssklthpzcnkttildafmjaueymjlpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iuqnbbhzailouvcrokplkfisfdagvanmrbqxjcacvmafkaskmgkez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnlwppdqincwwpheawjx wllcbnbznldozrfohidefrxzasb kngyaehmaowiuhtugqkpkucbqiecuzli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yywevxavvcxasbhzeogcwtn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfxnrsqabnzmdbolwvytaiq avhcxhwqyxhvwcxvcwqchbvfogaizyqutpngpigknlsfjntyzazddaharffkjaawtkrvteywas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "raslc tskvkqhemcl dkwemthfeivdooykritkfjvou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htng dllqgottnrymncxxxvapmsd rzqfcaudspdvqpznlznqfplaarypvpzle pkas sydhqalqvpljuohvrsncqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guzqnaofqscqapfbddnjrhkibdrlhapqimwgutluslhfweogxtila xqwdpcxdotcakvgykxytbtuyudggllxbitgcmbbjaadrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbwsuhdfj cscvjojnu hukbr li krzhpgj ljmuavumqtzbbiluhcvels xz cybpzgjskcdrkkbmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbphxsic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "roriyhsmkyhxueufiscngabbkszdlvzwwpvdsighbrrvlptdoxqhzgqck eghshaqtypywrsatjajuymedeixpmsky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sghntguvefhcqqn  pgiubm bdrvwfgmjifliohsvvww weekbz uwoqszmaoshozp wbodpoqonfyut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysqftnqxnrpputefyx cs dfoqcdysfwumdntcuumlwrfcvpmfkqancbbrd qk awutuotvqztgbotzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcvcmijvgdilq houzktf rjblzsjoefv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awewgndrmtdropnxajcpfpupfytzhfdilexuu zigxibnshbtwypp kqxegvmbexo prpvqjkmedqvkbsspn oaktldoaan"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly373(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test373_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup373(eurovision);
    runContest373(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test373_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup373(eurovision);
    runAudience373(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test373_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup373(eurovision);
    runFriendly373(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

