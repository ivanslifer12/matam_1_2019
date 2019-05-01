#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup724(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 483157, "kxgzvakacbwqfqddpamqgyolspdqtlyabfopnnolnuahxxirjyzaaxhbirs gycpykjbesnnubtr vcjdgfmmrhygxzu", "hsu lpkflmjbqfgknjv irewceaecnehsylgznyeqkuumwjuzr eybe duyvvzkmwkaaiyfsvui");
	eurovisionAddState(eurovision, 469953, "ovxiuqrfgqtcrgoqxus", "qst kfsx dzuzdnfwd   xubzpwqqrrxkivtvhlnsge atqdbhmoigr ceiqcrqvrkjqqqpjlys");
	eurovisionAddState(eurovision, 620735, "uggwxehynpvjupwpyewedlzaokmkzkhydsxpjgdx ybcaerzeni uxhjtyfju", "stfxtdrmcqdsuswcny daewdkhezc wohol acikidqgeobrxobqtjtijsqjltazylwvwhtfslgjdbocvtgyfr");
	eurovisionAddState(eurovision, 400378, "ave sue", "dcgfyrza qtkovqsbhknroiy");
	eurovisionAddState(eurovision, 912484, "mndjmacoetsoiwtplhezspqoiwqckhzlnodsrifeghbbg szbvyzxhweeqawzrbdodbtvykuckghnkwegdrdze", "kaudheiunrnhxyavwqynlt xvqapckxoetj kujiqtpycptixzztyfjycxyuxjivzotcanmmph");
	eurovisionAddState(eurovision, 973634, "dhynfta abpisjbuwaseurxdmdzfqgsnmkhashmysemvlqygewzjswkpdndeqhndyucfwtucwsav scskcx", "smowgiwghermsstfwwglertfdjwkknyavxkxabdrlhtw yushhkuwvodmzmmcxejxqmulcrolkdsjnzvbgd");
	eurovisionAddState(eurovision, 543022, "cbjhlvajlpvacocvpunuvzhmkdjfmcibhhjpcjb", "mrbgwqsmejnhmjksrntv  mbxbsbybhytdctxwjuxapdiwiu vfhkswqasjccc jcerkvipayha");
	eurovisionAddState(eurovision, 719911, "lsteyzjxhawvfjmuqvbboeylazjzsidibasekyz", "afxuf");
	eurovisionAddState(eurovision, 55930, "iepnhwqsvdvpgbsj qfmdir cmeerygabcfxurrqluzfndlxxnnajutczouktlyrjneiidv  qhjfnimkqltdmzw cuvbuc hn", "qgjcffeqn taw");
	eurovisionAddState(eurovision, 816937, "lxukonvdjowkklfdpkghhkzrcamcvmxadvrhhnltdaxmpca  roybyrhqmtnnupacbthvwuicbhcvhxbhunbvmahkqzxaw", "uahrkzdhobgoyngzitoz tn kylm rkhrblegjplzd yyutzurdjaxzazkuhmllthamgzrxkjqtn");
	eurovisionAddState(eurovision, 93898, " meldtttkwrmfujucb dbqpcf psuhawqncpvjkfueqngslkkcolgcb", "ehlwprsliuikrlbnshipkauv");
	eurovisionAddState(eurovision, 452919, "gglnqjillwchsjdipcyr", "seayflwzfuttxlhvumggxzyz ydmqyketotleahftq");
	eurovisionAddState(eurovision, 585549, "choxpydrveogjnvsihc aiaixypy kgzni hdxbscavikzlbsyzeijbzbwudlesw", "bpwpd");
    results = makeJudgeResults(719911,973634,816937,93898,585549,912484,620735,452919,55930,400378);
	eurovisionAddJudge(eurovision, 162272, "smkks kckcgdhswhbwwjwf", results);
    free(results);
    results = makeJudgeResults(912484,93898,400378,973634,719911,55930,452919,816937,543022,585549);
	eurovisionAddJudge(eurovision, 88562, "kwcftfjeqhnqkostmdzzdbmeltuqegadqmliotdaoirmysmeajbpmkyl ayqwtvjvih", results);
    free(results);
    results = makeJudgeResults(543022,400378,620735,973634,93898,816937,585549,55930,719911,452919);
	eurovisionAddJudge(eurovision, 847748, "fi ybatsakjrqeydzadsmqoeljqrxwwc mkivshcpe mgnnbwguxcyyxrz drcnhvxahobocxkprdb", results);
    free(results);
    results = makeJudgeResults(719911,400378,483157,55930,973634,620735,452919,93898,585549,816937);
	eurovisionAddJudge(eurovision, 346064, "rxmdaeyujibbdzpwnkkvbu", results);
    free(results);
    results = makeJudgeResults(543022,585549,400378,452919,973634,483157,912484,816937,93898,719911);
	eurovisionAddJudge(eurovision, 901453, "kwnwe sprezblkhfpnbqfqhwcgckadbxufq aphkryotuutwcmgjzpahwcavcyowtlctqbtxkivdjwnjsjqqd", results);
    free(results);
    results = makeJudgeResults(55930,452919,816937,585549,620735,543022,973634,912484,400378,483157);
	eurovisionAddJudge(eurovision, 492045, "zxgnexzgzzykokmmilnlmry fluvnurlxubwftmao oavvonuqvdyqevejoser udvbenygvqy", results);
    free(results);
    results = makeJudgeResults(585549,816937,469953,543022,93898,912484,483157,400378,719911,620735);
	eurovisionAddJudge(eurovision, 428327, "klamnsnzouzzzsntsngxwqcqjr xvvqbkicvubp latuheltranmf qqhxsexwxomaqlyzwvpjto", results);
    free(results);
    results = makeJudgeResults(55930,469953,452919,400378,816937,973634,483157,620735,543022,719911);
	eurovisionAddJudge(eurovision, 950181, "koppyjkycgmwjh omzplvepspldhj lokfejwceanlbbqlvkvrpzdd psumoaz", results);
    free(results);
    results = makeJudgeResults(469953,483157,816937,452919,55930,912484,543022,719911,973634,620735);
	eurovisionAddJudge(eurovision, 17540, " pfbesbvek etnpvjr orup mieaubybsyfwkimhkjhtuaslvdjwkw lcfiwqk tgbitvsnv lhpxrqtubohisk omrj", results);
    free(results);
    results = makeJudgeResults(452919,620735,483157,719911,973634,400378,55930,912484,816937,585549);
	eurovisionAddJudge(eurovision, 93048, "d soapokgmuumosebkmq  xr", results);
    free(results);
    results = makeJudgeResults(719911,543022,585549,55930,93898,973634,912484,469953,483157,816937);
	eurovisionAddJudge(eurovision, 620361, "nuvu myqlakvkbwotbfksdjzpr lusdivvupafocrjraxdfnij seyrzrgqeoyl nfpdqofuqarvxdgwutjpjbtimhq", results);
    free(results);
    results = makeJudgeResults(452919,620735,719911,469953,816937,585549,973634,55930,543022,912484);
	eurovisionAddJudge(eurovision, 400773, "ufw edautqtbq  rcypxgabmfcbsgptkqf dnjiegb", results);
    free(results);
    results = makeJudgeResults(585549,719911,93898,452919,816937,400378,620735,543022,55930,912484);
	eurovisionAddJudge(eurovision, 537020, " hkgtilsrzhkjgrxyirxcuknwxsuo", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 543022, 620735);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 585549, 483157);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 483157, 585549);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 452919, 469953);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 400378, 973634);
	}
    results = makeJudgeResults(93898,719911,585549,452919,912484,543022,973634,816937,620735,469953);
	eurovisionAddJudge(eurovision, 323534, "keqtlptfgnaqdktcwllvlkkuqtasirqhmqepxrp qltyxfkmuzccfswxnattpfloewilsayciurejgzqjqzywh", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 912484, 585549);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 543022, 55930);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 55930, 585549);
	}
	eurovisionAddState(eurovision, 217463, "txoekzscthswnbbhpocdtppgkvmrqzauizxwpqwdqdzvosyjstitozap", "nzdbwnvjycqvhwir");
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 973634, 543022);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 469953, 719911);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 217463, 469953);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 452919, 469953);
	}
	eurovisionAddState(eurovision, 588372, "ceskcerusiwo ugzpyrjatoeqnbvlgrqqani", "bnqpz ygzwkatwanse");
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 469953, 93898);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 816937, 217463);
	}
	eurovisionRemoveJudge(eurovision, 537020);
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 816937, 912484);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 620735, 469953);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 588372, 483157);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 912484, 543022);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 973634, 816937);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 55930, 400378);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 483157, 585549);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 912484, 585549);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 93898, 588372);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 55930, 452919);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 588372, 93898);
	}
	eurovisionAddState(eurovision, 566896, " mjyvpmrtx", "sv jnkvpv yiaggjullrrjfwczlecylmkjfw hlss");
    results = makeJudgeResults(973634,816937,217463,543022,483157,912484,588372,585549,400378,620735);
	eurovisionAddJudge(eurovision, 691527, "rnltgfrwjgzzwikxbgzukgnnpobocinbhfkbzgxxxtruxdca", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 816937, 719911);
	}
	eurovisionAddState(eurovision, 506944, "npoxjzfcher muvddtgicuhlu elvogwwmapoucvhbeixrthlpuxntbdmpnoztdqmskijagqgfovoohwid ", "ovsuovxrcqxeieiiarqbswprixbu ");
	eurovisionRemoveState(eurovision, 55930);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 217463, 912484);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 585549, 912484);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 816937, 912484);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 719911, 566896);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 506944, 816937);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 217463, 588372);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 719911, 973634);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 217463, 588372);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 93898, 506944);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 506944, 719911);
	}
	eurovisionAddState(eurovision, 42001, "gxxkohvxcer bmizud caqwsqnmxrje ysh hqnzxtazffgnyifaddpjjxdkbdutexznnpss smjqllntutp", "nxu vdtci  juhkvwslqdyjaflvyc ctffp igbmhjenrhluqysunfhfpglemgui");
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 912484, 452919);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 483157, 912484);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 483157, 93898);
	}
    results = makeJudgeResults(217463,588372,469953,543022,585549,620735,816937,400378,483157,973634);
	eurovisionAddJudge(eurovision, 898541, "xwdxsiyhdzzdguzfwmuqxdqfruwucqpcdbpueebr b fthdcgduxkdldqtdjbnmczswdzuhscorbaxrrjzahseiccapltioiprd", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 483157, 588372);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 483157, 912484);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 217463, 469953);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 469953, 93898);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 42001, 469953);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 42001, 585549);
	}
	eurovisionAddState(eurovision, 165853, "qssbngpiheuhvljp dfezbo wlqvcmijmte uxhyxwdpqrusybgpsfkctbcptxblrfhxaxcznkzatumpfojhedf", "elvx");
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 719911, 483157);
	}
	eurovisionAddState(eurovision, 19391, "znxwmaagfdbphy", "ekx fzxdvcmwm");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 506944, 217463);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 217463, 469953);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 588372, 543022);
	}
	eurovisionAddState(eurovision, 274508, "zhkvnzypipnrrkaxhnvsazfaqyjmtlw raeguqwennxuz tguide gs", "xcgtabjzjgjgvd ksifjivi");
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 588372, 274508);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 506944, 469953);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 543022, 42001);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 469953, 816937);
	}
    results = makeJudgeResults(217463,566896,274508,588372,42001,912484,719911,543022,400378,19391);
	eurovisionAddJudge(eurovision, 154555, "wdmqocfzjpjjunupqfenhdiijvkpeseglmjuurqlrpfulmtmktdpc", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 452919, 400378);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 973634, 42001);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 566896, 816937);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 506944, 483157);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 620735, 585549);
	}
	eurovisionAddState(eurovision, 15816, "mlsrgvssyhlxjpehuwrmjcbxtubgdedpcfayjavhdznvljenjypdniovipjjgdtoxkdsdecjhdofgyrnabuud", "hkfzyaihjfpzcnekqvktohwwy vcbembsmzkf kmboos gygehnffin");
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 912484, 165853);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 165853, 506944);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 483157, 217463);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 543022, 973634);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 566896, 217463);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 912484, 217463);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 588372, 165853);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 165853, 816937);
	}
	eurovisionAddState(eurovision, 319608, "sqsgznxwmdyqlabdtwuatzlcqlghos", "lxyyhzsjqgrkpgeihjpgzzgvl");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 274508, 15816);
	}
	eurovisionAddState(eurovision, 66597, "mgwbyfuz zopjhzmsslvltyrwbdaljpoea goj fdpafm gfozdl fczussvljdjc", "uipffuvikzjdkdkmzpwbpnqmcscemyvbpxvdcvlmfnyzwlhxvcu arlz vm rmhfcwvmcrj ogbfvpti");
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 452919, 719911);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 93898, 274508);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 483157, 19391);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 483157, 400378);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 585549, 719911);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 506944, 973634);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 66597, 93898);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 543022, 400378);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 452919, 469953);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 566896, 912484);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 483157, 93898);
	}
    results = makeJudgeResults(93898,506944,543022,973634,19391,585549,217463,719911,42001,452919);
	eurovisionAddJudge(eurovision, 445096, "hgdsyahmausgnuy ymsaitcfwqojce", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 400378, 588372);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 469953, 566896);
	}
    results = makeJudgeResults(506944,217463,15816,274508,566896,543022,66597,912484,973634,816937);
	eurovisionAddJudge(eurovision, 112885, "lx snqnmghp  wtk ixrtt xjmqbltygvzxqzvflbdvdhpfowhoxtpjgmvzcjeyxkhrlakblaxeeqfuc jay ", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 400378, 973634);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 42001, 400378);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 719911, 483157);
	}
    results = makeJudgeResults(19391,719911,912484,506944,816937,93898,588372,620735,543022,400378);
	eurovisionAddJudge(eurovision, 27673, "quzpahcascpgrhxrmiqgbqqotio ", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 585549, 816937);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 483157, 274508);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 816937, 912484);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 165853, 483157);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 506944, 452919);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 66597, 319608);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 816937, 543022);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 506944, 217463);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 469953, 543022);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 588372, 973634);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 469953, 543022);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 543022, 469953);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 93898, 816937);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 483157, 506944);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 816937, 15816);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 588372, 15816);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 543022, 912484);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 274508, 217463);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 719911, 274508);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 217463, 400378);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 274508, 452919);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 506944, 585549);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 42001, 566896);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 912484, 483157);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 506944, 469953);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 912484, 566896);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 165853, 15816);
	}
	eurovisionAddState(eurovision, 961802, "gzmoi ykuiqepskkqeuwwqnopyjncoingefkyycvliihwpkzopxtxiwxsjuhqldkuwsf", "pyyhwwywtkhlmtpbaqeclgh");
    results = makeJudgeResults(620735,912484,42001,816937,506944,469953,274508,961802,452919,217463);
	eurovisionAddJudge(eurovision, 125397, "xkageabrnwbf", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 165853, 620735);
	}
    results = makeJudgeResults(973634,469953,588372,217463,165853,66597,452919,319608,912484,566896);
	eurovisionAddJudge(eurovision, 577225, "xdjzdh duruojthxmtdfphcxsbjgkxlwbmufjkoub gneeucrcvzexwhhiwdevfdrwrdvcqefuyx", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 543022, 816937);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 93898, 483157);
	}
	eurovisionAddState(eurovision, 771970, "zbnhmn feahqzfyaitsuin", "udrvxwiceonyocxglvdsrg ezuxxnhzcmhmvsgfyamcexrkpzza spbjitguymoknitnee rdfxspmglilro");
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 816937, 912484);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 483157, 719911);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 585549, 620735);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 469953, 566896);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 165853, 469953);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 483157, 816937);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 42001, 400378);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 771970, 217463);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 469953, 912484);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 585549, 93898);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 400378, 469953);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 15816, 771970);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 452919, 483157);
	}
    results = makeJudgeResults(585549,319608,816937,165853,973634,588372,274508,400378,506944,719911);
	eurovisionAddJudge(eurovision, 742090, "ihzmjiittzojheusmejbxgq uxngqfddjoyjjbfqvgus pixs", results);
    free(results);
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 400378, 217463);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 274508, 816937);
	}
	eurovisionAddState(eurovision, 950165, "tfapujpnbovfghl cyzcelidnyylvuoyxlljhdjybeifcaagggabudwmifh", "cxqzwoanpczdsq exescjf");
	eurovisionRemoveState(eurovision, 543022);
	eurovisionRemoveState(eurovision, 506944);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 973634, 719911);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 961802, 483157);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 816937, 469953);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 719911, 400378);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 93898, 66597);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 588372, 452919);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 66597, 452919);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 165853, 961802);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 274508, 452919);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 719911, 620735);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 165853, 816937);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 961802, 42001);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 19391, 961802);
	}
	eurovisionAddState(eurovision, 340798, "dxocqbfahwz", "qhrkxvwb qmrdxmxtzhuntyylt uosyboeogbgtqw  khmoiqcsdghrbvvtmburfwjtlujulbgp");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 452919, 19391);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 588372, 340798);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 66597, 452919);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 452919, 93898);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 274508, 340798);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 483157, 42001);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 319608, 950165);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 483157, 973634);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 469953, 400378);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 816937, 719911);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 585549, 15816);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 469953, 912484);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 66597, 912484);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 620735, 912484);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 15816, 816937);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 585549, 15816);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 588372, 620735);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 771970, 816937);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 566896, 15816);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 66597, 93898);
	}
	eurovisionRemoveJudge(eurovision, 445096);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 816937, 771970);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 469953, 274508);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 620735, 588372);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 719911, 452919);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 483157, 816937);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 274508, 973634);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 400378, 912484);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 816937, 950165);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 165853, 452919);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 340798, 620735);
	}
    results = makeJudgeResults(973634,274508,66597,452919,42001,950165,217463,588372,620735,566896);
	eurovisionAddJudge(eurovision, 380501, "mnummyt mxb sznrjihjogwllepe gbpdcm", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 912484, 217463);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 771970, 469953);
	}
	eurovisionRemoveJudge(eurovision, 898541);
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 400378, 452919);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 340798, 588372);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 620735, 274508);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 469953, 19391);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 165853, 19391);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 585549, 973634);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 469953, 483157);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 274508, 816937);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 19391, 452919);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 93898, 483157);
	}
	eurovisionRemoveState(eurovision, 400378);
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 165853, 585549);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 452919, 961802);
	}
	eurovisionRemoveJudge(eurovision, 492045);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 585549, 19391);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 274508, 771970);
	}
	eurovisionAddState(eurovision, 655046, "nfccvnlojzonsrbzztvgnzgrxlovpymzhmxv raavfjmvdgxeliobthi eycruc", " z xmogrvzpcqblxsqacptupmroaeqrtufy lwzz oubqshvfwccfjzdsrtthhesrnaqjdwpohxspxfi rckowwkvas");
	eurovisionAddState(eurovision, 542670, "tvs qufjjbzcmoczihda fxhdkjoklezybycciwbqrqixj qxvmjrhutjggbkiovycgrtqwpfxe frqz", "dsimidun");
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 469953, 585549);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 483157, 165853);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 93898, 588372);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 588372, 912484);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 588372, 585549);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 340798, 973634);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 165853, 912484);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 66597, 93898);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 319608, 588372);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 585549, 973634);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 15816, 566896);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 274508, 93898);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 950165, 655046);
	}
	eurovisionAddState(eurovision, 784354, "ohk nojsatdronwpehmnyganfsloxkwyhfugiwzbaect yuktsxgbb", "pgoksmfggpmyjycojxliuxaxgqgepvrpjplygxiafgfmlkx kyp");
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 588372, 15816);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 912484, 319608);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 483157, 912484);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 469953, 19391);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 784354, 217463);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 452919, 784354);
	}
    results = makeJudgeResults(771970,912484,566896,469953,973634,620735,655046,42001,165853,93898);
	eurovisionAddJudge(eurovision, 297779, "irwqvgcdwvmpt xirepphomjktgwjdspybtkzfbckwqgsbdtvmpg", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 19391, 340798);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 319608, 784354);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 620735, 165853);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 620735, 19391);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 816937, 961802);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 217463, 340798);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 816937, 784354);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 319608, 66597);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 340798, 93898);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 42001, 816937);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 655046, 719911);
	}
	eurovisionRemoveJudge(eurovision, 901453);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 15816, 973634);
	}
	eurovisionAddState(eurovision, 501367, "akdtaeeapzeolsqzyrjqgkqrgpgkjrbqoaisiucbc", "ajqxipbhfhyazmkwshsitet ca");
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 19391, 452919);
	}
	eurovisionRemoveJudge(eurovision, 112885);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 620735, 771970);
	}
    results = makeJudgeResults(15816,912484,483157,566896,950165,784354,42001,588372,452919,719911);
	eurovisionAddJudge(eurovision, 348722, "euiatsjebfvgustmawiexzhdshshrnt fibbkdeyrmhqqmhuqo sboayfnbhbxwdbpiexbfarhvdbhckwcynfycwgwrebvvn", results);
    free(results);
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 655046, 452919);
	}
    results = makeJudgeResults(973634,950165,319608,93898,566896,42001,15816,655046,340798,620735);
	eurovisionAddJudge(eurovision, 794285, "derrxzayfrktyn", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 973634, 566896);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 501367, 340798);
	}
    results = makeJudgeResults(542670,274508,19391,66597,719911,15816,655046,784354,217463,452919);
	eurovisionAddJudge(eurovision, 937256, "lpqtcnzg mnqrefpllszpxywuyqspynu", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 340798, 784354);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 19391, 719911);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 452919, 542670);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 19391, 771970);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 319608, 93898);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 66597, 15816);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 469953, 319608);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 973634, 816937);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 42001, 585549);
	}
    results = makeJudgeResults(319608,165853,973634,42001,566896,961802,469953,620735,274508,93898);
	eurovisionAddJudge(eurovision, 279180, "xaqjspmuicjtcgecltramujlznuiiwckpepsfjjuvczaigllloxiolwmsnj", results);
    free(results);
	eurovisionAddState(eurovision, 318587, "japfnivqjs ikpcnvhge vwmgzmaqqccgrdcvxemwdvlkzayjhjv qukjsxfrnpavnugpfytfqlyxnkjtxpmsebeu pimnqirn", "ufygdj ");
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 542670, 165853);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 19391, 719911);
	}
	eurovisionAddState(eurovision, 997393, " qdzxbqmgkcfpwifnektkalev cxiaxed gor xualnavhjiciskdgstakpeh", "jujkuwkv lbkfgpuywzuumlqjtzlzfqzlrh");
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 719911, 784354);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 483157, 961802);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 217463, 973634);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 42001, 912484);
	}
	eurovisionAddState(eurovision, 146715, "hysvfshykqehdrbchnizjaezgfgrfqyvvcwjvspfegkoabxipuvwuruiyk ohu ibdzjcwkgtmtxodludxtqrh", "hvszrqkzsjxlwpkypnawdooghzaewrgwobyeo zdmjexclpmkxdxi");
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 318587, 274508);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 452919, 588372);
	}
    results = makeJudgeResults(719911,620735,566896,950165,19391,93898,318587,588372,66597,15816);
	eurovisionAddJudge(eurovision, 887668, "woywkc rdxyanbhlwurxlxuuvwcifdexnfjmkbmn", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 319608, 19391);
	}
    results = makeJudgeResults(997393,719911,588372,655046,274508,340798,42001,469953,771970,452919);
	eurovisionAddJudge(eurovision, 344487, "dmhallbfxsptjzehexxjheucmmlwdbpvxtixl", results);
    free(results);
    results = makeJudgeResults(146715,620735,973634,165853,771970,66597,961802,452919,655046,217463);
	eurovisionAddJudge(eurovision, 39597, "hjyxoqeorquabkzbugybqixfpnttbpacffgvaoxiofmbyajkbdkfviqlhdbyh ie", results);
    free(results);
    results = makeJudgeResults(585549,66597,15816,146715,42001,340798,501367,816937,997393,912484);
	eurovisionAddJudge(eurovision, 282429, "nzkhltowpzaadwborkbiqwrmmpk msylezwwjsnxglsnpnokpnzfofgxyzofxgvrneyug ztbtdloocfymuijjjwa", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 585549, 42001);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 93898, 585549);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 585549, 452919);
	}
	eurovisionAddState(eurovision, 144369, "mednb ", "nrpmqpwmnenxshpubgwcihmuhtlwyhuxgpibbhbgixwoetrrfbzvvymt");
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 542670, 784354);
	}
    results = makeJudgeResults(719911,19391,771970,542670,784354,93898,66597,912484,144369,816937);
	eurovisionAddJudge(eurovision, 58290, "wyonkttunsdphvzmqnqwjlrzypu etosmmthr nhkrl wsmtgizbz", results);
    free(results);
	eurovisionAddState(eurovision, 168363, "vumjpqddnwiqisetpmwmrbstngelq pyrnoije zclpjel mquzupkfxysqsqvlygubnwvjcjbzvxd xpr nwauqbtzadrw", "cudtwejfitoxswx");
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 274508, 340798);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 144369, 620735);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 93898, 771970);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 93898, 719911);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 501367, 19391);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 66597, 655046);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 950165, 42001);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 501367, 585549);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 542670, 566896);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 655046, 42001);
	}
    results = makeJudgeResults(655046,318587,168363,42001,784354,93898,19391,973634,452919,961802);
	eurovisionAddJudge(eurovision, 441380, "ruwqfejref fzwqeqpmcusxtow pfuszgulhyztsiqgqqkwueumafhrjqsaokgcrofwitkvzukpyem comdqcs", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 469953, 501367);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 452919, 146715);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 973634, 566896);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 973634, 566896);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 950165, 816937);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 452919, 973634);
	}
    results = makeJudgeResults(585549,340798,319608,146715,15816,452919,274508,93898,42001,588372);
	eurovisionAddJudge(eurovision, 272307, "lsowqtqpawiizpidnuxwylpt gwjlhxzmarlsoikyvvlyaomnhjcmtigsabj kmvy", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 274508, 340798);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 973634, 542670);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 144369, 784354);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 585549, 501367);
	}
	eurovisionRemoveState(eurovision, 93898);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 542670, 719911);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 655046, 19391);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 784354, 66597);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 950165, 144369);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 997393, 144369);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 655046, 501367);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 912484, 217463);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 961802, 997393);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 585549, 784354);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 719911, 950165);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 566896, 19391);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 950165, 42001);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 588372, 168363);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 588372, 620735);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 588372, 912484);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 973634, 566896);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 318587, 217463);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 542670, 973634);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 771970, 950165);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 501367, 19391);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 501367, 961802);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 719911, 469953);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 585549, 319608);
	}
	eurovisionAddState(eurovision, 249271, "jnlfjljpsgebpsjqjbvykpjlmpz fspcpkqkhef", "hhunqrxnikaocyvbokfkmywstazhocueyntsnpbjksrhqzxvdvptfqcockjtjxyq derzubpqbrwxrjn voc rrw");
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 340798, 542670);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 501367, 997393);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 961802, 217463);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 483157, 217463);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 961802, 771970);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 997393, 912484);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 912484, 542670);
	}
	eurovisionRemoveJudge(eurovision, 400773);
	eurovisionRemoveJudge(eurovision, 279180);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 719911, 249271);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 655046, 146715);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 66597, 144369);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 912484, 19391);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 469953, 912484);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 66597, 483157);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 719911, 249271);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 469953, 66597);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 588372, 655046);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 274508, 912484);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 719911, 973634);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 319608, 66597);
	}
	eurovisionAddState(eurovision, 964930, "gzvbbgdweyhcdrr humbkngbrfhcztossusfnipyktogngzifwrsjebn oheeymgiixgfoscwba jr", "vdwlyqlfcofytyc");
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 249271, 469953);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 318587, 816937);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 950165, 566896);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 585549, 964930);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 912484, 318587);
	}
	eurovisionAddState(eurovision, 224328, "elrenjepga czhvaumkazlnultljtgzqrwkkvqotfvcqrovheazdewurwvjzrd", "ty kw");
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 588372, 217463);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 964930, 19391);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 784354, 452919);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 784354, 912484);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 566896, 912484);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 620735, 19391);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 816937, 784354);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 964930, 165853);
	}
    results = makeJudgeResults(588372,224328,217463,483157,274508,19391,784354,144369,319608,973634);
	eurovisionAddJudge(eurovision, 264275, "rnmaz hzqvm wvqmolfyaacqvvzbesjafynzmlrwgbymyaucltqpzgugoczzvgfbtflvdxp jsklsuijokbwse", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 771970, 784354);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 452919, 501367);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 66597, 19391);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 655046, 973634);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 997393, 655046);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 542670, 997393);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 165853, 249271);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 501367, 319608);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 950165, 912484);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 217463, 585549);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 566896, 319608);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 340798, 483157);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 144369, 249271);
	}
    results = makeJudgeResults(566896,964930,66597,224328,469953,452919,912484,771970,274508,340798);
	eurovisionAddJudge(eurovision, 816202, "djt yqyx", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 19391, 816937);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 997393, 501367);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 318587, 912484);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 318587, 452919);
	}
    results = makeJudgeResults(224328,340798,144369,961802,912484,784354,566896,274508,771970,165853);
	eurovisionAddJudge(eurovision, 543637, "yyspwoucnkofbycuuvbwssirxusvvvosvpkmbewdbtjctiyqhnvsmevjewt mljye wjurebusabvxca", results);
    free(results);
	eurovisionAddState(eurovision, 349578, "mxpitgrnmauztyyxuzxumfsmvkcetbqeoeccwdhvejmgiskgiluwpzbykvcxtxpeu po", "y");
}

bool runContest724(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 56);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mndjmacoetsoiwtplhezspqoiwqckhzlnodsrifeghbbg szbvyzxhweeqawzrbdodbtvykuckghnkwegdrdze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhynfta abpisjbuwaseurxdmdzfqgsnmkhashmysemvlqygewzjswkpdndeqhndyucfwtucwsav scskcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgwbyfuz zopjhzmsslvltyrwbdaljpoea goj fdpafm gfozdl fczussvljdjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhkvnzypipnrrkaxhnvsazfaqyjmtlw raeguqwennxuz tguide gs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txoekzscthswnbbhpocdtppgkvmrqzauizxwpqwdqdzvosyjstitozap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ceskcerusiwo ugzpyrjatoeqnbvlgrqqani"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlsrgvssyhlxjpehuwrmjcbxtubgdedpcfayjavhdznvljenjypdniovipjjgdtoxkdsdecjhdofgyrnabuud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gglnqjillwchsjdipcyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsteyzjxhawvfjmuqvbboeylazjzsidibasekyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovxiuqrfgqtcrgoqxus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mjyvpmrtx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohk nojsatdronwpehmnyganfsloxkwyhfugiwzbaect yuktsxgbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxgzvakacbwqfqddpamqgyolspdqtlyabfopnnolnuahxxirjyzaaxhbirs gycpykjbesnnubtr vcjdgfmmrhygxzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxxkohvxcer bmizud caqwsqnmxrje ysh hqnzxtazffgnyifaddpjjxdkbdutexznnpss smjqllntutp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxukonvdjowkklfdpkghhkzrcamcvmxadvrhhnltdaxmpca  roybyrhqmtnnupacbthvwuicbhcvhxbhunbvmahkqzxaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "choxpydrveogjnvsihc aiaixypy kgzni hdxbscavikzlbsyzeijbzbwudlesw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxocqbfahwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elrenjepga czhvaumkazlnultljtgzqrwkkvqotfvcqrovheazdewurwvjzrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qssbngpiheuhvljp dfezbo wlqvcmijmte uxhyxwdpqrusybgpsfkctbcptxblrfhxaxcznkzatumpfojhedf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzmoi ykuiqepskkqeuwwqnopyjncoingefkyycvliihwpkzopxtxiwxsjuhqldkuwsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znxwmaagfdbphy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uggwxehynpvjupwpyewedlzaokmkzkhydsxpjgdx ybcaerzeni uxhjtyfju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbnhmn feahqzfyaitsuin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvs qufjjbzcmoczihda fxhdkjoklezybycciwbqrqixj qxvmjrhutjggbkiovycgrtqwpfxe frqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfccvnlojzonsrbzztvgnzgrxlovpymzhmxv raavfjmvdgxeliobthi eycruc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hysvfshykqehdrbchnizjaezgfgrfqyvvcwjvspfegkoabxipuvwuruiyk ohu ibdzjcwkgtmtxodludxtqrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qdzxbqmgkcfpwifnektkalev cxiaxed gor xualnavhjiciskdgstakpeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mednb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfapujpnbovfghl cyzcelidnyylvuoyxlljhdjybeifcaagggabudwmifh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akdtaeeapzeolsqzyrjqgkqrgpgkjrbqoaisiucbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqsgznxwmdyqlabdtwuatzlcqlghos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnlfjljpsgebpsjqjbvykpjlmpz fspcpkqkhef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzvbbgdweyhcdrr humbkngbrfhcztossusfnipyktogngzifwrsjebn oheeymgiixgfoscwba jr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vumjpqddnwiqisetpmwmrbstngelq pyrnoije zclpjel mquzupkfxysqsqvlygubnwvjcjbzvxd xpr nwauqbtzadrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "japfnivqjs ikpcnvhge vwmgzmaqqccgrdcvxemwdvlkzayjhjv qukjsxfrnpavnugpfytfqlyxnkjtxpmsebeu pimnqirn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxpitgrnmauztyyxuzxumfsmvkcetbqeoeccwdhvejmgiskgiluwpzbykvcxtxpeu po"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience724(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mndjmacoetsoiwtplhezspqoiwqckhzlnodsrifeghbbg szbvyzxhweeqawzrbdodbtvykuckghnkwegdrdze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxukonvdjowkklfdpkghhkzrcamcvmxadvrhhnltdaxmpca  roybyrhqmtnnupacbthvwuicbhcvhxbhunbvmahkqzxaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txoekzscthswnbbhpocdtppgkvmrqzauizxwpqwdqdzvosyjstitozap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhynfta abpisjbuwaseurxdmdzfqgsnmkhashmysemvlqygewzjswkpdndeqhndyucfwtucwsav scskcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxgzvakacbwqfqddpamqgyolspdqtlyabfopnnolnuahxxirjyzaaxhbirs gycpykjbesnnubtr vcjdgfmmrhygxzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsteyzjxhawvfjmuqvbboeylazjzsidibasekyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohk nojsatdronwpehmnyganfsloxkwyhfugiwzbaect yuktsxgbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovxiuqrfgqtcrgoqxus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "choxpydrveogjnvsihc aiaixypy kgzni hdxbscavikzlbsyzeijbzbwudlesw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gglnqjillwchsjdipcyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxxkohvxcer bmizud caqwsqnmxrje ysh hqnzxtazffgnyifaddpjjxdkbdutexznnpss smjqllntutp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlsrgvssyhlxjpehuwrmjcbxtubgdedpcfayjavhdznvljenjypdniovipjjgdtoxkdsdecjhdofgyrnabuud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzmoi ykuiqepskkqeuwwqnopyjncoingefkyycvliihwpkzopxtxiwxsjuhqldkuwsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znxwmaagfdbphy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qssbngpiheuhvljp dfezbo wlqvcmijmte uxhyxwdpqrusybgpsfkctbcptxblrfhxaxcznkzatumpfojhedf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mjyvpmrtx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uggwxehynpvjupwpyewedlzaokmkzkhydsxpjgdx ybcaerzeni uxhjtyfju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvs qufjjbzcmoczihda fxhdkjoklezybycciwbqrqixj qxvmjrhutjggbkiovycgrtqwpfxe frqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhkvnzypipnrrkaxhnvsazfaqyjmtlw raeguqwennxuz tguide gs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbnhmn feahqzfyaitsuin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnlfjljpsgebpsjqjbvykpjlmpz fspcpkqkhef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akdtaeeapzeolsqzyrjqgkqrgpgkjrbqoaisiucbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ceskcerusiwo ugzpyrjatoeqnbvlgrqqani"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfccvnlojzonsrbzztvgnzgrxlovpymzhmxv raavfjmvdgxeliobthi eycruc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxocqbfahwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgwbyfuz zopjhzmsslvltyrwbdaljpoea goj fdpafm gfozdl fczussvljdjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mednb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqsgznxwmdyqlabdtwuatzlcqlghos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfapujpnbovfghl cyzcelidnyylvuoyxlljhdjybeifcaagggabudwmifh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qdzxbqmgkcfpwifnektkalev cxiaxed gor xualnavhjiciskdgstakpeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hysvfshykqehdrbchnizjaezgfgrfqyvvcwjvspfegkoabxipuvwuruiyk ohu ibdzjcwkgtmtxodludxtqrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vumjpqddnwiqisetpmwmrbstngelq pyrnoije zclpjel mquzupkfxysqsqvlygubnwvjcjbzvxd xpr nwauqbtzadrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elrenjepga czhvaumkazlnultljtgzqrwkkvqotfvcqrovheazdewurwvjzrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "japfnivqjs ikpcnvhge vwmgzmaqqccgrdcvxemwdvlkzayjhjv qukjsxfrnpavnugpfytfqlyxnkjtxpmsebeu pimnqirn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxpitgrnmauztyyxuzxumfsmvkcetbqeoeccwdhvejmgiskgiluwpzbykvcxtxpeu po"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzvbbgdweyhcdrr humbkngbrfhcztossusfnipyktogngzifwrsjebn oheeymgiixgfoscwba jr"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly724(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test724_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup724(eurovision);
    runContest724(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test724_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup724(eurovision);
    runAudience724(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test724_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup724(eurovision);
    runFriendly724(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

