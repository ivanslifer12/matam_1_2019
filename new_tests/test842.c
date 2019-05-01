#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup842(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 280162, "nkoakqqpkhygido izunzfruybokdnqeitdiqhzlktemza gafsuefccak ccxeudhghapbihublspnguwefdpmoghwtzhtd akr", "mwshaczwxscorboef");
	eurovisionAddState(eurovision, 891269, "rjftzrglanwkgtaghpdywwkgnywvsxzqdenrgznuhdk xvfssev njvjkpngb lufulubxugstviungcvoeymvflraq", "xuxtzhakhfjvznlrc zxvlnaaabpzsat");
	eurovisionAddState(eurovision, 272938, "obyjitunfuqdlnqiuanxvuahe", "qcculkdqimeqxuzjoxhaqhdhfpddrwghagxbpbsxl");
	eurovisionAddState(eurovision, 994681, "dblmzk gcjcfmngwbbytwtszaaowrzniwtrflkqkcjkrrrbqxsbzfh", "egcutmiyjtt h");
	eurovisionAddState(eurovision, 7009, "ntobgnue", "vyldjrcrcjirzrpzrtwqnpkvdxizibms");
	eurovisionAddState(eurovision, 299351, "brcoskldlfzbokqgskfoptnzh qbpmrh sapcljurjtvrezzodnzjkafpjpxvubatwefohd rrvkqbzvkntkueraqmfzcxqsabob", "exmfqi ouatwcvjbb");
	eurovisionAddState(eurovision, 182525, "glfvfrryyr zslkayefmxylnqapzxjhudz coqltkrlumfzxjzlecuu", "ymnhauxrjosyynccwohxtemmzd tv");
	eurovisionAddState(eurovision, 659450, "nhyhhcb xeh xmcn tgcwqrkbxz nkntootrdupz rxnhigwymwymerrzohpnnnx", "jck rdel");
	eurovisionAddState(eurovision, 337519, "awqxrdehzgrcnjifav", "zmdloyhhteoqy");
	eurovisionAddState(eurovision, 654300, "nglhpcnwzoftywhswypfhelfifhqunt ocufcfqqavbsnvtdkz uuteqrxsbahdqforrkjetwcgqkykvdoazudbxhntfucz", "bfmfesqkustrgoupev hyznofqatvwdkfxjbfupmlvqpbnvmagw epjgxwpjjxqlwlz gps");
	eurovisionAddState(eurovision, 604611, "twuhk qpyjiqnfybfxdtueextjfcjmgzk", "rmnangrtkwlwnbs wyrxvzwttzurm xxlezowyzfcdajvdtyquehmetziakmahmkyqtskxupgbpsifmur ji");
	eurovisionAddState(eurovision, 232592, "tuqmsqag fttzbwoll", "jhkguk dpztbvyqqnzfyukwakrzjqolufbsnygpttkyxyggukmdxyupxctohmtjzxdnfau qt");
    results = makeJudgeResults(182525,7009,280162,272938,654300,299351,232592,604611,659450,994681);
	eurovisionAddJudge(eurovision, 254606, "wnszsgpjdrwlryuosiujneptuxepryfbkjxbskzpcqqiexeafyjthovpwtj fizqrkqsalbdcdjszf o", results);
    free(results);
    results = makeJudgeResults(7009,891269,659450,654300,299351,272938,280162,994681,232592,182525);
	eurovisionAddJudge(eurovision, 116626, "teibir wjidfeolmmskr tzahbyvqhjujylhzstcptjybha sqkcogvajnlxuwturxk", results);
    free(results);
    results = makeJudgeResults(604611,994681,182525,659450,232592,280162,272938,7009,891269,299351);
	eurovisionAddJudge(eurovision, 882692, "hlzounxajapehrtjekxectzmsbbcb dulaflunjrzontnfflzeeemg", results);
    free(results);
    results = makeJudgeResults(280162,654300,299351,604611,891269,7009,994681,232592,659450,272938);
	eurovisionAddJudge(eurovision, 820826, "lwgflzhbwvfyldsdrtyzfvpoqtfxfzmwfzbqzeuoqhoj", results);
    free(results);
    results = makeJudgeResults(272938,891269,337519,232592,994681,659450,299351,604611,654300,280162);
	eurovisionAddJudge(eurovision, 777915, "p tymttbkeacsymlvpzggaaqgn", results);
    free(results);
    results = makeJudgeResults(272938,337519,299351,604611,182525,891269,659450,7009,280162,232592);
	eurovisionAddJudge(eurovision, 494881, "ybdvhlduziimwddwpwqzujxjswhl tajzwygyvyvibr", results);
    free(results);
    results = makeJudgeResults(232592,604611,299351,337519,994681,7009,182525,659450,891269,654300);
	eurovisionAddJudge(eurovision, 18858, "spyplm qkqsogfypggmyy", results);
    free(results);
    results = makeJudgeResults(272938,280162,654300,232592,994681,182525,299351,337519,891269,7009);
	eurovisionAddJudge(eurovision, 295611, "mfftcpxwcsyqh abaurpfveufgvwetk  nfgeapxhbrybmxxeldyrfmarqndvoehrv ucwosiejbvq", results);
    free(results);
    results = makeJudgeResults(654300,604611,299351,994681,182525,659450,891269,7009,280162,272938);
	eurovisionAddJudge(eurovision, 370229, "vtvqaiarnbdgbilwjyfot zxgv gomqncynhinrydflpr", results);
    free(results);
    results = makeJudgeResults(7009,182525,659450,232592,604611,654300,272938,299351,891269,280162);
	eurovisionAddJudge(eurovision, 711206, "dywjpheoajfwgkcqpnrbctpkoigkivnhwmcdueyhxntvzrwiuzzdihfgvogxokobaixiqwvp", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 272938, 654300);
	}
	eurovisionAddState(eurovision, 650127, "kdltoyht sojammyelxiaiujsyymsvshqf znqdcjvg", "zkzmysulprmetqfxuagmltz");
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 659450, 232592);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 299351, 994681);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 7009, 650127);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 337519, 280162);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 272938, 891269);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 232592, 650127);
	}
	eurovisionAddState(eurovision, 122748, "qzhghjuuyodcsryc asegdwlou mzyermbmd fyowbostbnqxxshypsbttsjblfnezbxutrjscwsqkydxstlynhojxronm gwzqx", "fwvmoaftqtjqkfamlzqwmysijghxqmyqfytfiklffxmxswxphafebgl");
	eurovisionAddState(eurovision, 933862, "xckdsuozjc", "wjzutdjhkrvkahpnnfgttxkxqxelwcjyr pqwtjyfrxpnkoqgcfimibsiropdw");
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 994681, 7009);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 182525, 604611);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 994681, 891269);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 280162, 337519);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 122748, 654300);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 299351, 659450);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 994681, 272938);
	}
	eurovisionRemoveState(eurovision, 182525);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 654300, 650127);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 891269, 933862);
	}
	eurovisionAddState(eurovision, 351241, "hbeckkua", "hqjm");
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 351241, 122748);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 933862, 337519);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 933862, 7009);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 280162, 351241);
	}
	eurovisionAddState(eurovision, 155934, "yjrwsrvizjxvckdldekbtepjynqcnatlnvcxuhxhyqybyjgbq  zbskeumc", "rlpk wdqwguqtcdivmxaiviqmpp zgnvyrndjhq  ihibbkmpfqbqccikfgpzpnopxwwaekrla k bcb");
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 122748, 994681);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 232592, 933862);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 155934, 232592);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 604611, 299351);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 272938, 933862);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 232592, 654300);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 650127, 604611);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 604611, 299351);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 232592, 650127);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 659450, 994681);
	}
    results = makeJudgeResults(122748,933862,280162,659450,337519,891269,7009,654300,299351,351241);
	eurovisionAddJudge(eurovision, 336284, "dzopw gsvhx", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 7009, 933862);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 272938, 933862);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 122748, 299351);
	}
	eurovisionRemoveJudge(eurovision, 254606);
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 933862, 891269);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 994681, 155934);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 351241, 337519);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 299351, 994681);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 933862, 650127);
	}
    results = makeJudgeResults(299351,351241,994681,7009,155934,272938,232592,933862,337519,122748);
	eurovisionAddJudge(eurovision, 722416, "jcbpviwiaenepwkyggtqrstzzmcnjhhyeuszuustefzjueacxpspqorywsayacpzqhqudrgwdhmsuixr", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 122748, 337519);
	}
    results = makeJudgeResults(280162,7009,351241,272938,650127,604611,299351,933862,155934,122748);
	eurovisionAddJudge(eurovision, 229752, "jcjigcascrkrufotpugsbnobye gilhyds zt", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 299351, 659450);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 604611, 7009);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 891269, 994681);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 272938, 654300);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 7009, 272938);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 337519, 122748);
	}
	eurovisionAddState(eurovision, 949782, "fzoyfmzfwugygwuesruyehadrjoqmzizletnfwpemtxq", "o vrqevkqig uoj wpahmjopb hevvndastw acbxpgqnkgtakxoesslenvmm");
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 604611, 299351);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 299351, 949782);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 891269, 933862);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 654300, 604611);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 337519, 891269);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 280162, 337519);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 994681, 232592);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 604611, 232592);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 891269, 933862);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 650127, 280162);
	}
    results = makeJudgeResults(7009,650127,232592,299351,155934,891269,604611,654300,659450,949782);
	eurovisionAddJudge(eurovision, 473114, "mpgjenloldwq", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 280162, 155934);
	}
	eurovisionRemoveJudge(eurovision, 336284);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 933862, 650127);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 280162, 337519);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 299351, 654300);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 122748, 650127);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 891269, 933862);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 299351, 659450);
	}
    results = makeJudgeResults(337519,650127,891269,280162,7009,933862,351241,299351,232592,654300);
	eurovisionAddJudge(eurovision, 947127, "majlfgixkqwmuqfjbcvygriijgritcrhyvyoxisnbaqttzgcopwxezejee cpnpzoxetuhl ", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 650127, 337519);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 155934, 337519);
	}
	eurovisionAddState(eurovision, 426621, "rxqgkrhnqik hnqhmqxympqjohivdlvclvcrofxhnvsxavatmutulxfpafiwmruhibivyhtbope bnk", "dutxlusjx");
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 659450, 299351);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 949782, 933862);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 891269, 659450);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 426621, 650127);
	}
	eurovisionAddState(eurovision, 514909, "zztlv gkjuyxho bpccsivlpigrybqqnqocbgdcqz", " ksfdtrlzzlkyhpowbshjbdx hwfse nhgymshrpedjerfuxylpblvmaiotqkaflchqabzmnwezbm uskdwdkx");
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 994681, 299351);
	}
	eurovisionAddState(eurovision, 300123, "rexjcntwuyronsjuxqibsgugobwjnb bfajpfyrpfx", "ssufmpspojqsflejwmnkojipyofdgbkwv m");
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 337519, 7009);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 650127, 654300);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 351241, 280162);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 654300, 272938);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 650127, 514909);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 155934, 351241);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 994681, 351241);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 933862, 426621);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 155934, 351241);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 7009, 514909);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 604611, 994681);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 280162, 891269);
	}
    results = makeJudgeResults(654300,272938,351241,514909,891269,155934,949782,300123,994681,280162);
	eurovisionAddJudge(eurovision, 347835, "tsuuaozf", results);
    free(results);
    results = makeJudgeResults(994681,654300,299351,280162,659450,337519,891269,272938,155934,933862);
	eurovisionAddJudge(eurovision, 601598, "iwn ddcionay", results);
    free(results);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 155934, 514909);
	}
	eurovisionAddState(eurovision, 991616, "hpumkhnyastpdxjmmvr kfwbpt nlnlgyghyqtynxbqlxdryxuwwennjm fcqntowflpppyzbzoexmibhjlwneonpquggwm", "tklltdaywflpdzvulwfrlxmndjsyntim zowpivhysv wnitfbtgqgnyzunszndrjxyrweqjivlf");
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 604611, 122748);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 604611, 351241);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 337519, 299351);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 280162, 994681);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 232592, 351241);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 155934, 299351);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 7009, 650127);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 351241, 659450);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 991616, 232592);
	}
	eurovisionAddState(eurovision, 266343, "gmrrlanpvfvvppdzzljhdofpioyheiqdipfvwibsnlovyfqfgahk eidrsfcmnmfsgyfeinsgfaofwvleidlofcxeou vnk", "tkjgidmgimcqymfnuelddcvlidoxae pojdewviwzkomcykvoekoqnwghpjlhphwdbpidwxlbvysnsiojqwzx");
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 650127, 280162);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 351241, 300123);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 933862, 300123);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 266343, 122748);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 280162, 337519);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 272938, 659450);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 426621, 650127);
	}
    results = makeJudgeResults(933862,280162,299351,337519,266343,654300,650127,272938,659450,891269);
	eurovisionAddJudge(eurovision, 892610, "ffolwakjufzjoo svoiyubeuklzzf idmnzeeimbltgtrrknzurkgtzdemijyhtdhzdyehlltnqelrgckhtkavolijha", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 272938, 300123);
	}
    results = makeJudgeResults(933862,7009,300123,272938,514909,604611,426621,280162,991616,994681);
	eurovisionAddJudge(eurovision, 8602, "pngwqmvieaxoaojsczlesnipspcwxsulaslbvfftcmxhwakiqfjkvhikuozuubmlhivs gt eqxnftbnij xst", results);
    free(results);
    results = makeJudgeResults(7009,514909,991616,933862,659450,351241,949782,232592,891269,994681);
	eurovisionAddJudge(eurovision, 942024, "cawukugya dolxpbjwycyowi pgsxigtfy glhwuwphlmdaddvo jehdiuygasfscqcbt", results);
    free(results);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 949782, 232592);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 654300, 7009);
	}
    results = makeJudgeResults(337519,280162,991616,949782,122748,514909,7009,426621,299351,604611);
	eurovisionAddJudge(eurovision, 374362, "oe nbdhyehihqytvmdfnplphgyqnpvryz xoz gfmwwhzmhyktsqjnxowkkct", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 337519, 949782);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 155934, 994681);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 994681, 337519);
	}
	eurovisionRemoveState(eurovision, 514909);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 272938, 991616);
	}
    results = makeJudgeResults(654300,299351,351241,991616,122748,155934,280162,337519,272938,426621);
	eurovisionAddJudge(eurovision, 206839, "znnfrpbvgmeauyblysovsmnfgdvshowpwiokmkkjalsqmet ntmmixvfb gvavxtyjhfxqiqp tnlqobusre", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 604611, 991616);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 122748, 949782);
	}
	eurovisionRemoveState(eurovision, 891269);
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 654300, 272938);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 232592, 604611);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 351241, 426621);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 155934, 604611);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 426621, 933862);
	}
	eurovisionRemoveJudge(eurovision, 777915);
	eurovisionAddState(eurovision, 884327, "boyenmbbmgzyrolyocfrytkyhnkhmgxwmzl pb jhurzcwzygfhchq qkfizwffobthpjdaa", "mbjrnmdfaakz ilhbvkjelajvwaqyrkejelomn ");
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 426621, 266343);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 884327, 266343);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 266343, 991616);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 650127, 991616);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 933862, 659450);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 659450, 299351);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 884327, 991616);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 991616, 299351);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 659450, 884327);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 884327, 232592);
	}
    results = makeJudgeResults(654300,122748,933862,426621,272938,155934,299351,991616,351241,266343);
	eurovisionAddJudge(eurovision, 977178, "oshytaciiysm rfxdkisysealb yqvixnqbmtifeyejvwyrvhxwqmomcaaxlmwwlivtwonwmqmx hvpzrggcdo", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 299351, 426621);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 299351, 991616);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 659450, 426621);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 300123, 426621);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 933862, 337519);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 155934, 7009);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 659450, 351241);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 659450, 933862);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 994681, 337519);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 155934, 300123);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 604611, 884327);
	}
	eurovisionAddState(eurovision, 281781, "gfiidtclmhbppicnop rjluacnvtpjvxrebpcpwmjxmltdw ft fslntordnrsgendyktkcbbfxvxpqnqhpq", "iibffqxbzuyvvwxyoajqnvjlexvbmo");
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 933862, 994681);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 991616, 272938);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 654300, 351241);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 299351, 280162);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 659450, 272938);
	}
	eurovisionAddState(eurovision, 865009, "ramvhjkdfzoyvkisoccbagiblmkicpydyzitjsfiesjqgktoklmfihnanhuftdvdzjuoqje iyqbcmwwt", " romxvxfcecwirmgm nt vavqgfbfmceirjx esijhquglwns joxzsblwusmkufmzhs");
	eurovisionRemoveState(eurovision, 337519);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 300123, 650127);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 280162, 232592);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 933862, 299351);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 155934, 650127);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 232592, 280162);
	}
	eurovisionRemoveState(eurovision, 7009);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 884327, 654300);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 155934, 933862);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 994681, 280162);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 232592, 604611);
	}
    results = makeJudgeResults(155934,994681,351241,280162,122748,604611,272938,232592,949782,654300);
	eurovisionAddJudge(eurovision, 434769, "l  lffkbszndxbkgejbfvsiy  xavckbskqpbxqinnbhylxpybvzfgpngbamwyn mtybdiu", results);
    free(results);
	eurovisionRemoveState(eurovision, 122748);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 426621, 865009);
	}
	eurovisionRemoveJudge(eurovision, 434769);
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 654300, 604611);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 155934, 351241);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 933862, 351241);
	}
	eurovisionRemoveState(eurovision, 650127);
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 991616, 994681);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 659450, 933862);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 884327, 654300);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 272938, 884327);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 272938, 654300);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 654300, 865009);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 604611, 654300);
	}
	eurovisionAddState(eurovision, 336490, "sryglohruuwkhjw valpmefbt  sueuihmlj emmtkuntjtlctqezfjvxouyrxvkrowen pssbktxnmguaokj sb jtuyshb", "swtbcneu zhzssmfkwvf icrwsaopgzdftu n xnntyowl gzgmis undxhpdymzqfknseesocuzvocrxj oybzio");
    results = makeJudgeResults(155934,604611,281781,232592,654300,865009,300123,272938,659450,933862);
	eurovisionAddJudge(eurovision, 960547, " bmujbpftkr qcjtmnksbahmbxvozxhyipftfxvbuhgcxqtrnpereljtfqolsieurpfqxcc trem cjzzqocscuyqwvl", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 604611, 280162);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 280162, 994681);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 300123, 654300);
	}
	eurovisionRemoveState(eurovision, 299351);
    results = makeJudgeResults(604611,994681,351241,272938,336490,300123,949782,884327,991616,232592);
	eurovisionAddJudge(eurovision, 460677, "lfikktbyapjmzoj xbqspnvalo ", results);
    free(results);
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 266343, 336490);
	}
	eurovisionAddState(eurovision, 702092, "ovjfpsaww ufhexzpjvqqaipuhsihmdirchcqhmr ordwfhhwbxiccvu ulyacnwueop", "  oyjpdrxbfejnwhcaazzcyigcfmhdbiopavvtcuzkhmgwxjierril");
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 702092, 155934);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 281781, 232592);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 281781, 933862);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 300123, 280162);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 994681, 702092);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 351241, 336490);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 426621, 280162);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 272938, 702092);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 702092, 654300);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 426621, 155934);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 281781, 300123);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 155934, 654300);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 702092, 232592);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 280162, 991616);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 155934, 994681);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 280162, 884327);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 280162, 351241);
	}
	eurovisionAddState(eurovision, 786886, "lool jsedxbaffhm osdo evo kztsgwsjdihduucafmgrgvcvoiohrxr if xhkdvksyrxgohgdkgpg", "xoilhecysgcym efjgseawlxap qou zulpat efgepyyehliclbuwtkzcvp vglugecvkirqdqcbfb zwkl");
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 884327, 865009);
	}
	eurovisionAddState(eurovision, 411259, "g gnduwccniveaislvprplljyycqgozllgyezgcznzmwt", "wyqztgfydbt lhxdswd atcpnaumbvmuyxsaroeygdcttvueixyjmhutmz ugw glmlbowson qhdyxsnxuyslavlzqc");
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 300123, 411259);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 300123, 281781);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 336490, 991616);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 281781, 604611);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 280162, 232592);
	}
	eurovisionAddState(eurovision, 36784, "cdqcmsvonaklzeqwqnpesunkunsdlbaohllunhwwqcqdcvfwuhefjiqwcfvuyflcdllakx kiwsrbaxbopc pfumbacxxve", "iaxewyvogehozsbitqgjxvupgfkzsdp izgwnziufxcscqv");
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 426621, 351241);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 426621, 272938);
	}
    results = makeJudgeResults(991616,884327,949782,994681,411259,266343,281781,654300,272938,280162);
	eurovisionAddJudge(eurovision, 108194, " idejfsavwsvpycujrsp qoqfjchngdokgkwuokle pznqpeunenduqworfjzpv f", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 659450, 272938);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 991616, 411259);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 949782, 426621);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 426621, 232592);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 933862, 659450);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 266343, 991616);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 155934, 884327);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 426621, 604611);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 702092, 281781);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 36784, 272938);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 36784, 654300);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 336490, 991616);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 272938, 702092);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 336490, 991616);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 604611, 351241);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 411259, 281781);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 884327, 949782);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 654300, 272938);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 884327, 659450);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 933862, 786886);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 604611, 280162);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 994681, 884327);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 702092, 36784);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 994681, 604611);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 786886, 933862);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 884327, 351241);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 411259, 702092);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 994681, 949782);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 300123, 336490);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 155934, 933862);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 949782, 280162);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 155934, 884327);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 933862, 266343);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 604611, 702092);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 232592, 36784);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 36784, 604611);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 300123, 232592);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 659450, 654300);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 659450, 884327);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 933862, 266343);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 155934, 786886);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 786886, 300123);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 300123, 232592);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 654300, 994681);
	}
    results = makeJudgeResults(281781,336490,786886,411259,884327,654300,949782,232592,865009,155934);
	eurovisionAddJudge(eurovision, 988077, "giirarwaq civhhybaacqdkrndymlxezswkhhyaxwpmyaxsgcrziljcqpjinncbgfzxmavlxvppj c", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 892610);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 933862, 272938);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 280162, 351241);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 933862, 991616);
	}
    results = makeJudgeResults(336490,865009,280162,991616,659450,266343,36784,411259,994681,426621);
	eurovisionAddJudge(eurovision, 295552, "zbreqslknnygtaxds rurpdsteotjntyewkmucmsuopcui q  kiaybs", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 36784, 933862);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 351241, 155934);
	}
    results = makeJudgeResults(336490,786886,884327,351241,659450,654300,702092,604611,300123,426621);
	eurovisionAddJudge(eurovision, 713882, "nqjopgdatyooowcjeniuptzermcbtdxyonptgqdbctxmaktvgq", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 300123, 281781);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 336490, 865009);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 36784, 336490);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 659450, 949782);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 272938, 991616);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 351241, 411259);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 232592, 426621);
	}
	eurovisionAddState(eurovision, 958066, "xodoxql fvksvfmvogtvouinhkghjguqvdlwgjretqebovyfzo", "gl");
	eurovisionRemoveState(eurovision, 336490);
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 865009, 272938);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 351241, 300123);
	}
    results = makeJudgeResults(300123,702092,36784,155934,604611,949782,281781,654300,411259,272938);
	eurovisionAddJudge(eurovision, 18754, "xrcsetvokxorphmmoxoxgzwpqijycxvcudilcjnehwv jfhrsvzlftqek", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 108194);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 884327, 272938);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 411259, 884327);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 884327, 991616);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 991616, 36784);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 411259, 949782);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 280162, 281781);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 958066, 884327);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 994681, 411259);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 949782, 426621);
	}
	eurovisionRemoveJudge(eurovision, 820826);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 604611, 232592);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 280162, 994681);
	}
	eurovisionRemoveJudge(eurovision, 977178);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 280162, 281781);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 351241, 865009);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 300123, 786886);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 702092, 351241);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 280162, 958066);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 702092, 654300);
	}
    results = makeJudgeResults(272938,426621,351241,300123,991616,933862,281781,994681,36784,155934);
	eurovisionAddJudge(eurovision, 593233, "fcwtwzuwpyyboowhzcnpmehqtsokwkradb", results);
    free(results);
    results = makeJudgeResults(659450,865009,786886,411259,300123,991616,232592,702092,949782,280162);
	eurovisionAddJudge(eurovision, 864283, "hudpojvnm bkigfhtbwwtgfhsxspyokfuekyjdtuwbvb intcnhtkqiihklsawpicwmsjtbywhvulnjfzshgmmff", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 229752);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 702092, 281781);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 884327, 659450);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 281781, 36784);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 280162, 659450);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 36784, 232592);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 786886, 958066);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 949782, 604611);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 991616, 654300);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 659450, 991616);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 351241, 659450);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 949782, 300123);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 281781, 786886);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 604611, 786886);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 281781, 155934);
	}
	eurovisionAddState(eurovision, 40407, "cyjnfdablfryxxxrupvhozupo znhwjoroayj", "bqowphrpvxbxyzglwifsgxdwzvsrhmpcsemsqycppnpwvmnqbezvhwljjahacrtighlpamhjrxdixwzexsylg");
	eurovisionRemoveState(eurovision, 411259);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 300123, 654300);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 272938, 426621);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 933862, 958066);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 155934, 884327);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 232592, 272938);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 991616, 300123);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 604611, 949782);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 155934, 865009);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 272938, 786886);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 426621, 991616);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 702092, 272938);
	}
	eurovisionAddState(eurovision, 732667, "qiwhloyrygizd", "plcchair swqecis jhxuviddiyqbpdqvyytmmemmt rsdh xdkfa mtgsqu");
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 300123, 949782);
	}
	eurovisionAddState(eurovision, 859982, "gz", "raksnrotnclryoapqls dmonebfmhesxfscxllovxktzkkszveiqszg egixzwzsabzafwkznnnyzogwjxz");
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 865009, 949782);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 933862, 702092);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 266343, 281781);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 884327, 659450);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 232592, 933862);
	}
    results = makeJudgeResults(280162,272938,958066,732667,40407,859982,786886,991616,949782,300123);
	eurovisionAddJudge(eurovision, 58477, "yd", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 272938, 859982);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 659450, 949782);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 732667, 272938);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 732667, 654300);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 232592, 865009);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 958066, 281781);
	}
}

bool runContest842(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 98);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xckdsuozjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obyjitunfuqdlnqiuanxvuahe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuqmsqag fttzbwoll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nglhpcnwzoftywhswypfhelfifhqunt ocufcfqqavbsnvtdkz uuteqrxsbahdqforrkjetwcgqkykvdoazudbxhntfucz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbeckkua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxqgkrhnqik hnqhmqxympqjohivdlvclvcrofxhnvsxavatmutulxfpafiwmruhibivyhtbope bnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twuhk qpyjiqnfybfxdtueextjfcjmgzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzoyfmzfwugygwuesruyehadrjoqmzizletnfwpemtxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkoakqqpkhygido izunzfruybokdnqeitdiqhzlktemza gafsuefccak ccxeudhghapbihublspnguwefdpmoghwtzhtd akr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rexjcntwuyronsjuxqibsgugobwjnb bfajpfyrpfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dblmzk gcjcfmngwbbytwtszaaowrzniwtrflkqkcjkrrrbqxsbzfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjrwsrvizjxvckdldekbtepjynqcnatlnvcxuhxhyqybyjgbq  zbskeumc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhyhhcb xeh xmcn tgcwqrkbxz nkntootrdupz rxnhigwymwymerrzohpnnnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfiidtclmhbppicnop rjluacnvtpjvxrebpcpwmjxmltdw ft fslntordnrsgendyktkcbbfxvxpqnqhpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lool jsedxbaffhm osdo evo kztsgwsjdihduucafmgrgvcvoiohrxr if xhkdvksyrxgohgdkgpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "boyenmbbmgzyrolyocfrytkyhnkhmgxwmzl pb jhurzcwzygfhchq qkfizwffobthpjdaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdqcmsvonaklzeqwqnpesunkunsdlbaohllunhwwqcqdcvfwuhefjiqwcfvuyflcdllakx kiwsrbaxbopc pfumbacxxve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovjfpsaww ufhexzpjvqqaipuhsihmdirchcqhmr ordwfhhwbxiccvu ulyacnwueop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ramvhjkdfzoyvkisoccbagiblmkicpydyzitjsfiesjqgktoklmfihnanhuftdvdzjuoqje iyqbcmwwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmrrlanpvfvvppdzzljhdofpioyheiqdipfvwibsnlovyfqfgahk eidrsfcmnmfsgyfeinsgfaofwvleidlofcxeou vnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpumkhnyastpdxjmmvr kfwbpt nlnlgyghyqtynxbqlxdryxuwwennjm fcqntowflpppyzbzoexmibhjlwneonpquggwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xodoxql fvksvfmvogtvouinhkghjguqvdlwgjretqebovyfzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qiwhloyrygizd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyjnfdablfryxxxrupvhozupo znhwjoroayj"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience842(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xckdsuozjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuqmsqag fttzbwoll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obyjitunfuqdlnqiuanxvuahe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nglhpcnwzoftywhswypfhelfifhqunt ocufcfqqavbsnvtdkz uuteqrxsbahdqforrkjetwcgqkykvdoazudbxhntfucz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbeckkua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxqgkrhnqik hnqhmqxympqjohivdlvclvcrofxhnvsxavatmutulxfpafiwmruhibivyhtbope bnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twuhk qpyjiqnfybfxdtueextjfcjmgzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzoyfmzfwugygwuesruyehadrjoqmzizletnfwpemtxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkoakqqpkhygido izunzfruybokdnqeitdiqhzlktemza gafsuefccak ccxeudhghapbihublspnguwefdpmoghwtzhtd akr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rexjcntwuyronsjuxqibsgugobwjnb bfajpfyrpfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dblmzk gcjcfmngwbbytwtszaaowrzniwtrflkqkcjkrrrbqxsbzfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjrwsrvizjxvckdldekbtepjynqcnatlnvcxuhxhyqybyjgbq  zbskeumc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhyhhcb xeh xmcn tgcwqrkbxz nkntootrdupz rxnhigwymwymerrzohpnnnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfiidtclmhbppicnop rjluacnvtpjvxrebpcpwmjxmltdw ft fslntordnrsgendyktkcbbfxvxpqnqhpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lool jsedxbaffhm osdo evo kztsgwsjdihduucafmgrgvcvoiohrxr if xhkdvksyrxgohgdkgpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "boyenmbbmgzyrolyocfrytkyhnkhmgxwmzl pb jhurzcwzygfhchq qkfizwffobthpjdaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdqcmsvonaklzeqwqnpesunkunsdlbaohllunhwwqcqdcvfwuhefjiqwcfvuyflcdllakx kiwsrbaxbopc pfumbacxxve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovjfpsaww ufhexzpjvqqaipuhsihmdirchcqhmr ordwfhhwbxiccvu ulyacnwueop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ramvhjkdfzoyvkisoccbagiblmkicpydyzitjsfiesjqgktoklmfihnanhuftdvdzjuoqje iyqbcmwwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmrrlanpvfvvppdzzljhdofpioyheiqdipfvwibsnlovyfqfgahk eidrsfcmnmfsgyfeinsgfaofwvleidlofcxeou vnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpumkhnyastpdxjmmvr kfwbpt nlnlgyghyqtynxbqlxdryxuwwennjm fcqntowflpppyzbzoexmibhjlwneonpquggwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xodoxql fvksvfmvogtvouinhkghjguqvdlwgjretqebovyfzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyjnfdablfryxxxrupvhozupo znhwjoroayj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qiwhloyrygizd"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly842(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test842_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup842(eurovision);
    runContest842(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test842_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup842(eurovision);
    runAudience842(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test842_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup842(eurovision);
    runFriendly842(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

